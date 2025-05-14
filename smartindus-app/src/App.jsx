import { useEffect, useState, useRef } from 'react';
import './App.css';
import emailjs from '@emailjs/browser';

function App() {
  const [current, setCurrent] = useState(null);
  const [isConnected, setIsConnected] = useState(false);
  const [isThresholdExceeded, setIsThresholdExceeded] = useState(false);
  const [emailSent, setEmailSent] = useState(false);
  const emailSentTimeout = useRef(null);

  // Configuration
  const THRESHOLD = 1800; // Seuil en milliampères
  const EMAIL_COOLDOWN = 300000; // 5 minutes en millisecondes

  // Paramètres EmailJS
  const EMAIL_SERVICE_ID = "mayssa_ouma"; // Service ID configuré dans EmailJS
  const EMAIL_TEMPLATE_ID = "template_sycm3zy"; // Template ID pour l'email d'alerte
  const EMAIL_USER_ID = "LatXZ3KuFlxU90bu4"; // Public key ou User ID

const sendAlertEmail = () => {
  if (emailSent) return;

  const templateParams = {
    email: "mayssa.jarray@isimg.tn", // Correspond à {{email}}
    Etat_machine: "ALERTE SMARTINDUS - SEUIL DE COURANT DÉPASSÉ", // Correspond à {{Etat_machine}}
    SmartIndus: "SmartIndus", // Correspond à {{SmartIndus}}
    time: new Date().toLocaleString(), // Correspond à {{time}}
    current_value: current?.toFixed(2), // Ajoutez cette clé si nécessaire
    threshold: THRESHOLD, // Ajoutez cette clé si nécessaire
    device_location: "Capteur Hall Current - Unité de production", // Ajoutez cette clé si nécessaire
  };

  emailjs.send(EMAIL_SERVICE_ID, EMAIL_TEMPLATE_ID, templateParams, EMAIL_USER_ID)
    .then((response) => {
      console.log('✅ Email envoyé avec succès !', response.status, response.text);
      setEmailSent(true);

      // Réinitialiser après cooldown
      if (emailSentTimeout.current) clearTimeout(emailSentTimeout.current);
      emailSentTimeout.current = setTimeout(() => {
        setEmailSent(false);
      }, EMAIL_COOLDOWN);
    })
    .catch((err) => {
      console.error('❌ Échec de l\'envoi de l\'email :', err);
    });
};
  const fetchCurrent = async () => {
    try {
      const res = await fetch('http://192.168.1.161/json');
      const data = await res.json();
      setCurrent(data.current);
      setIsConnected(true);

      const isExceeded = data.current > THRESHOLD;
      setIsThresholdExceeded(isExceeded);

      if (isExceeded && !emailSent) {
        sendAlertEmail();
      }
    } catch (err) {
      console.error("Erreur lors de la récupération des données :", err);
      setIsConnected(false);
    }
  };

  useEffect(() => {
    fetchCurrent();
    const interval = setInterval(fetchCurrent, 2000); // Mise à jour toutes les 2 secondes

    return () => {
      clearInterval(interval);
      if (emailSentTimeout.current) clearTimeout(emailSentTimeout.current);
    };
  }, []);

  const currentValueClass = isThresholdExceeded ? "current-value alert" : "current-value";

  return (
    <div className="app-container">
      <div className="header">
        <div className="logo">Smart<span>Indus</span></div>
        <div className="tagline">Surveillance intelligente des systèmes industriels</div>
      </div>

      <div className="measurement-card">
        <div className="card-title">MESURE DE COURANT</div>
        <div className={currentValueClass}>
          {current ? `${current.toFixed(2)} mA` : <span className="loading">Chargement...</span>}
        </div>

        {isThresholdExceeded && (
          <div className="alert-message">
            <i className="alert-icon">⚠️</i>
            <span>Seuil de {THRESHOLD} mA dépassé !</span>
            {emailSent && <div className="email-status">📧 Alerte envoyée</div>}
          </div>
        )}

        <div className="threshold-info">
          Seuil d'alerte: {THRESHOLD} mA
        </div>

        <div className="status-indicator">
          <div className={`indicator-dot ${isConnected ? "" : "disconnected"}`}></div>
          <div className="status-text">
            {isConnected ? 'Connecté - Données en temps réel' : 'Tentative de connexion...'}
          </div>
        </div>
      </div>
    </div>
  );
}

export default App;
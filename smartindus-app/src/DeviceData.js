import React, { useState, useEffect } from 'react';

function DeviceData() {
  const [deviceData, setDeviceData] = useState({
    pressure: '0',
    current: '0',
    loading: true,
    error: null
  });

  // Remplacez par l'adresse IP de votre appareil
  const deviceIP = '192.168.0.126'; 

  useEffect(() => {
    const fetchData = async () => {
      try {
        const response = await fetch(`http://${deviceIP}`);
        const text = await response.text();
        
        // Extraction des valeurs de la réponse HTML
        const pressureMatch = text.match(/Pressure: (\d+) hPa/);
        const currentMatch = text.match(/Current: (\d+) mA/);
        
        setDeviceData({
          pressure: pressureMatch ? pressureMatch[1] : 'N/A',
          current: currentMatch ? currentMatch[1] : 'N/A',
          loading: false,
          error: null
        });
      } catch (err) {
        setDeviceData({
          pressure: '0',
          current: '0',
          loading: false,
          error: err.message
        });
      }
    };

    fetchData();
    const interval = setInterval(fetchData, 5000); // Rafraîchissement toutes les 5 secondes

    return () => clearInterval(interval);
  }, [deviceIP]);

  if (deviceData.loading) return <div>Loading...</div>;
  if (deviceData.error) return <div>Error: {deviceData.error}</div>;

  return (
    <div style={{ padding: '20px', fontFamily: 'Arial' }}>
      <h2>Device Monitoring</h2>
      <div style={{ margin: '20px 0' }}>
        <p><strong>Pressure:</strong> {deviceData.pressure} hPa</p>
        <p><strong>Current:</strong> {deviceData.current} mA</p>
      </div>
    </div>
  );
}

export default DeviceData;
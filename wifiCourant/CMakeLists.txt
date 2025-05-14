cmake_minimum_required(VERSION 3.19)

if (${TOOLCHAIN_LANGUAGE} MATCHES "MikroC")
    project(wifiCourant LANGUAGES MikroC)
else()
    project(wifiCourant LANGUAGES C ASM)
endif()

include(mikroeUtils)

if (${MIKROSDK_TYPE} STREQUAL "legacy")
    legacy_cmake_path()
endif()

set(PROJECT_TYPE "mikrosdk" CACHE STRING "" FORCE)

add_executable(wifiCourant main.c)

############################ wifiCourant GENERATED CODE START ###########################
add_subdirectory(lib_wifiesp)
target_link_libraries(wifiCourant PUBLIC Click.WifiEsp)
add_subdirectory(lib_hallcurrent5)
target_link_libraries(wifiCourant PUBLIC Click.HallCurrent5)
find_package(MikroSDK.Log REQUIRED)
target_link_libraries(wifiCourant PUBLIC MikroSDK.Log)
find_package(MikroSDK.Conversions REQUIRED)
target_link_libraries(wifiCourant PUBLIC MikroSDK.Conversions)
find_package(MikroSDK.Board REQUIRED)
target_link_libraries(wifiCourant PUBLIC MikroSDK.Board)
find_package(MikroC.Core REQUIRED)
target_link_libraries(wifiCourant PUBLIC MikroC.Core)
############################ wifiCourant GENERATED CODE END ###########################
find_package(MikroC.Core REQUIRED)
target_link_libraries(wifiCourant
    PUBLIC
        MikroC.Core
)

if (${MIKROSDK_TYPE} STREQUAL "legacy")
    find_package(MikroC.System REQUIRED)
    target_link_libraries(wifiCourant
        PUBLIC
            MikroC.System
    )
endif()

if(COMPILER_REVISION)
    if(${COMPILER_REVISION} VERSION_GREATER_EQUAL "1.0")
        if(${TOOLCHAIN_LANGUAGE} STREQUAL "GNU")
            if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/.meproject)
                fetch_startup_name(${CMAKE_CURRENT_SOURCE_DIR}/.meproject startupName)
                if(startupName)
                    add_startup_all_targets(. ${CMAKE_CURRENT_SOURCE_DIR} ${startupName})
                endif()
                fetch_linker_name(${CMAKE_CURRENT_SOURCE_DIR}/.meproject linkerName)
                if(linkerName)
                    add_ld_all_targets(. ${CMAKE_CURRENT_SOURCE_DIR} ${linkerName})
                endif()
            endif()
        endif()
    endif()
endif()

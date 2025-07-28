#pragma once

// Include the correct hardware board profile (e.g. Seeed XIAO ESP32C6)
#include "./profiles/xiaoesp32c6.board-profile.h"

// Include the WaterRower-specific rowing profile
#include "./profiles/waterrower.rower-profile.h"

// Shared enums for logging and BLE configuration
#include "./utils/enums.h"

// NOLINTBEGIN(cppcoreguidelines-macro-usage)

// Optional: Set logging level (LogLevelTrace, LogLevelDebug, etc.)
#define DEFAULT_CPS_LOGGING_LEVEL ArduinoLogLevel::LogLevelInfo

// Optional: Define which BLE service to use
#define DEFAULT_BLE_SERVICE BleServiceFlag::CpsService

// Optional: Override device name for BLE advertising
// #define BLE_DEVICE_NAME "OpenRowing-WaterRower"

// Optional: Enable or disable optional features
// #define ENABLE_CUSTOM_POWER_CALCULATION
// #define ENABLE_STROKE_COUNT_LOGGING

// NOLINTEND(cppcoreguidelines-macro-usage)

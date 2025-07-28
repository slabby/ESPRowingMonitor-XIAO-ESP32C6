#pragma once

// Number of sensor impulses per revolution
#define ROWER_NUM_IMPULSES_PER_REV 4

// Drag and inertia values for WaterRower
#define ROWER_DRAG_FACTOR 3200
#define ROWER_FLYWHEEL_INERTIA 0.7f
#define ROWER_SPROCKET_RADIUS 10.0f
#define ROWER_FLANK_LENGTH 12

// Time limits for stroke signal filtering (in seconds)
#define ROWER_MIN_TIME_BETWEEN_IMPULSES 0.005f
#define ROWER_MAX_TIME_BETWEEN_IMPULSES 0.15f

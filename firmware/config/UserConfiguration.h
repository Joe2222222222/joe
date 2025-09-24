#pragma once

#include <Arduino.h>

namespace UserConfiguration
{
    // Location configuration
    static const double CENTER_LAT = 41.16773080154888; // Park (example)
    static const double CENTER_LON = -81.40969800068072;
    static const double RADIUS_KM = 1.3; // Search radius in km

    // Display customization
    // Brightness controls overall display brightness (0-255)
    static const uint8_t DISPLAY_BRIGHTNESS = 200;

    // RGB color for all text rendering on the LED matrix
    static const uint8_t TEXT_COLOR_R = 255;
    static const uint8_t TEXT_COLOR_G = 255;
    static const uint8_t TEXT_COLOR_B = 255;
}

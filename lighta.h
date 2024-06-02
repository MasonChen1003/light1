#ifndef __PXT_LIGHT_H
#define __PXT_LIGHT_H

#include "pxt.h"

namespace mylight {
    /**
    * Clear onboard neopixels
    */
    void clear();

    /**
    * Send a programmable light buffer to the specified digital pin
    * @param data The pin that the lights are connected to
    * @param clk the clock line if any
    * @param mode the color encoding mode
    * @param buf The buffer to send to the pin
    */
    //%
    void sendBuffer1(DigitalInOutPin data, DigitalInOutPin clk, int mode, Buffer buf);

    void neopixelSendData1(DevicePin* pin, int mode, const uint8_t* data, unsigned length);
}

#endif

#ifndef _PISCALED_H
#define _PISCALED_H

#include <Arduino.h>

class PiscaLed {
private:
    /* data */
public:
    PiscaLed(int pino, long time);
    void acende_led();
    void fade();
};
#endif


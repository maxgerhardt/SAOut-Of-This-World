#ifndef MAIN_H_
#define MAIN_H_

#include <ch32v003fun.h>

#include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <stdint.h>

#include <i2c_slave.h>

#include "global.h"
#include "ws2812.h"
#include "button.h"
#include "things.h"

// Number of ticks elapsed per millisecond (48,000 when using 48MHz Clock)
#define SYSTICK_ONE_MILLISECOND ((uint32_t)FUNCONF_SYSTEM_CORE_CLOCK / 1000)

// Number of ticks elapsed per tenth of a millisecond (4,800 when using 48MHz Clock)
#define SYSTICK_ONE_TENTH_MILLISECOND ((uint32_t)FUNCONF_SYSTEM_CORE_CLOCK / 10000)

#endif /* MAIN_H_ */

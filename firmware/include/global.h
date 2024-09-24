#ifndef GLOBAL_H_
#define GLOBAL_H_

#include <stdio.h>

// #pragma message ("In global.h") // @debug

// Things.
typedef enum {
    THING_STARS = 0,
    THING_EYES = 1,
    THING_UPPER_TRIM = 2,
    THING_LOWER_TRIM = 3
} Things_t;

extern Things_t thing;

// Effects.
#define EFFECT_UNDEFINED 0
#define EFFECT_RAW 1
#define EFFECT_COMET 2
#define EFFECT_WS_BLINK 3
// @todo more...

// Registry.
#define REG_STARS_START 32
#define REG_STARS_END 47
#define REG_STARS_COUNT (REG_STARS_END - REG_STARS_START + 1)
#define REG_STARS_LED_START 43

#define REG_EYES_START 48
#define REG_EYES_END 66
#define REG_EYES_COUNT (REG_EYES_END - REG_EYES_START + 1)
#define REG_EYES_LED_START 61
#define REG_EYES_LEFT_LED_START 61
#define REG_EYES_RIGHT_LED_START 64

#define REG_UPPER_TRIM_START 67
#define REG_UPPER_TRIM_END 95
#define REG_UPPER_TRIM_COUNT (REG_UPPER_TRIM_END - REG_UPPER_TRIM_START + 1)
#define REG_UPPER_TRIM_LED_START 83

#define REG_LOWER_TRIM_START 96
#define REG_LOWER_TRIM_END 139
#define REG_LOWER_TRIM_COUNT (REG_LOWER_TRIM_END - REG_LOWER_TRIM_START + 1)
#define REG_LOWER_TRIM_LED_START 115

// i2c and source of WS callback data.
// @note Can be extended to 256 registers as needed, and presets can be set in the array.
#define REG_COUNT 140
extern volatile uint8_t registry[REG_COUNT];

void arrayToRegCopy(volatile uint8_t *dest, size_t dest_offset, uint8_t *src, size_t src_offset, size_t dest_len);

void regToRegCopy(volatile uint8_t *dest, size_t dest_offset, volatile uint8_t *src, size_t src_offset, size_t dest_len);

void printNon0Reg(volatile uint8_t *reg);

void printBin(uint8_t c, int newline);

void printBinByRef(void *pnt0, int newline);

#endif /* GLOBAL_H_ */

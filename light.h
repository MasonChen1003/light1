
#pragma once

#include "pxt.h"

// 新增对新 MCU 的定义
#if defined(RP2040)
#define BITBANG_SUPPORTED 1
#endif

// 其他条件编译保持不变
#if defined(SAMD21) || defined(SAMD51) || defined(STM32F4) || defined(NRF52_SERIES) || defined(RP2040)
#include "neopixel.h"
#define BITBANG_SUPPORTED 1
#else
#include "neopixel.h"
#define BITBANG_SUPPORTED 1
#endif

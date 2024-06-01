
#pragma once

#include "pxt.h"

// 新增对新 MCU 的定义
#if defined(MY_NEW_MCU)
#define BITBANG_SUPPORTED 1
#endif

// 其他条件编译保持不变
#if defined(SAMD21) || defined(SAMD51) || defined(STM32F4) || defined(NRF52_SERIES) || defined(MY_NEW_MCU)
#include "neopixel.h"
#define BITBANG_SUPPORTED 1
#else
#include "neopixel.h"
#define BITBANG_SUPPORTED 1
#endif

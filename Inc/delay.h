#ifndef __DELAY_H
#define __DELAY_H


#include "stm32f303xc.h"


// Function prototypes
void Delay_Init(uint32_t SystemCoreClock);
void Delay_ms(uint32_t ms);
void DelaySleep_ms(uint32_t ms);

#endif // __DELAY_H

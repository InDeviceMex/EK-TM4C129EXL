/*
 * SYSTICK_FreeCount.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */
#include <xApplication_MCU/Core/SYSTICK/Intrinsics/xHeader/SYSTICK_FreeCount.h>

static uint32_t SYSTICK_u32FreeCountOv = 0UL;
static uint32_t SYSTICK_u32FreeCount = 0UL;


uint32_t SYSTICK__u32GetFreeCount(void)
{
    return (SYSTICK_u32FreeCount);
}

void SYSTICK__vClearFreeCount(void)
{
    SYSTICK_u32FreeCount = 0UL;
}

void SYSTICK__vSetFreeCount(uint32_t u32Count)
{
    SYSTICK_u32FreeCount = u32Count;
}


uint32_t SYSTICK__u32GetFreeCountOv(void)
{
    return (SYSTICK_u32FreeCountOv);
}

void SYSTICK__vClearFreeCountOv(void)
{
    SYSTICK_u32FreeCountOv = 0UL;
}

void SYSTICK__vSetFreeCountOv(uint32_t u32Count)
{
    SYSTICK_u32FreeCountOv = u32Count;
}

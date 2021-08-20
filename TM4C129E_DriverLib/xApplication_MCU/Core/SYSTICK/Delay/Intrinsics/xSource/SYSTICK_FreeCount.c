/**
 *
 * @file SYSTICK_FreeCount.c
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 20 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SYSTICK/Delay/Intrinsics/xHeader/SYSTICK_FreeCount.h>

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

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

static UBase_t SYSTICK_uxFreeCountOv = 0UL;
static UBase_t SYSTICK_uxFreeCount = 0UL;


UBase_t SYSTICK__uxGetFreeCount(void)
{
    return (SYSTICK_uxFreeCount);
}

void SYSTICK__vClearFreeCount(void)
{
    SYSTICK_uxFreeCount = 0UL;
}

void SYSTICK__vSetFreeCount(UBase_t uxCount)
{
    SYSTICK_uxFreeCount = uxCount;
}


UBase_t SYSTICK__uxGetFreeCountOv(void)
{
    return (SYSTICK_uxFreeCountOv);
}

void SYSTICK__vClearFreeCountOv(void)
{
    SYSTICK_uxFreeCountOv = 0UL;
}

void SYSTICK__vSetFreeCountOv(UBase_t uxCount)
{
    SYSTICK_uxFreeCountOv = uxCount;
}

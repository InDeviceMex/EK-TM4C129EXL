/**
 *
 * @file UART_IrDA.c
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
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/UART/xHeader/UART_IrDA.h>

#include <xApplication_MCU/UART/Intrinsics/xHeader/UART_Dependencies.h>


void UART__vEnIrDALowPowerFrequency(UART_nMODULE enModule)
{
    MCU_nSTATUS enFPUActive = MCU_enSTATUS_INACTIVE;
    enFPUActive = MCU__enGetFPUContextActive();
    float32_t f32Divider = 0.0f;
    UBase_t uxDivider = 0UL;

    uxDivider = SYSCTL__uxGetSystemClock();
    f32Divider = (float32_t) uxDivider;
    f32Divider /= 1843200.0f; /*IrDA Low Power frequency*/
    f32Divider += 0.5f;
    uxDivider = (UBase_t) f32Divider;
    MCU__vSetFPUContextActive(enFPUActive);
    UART__vSetIrDALowPowerDivider(enModule, uxDivider);
}

UBase_t UART__uxGetIrDALowPowerFrequency(UART_nMODULE enModule)
{
    MCU_nSTATUS enFPUActive = MCU_enSTATUS_INACTIVE;
    enFPUActive = MCU__enGetFPUContextActive();
    float32_t f32Divider = 0.0f;
    UBase_t uxResult = 0UL;
    UBase_t uxsysClock= 0UL;
    UBase_t uxDivider = 0UL;

    uxsysClock= SYSCTL__uxGetSystemClock();
    uxDivider = UART__uxGetIrDALowPowerDivider(enModule);


    f32Divider = (float32_t) uxsysClock;
    f32Divider /= (float32_t) uxDivider;
    uxResult = (UBase_t) f32Divider;
    MCU__vSetFPUContextActive(enFPUActive);
    return (uxResult);
}

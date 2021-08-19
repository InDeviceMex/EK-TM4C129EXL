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
    float32_t f32Divider = 0.0f;
    uint32_t u32Divider = 0UL;
    MCU_nFPU_STATE enFPUActive = MCU_enFPU_STATE_INACTIVE;

    enFPUActive = MCU__enGetFPUContextActive();
    u32Divider = SYSCTL__u32GetSystemClock();
    f32Divider = (float32_t) u32Divider;
    f32Divider /= 1843200.0f; /*IrDA Low Power frequency*/
    f32Divider += 0.5f;
    u32Divider = (uint32_t) f32Divider;
    MCU__vSetFPUContextActive(enFPUActive);
    UART__vSetIrDALowPowerDivider(enModule, u32Divider);
}

uint32_t UART__u32GetIrDALowPowerFrequency(UART_nMODULE enModule)
{
    float32_t f32Divider = 0.0f;
    uint32_t u32Result = 0UL;
    uint32_t u32sysClock= 0UL;
    uint32_t u32Divider = 0UL;
    MCU_nFPU_STATE enFPUActive = MCU_enFPU_STATE_INACTIVE;

    u32sysClock= SYSCTL__u32GetSystemClock();
    u32Divider = UART__u32GetIrDALowPowerDivider(enModule);


    enFPUActive = MCU__enGetFPUContextActive();
    f32Divider = (float32_t) u32sysClock;
    f32Divider /= (float32_t) u32Divider;
    u32Result = (uint32_t) f32Divider;
    MCU__vSetFPUContextActive(enFPUActive);
    return (u32Result);
}

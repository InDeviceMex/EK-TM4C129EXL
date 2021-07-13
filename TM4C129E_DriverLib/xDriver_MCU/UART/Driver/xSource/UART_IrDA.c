/**
 *
 * @file UART_IrDA.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 6 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/xHeader/UART_IrDA.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetIrDALowPowerDivider(UART_nMODULE enModule, uint32_t u32Divider)
{
    UART__vWriteRegister(enModule, UART_ILPR_OFFSET, u32Divider, UART_ILPR_ILPDVSR_MASK, UART_ILPR_R_ILPDVSR_BIT);
}

uint32_t UART__u32GetIrDALowPowerDivider(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_DR_OFFSET, &u32Reg, UART_ILPR_ILPDVSR_MASK, UART_ILPR_R_ILPDVSR_BIT);
    return u32Reg;
}

void UART__vEnIrDALowPowerFrequency(UART_nMODULE enModule)
{
    float32_t f32Divider = 0.0f;
    uint32_t u32Divider = SYSCTL__u32GetSystemClock();
    f32Divider = (float32_t) u32Divider;
    f32Divider /= 1843200.0f; /*IrDA Low Power frequency*/
    f32Divider += 0.5f;
    u32Divider = (uint32_t) f32Divider;
    UART__vSetIrDALowPowerDivider(enModule, u32Divider);
}

uint32_t UART__u32GetIrDALowPowerFrequency(UART_nMODULE enModule)
{
    float32_t f32Divider = 0.0f;
    uint32_t u32Result = 0UL;
    uint32_t u32sysClock= 0UL;
    uint32_t u32Divider = 0UL;

    u32sysClock= SYSCTL__u32GetSystemClock();
    u32Divider = UART__u32GetIrDALowPowerDivider(enModule);

    f32Divider = (float32_t) u32sysClock;
    f32Divider /= (float32_t) u32Divider;
    u32Result = (uint32_t) f32Divider;
    return u32Result;
}

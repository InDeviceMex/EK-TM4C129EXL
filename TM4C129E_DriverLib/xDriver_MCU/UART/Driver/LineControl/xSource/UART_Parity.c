/**
 *
 * @file UART_Parity.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Parity.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetParityEnable(UART_nMODULE enModule, UART_nPARITY enParityState)
{
    UART__vWriteRegister(enModule, UART_LCRH_OFFSET, (uint32_t) enParityState,
                         UART_LCRH_PEN_MASK, UART_LCRH_R_PEN_BIT);
}


UART_nPARITY UART__enGetParityEnable(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_LCRH_OFFSET, &u32Reg, UART_LCRH_PEN_MASK, UART_LCRH_R_PEN_BIT);
    return (UART_nPARITY) u32Reg;
}


void UART__vSetParityType(UART_nMODULE enModule, UART_nPARITY_TYPE enParityTypeArg)
{
    UART__vWriteRegister(enModule, UART_LCRH_OFFSET, (uint32_t) enParityTypeArg,
                         UART_LCRH_EPS_MASK, UART_LCRH_R_EPS_BIT);
}

UART_nPARITY_TYPE UART__enGetParityType(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_LCRH_OFFSET, &u32Reg, UART_LCRH_EPS_MASK, UART_LCRH_R_EPS_BIT);
    return (UART_nPARITY_TYPE) u32Reg;
}

void UART__vSetParityStick(UART_nMODULE enModule, UART_nPARITY_STICK enParityStickArg)
{
    UART__vWriteRegister(enModule, UART_LCRH_OFFSET, (uint32_t) enParityStickArg,
                         UART_LCRH_SPS_MASK, UART_LCRH_R_SPS_BIT);
}

UART_nPARITY_STICK UART__enGetParityStick(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_LCRH_OFFSET, &u32Reg, UART_LCRH_SPS_MASK, UART_LCRH_R_SPS_BIT);
    return (UART_nPARITY_STICK) u32Reg;
}

void UART__vSetParityConfigStruct(UART_nMODULE enModule, const UART_PARITY_TypeDef stParityConfig)
{
    UART__vSetParityConfig(enModule, stParityConfig.enParity, stParityConfig.enParityType, stParityConfig.enParityStick);
}

void UART__vSetParityConfigStructPointer(UART_nMODULE enModule, const UART_PARITY_TypeDef* pstParityConfig)
{
    if((uint32_t) 0UL != (uint32_t) pstParityConfig)
    {
        UART__vSetParityConfig(enModule, pstParityConfig->enParity, pstParityConfig->enParityType, pstParityConfig->enParityStick);
    }
}

void UART__vSetParityConfig(UART_nMODULE enModule, UART_nPARITY enParityState, UART_nPARITY_TYPE enParityTypeArg, UART_nPARITY_STICK enParityStickArg)
{
    UART__vSetParityEnable(enModule, enParityState);
    UART__vSetParityType(enModule, enParityTypeArg);
    UART__vSetParityStick(enModule, enParityStickArg);
}

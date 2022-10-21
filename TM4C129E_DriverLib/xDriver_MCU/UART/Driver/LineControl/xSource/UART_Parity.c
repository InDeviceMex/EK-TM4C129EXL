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

void UART__vSetParityEnable(UART_nMODULE enModule, UART_nSTATE enParityState)
{
    UART__vWriteRegister(enModule, UART_LCRH_OFFSET, (UBase_t) enParityState,
                         UART_LCRH_PEN_MASK, UART_LCRH_R_PEN_BIT);
}


UART_nSTATE UART__enGetParityEnable(UART_nMODULE enModule)
{
    UART_nSTATE enParityReg = UART_enSTATE_DIS;
    enParityReg = (UART_nSTATE) UART__uxReadRegister(enModule, UART_LCRH_OFFSET,
                                       UART_LCRH_PEN_MASK, UART_LCRH_R_PEN_BIT);
    return (enParityReg);
}


void UART__vSetParityType(UART_nMODULE enModule, UART_nPARITY_TYPE enParityTypeArg)
{
    UART__vWriteRegister(enModule, UART_LCRH_OFFSET, (UBase_t) enParityTypeArg,
                         UART_LCRH_EPS_MASK, UART_LCRH_R_EPS_BIT);
}

UART_nPARITY_TYPE UART__enGetParityType(UART_nMODULE enModule)
{
    UART_nPARITY_TYPE enParityTypeReg = UART_enPARITY_TYPE_ODD;
    enParityTypeReg = (UART_nPARITY_TYPE) UART__uxReadRegister(enModule, UART_LCRH_OFFSET,
                                                UART_LCRH_EPS_MASK, UART_LCRH_R_EPS_BIT);
    return (enParityTypeReg);
}

void UART__vSetParityStick(UART_nMODULE enModule, UART_nSTATE enParityStickArg)
{
    UART__vWriteRegister(enModule, UART_LCRH_OFFSET, (UBase_t) enParityStickArg,
                         UART_LCRH_SPS_MASK, UART_LCRH_R_SPS_BIT);
}

UART_nSTATE UART__enGetParityStick(UART_nMODULE enModule)
{
    UART_nSTATE enParityStickReg = UART_enSTATE_DIS;
    enParityStickReg = (UART_nSTATE) UART__uxReadRegister(enModule, UART_LCRH_OFFSET,
                                          UART_LCRH_SPS_MASK, UART_LCRH_R_SPS_BIT);
    return (enParityStickReg);
}

void UART__vSetParityConfigStruct(UART_nMODULE enModule, const UART_PARITY_t stParityConfig)
{
    UART__vSetParityConfig(enModule,
                           stParityConfig.enParity,
                           stParityConfig.enParityType,
                           stParityConfig.enParityStick);
}

void UART__vSetParityConfigStructPointer(UART_nMODULE enModule,
                                         const UART_PARITY_t* pstParityConfig)
{
    if(0UL != (UBase_t) pstParityConfig)
    {
        UART__vSetParityConfig(enModule,
                               pstParityConfig->enParity,
                               pstParityConfig->enParityType,
                               pstParityConfig->enParityStick);
    }
}

void UART__vSetParityConfig(UART_nMODULE enModule,
                            UART_nSTATE enParityStateArg,
                            UART_nPARITY_TYPE enParityTypeArg,
                            UART_nSTATE enParityStickArg)
{
    UART__vSetParityEnable(enModule, enParityStateArg);
    UART__vSetParityType(enModule, enParityTypeArg);
    UART__vSetParityStick(enModule, enParityStickArg);
}

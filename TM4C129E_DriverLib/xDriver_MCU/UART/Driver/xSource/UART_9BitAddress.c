/**
 *
 * @file UART_9BitAddress.c
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
 * @verbatim 7 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/xHeader/UART_9BitAddress.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSet9BitMode(UART_nMODULE enModule, UART_nSTATE en9BitArg)
{
    UART__vWriteRegister(enModule, UART_BIT9ADDR_OFFSET, (UBase_t) en9BitArg,
                         UART_BIT9ADDR_BIT9EN_MASK, UART_BIT9ADDR_R_BIT9EN_BIT);
}

UART_nSTATE UART__enGet9BitMode(UART_nMODULE enModule)
{
    UART_nSTATE en9BitReg = UART_enSTATE_DIS;
    en9BitReg = (UART_nSTATE) UART__uxReadRegister(enModule, UART_BIT9ADDR_OFFSET,
                               UART_BIT9ADDR_BIT9EN_MASK, UART_BIT9ADDR_R_BIT9EN_BIT);
    return (en9BitReg);
}

void UART__vSetSelfAddress(UART_nMODULE enModule, UBase_t uxAddressArg)
{
    UART__vWriteRegister(enModule, UART_BIT9ADDR_OFFSET, uxAddressArg,
                         UART_BIT9ADDR_ADDR_MASK, UART_BIT9ADDR_R_ADDR_BIT);
}

UBase_t UART__uxGetSelfAddress(UART_nMODULE enModule)
{
    UBase_t uxAddressReg = 0UL;
    uxAddressReg = UART__uxReadRegister(enModule, UART_BIT9ADDR_OFFSET,
                              UART_BIT9ADDR_ADDR_MASK, UART_BIT9ADDR_R_ADDR_BIT);
    return (uxAddressReg);
}

void UART__vSetSelfAddressMask(UART_nMODULE enModule, UBase_t uxAddressMaskArg)
{
    UART__vWriteRegister(enModule, UART_BIT9AMASK_OFFSET, uxAddressMaskArg,
                         UART_BIT9AMASK_MASK_MASK, UART_BIT9AMASK_R_MASK_BIT);
}

UBase_t UART__uxGetSelfAddressMask(UART_nMODULE enModule)
{
    UBase_t uxAddressMaskReg = 0UL;
    uxAddressMaskReg = UART__uxReadRegister(enModule, UART_BIT9AMASK_OFFSET,
                                  UART_BIT9AMASK_MASK_MASK, UART_BIT9AMASK_R_MASK_BIT);
    return (uxAddressMaskReg);
}

void UART__vSetSelfAddressWithMask(UART_nMODULE enModule, UBase_t  uxAddressArg,
                                   UBase_t  uxAddressMaskArg)
{
    UART__vSetSelfAddress(enModule, uxAddressArg);
    UART__vSetSelfAddressMask(enModule, uxAddressMaskArg);
}

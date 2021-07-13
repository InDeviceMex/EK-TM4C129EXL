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

void UART__vSet9BitMode(UART_nMODULE enModule, UART_n9BIT en9BitArg)
{
    UART__vWriteRegister(enModule, UART_9BITADDR_OFFSET, (uint32_t) en9BitArg, UART_9BITADDR_BIT9EN_MASK, UART_9BITADDR_R_BIT9EN_BIT);
}

UART_n9BIT UART__enGet9BitMode(UART_nMODULE enModule)
{
    UART_n9BIT enReg = UART_en9BIT_UNDEF;
    UART__enReadRegister(enModule, UART_9BITADDR_OFFSET, (uint32_t*) &enReg, UART_9BITADDR_BIT9EN_MASK, UART_9BITADDR_R_BIT9EN_BIT);
    return enReg;
}

void UART__vSetSelfAddress(UART_nMODULE enModule, uint32_t u32AddressArg)
{
    UART__vWriteRegister(enModule, UART_9BITADDR_OFFSET, u32AddressArg, UART_9BITADDR_ADDR_MASK, UART_9BITADDR_R_ADDR_BIT);
}

uint32_t UART__u32GetSelfAddress(UART_nMODULE enModule)
{
    uint32_t u32AddressReg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_9BITADDR_OFFSET, &u32AddressReg, UART_9BITADDR_ADDR_MASK, UART_9BITADDR_R_ADDR_BIT);
    return u32AddressReg;
}

void UART__vSetSelfAddressMask(UART_nMODULE enModule, uint32_t u32AddressMaskArg)
{
    UART__vWriteRegister(enModule, UART_9BITAMASK_OFFSET, u32AddressMaskArg, UART_9BITAMASK_MASK_MASK, UART_9BITAMASK_R_MASK_BIT);
}

uint32_t UART__u32GetSelfAddressMask(UART_nMODULE enModule)
{
    uint32_t u32AddressMaskReg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_9BITAMASK_OFFSET, &u32AddressMaskReg, UART_9BITAMASK_MASK_MASK, UART_9BITAMASK_R_MASK_BIT);
    return u32AddressMaskReg;
}

void UART__vSetSelfAddressWithMask(UART_nMODULE enModule, uint32_t  u32AddressArg, uint32_t  u32AddressMaskArg)
{
    UART__vSetSelfAddress(enModule, u32AddressArg);
    UART__vSetSelfAddressMask(enModule, u32AddressMaskArg);
}

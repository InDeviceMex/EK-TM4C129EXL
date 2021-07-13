/**
 *
 * @file UART_Length.c
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
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Length.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nLENGTH UART__enGetDataLength(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_LCRH_OFFSET, &u32Reg, UART_LCRH_WLEN_MASK, UART_LCRH_R_WLEN_BIT);
    return (UART_nLENGTH) u32Reg;
}

void UART__vSetDataLength(UART_nMODULE enModule, UART_nLENGTH enDataLength)
{
    UART__vWriteRegister(enModule, UART_LCRH_OFFSET, (uint32_t) enDataLength, UART_LCRH_WLEN_MASK, UART_LCRH_R_WLEN_BIT);
}

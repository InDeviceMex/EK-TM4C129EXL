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
    UART_nLENGTH enLenghtReg = UART_enLENGTH_5BITS;
    enLenghtReg = (UART_nLENGTH) UART__u32ReadRegister(enModule, UART_LCRH_OFFSET,
                                       UART_LCRH_WLEN_MASK, UART_LCRH_R_WLEN_BIT);
    return (enLenghtReg);
}

void UART__vSetDataLength(UART_nMODULE enModule, UART_nLENGTH enDataLength)
{
    UART__vWriteRegister(enModule, UART_LCRH_OFFSET, (uint32_t) enDataLength,
                         UART_LCRH_WLEN_MASK, UART_LCRH_R_WLEN_BIT);
}

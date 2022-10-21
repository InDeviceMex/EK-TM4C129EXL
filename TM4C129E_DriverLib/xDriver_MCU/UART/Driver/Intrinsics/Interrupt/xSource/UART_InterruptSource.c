/**
 *
 * @file UART_InterruptSource.c
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/xHeader/UART_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>

void UART__vEnInterruptSource(UART_nMODULE enModule, UART_nINTMASK enSourceInt)
{
    UBase_t uxSourceInt = 0UL;
    uxSourceInt = (UBase_t) enSourceInt;
    uxSourceInt &= (UBase_t) UART_enINTMASK_ALL;
    UART__vWriteRegister(enModule , UART_IM_OFFSET, uxSourceInt, uxSourceInt, 0UL);
}

void UART__vDisInterruptSource(UART_nMODULE enModule, UART_nINTMASK enSourceInt)
{
    UBase_t uxSourceInt = 0UL;
    uxSourceInt = (UBase_t) enSourceInt;
    uxSourceInt &= (UBase_t) UART_enINTMASK_ALL;
    UART__vWriteRegister(enModule , UART_IM_OFFSET, 0UL, uxSourceInt, 0UL);
}

void UART__vClearInterruptSource(UART_nMODULE enModule, UART_nINTMASK enSourceInt)
{
    UBase_t uxSourceInt = 0UL;
    uxSourceInt = (UBase_t) enSourceInt;
    uxSourceInt &= (UBase_t) UART_enINTMASK_ALL;
    UART__vWriteRegister(enModule , UART_ICR_OFFSET, uxSourceInt, 0xFFFFFFFFUL, 0UL);
}

UART_nINTMASK UART__enStatusInterruptSource(UART_nMODULE enModule, UART_nINTMASK enSourceInt)
{
    UART_nINTMASK enInterruptReg = UART_enINTMASK_NONE;
    UBase_t uxSourceInt = 0UL;
    UBase_t uxRegister= 0UL;
    uxSourceInt = (UBase_t) enSourceInt;
    uxSourceInt &= (UBase_t) UART_enINTMASK_ALL;
    uxRegister = UART__uxReadRegister(enModule , UART_RIS_OFFSET,
                                   (UBase_t) uxSourceInt, 0UL);
    enInterruptReg = (UART_nINTMASK) uxRegister;

    return (enInterruptReg);
}

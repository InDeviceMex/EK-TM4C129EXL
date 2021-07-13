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
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vEnInterruptSource(UART_nMODULE enModule, UART_nINT_SOURCE enSourceInt)
{
    uint32_t u32SourceInt = 0UL;
    u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) UART_enINT_SOURCE_ALL;
    UART__vWriteRegister(enModule , UART_IM_OFFSET, u32SourceInt, u32SourceInt, 0UL);
}

void UART__vDisInterruptSource(UART_nMODULE enModule, UART_nINT_SOURCE enSourceInt)
{
    uint32_t u32SourceInt = 0UL;
    u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) UART_enINT_SOURCE_ALL;
    UART__vWriteRegister(enModule , UART_IM_OFFSET, 0UL, u32SourceInt, 0UL);
}

void UART__vClearInterruptSource(UART_nMODULE enModule, UART_nINT_SOURCE enSourceInt)
{
    uint32_t u32SourceInt = 0UL;
    u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) UART_enINT_SOURCE_ALL;
    UART__vWriteRegister(enModule , UART_ICR_OFFSET, u32SourceInt, 0xFFFFFFFFUL, 0UL);
}

UART_nINT_STATUS UART__enStatusInterruptSource(UART_nMODULE enModule, UART_nINT_SOURCE enSourceInt)
{
    UART_nINT_STATUS enInterruptReg = UART_enINT_STATUS_UNDEF;
    UART_nSTATUS enStatus = UART_enSTATUS_UNDEF;
    uint32_t u32SourceInt = 0UL;
    uint32_t u32Register= 0xFFFFFFFFUL;
    u32SourceInt &= (uint32_t) UART_enINT_SOURCE_ALL;
    enStatus = UART__enReadRegister(enModule , UART_RIS_OFFSET, (uint32_t*) &u32Register, (uint32_t) u32SourceInt, 0UL);
    if(UART_enSTATUS_OK == enStatus)
    {
        if(0UL != u32Register)
        {
            enInterruptReg = UART_enINT_OCCUR;
        }
        else
        {
            enInterruptReg = UART_enINT_NOOCCUR;
        }
    }
    return enInterruptReg;
}

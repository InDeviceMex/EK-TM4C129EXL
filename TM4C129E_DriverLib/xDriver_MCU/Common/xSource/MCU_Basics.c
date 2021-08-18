/**
 *
 * @file MCU_Basics.c
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
 * @verbatim 19 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Common/xHeader/MCU_Basics.h>

__attribute__((naked))
void MCU__vNoOperation(void)
{
  __asm volatile(" NOP \n"
        " BX lr \n");
}

__attribute__((naked))
void MCU__vDataSyncBarrier(void)
{
  __asm volatile(" DSB \n"
        " BX lr \n");
}

__attribute__((naked))
void MCU__vInstructionSyncBarrier(void)
{
  __asm volatile(" ISB \n"
        " BX lr \n");
}

__attribute__((naked))
void MCU__vDataMemoryBarrier(void)
{
  __asm volatile(" DMB \n"
        " BX lr \n");
}

void MCU__vBlocking(void)
{
    MCU__vDataSyncBarrier();
    MCU__vInstructionSyncBarrier();
}


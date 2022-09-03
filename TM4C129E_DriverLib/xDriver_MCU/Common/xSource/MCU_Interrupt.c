/**
 *
 * @file MCU_Interrupt.c
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
 * @verbatim 27 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Common/xHeader/MCU_Interrupt.h>


MCU_nSTATE MCU__enDisGlobalInterrupt(void)
{
    __asm volatile(" mrs     r0, PRIMASK \n"
           " cpsid   i \n"
           " dsb \n"
           " isb\n"
           " bx      lr \n");
    return ((MCU_nSTATE) 0UL);
}


void MCU__vEnGlobalInterrupt(void)
{
    __asm volatile(
           " cpsie   i \n"
           " dsb \n"
           " isb\n");
}


MCU_nSTATE MCU__enEnGlobalInterrupt(void)
{
    __asm volatile(" mrs     r0, PRIMASK \n"
           " cpsie   i \n"
           " dsb \n"
           " isb\n"
           " bx      lr \n");
    return ((MCU_nSTATE) 0UL);
}


void MCU__vSetGlobalInterrupt(MCU_nSTATE enStateInterrupt)
{
    __asm volatile(" msr     PRIMASK, r0 \n"
            " dsb \n"
            " isb\n");
}


MCU_nSTATE MCU__enSetGlobalInterrupt(MCU_nSTATE enStateInterrupt)
{
    __asm volatile(
          " mrs     r1, PRIMASK \n"
          " msr     PRIMASK, r0 \n"
          " dsb \n"
          " isb\n"
          " mov     r0, r1 \n");
    return (enStateInterrupt);
}


MCU_nSTATE MCU__enGetGlobalInterrupt(void)
{
    __asm volatile(" mrs     r0, PRIMASK \n"
          " bx      lr \n");
    return ((MCU_nSTATE) 0UL);
}


MCU_nSTATE MCU__enDisGlobalInterrupt_RAM(void)
{
    __asm volatile(" mrs     r0, PRIMASK \n"
          " cpsid   i \n"
          " dsb \n"
          " isb\n"
          " bx      lr \n");
    return ((MCU_nSTATE) 0UL);
}


void MCU__vEnGlobalInterrupt_RAM(void)
{
    __asm volatile(
           " cpsie   i \n"
           " dsb \n"
           " isb\n");
}


MCU_nSTATE MCU__enEnGlobalInterrupt_RAM(void)
{
    __asm volatile(" mrs     r0, PRIMASK \n"
          " cpsie   i \n"
          " dsb \n"
          " isb\n"
          " bx      lr \n");
    return ((MCU_nSTATE) 0UL);
}


void MCU__vSetGlobalInterrupt_RAM(MCU_nSTATE enStateInterrupt)
{
    __asm volatile(
            " msr     PRIMASK, r0 \n"
            " dsb \n"
            " isb\n");
}


MCU_nSTATE MCU__enSetGlobalInterrupt_RAM(MCU_nSTATE enStateInterrupt)
{
    __asm volatile(
          " mrs     r1, PRIMASK \n"
          " msr     PRIMASK, r0 \n"
          " dsb \n"
          " isb\n"
          " mov     r0, r1 \n");
    return (enStateInterrupt);
}


MCU_nSTATE MCU__enGetGlobalInterrupt_RAM(void)
{
    __asm volatile(" mrs     r0, PRIMASK \n"
          " bx      lr \n");
    return ((MCU_nSTATE) 0UL);
}


void MCU__vSetBasePriorityInterrupt(MCU_nPRIORITY enStateInterrupt)
{
    __asm volatile(
          " and     r1, r0, #0x7 \n"
          " lsl     r1, #0x5 \n"
          " msr     BASEPRI, r1 \n"
          " dsb \n"
          " isb \n");
}


MCU_nPRIORITY MCU__enSetBasePriorityInterrupt(MCU_nPRIORITY enStateInterrupt)
{
    __asm volatile(
          " and     r1, r0, #0x7 \n"
          " lsl     r1, #0x5 \n"
          " mrs     r2, BASEPRI \n"
          " ubfx    r0, r2, #5, #3 \n"
          " msr     BASEPRI, r1 \n"
          " dsb \n"
          " isb \n");
    return (enStateInterrupt);
}


MCU_nPRIORITY MCU__enGetBasePriorityInterrupt(void)
{
    __asm volatile(
          " mrs     r1, BASEPRI \n"
          " lsr     r0, r1, #0x5 \n"
          " and     r0, #0x7 \n"
          " bx      lr \n");
    return ((MCU_nPRIORITY) 0UL);
}


void MCU__vSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt)
{
    __asm volatile(
          " and     r1, r0, #0x7 \n"
          " lsl     r1, #0x5 \n"
          " msr     BASEPRI, r1 \n"
          " dsb \n"
          " isb \n");
}


MCU_nPRIORITY MCU__enSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt)
{
    __asm volatile(
          " and     r1, r0, #0x7 \n"
          " lsl     r1, #0x5 \n"
          " mrs     r0, BASEPRI \n"
          " ubfx    r0, r2, #5, #3 \n"
          " msr     BASEPRI, r1 \n"
          " dsb \n"
          " isb \n");
    return (enStateInterrupt);
}


MCU_nPRIORITY MCU__enGetBasePriorityInterrupt_RAM(void)
{
    __asm volatile(
          " mrs     r1, BASEPRI \n"
          " lsr     r0, r1, #0x5 \n"
          " and     r0, #0x7 \n"
          " bx      lr\n");
    return ((MCU_nPRIORITY) 0UL);
}


void MCU__vWaitForInterrupt_RAM(void)
{
    __asm volatile(" wfi \n"
            " dsb \n"
            " isb \n");
}


void MCU__vWaitForEvent_RAM(void)
{
    __asm volatile(" wfe \n"
            " dsb \n"
            " isb \n");
}


void MCU__vSendEvent_RAM(void)
{
    __asm volatile(" sev \n"
            " dsb \n"
            " isb \n");
}


void MCU__vWaitForInterrupt(void)
{
    __asm volatile(" wfi \n"
            " dsb \n"
            " isb \n");
}


void MCU__vWaitForEvent(void)
{
    __asm volatile(" wfe \n"
            " dsb \n"
            " isb \n");
}


void MCU__vSendEvent(void)
{
    __asm volatile(" sev \n"
            " dsb \n"
            " isb \n");
}


MCU_nSTATE MCU__enDisGlobalFault(void)
{
    __asm volatile(" mrs     r0, FAULTMASK \n"
           " cpsid   f \n"
           " dsb \n"
           " isb \n"
           " bx      lr \n");
    return ((MCU_nSTATE) 0UL);
}


MCU_nSTATE MCU__enEnGlobalFault(void)
{
    __asm volatile(" mrs     r0, FAULTMASK \n"
           " cpsie   f \n"
           " dsb \n"
           " isb \n"
           " bx      lr \n");
    return ((MCU_nSTATE) 0UL);
}


MCU_nSTATE MCU__enSetGlobalFault(MCU_nSTATE enStateInterrupt)
{
    __asm volatile(
          " mrs     r1, FAULTMASK \n"
          " msr     FAULTMASK, r0 \n"
          " dsb \n"
          " isb \n"
          " mov     r0, r1 \n");
    return (enStateInterrupt);
}


MCU_nSTATE MCU__enGetGlobalFault(void)
{
    __asm volatile(" mrs     r0, FAULTMASK \n"
           " bx      lr \n");
    return ((MCU_nSTATE) 0UL);
}



MCU_nSTATE MCU__enDisGlobalFault_RAM(void)
{
    __asm volatile(" mrs     r0, FAULTMASK \n"
           " cpsid   f \n"
           " dsb \n"
           " isb \n"
           " bx      lr \n");
    return ((MCU_nSTATE) 0UL);
}


MCU_nSTATE MCU__enEnGlobalFault_RAM(void)
{
    __asm volatile(" mrs     r0, FAULTMASK \n"
           " cpsie   f \n"
           " dsb \n"
           " isb \n"
           " bx      lr \n");
    return ((MCU_nSTATE) 0UL);
}

MCU_nSTATE MCU__enSetGlobalFault_RAM(MCU_nSTATE enStateInterrupt)
{
    __asm volatile(
          " mrs     r1, FAULTMASK \n"
          " msr     FAULTMASK, r0 \n"
          " dsb \n"
          " isb \n"
          " mov     r0, r1 \n");
    return (enStateInterrupt);
}

MCU_nSTATE MCU__enGetGlobalFault_RAM(void)
{
    __asm volatile(" mrs     r0, FAULTMASK \n"
          " bx      lr \n");
    return ((MCU_nSTATE) 0UL);
}

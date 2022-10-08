/**
 *
 * @file MCU_ControlReg.c
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
 * @verbatim 17 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Common/xHeader/MCU_ControlReg.h>

__attribute__((naked)) void MCU__vSetFPUContextActive(MCU_nSTATUS enStateCoprocessor)
{
    __asm volatile(
          " mrs     r1, CONTROL\n"
          " ubfx    r2, r1, #2, #1\n"
          " bfi     r1, r0, #2, #1\n"
          " msr     CONTROL, r1\n"
          " dsb \n"
          " isb\n"
          " bx      lr\n");
}

__attribute__((naked)) MCU_nSTATUS MCU__enSetFPUContextActive(MCU_nSTATUS enStateCoprocessor)
{
    __asm volatile(
          " mrs     r1, CONTROL\n"
          " ubfx    r2, r1, #2, #1\n"
          " bfi     r1, r0, #2, #1\n"
          " msr     CONTROL, r1\n"
          " dsb \n"
          " isb\n"
          " mov     r0, r2 \n"
          " bx      lr\n");
#ifndef __TI_CLANG__
    return ((MCU_nSTATUS) 0UL);
#endif
}

__attribute__((naked)) MCU_nSTATUS MCU__enGetFPUContextActive(void)
{
    __asm volatile(
          " mrs     r1, CONTROL\n"
          " ubfx    r0, r1, #2, #1\n"
          " bx      lr\n");
#ifndef __TI_CLANG__
    return ((MCU_nSTATUS) 0UL);
#endif
}

__attribute__((naked)) MCU_nSTACK MCU__enSetStackActive(MCU_nSTACK enStack)
{
    __asm volatile(
          " mrs     r1, CONTROL\n"
          " ubfx    r2, r1, #1, #1\n"
          " bfi     r1, r0, #1, #1\n"
          " msr     CONTROL, r1\n"
          " dsb \n"
          " isb\n"
          " mov     r0, r2 \n"
          " bx      lr\n");
#ifndef __TI_CLANG__
    return ((MCU_nSTACK) 0UL);
#endif
}

__attribute__((naked)) MCU_nSTACK MCU__enGetStackActive(void)
{
    __asm volatile(
          " mrs     r1, CONTROL\n"
          " ubfx    r0, r1, #1, #1\n"
          " bx      lr\n");
#ifndef __TI_CLANG__
    return ((MCU_nSTACK) 0UL);
#endif
}

__attribute__((naked)) void MCU__vSetPSPValue(UBase_t uxStackValue)
{
    __asm volatile(
          " msr PSP, r0\n"
          " dsb \n"
          " isb\n"
          " bx      lr\n");
}

__attribute__((naked)) UBase_t MCU__uxGetPSPValue(void)
{
    __asm volatile(" mrs     r0, PSP\n"
          " bx      lr\n");
#ifndef __TI_CLANG__
    return ((UBase_t) 0UL);
#endif
}

__attribute__((naked)) void MCU__vSetMSPValue(UBase_t uxStackValue)
{
    __asm volatile(
          " msr     MSP, r0\n"
          " dsb \n"
          " isb\n"
          " bx      lr\n");
}

__attribute__((naked)) UBase_t MCU__uxGetMSPValue(void)
{
    __asm volatile(" mrs     r0, MSP\n"
          " bx      lr\n");
#ifndef __TI_CLANG__
    return ((UBase_t) 0UL);
#endif
}

void MCU__vSetStackValue(MCU_nSTACK enStack, UBase_t uxStackValue)
{
    if(MCU_enSTACK_MSP == enStack)
    {
        MCU__vSetMSPValue(uxStackValue);
    }
    else
    {
        MCU__vSetPSPValue(uxStackValue);
    }
}

__attribute__((naked)) UBase_t MCU__uxGetStackValue(MCU_nSTACK enStack)
{
    __asm volatile(" cmp     r0, #0\n"
            " ite  eq\n"
            " mrseq     r0, MSP\n"
            " mrsne     r0, PSP\n"
            " dsb \n"
            " isb\n"
            " bx      lr\n");
#ifndef __TI_CLANG__
      return (0UL);
#endif
}

__attribute__((naked)) MCU_nTHREAD_LEVEL MCU__enSetThreadLevel(MCU_nTHREAD_LEVEL enLevel)
{
    __asm volatile(
          " mrs     r1, CONTROL\n"
          " ubfx    r2, r1, #0, #1\n"
          " bfi     r1, r0, #0, #1\n"
          " msr     CONTROL, r1\n"
          " dsb \n"
          " isb\n"
          " mov     r0, r2 \n"
          " bx      lr\n");
#ifndef __TI_CLANG__
      return ((MCU_nTHREAD_LEVEL) 0UL);
#endif
}

__attribute__((naked)) MCU_nTHREAD_LEVEL MCU__enGetThreadLevel(void)
{
    __asm volatile(
         " mrs     r1, CONTROL\n"
         " ubfx    r0, r1, #0, #1\n"
         " bx      lr\n");
#ifndef __TI_CLANG__
    return ((MCU_nTHREAD_LEVEL) 0UL);
#endif
}

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


__attribute__((naked))
MCU_nFPU_STATE MCU__enSetFPUContextActive(MCU_nFPU_STATE enStateCoprocessor)
{
    {__asm(" mrs     r1, CONTROL\n");}
    {__asm(" ubfx    r2, r1, #2, #1\n");}
    {__asm(" bfi     r1, r0, #2, #1\n");}
    {__asm(" msr     CONTROL, r1\n");}
    {__asm(" isb\n");}
    {__asm(" mov     r0, r2\n");}
    {__asm(" bx      lr\n");}
    return ((MCU_nFPU_STATE) 0UL);
}

__attribute__((naked)) MCU_nFPU_STATE MCU__enGetFPUContextActive(void)
{
    {__asm(" mrs     r1, CONTROL\n");}
    {__asm(" ubfx    r0, r1, #2, #1\n");}
    {__asm(" bx      lr\n");}
    return ((MCU_nFPU_STATE) 0UL);
}

__attribute__((naked)) MCU_nSTACK MCU__enSetStackActive(MCU_nSTACK enStack)
{
    {__asm(" mrs     r1, CONTROL\n");}
    {__asm(" ubfx    r2, r1, #1, #1\n");}
    {__asm(" bfi     r1, r0, #1, #1\n");}
    {__asm(" msr     CONTROL, r1\n");}
    {__asm(" isb\n");}
    {__asm(" mov     r0, r2\n");}
    {__asm(" bx      lr\n");}
    return ((MCU_nSTACK) 0UL);
}

__attribute__((naked)) MCU_nSTACK MCU__enGetStackActive(void)
{
    {__asm(" mrs     r1, CONTROL\n");}
    {__asm(" ubfx    r0, r1, #1, #1\n");}
    {__asm(" bx      lr\n");}
    return ((MCU_nSTACK) 0UL);
}

__attribute__((naked)) void MCU__vSetPSPValue(uint32_t u32StackValue)
{
    {__asm(" msr     PSP, r0\n");}
    {__asm(" isb\n");}
    {__asm(" bx      lr\n");}
}

__attribute__((naked)) uint32_t MCU__u32GetPSPValue(void)
{
    {__asm(" mrs     r0, PSP\n");}
    {__asm(" bx      lr\n");}
    return ((uint32_t) 0UL);
}

__attribute__((naked)) void MCU__vSetMSPValue(uint32_t u32StackValue)
{
    {__asm(" msr     MSP, r0\n");}
    {__asm(" isb\n");}
    {__asm(" bx      lr\n");}
}

__attribute__((naked)) uint32_t MCU__u32GetMSPValue(void)
{
    {__asm(" mrs     r0, MSP\n");}
    {__asm(" bx      lr\n");}
    return ((uint32_t) 0UL);
}


__attribute__((naked)) void MCU__vSetStackValue(MCU_nSTACK enStack, uint32_t u32StackValue)
{
    if(MCU_enSTACK_MSP == enStack)
    {
        {__asm(" msr     MSP, r1\n");}
        {__asm(" isb\n");}
    }
    else
    {
        {__asm(" msr     PSP, r1\n");}
        {__asm(" isb\n");}
    }
    {__asm(" bx      lr\n");}
}

__attribute__((naked)) uint32_t MCU__u32GetStackValue(MCU_nSTACK enStack)
{
    if(MCU_enSTACK_MSP == enStack)
    {
        {__asm(" mrs     r0, MSP\n");}
    }
    else
    {
        {__asm(" mrs     r0, PSP\n");}
    }
    {__asm(" bx      lr\n");}
    return ((uint32_t) 0UL);
}

__attribute__((naked)) MCU_nTHREAD_LEVEL MCU__enSetThreadLevel(MCU_nTHREAD_LEVEL enLevel)
{
    {__asm(" mrs     r1, CONTROL\n");}
    {__asm(" ubfx    r2, r1, #0, #1\n");}
    {__asm(" bfi     r1, r0, #0, #1\n");}
    {__asm(" msr     CONTROL, r1\n");}
    {__asm(" isb\n");}
    {__asm(" mov     r0, r2\n");}
    {__asm(" bx      lr\n");}
    return ((MCU_nTHREAD_LEVEL) 0UL);
}

__attribute__((naked)) MCU_nTHREAD_LEVEL MCU__enGetThreadLevel(void)
{
    {__asm(" mrs     r1, CONTROL\n");}
    {__asm(" ubfx    r0, r1, #0, #1\n");}
    {__asm(" bx      lr\n");}
    return ((MCU_nTHREAD_LEVEL) 0UL);
}


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

__attribute__((naked)) MCU_nENABLE MCU__enDisGlobalInterrupt(void)
{
    {__asm(" mrs     r0, PRIMASK\n"
           " cpsid   i\n"
           " bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}

__attribute__((naked)) MCU_nENABLE MCU__enEnGlobalInterrupt(void)
{
    {__asm(" mrs     r0, PRIMASK\n"
           " cpsie   i\n"
           " bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}

__attribute__((naked)) MCU_nENABLE MCU__enSetGlobalInterrupt(MCU_nENABLE enStateInterrupt)
{
    {__asm(" mrs     r1, PRIMASK\n");}

    if(MCU_enENABLE_ENA == enStateInterrupt)
    {
        {__asm(" cpsie   i\n");}
    }
    else
    {
        {__asm(" cpsid   i\n");}

    }
    {__asm(" mov     r0, r1\n");}
    {__asm(" bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}

__attribute__((naked)) MCU_nENABLE MCU__enGetGlobalInterrupt(void)
{
    {__asm(" mrs     r0, PRIMASK\n"
           " bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}


__attribute__((naked)) MCU_nENABLE MCU__enDisGlobalInterrupt_RAM(void)
{
    {__asm(" mrs     r0, PRIMASK\n"
           " cpsid   i\n"
           " bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}

__attribute__((naked)) MCU_nENABLE MCU__enEnGlobalInterrupt_RAM(void)
{
    {__asm(" mrs     r0, PRIMASK\n"
           " cpsie   i\n"
           " bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}

__attribute__((naked)) MCU_nENABLE MCU__enSetGlobalInterrupt_RAM(MCU_nENABLE enStateInterrupt)
{
    {__asm(" mrs     r1, PRIMASK\n");}

    if(MCU_enENABLE_ENA == enStateInterrupt)
    {
        {__asm(" cpsie   i\n");}
    }
    else
    {
        {__asm(" cpsid   i\n");}

    }
    {__asm(" mov     r0, r1\n");}
    {__asm(" bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}

__attribute__((naked)) MCU_nENABLE MCU__enGetGlobalInterrupt_RAM(void)
{
    {__asm(" mrs     r0, PRIMASK\n"
           " bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}

__attribute__((naked)) MCU_nPRIORITY MCU__enSetBasePriorityInterrupt(MCU_nPRIORITY enStateInterrupt)
{
    {__asm(" and     r1, r0, #0x7\n");}
    {__asm(" lsl     r1, #0x5\n");}
    {__asm(" mrs     r2, BASEPRI\n");}
    {__asm(" ubfx    r0, r2, #5, #3\n");}
    {__asm(" msr     BASEPRI, r1\n");}
    {__asm(" dsb\n");}
    {__asm(" isb\n");}
    {__asm(" bx      lr\n");}
    return ((MCU_nPRIORITY) 0UL);
}

__attribute__((naked)) MCU_nPRIORITY MCU__enGetBasePriorityInterrupt(void)
{
    {__asm(" mrs     r1, BASEPRI\n");}
    {__asm(" lsr     r0, r1, #0x5\n");}
    {__asm(" and     r0, #0x7\n");}
    {__asm(" bx      lr\n");}
    return ((MCU_nPRIORITY) 0UL);
}

__attribute__((naked)) MCU_nPRIORITY MCU__enSetBasePriorityInterrupt_RAM(MCU_nPRIORITY enStateInterrupt)
{
    {__asm(" and     r1, r0, #0x7\n");}
    {__asm(" lsl     r1, #0x5\n");}
    {__asm(" mrs     r0, BASEPRI\n");}
    {__asm(" ubfx    r0, r2, #5, #3\n");}
    {__asm(" msr     BASEPRI, r1\n");}
    {__asm(" dsb\n");}
    {__asm(" isb\n");}
    {__asm(" bx      lr\n");}
    return ((MCU_nPRIORITY) 0UL);
}

__attribute__((naked)) MCU_nPRIORITY MCU__enGetBasePriorityInterrupt_RAM(void)
{
    {__asm(" mrs     r1, BASEPRI\n");}
    {__asm(" lsr     r0, r1, #0x5\n");}
    {__asm(" and     r0, #0x7\n");}
    {__asm(" bx      lr\n");}
    return ((MCU_nPRIORITY) 0UL);
}

void MCU__vWaitForInterrupt_RAM(void)
{
    {__asm(" wfi");}
}

void MCU__vWaitForEvent_RAM(void)
{
    {__asm(" wfe");}
}

void MCU__vSendEvent_RAM(void)
{
    {__asm(" sev");}
}

__attribute__((naked)) MCU_nENABLE MCU__enDisGlobalFault(void)
{
    {__asm(" mrs     r0, FAULTMASK\n"
           " cpsid   f\n"
           " bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}

__attribute__((naked)) MCU_nENABLE MCU__enEnGlobalFault(void)
{
    {__asm(" mrs     r0, FAULTMASK\n"
           " cpsie   f\n"
           " bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}

__attribute__((naked)) MCU_nENABLE MCU__enSetGlobalFault(MCU_nENABLE enStateInterrupt)
{
    {__asm(" mrs     r1, FAULTMASK\n");}

    if(MCU_enENABLE_ENA == enStateInterrupt)
    {
        {__asm(" cpsie   f\n");}
    }
    else
    {
        {__asm(" cpsid   f\n");}

    }
    {__asm(" mov     r0, r1\n");}
    {__asm(" bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}

__attribute__((naked)) MCU_nENABLE MCU__enGetGlobalFault(void)
{
    {__asm(" mrs     r0, FAULTMASK\n"
           " bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}


__attribute__((naked)) MCU_nENABLE MCU__enDisGlobalFault_RAM(void)
{
    {__asm(" mrs     r0, FAULTMASK\n"
           " cpsid   f\n"
           " bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}

__attribute__((naked)) MCU_nENABLE MCU__enEnGlobalFault_RAM(void)
{
    {__asm(" mrs     r0, FAULTMASK\n"
           " cpsie   f\n"
           " bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}

__attribute__((naked)) MCU_nENABLE MCU__enSetGlobalFault_RAM(MCU_nENABLE enStateInterrupt)
{
    {__asm(" mrs     r1, FAULTMASK\n");}

    if(MCU_enENABLE_ENA == enStateInterrupt)
    {
        {__asm(" cpsie   f\n");}
    }
    else
    {
        {__asm(" cpsid   f\n");}

    }
    {__asm(" mov     r0, r1\n");}
    {__asm(" bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}

__attribute__((naked)) MCU_nENABLE MCU__enGetGlobalFault_RAM(void)
{
    {__asm(" mrs     r0, FAULTMASK\n"
           " bx      lr\n");}
    return ((MCU_nENABLE) 0UL);
}

/**
 *
 * @file MCU_FloatingPoint.c
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
#include <xDriver_MCU/Common/xHeader/MCU_FloatingPoint.h>


__attribute__((naked)) UBase_t MCU__uxSetFPUStatusControl(UBase_t uxValueArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " vmsr    FPSCR, r0\n"
          " mov     r0, r1 \n"
          " bx      lr\n");
#ifndef __TI_CLANG__
        return (0UL);
#endif
}


__attribute__((naked)) void MCU__vSetFPUStatusControl(UBase_t uxValueArg)
{
    __asm volatile(
          " vmsr    FPSCR, r0\n");
}

__attribute__((naked)) UBase_t MCU__uxGetFPUStatusControl(void)
{
    __asm volatile(
          " vmrs    r0, FPSCR\n"
          " bx      lr\n");
#ifndef __TI_CLANG__
       return (0UL);
#endif
}


__attribute__((naked)) UBase_t MCU__uxSetFPUStatusControlMask(UBase_t uxBitMaskArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " mov     r2, r1\n"
          " orr     r1, r0\n"
          " vmsr    FPSCR, r1\n"
          " mov     r0, r2 \n"
          " bx      lr\n");
#ifndef __TI_CLANG__
        return (0UL);
#endif
}

__attribute__((naked)) UBase_t MCU__uxClearFPUStatusControlMask(UBase_t uxBitMaskArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " mov     r2, r1\n"
          " bic     r1, r0\n"
          " vmsr    FPSCR, r1\n"
          " mov     r0, r2 \n"
          " bx      lr\n");
#ifndef __TI_CLANG__
        return (0UL);
#endif
}


UBase_t MCU__uxFPUStatusControlMask(UBase_t uxBitMaskArg, UBase_t uxValueArg)
{
    UBase_t uxValueReg;
    if(0U == uxValueArg)
    {
        uxValueReg = MCU__uxClearFPUStatusControlMask(uxBitMaskArg);
    }
    else
    {
        uxValueReg = MCU__uxSetFPUStatusControlMask(uxBitMaskArg);
    }

    return (uxValueReg);
}


__attribute__((naked)) void MCU__vSetFPUStatusControlMask(UBase_t uxBitMaskArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " orr     r1, r0\n"
          " vmsr    FPSCR, r1\n"
          " bx      lr\n");
}

__attribute__((naked)) void MCU__vClearFPUStatusControlMask(UBase_t uxBitMaskArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " bic     r1, r0\n"
          " vmsr    FPSCR, r1\n"
          " bx      lr\n");
}


void MCU__vFPUStatusControlMask(UBase_t uxBitMaskArg, UBase_t uxValueArg)
{
    if(0U == uxValueArg)
    {
        MCU__uxClearFPUStatusControlMask(uxBitMaskArg);
    }
    else
    {
        MCU__uxSetFPUStatusControlMask(uxBitMaskArg);
    }
}

__attribute__((naked)) UBase_t MCU__uxGetFPUStatusControlMask(UBase_t uxBitMaskArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " and     r1, r0\n"
          " mov     r0, r1 \n"
          " bx      lr\n");
#ifndef __TI_CLANG__
        return (0UL);
#endif
}


__attribute__((naked)) UBase_t MCU__uxSetFPUStatusControlBit(UBase_t uxBitBitArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " mov     r2, r1\n"
          " lsr     r2, r0\n"
          " and     r2, #1\n"
          " mov     r3, #1\n"
          " lsl     r3, r0\n"
          " orr     r1, r3\n"
          " vmsr    FPSCR, r1\n"
          " mov     r0, r2 \n"
          " bx      lr\n");
#ifndef __TI_CLANG__
        return (0UL);
#endif
}

__attribute__((naked)) UBase_t MCU__uxClearFPUStatusControlBit(UBase_t uxBitBitArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " mov     r2, r1\n"
          " lsr     r2, r0\n"
          " and     r2, #1\n"
          " mov     r3, #1\n"
          " lsl     r3, r0\n"
          " bic     r1, r3\n"
          " vmsr    FPSCR, r1\n"
          " mov     r0, r2 \n"
          " bx      lr\n");
#ifndef __TI_CLANG__
        return (0UL);
#endif
}


UBase_t MCU__uxFPUStatusControlBit(UBase_t uxBitBitArg, UBase_t uxValueArg)
{
    UBase_t uxValueReg;
    if(0U == uxValueArg)
    {
        uxValueReg = MCU__uxSetFPUStatusControlBit(uxBitBitArg);
    }
    else
    {
        uxValueReg = MCU__uxClearFPUStatusControlBit(uxBitBitArg);
    }

    return (uxValueReg);
}


__attribute__((naked)) void MCU__vSetFPUStatusControlBit(UBase_t uxBitBitArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " mov     r2, #1\n"
          " lsl     r2, r0\n"
          " orr     r1, r2\n"
          " vmsr    FPSCR, r1\n"
          " bx      lr\n");
}

__attribute__((naked)) void MCU__vClearFPUStatusControlBit(UBase_t uxBitBitArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " mov     r2, #1\n"
          " lsl     r2, r0\n"
          " bic     r1, r2\n"
          " vmsr    FPSCR, r1\n"
          " bx      lr\n");
}


void MCU__vFPUStatusControlBit(UBase_t uxBitBitArg, UBase_t uxValueArg)
{
    if(0U == uxValueArg)
    {
        MCU__uxSetFPUStatusControlBit(uxBitBitArg);
    }
    else
    {
        MCU__uxClearFPUStatusControlBit(uxBitBitArg);
    }
}

__attribute__((naked)) UBase_t MCU__uxGetFPUStatusControlBit(UBase_t uxBitPosArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " lsr     r1, r0\n"
          " mov     r0, r1 \n"
          " bx      lr\n");
#ifndef __TI_CLANG__
        return (0UL);
#endif
}

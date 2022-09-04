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


__attribute__((naked)) uint32_t MCU__u32SetFPUStatusControl(uint32_t u32ValueArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " vmsr    FPSCR, r0\n"
          " mov     r0, r1 \n"
          " bx      lr\n");
        return (0UL);
}


__attribute__((naked)) void MCU__vSetFPUStatusControl(uint32_t u32ValueArg)
{
    __asm volatile(
          " vmsr    FPSCR, r0\n");
}

__attribute__((naked)) uint32_t MCU__u32GetFPUStatusControl(void)
{
    __asm volatile(
          " vmrs    r0, FPSCR\n"
          " bx      lr\n");
       return (0UL);
}


__attribute__((naked)) uint32_t MCU__u32SetFPUStatusControlMask(uint32_t u32BitMaskArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " mov     r2, r1\n"
          " orr     r1, r0\n"
          " vmsr    FPSCR, r1\n"
          " mov     r0, r2 \n"
          " bx      lr\n");
        return (0UL);
}

__attribute__((naked)) uint32_t MCU__u32ClearFPUStatusControlMask(uint32_t u32BitMaskArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " mov     r2, r1\n"
          " bic     r1, r0\n"
          " vmsr    FPSCR, r1\n"
          " mov     r0, r2 \n"
          " bx      lr\n");
        return (0UL);
}


uint32_t MCU__u32FPUStatusControlMask(uint32_t u32BitMaskArg, uint32_t u32ValueArg)
{
    uint32_t u32ValueReg;
    if(0U == u32ValueArg)
    {
        u32ValueReg = MCU__u32ClearFPUStatusControlMask(u32BitMaskArg);
    }
    else
    {
        u32ValueReg = MCU__u32SetFPUStatusControlMask(u32BitMaskArg);
    }

    return (u32ValueReg);
}


__attribute__((naked)) void MCU__vSetFPUStatusControlMask(uint32_t u32BitMaskArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " orr     r1, r0\n"
          " vmsr    FPSCR, r1\n"
          " bx      lr\n");
}

__attribute__((naked)) void MCU__vClearFPUStatusControlMask(uint32_t u32BitMaskArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " bic     r1, r0\n"
          " vmsr    FPSCR, r1\n"
          " bx      lr\n");
}


void MCU__vFPUStatusControlMask(uint32_t u32BitMaskArg, uint32_t u32ValueArg)
{
    if(0U == u32ValueArg)
    {
        MCU__u32ClearFPUStatusControlMask(u32BitMaskArg);
    }
    else
    {
        MCU__u32SetFPUStatusControlMask(u32BitMaskArg);
    }
}

__attribute__((naked)) uint32_t MCU__u32GetFPUStatusControlMask(uint32_t u32BitMaskArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " and     r1, r0\n"
          " mov     r0, r1 \n"
          " bx      lr\n");
        return (0UL);
}


__attribute__((naked)) uint32_t MCU__u32SetFPUStatusControlBit(uint32_t u32BitBitArg)
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
        return (0UL);
}

__attribute__((naked)) uint32_t MCU__u32ClearFPUStatusControlBit(uint32_t u32BitBitArg)
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
        return (0UL);
}


uint32_t MCU__u32FPUStatusControlBit(uint32_t u32BitBitArg, uint32_t u32ValueArg)
{
    uint32_t u32ValueReg;
    if(0U == u32ValueArg)
    {
        u32ValueReg = MCU__u32SetFPUStatusControlBit(u32BitBitArg);
    }
    else
    {
        u32ValueReg = MCU__u32ClearFPUStatusControlBit(u32BitBitArg);
    }

    return (u32ValueReg);
}


__attribute__((naked)) void MCU__vSetFPUStatusControlBit(uint32_t u32BitBitArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " mov     r2, #1\n"
          " lsl     r2, r0\n"
          " orr     r1, r2\n"
          " vmsr    FPSCR, r1\n"
          " bx      lr\n");
}

__attribute__((naked)) void MCU__vClearFPUStatusControlBit(uint32_t u32BitBitArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " mov     r2, #1\n"
          " lsl     r2, r0\n"
          " bic     r1, r2\n"
          " vmsr    FPSCR, r1\n"
          " bx      lr\n");
}


void MCU__vFPUStatusControlBit(uint32_t u32BitBitArg, uint32_t u32ValueArg)
{
    if(0U == u32ValueArg)
    {
        MCU__u32SetFPUStatusControlBit(u32BitBitArg);
    }
    else
    {
        MCU__u32ClearFPUStatusControlBit(u32BitBitArg);
    }
}

__attribute__((naked)) uint32_t MCU__u32GetFPUStatusControlBit(uint32_t u32BitPosArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " lsr     r1, r0\n"
          " mov     r0, r1 \n"
          " bx      lr\n");
        return (0UL);
}

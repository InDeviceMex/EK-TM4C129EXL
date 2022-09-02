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


uint32_t MCU__u32SetFPUStatusControl(uint32_t u32ValueArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " vmsr    FPSCR, r0\n"
          " mov     r0, r1\n");
    return (u32ValueArg);
}


void MCU__vSetFPUStatusControl(uint32_t u32ValueArg)
{
    __asm volatile(
          " vmsr    FPSCR, r0\n");
}

uint32_t MCU__u32GetFPUStatusControl(void)
{
    __asm volatile(
          " vmrs    r0, FPSCR\n");
}


uint32_t MCU__u32SetFPUStatusControlMask(uint32_t u32BitMaskArg, uint32_t u32ValueArg)
{
    __asm volatile(
          " vmrs    r2, FPSCR\n"
          " cmp     r1, #0\n"
          " ite     eq\n"
          " biceq   r2, r0\n"
          " orrne   r2, r0\n"
          " vmsr    FPSCR, r2\n"
          " mov     r0, r1\n");
    return (u32BitMaskArg);
}


void MCU__vSetFPUStatusControlMask(uint32_t u32BitMaskArg, uint32_t u32ValueArg)
{
    __asm volatile(
          " vmrs    r2, FPSCR\n"
          " cmp     r1, #0\n"
          " ite     eq\n"
          " biceq   r2, r0\n"
          " orrne   r2, r0\n"
          " vmsr    FPSCR, r2\n");
}

uint32_t MCU__u32GetFPUStatusControlMask(uint32_t u32BitMaskArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " and     r1, r0\n"
          " mov     r0, r1\n");
    return (u32BitMaskArg);
}


uint32_t MCU__u32SetFPUStatusControlBit(uint32_t u32BitPosArg, uint32_t u32ValueArg)
{
    __asm volatile(
          " vmrs    r2, FPSCR\n"
          " lsr     r2, r0\n"
          " mov     r3, #1\n"
          " lsl     r3, r0\n"
          " cmp     r1, #0\n"
          " ite     eq\n"
          " biceq   r2, r3\n"
          " orrne   r2, r3\n"
          " vmsr    FPSCR, r2\n"
          " mov     r0, r3\n");
    return (u32BitPosArg);
}

void MCU__vSetFPUStatusControlBit(uint32_t u32BitPosArg, uint32_t u32ValueArg)
{
    __asm volatile(
          " vmrs    r2, FPSCR\n"
          " mov     r3, #1\n"
          " lsl     r3, r0\n"
          " cmp     r1, #0\n"
          " ite     eq\n"
          " biceq   r2, r3\n"
          " orrne   r2, r3\n"
          " vmsr    FPSCR, r2\n");
}

uint32_t MCU__u32GetFPUStatusControlBit(uint32_t u32BitPosArg)
{
    __asm volatile(
          " vmrs    r1, FPSCR\n"
          " lsr     r1, r0\n"
          " mov     r0, r1\n");
    return (u32BitPosArg);
}

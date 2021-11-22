/**
 *
 * @file MCU_SpecialIntructions.c
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
 * @verbatim 28 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Common/xHeader/MCU_SpecialIntructions.h>

__attribute__((naked))
uint32_t MCU__u32GetCounLeadingZeros(uint32_t u32Value)
{
    __asm volatile(
          " clz     r0, r0\n"
          " bx      lr\n");
    return (0UL);
}

__attribute__((naked))
uint8_t MCU__u8ReverseByte(uint8_t u8Value)
{
    __asm volatile(
          " rbit     r0, r0\n"
          " lsr     r0, r0, #24\n"
          " bx      lr\n");
    return (0UL);
}

__attribute__((naked))
uint16_t MCU__u16ReverseHalfWorld(uint16_t u16Value)
{
    __asm volatile(
          " rbit     r0, r0\n"
          " lsr     r0, r0, #16\n"
          " bx      lr\n");
    return (0UL);
}

__attribute__((naked))
uint32_t MCU__u32ReverseWorld(uint32_t u32Value)
{
    __asm volatile(
          " rbit     r0, r0\n"
          " bx      lr\n");
    return (0UL);
}



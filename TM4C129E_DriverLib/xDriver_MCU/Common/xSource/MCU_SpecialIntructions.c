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

__attribute__((naked)) UBase_t MCU__uxGetCounLeadingZeros(UBase_t uxValueArg)
{
    __asm volatile(
          " clz     r0, r0\n"
          " bx      lr\n");
#ifndef __TI_CLANG__
          return (0UL);
#endif
}

__attribute__((naked)) uint8_t MCU__u8ReverseByte(uint8_t u8Value)
{
    __asm volatile(
          " rbit     r1, r0\n"
          " lsr     r0, r1, #24\n"
          " bx      lr\n");
#ifndef __TI_CLANG__
          return (0UL);
#endif
}

__attribute__((naked)) uint16_t MCU__u16ReverseHalfWorld(uint16_t u16Value)
{
    __asm volatile(
          " rbit     r1, r0\n"
          " lsr     r0, r1, #16\n"
          " bx      lr\n");
#ifndef __TI_CLANG__
          return (0UL);
#endif
}

__attribute__((naked)) UBase_t MCU__uxReverseWorld(UBase_t uxValueArg)
{
    __asm volatile(
          " rbit     r0, r0\n"
          " bx      lr\n");
#ifndef __TI_CLANG__
          return (0UL);
#endif
}



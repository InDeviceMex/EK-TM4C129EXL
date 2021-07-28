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

__attribute__((naked)) uint32_t MCU__u32GetCounLeadingZeros(uint32_t u32Value)
{
    {__asm(" clz     r1, r0\n");}
    {__asm(" mov     r0, r1\n");}
    {__asm(" bx      lr\n");}
    return (0UL);
}


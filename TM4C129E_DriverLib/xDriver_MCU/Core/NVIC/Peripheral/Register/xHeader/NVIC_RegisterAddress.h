/**
 *
 * @file NVIC_RegisterAddress.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERADDRESS_H_

#include <xDriver_MCU/Core/NVIC/Peripheral/xHeader/NVIC_Enum.h>

#define NVIC_BASE    ((uint32_t) 0xE000E000UL)
#define NVIC_OFFSET    ((uint32_t) 0x00000100UL)

#define NVIC_IRQ_MAX    (113UL)
#define NVIC_MAX    (3UL)
#define NVIC_PRI_BIT_OFFSET    (5UL)
#define NVIC_PRI_MAX    (8UL)
#define NVIC_PRI_MASK    (7UL)
#define NVIC_IPR_MAX    (31UL)

#define NVIC_ISER_OFFSET    ((uint32_t) 0x0100UL)
#define NVIC_ISER0_OFFSET    ((uint32_t) 0x0100UL)
#define NVIC_ISER1_OFFSET    ((uint32_t) 0x0104UL)
#define NVIC_ISER2_OFFSET    ((uint32_t) 0x0108UL)
#define NVIC_ISER3_OFFSET    ((uint32_t) 0x010CUL)

#define NVIC_ICER_OFFSET    ((uint32_t) 0x0180UL)
#define NVIC_ICER0_OFFSET    ((uint32_t) 0x0180UL)
#define NVIC_ICER1_OFFSET    ((uint32_t) 0x0184UL)
#define NVIC_ICER2_OFFSET    ((uint32_t) 0x0188UL)
#define NVIC_ICER3_OFFSET    ((uint32_t) 0x018CUL)

#define NVIC_ISPR_OFFSET    ((uint32_t) 0x0200UL)
#define NVIC_ISPR0_OFFSET    ((uint32_t) 0x0200UL)
#define NVIC_ISPR1_OFFSET    ((uint32_t) 0x0204UL)
#define NVIC_ISPR2_OFFSET    ((uint32_t) 0x0208UL)
#define NVIC_ISPR3_OFFSET    ((uint32_t) 0x020CUL)

#define NVIC_ICPR_OFFSET    ((uint32_t) 0x0280UL)
#define NVIC_ICPR0_OFFSET    ((uint32_t) 0x0280UL)
#define NVIC_ICPR1_OFFSET    ((uint32_t) 0x0284UL)
#define NVIC_ICPR2_OFFSET    ((uint32_t) 0x0288UL)
#define NVIC_ICPR3_OFFSET    ((uint32_t) 0x028CUL)

#define NVIC_IABR_OFFSET    ((uint32_t) 0x0300UL)
#define NVIC_IABR0_OFFSET    ((uint32_t) 0x0300UL)
#define NVIC_IABR1_OFFSET    ((uint32_t) 0x0304UL)
#define NVIC_IABR2_OFFSET    ((uint32_t) 0x0308UL)
#define NVIC_IABR3_OFFSET    ((uint32_t) 0x030CUL)

#define NVIC_IPR_OFFSET    ((uint32_t) 0x0400UL)
#define NVIC_IPR0_OFFSET    ((uint32_t) 0x0400UL)
#define NVIC_IPR1_OFFSET    ((uint32_t) 0x0404UL)
#define NVIC_IPR2_OFFSET    ((uint32_t) 0x0408UL)
#define NVIC_IPR3_OFFSET    ((uint32_t) 0x040CUL)
#define NVIC_IPR4_OFFSET    ((uint32_t) 0x0410UL)
#define NVIC_IPR5_OFFSET    ((uint32_t) 0x0414UL)
#define NVIC_IPR6_OFFSET    ((uint32_t) 0x0418UL)
#define NVIC_IPR7_OFFSET    ((uint32_t) 0x041CUL)
#define NVIC_IPR8_OFFSET    ((uint32_t) 0x0420UL)
#define NVIC_IPR9_OFFSET    ((uint32_t) 0x0424UL)
#define NVIC_IPR10_OFFSET    ((uint32_t) 0x0428UL)
#define NVIC_IPR11_OFFSET    ((uint32_t) 0x042CUL)
#define NVIC_IPR12_OFFSET    ((uint32_t) 0x0430UL)
#define NVIC_IPR13_OFFSET    ((uint32_t) 0x0434UL)
#define NVIC_IPR14_OFFSET    ((uint32_t) 0x0438UL)
#define NVIC_IPR15_OFFSET    ((uint32_t) 0x043CUL)
#define NVIC_IPR16_OFFSET    ((uint32_t) 0x0440UL)
#define NVIC_IPR17_OFFSET    ((uint32_t) 0x0444UL)
#define NVIC_IPR18_OFFSET    ((uint32_t) 0x0448UL)
#define NVIC_IPR19_OFFSET    ((uint32_t) 0x044CUL)
#define NVIC_IPR20_OFFSET    ((uint32_t) 0x0450UL)
#define NVIC_IPR21_OFFSET    ((uint32_t) 0x0454UL)
#define NVIC_IPR22_OFFSET    ((uint32_t) 0x0458UL)
#define NVIC_IPR23_OFFSET    ((uint32_t) 0x045CUL)
#define NVIC_IPR24_OFFSET    ((uint32_t) 0x0460UL)
#define NVIC_IPR25_OFFSET    ((uint32_t) 0x0464UL)
#define NVIC_IPR26_OFFSET    ((uint32_t) 0x0468UL)
#define NVIC_IPR27_OFFSET    ((uint32_t) 0x046CUL)
#define NVIC_IPR28_OFFSET    ((uint32_t) 0x0470UL)
#define NVIC_IPR29_OFFSET    ((uint32_t) 0x0474UL)
#define NVIC_IPR30_OFFSET    ((uint32_t) 0x0478UL)
#define NVIC_IPR31_OFFSET    ((uint32_t) 0x047CUL)

#define NVIC_STIR_OFFSET    ((uint32_t) 0x0F00UL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERADDRESS_H_ */

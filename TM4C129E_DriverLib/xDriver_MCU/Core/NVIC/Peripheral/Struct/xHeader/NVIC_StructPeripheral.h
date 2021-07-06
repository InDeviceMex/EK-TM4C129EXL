/**
 *
 * @file NVIC_StructPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_STRUCT_NVIC_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_STRUCT_NVIC_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/Core/NVIC/Peripheral/Struct/xHeader/NVIC_StructRegister.h>

typedef volatile struct
{
    volatile uint32_t ISER[4UL];                 /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register           */
    const uint32_t reserved0[28UL];
    volatile uint32_t ICER[4UL];                 /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register         */
    const uint32_t reserved1[28UL];
    volatile uint32_t ISPR[4UL];                 /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register          */
    const uint32_t reserved2[28UL];
    volatile uint32_t ICPR[4UL];                 /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register        */
    const uint32_t reserved3[28UL];
    volatile uint32_t IABR[4UL];                 /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register           */
    const uint32_t reserved4[60UL];
    volatile uint8_t IP[240UL];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
    const uint32_t reserved5[644UL];
    volatile  uint32_t STIR;                    /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register     */
}  NVICb_TypeDef;

typedef volatile struct
{
    volatile uint32_t ISER[4UL];                 /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register           */
    const uint32_t reserved0[28UL];
    volatile uint32_t ICER[4UL];                 /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register         */
    const uint32_t reserved1[28UL];
    volatile uint32_t ISPR[4UL];                 /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register          */
    const uint32_t reserved2[28UL];
    volatile uint32_t ICPR[4UL];                 /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register        */
    const uint32_t reserved3[28UL];
    volatile uint32_t IABR[4UL];                 /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register           */
    const uint32_t reserved4[60UL];
    volatile uint32_t IP[60];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
    const uint32_t reserved5[644UL];
    volatile  uint32_t STIR;                    /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register     */
}  NVICw_TypeDef;

typedef volatile struct
{
    union
    {
        volatile uint32_t ISER0;
        NVIC0_TypeDef ISER0_Bit;
    };
    union
    {
        volatile uint32_t ISER1;
        NVIC1_TypeDef ISER1_Bit;
    };
    union
    {
        volatile uint32_t ISER2;
        NVIC2_TypeDef ISER2_Bit;
    };
    union
    {
        volatile uint32_t ISER3;
        NVIC3_TypeDef ISER3_Bit;
    };
    uint32_t reserved[28UL];
    union
    {
        volatile uint32_t ICER0;
        NVIC0_TypeDef ICER0_Bit;
    };
    union
    {
        volatile uint32_t ICER1;
        NVIC1_TypeDef ICER1_Bit;
    };
    union
    {
        volatile uint32_t ICER2;
        NVIC2_TypeDef ICER2_Bit;
    };
    union
    {
        volatile uint32_t ICER3;
        NVIC3_TypeDef ICER3_Bit;
    };
    uint32_t reserved1[28UL];
    union
    {
        volatile uint32_t ISPR0;
        NVIC0_TypeDef ISPR0_Bit;
    };
    union
    {
        volatile uint32_t ISPR1;
        NVIC1_TypeDef ISPR1_Bit;
    };
    union
    {
        volatile uint32_t ISPR2;
        NVIC2_TypeDef ISPR2_Bit;
    };
    union
    {
        volatile uint32_t ISPR3;
        NVIC3_TypeDef ISPR3_Bit;
    };
    uint32_t reserved2[28UL];
    union
    {
        volatile uint32_t ICPR0;
        NVIC0_TypeDef ICPR0_Bit;
    };
    union
    {
        volatile uint32_t ICPR1;
        NVIC1_TypeDef ICPR1_Bit;
    };
    union
    {
        volatile uint32_t ICPR2;
        NVIC2_TypeDef ICPR2_Bit;
    };
    union
    {
        volatile uint32_t ICPR3;
        NVIC3_TypeDef ICPR3_Bit;
    };
    uint32_t reserved3[28UL];

    union
    {
        volatile uint32_t IABR0;
        NVIC0_TypeDef IABR0_Bit;
    };
    union
    {
        volatile uint32_t IABR1;
        NVIC1_TypeDef IABR1_Bit;
    };
    union
    {
        volatile uint32_t IABR2;
        NVIC2_TypeDef IABR2_Bit;
    };
    union
    {
        volatile uint32_t IABR3;
        NVIC3_TypeDef IABR3_Bit;
    };
    uint32_t reserved4[60UL];
    union
    {
        volatile uint8_t IPR0b[4];
        IPRb_TypeDef IPR0b_Bit[4];
        volatile uint32_t IPR0w;
        IPRw_TypeDef IPR0w_Bit;
        volatile uint32_t IPR0;
        IPR0_TypeDef IPR0_Bit;
    };
    union
    {
        volatile uint8_t IPR1b[4];
        IPRb_TypeDef IPR1b_Bit[4];
        volatile uint32_t IPR1w;
        IPRw_TypeDef IPR1w_Bit;
        volatile uint32_t IPR1;
        IPR1_TypeDef IPR1_Bit;
    };
    union
    {
        volatile uint8_t IPR2b[4];
        IPRb_TypeDef IPR2b_Bit[4];
        volatile uint32_t IPR2w;
        IPRw_TypeDef IPR2w_Bit;
        volatile uint32_t IPR2;
        IPR2_TypeDef IPR2_Bit;
    };
    union
    {
        volatile uint8_t IPR3b[4];
        IPRb_TypeDef IPR3b_Bit[4];
        volatile uint32_t IPR3w;
        IPRw_TypeDef IPR3w_Bit;
        volatile uint32_t IPR3;
        IPR3_TypeDef IPR3_Bit;
    };
    union
    {
        volatile uint8_t IPR4b[4];
        IPRb_TypeDef IPR4b_Bit[4];
        volatile uint32_t IPR4w;
        IPRw_TypeDef IPR4w_Bit;
        volatile uint32_t IPR4;
        IPR4_TypeDef IPR4_Bit;
    };
    union
    {
        volatile uint8_t IPR5b[4];
        IPRb_TypeDef IPR5b_Bit[4];
        volatile uint32_t IPR5w;
        IPRw_TypeDef IPR5w_Bit;
        volatile uint32_t IPR5;
        IPR5_TypeDef IPR5_Bit;
    };
    union
    {
        volatile uint8_t IPR6b[4];
        IPRb_TypeDef IPR6b_Bit[4];
        volatile uint32_t IPR6w;
        IPRw_TypeDef IPR6w_Bit;
        volatile uint32_t IPR6;
        IPR6_TypeDef IPR6_Bit;
    };
    union
    {
        volatile uint8_t IPR7b[4];
        IPRb_TypeDef IPR7b_Bit[4];
        volatile uint32_t IPR7w;
        IPRw_TypeDef IPR7w_Bit;
        volatile uint32_t IPR7;
        IPR7_TypeDef IPR7_Bit;
    };
    union
    {
        volatile uint8_t IPR8b[4];
        IPRb_TypeDef IPR8b_Bit[4];
        volatile uint32_t IPR8w;
        IPRw_TypeDef IPR8w_Bit;
        volatile uint32_t IPR8;
        IPR8_TypeDef IPR8_Bit;
    };
    union
    {
        volatile uint8_t IPR9b[4];
        IPRb_TypeDef IPR9b_Bit[4];
        volatile uint32_t IPR9w;
        IPRw_TypeDef IPR9w_Bit;
        volatile uint32_t IPR9;
        IPR9_TypeDef IPR9_Bit;
    };
    union
    {
        volatile uint8_t IPR10b[4];
        IPRb_TypeDef IPR10b_Bit[4];
        volatile uint32_t IPR10w;
        IPRw_TypeDef IPR10w_Bit;
        volatile uint32_t IPR10;
        IPR10_TypeDef IPR10_Bit;
    };
    union
    {
        volatile uint8_t IPR11b[4];
        IPRb_TypeDef IPR11b_Bit[4];
        volatile uint32_t IPR11w;
        IPRw_TypeDef IPR11w_Bit;
        volatile uint32_t IPR11;
        IPR11_TypeDef IPR11_Bit;
    };
    union
    {
        volatile uint8_t IPR12b[4];
        IPRb_TypeDef IPR12b_Bit[4];
        volatile uint32_t IPR12w;
        IPRw_TypeDef IPR12w_Bit;
        volatile uint32_t IPR12;
        IPR12_TypeDef IPR12_Bit;
    };
    union
    {
        volatile uint8_t IPR13b[4];
        IPRb_TypeDef IPR13b_Bit[4];
        volatile uint32_t IPR13w;
        IPRw_TypeDef IPR13w_Bit;
        volatile uint32_t IPR13;
        IPR13_TypeDef IPR13_Bit;
    };
    union
    {
        volatile uint8_t IPR14b[4];
        IPRb_TypeDef IPR14b_Bit[4];
        volatile uint32_t IPR14w;
        IPRw_TypeDef IPR14w_Bit;
        volatile uint32_t IPR14;
        IPR14_TypeDef IPR14_Bit;
    };
    union
    {
        volatile uint8_t IPR15b[4];
        IPRb_TypeDef IPR15b_Bit[4];
        volatile uint32_t IPR15w;
        IPRw_TypeDef IPR15w_Bit;
        volatile uint32_t IPR15;
        IPR15_TypeDef IPR15_Bit;
    };
    union
    {
        volatile uint8_t IPR16b[4];
        IPRb_TypeDef IPR16b_Bit[4];
        volatile uint32_t IPR16w;
        IPRw_TypeDef IPR16w_Bit;
        volatile uint32_t IPR16;
        IPR16_TypeDef IPR16_Bit;
    };
    union
    {
        volatile uint8_t IPR17b[4];
        IPRb_TypeDef IPR17b_Bit[4];
        volatile uint32_t IPR17w;
        IPRw_TypeDef IPR17w_Bit;
        volatile uint32_t IPR17;
        IPR17_TypeDef IPR17_Bit;
    };
    union
    {
        volatile uint8_t IPR18b[4];
        IPRb_TypeDef IPR18b_Bit[4];
        volatile uint32_t IPR18w;
        IPRw_TypeDef IPR18w_Bit;
        volatile uint32_t IPR18;
        IPR18_TypeDef IPR18_Bit;
    };
    union
    {
        volatile uint8_t IPR19b[4];
        IPRb_TypeDef IPR19b_Bit[4];
        volatile uint32_t IPR19w;
        IPRw_TypeDef IPR19w_Bit;
        volatile uint32_t IPR19;
        IPR19_TypeDef IPR19_Bit;
    };
    union
    {
        volatile uint8_t IPR20b[4];
        IPRb_TypeDef IPR20b_Bit[4];
        volatile uint32_t IPR20w;
        IPRw_TypeDef IPR20w_Bit;
        volatile uint32_t IPR20;
        IPR20_TypeDef IPR20_Bit;
    };
    union
    {
        volatile uint8_t IPR21b[4];
        IPRb_TypeDef IPR21b_Bit[4];
        volatile uint32_t IPR21w;
        IPRw_TypeDef IPR21w_Bit;
        volatile uint32_t IPR21;
        IPR21_TypeDef IPR21_Bit;
    };
    union
    {
        volatile uint8_t IPR22b[4];
        IPRb_TypeDef IPR22b_Bit[4];
        volatile uint32_t IPR22w;
        IPRw_TypeDef IPR22w_Bit;
        volatile uint32_t IPR22;
        IPR22_TypeDef IPR22_Bit;
    };
    union
    {
        volatile uint8_t IPR23b[4];
        IPRb_TypeDef IPR23b_Bit[4];
        volatile uint32_t IPR23w;
        IPRw_TypeDef IPR23w_Bit;
        volatile uint32_t IPR23;
        IPR23_TypeDef IPR23_Bit;
    };
    union
    {
        volatile uint8_t IPR24b[4];
        IPRb_TypeDef IPR24b_Bit[4];
        volatile uint32_t IPR24w;
        IPRw_TypeDef IPR24w_Bit;
        volatile uint32_t IPR24;
        IPR24_TypeDef IPR24_Bit;
    };
    union
    {
        volatile uint8_t IPR25b[4];
        IPRb_TypeDef IPR25b_Bit[4];
        volatile uint32_t IPR25w;
        IPRw_TypeDef IPR25w_Bit;
        volatile uint32_t IPR25;
        IPR25_TypeDef IPR25_Bit;
    };
    union
    {
        volatile uint8_t IPR26b[4];
        IPRb_TypeDef IPR26b_Bit[4];
        volatile uint32_t IPR26w;
        IPRw_TypeDef IPR26w_Bit;
        volatile uint32_t IPR26;
        IPR26_TypeDef IPR26_Bit;
    };
    union
    {
        volatile uint8_t IPR27b[4];
        IPRb_TypeDef IPR27b_Bit[4];
        volatile uint32_t IPR27w;
        IPRw_TypeDef IPR27w_Bit;
        volatile uint32_t IPR27;
        IPR27_TypeDef IPR27_Bit;
    };
    union
    {
        volatile uint8_t IPR28b[4];
        IPRb_TypeDef IPR28b_Bit[4];
        volatile uint32_t IPR28w;
        IPRw_TypeDef IPR28w_Bit;
        volatile uint32_t IPR28;
        IPR28_TypeDef IPR28_Bit;
    };
    union
    {
        volatile uint8_t IPR29b[4];
        IPRb_TypeDef IPR29b_Bit[4];
        volatile uint32_t IPR29w;
        IPRw_TypeDef IPR29w_Bit;
        volatile uint32_t IPR29;
        IPR29_TypeDef IPR29_Bit;
    };
    union
    {
        volatile uint8_t IPR30b[4];
        IPRb_TypeDef IPR30b_Bit[4];
        volatile uint32_t IPR30w;
        IPRw_TypeDef IPR30w_Bit;
        volatile uint32_t IPR30;
        IPR30_TypeDef IPR30_Bit;
    };
    union
    {
        volatile uint8_t IPR31b[4];
        IPRb_TypeDef IPR31b_Bit[4];
        volatile uint32_t IPR31w;
        IPRw_TypeDef IPR31w_Bit;
        volatile uint32_t IPR31;
        IPR31_TypeDef IPR31_Bit;
    };
    uint32_t reserved5[662UL];
    union
    {
        volatile uint32_t STIR;
        STIR_TypeDef STIR_Bit;
    };
}NVIC_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_STRUCT_NVIC_STRUCTPERIPHERAL_H_ */

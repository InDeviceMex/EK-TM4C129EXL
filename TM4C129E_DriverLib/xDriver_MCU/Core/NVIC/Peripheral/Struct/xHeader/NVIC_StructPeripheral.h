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
    volatile UBase_t ISER[4UL];                 /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register           */
    const UBase_t reserved0[28UL];
    volatile UBase_t ICER[4UL];                 /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register         */
    const UBase_t reserved1[28UL];
    volatile UBase_t ISPR[4UL];                 /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register          */
    const UBase_t reserved2[28UL];
    volatile UBase_t ICPR[4UL];                 /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register        */
    const UBase_t reserved3[28UL];
    volatile UBase_t IABR[4UL];                 /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register           */
    const UBase_t reserved4[60UL];
    volatile uint8_t IP[240UL];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
    const UBase_t reserved5[644UL];
    volatile  UBase_t STIR;                    /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register     */
}  NVICb_t;

typedef volatile struct
{
    volatile UBase_t ISER[4UL];                 /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register           */
    const UBase_t reserved0[28UL];
    volatile UBase_t ICER[4UL];                 /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register         */
    const UBase_t reserved1[28UL];
    volatile UBase_t ISPR[4UL];                 /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register          */
    const UBase_t reserved2[28UL];
    volatile UBase_t ICPR[4UL];                 /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register        */
    const UBase_t reserved3[28UL];
    volatile UBase_t IABR[4UL];                 /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register           */
    const UBase_t reserved4[60UL];
    volatile UBase_t IP[60];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
    const UBase_t reserved5[644UL];
    volatile  UBase_t STIR;                    /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register     */
}  NVICw_t;

typedef volatile struct
{
    union
    {
        volatile UBase_t ISER0;
        NVIC0_t ISER0_Bit;
    };
    union
    {
        volatile UBase_t ISER1;
        NVIC1_t ISER1_Bit;
    };
    union
    {
        volatile UBase_t ISER2;
        NVIC2_t ISER2_Bit;
    };
    union
    {
        volatile UBase_t ISER3;
        NVIC3_t ISER3_Bit;
    };
    UBase_t reserved[28UL];
    union
    {
        volatile UBase_t ICER0;
        NVIC0_t ICER0_Bit;
    };
    union
    {
        volatile UBase_t ICER1;
        NVIC1_t ICER1_Bit;
    };
    union
    {
        volatile UBase_t ICER2;
        NVIC2_t ICER2_Bit;
    };
    union
    {
        volatile UBase_t ICER3;
        NVIC3_t ICER3_Bit;
    };
    UBase_t reserved1[28UL];
    union
    {
        volatile UBase_t ISPR0;
        NVIC0_t ISPR0_Bit;
    };
    union
    {
        volatile UBase_t ISPR1;
        NVIC1_t ISPR1_Bit;
    };
    union
    {
        volatile UBase_t ISPR2;
        NVIC2_t ISPR2_Bit;
    };
    union
    {
        volatile UBase_t ISPR3;
        NVIC3_t ISPR3_Bit;
    };
    UBase_t reserved2[28UL];
    union
    {
        volatile UBase_t ICPR0;
        NVIC0_t ICPR0_Bit;
    };
    union
    {
        volatile UBase_t ICPR1;
        NVIC1_t ICPR1_Bit;
    };
    union
    {
        volatile UBase_t ICPR2;
        NVIC2_t ICPR2_Bit;
    };
    union
    {
        volatile UBase_t ICPR3;
        NVIC3_t ICPR3_Bit;
    };
    UBase_t reserved3[28UL];

    union
    {
        volatile UBase_t IABR0;
        NVIC0_t IABR0_Bit;
    };
    union
    {
        volatile UBase_t IABR1;
        NVIC1_t IABR1_Bit;
    };
    union
    {
        volatile UBase_t IABR2;
        NVIC2_t IABR2_Bit;
    };
    union
    {
        volatile UBase_t IABR3;
        NVIC3_t IABR3_Bit;
    };
    UBase_t reserved4[60UL];
    union
    {
        volatile uint8_t IPR0b[4];
        IPRb_t IPR0b_Bit[4];
        volatile UBase_t IPR0w;
        IPRw_t IPR0w_Bit;
        volatile UBase_t IPR0;
        IPR0_t IPR0_Bit;
    };
    union
    {
        volatile uint8_t IPR1b[4];
        IPRb_t IPR1b_Bit[4];
        volatile UBase_t IPR1w;
        IPRw_t IPR1w_Bit;
        volatile UBase_t IPR1;
        IPR1_t IPR1_Bit;
    };
    union
    {
        volatile uint8_t IPR2b[4];
        IPRb_t IPR2b_Bit[4];
        volatile UBase_t IPR2w;
        IPRw_t IPR2w_Bit;
        volatile UBase_t IPR2;
        IPR2_t IPR2_Bit;
    };
    union
    {
        volatile uint8_t IPR3b[4];
        IPRb_t IPR3b_Bit[4];
        volatile UBase_t IPR3w;
        IPRw_t IPR3w_Bit;
        volatile UBase_t IPR3;
        IPR3_t IPR3_Bit;
    };
    union
    {
        volatile uint8_t IPR4b[4];
        IPRb_t IPR4b_Bit[4];
        volatile UBase_t IPR4w;
        IPRw_t IPR4w_Bit;
        volatile UBase_t IPR4;
        IPR4_t IPR4_Bit;
    };
    union
    {
        volatile uint8_t IPR5b[4];
        IPRb_t IPR5b_Bit[4];
        volatile UBase_t IPR5w;
        IPRw_t IPR5w_Bit;
        volatile UBase_t IPR5;
        IPR5_t IPR5_Bit;
    };
    union
    {
        volatile uint8_t IPR6b[4];
        IPRb_t IPR6b_Bit[4];
        volatile UBase_t IPR6w;
        IPRw_t IPR6w_Bit;
        volatile UBase_t IPR6;
        IPR6_t IPR6_Bit;
    };
    union
    {
        volatile uint8_t IPR7b[4];
        IPRb_t IPR7b_Bit[4];
        volatile UBase_t IPR7w;
        IPRw_t IPR7w_Bit;
        volatile UBase_t IPR7;
        IPR7_t IPR7_Bit;
    };
    union
    {
        volatile uint8_t IPR8b[4];
        IPRb_t IPR8b_Bit[4];
        volatile UBase_t IPR8w;
        IPRw_t IPR8w_Bit;
        volatile UBase_t IPR8;
        IPR8_t IPR8_Bit;
    };
    union
    {
        volatile uint8_t IPR9b[4];
        IPRb_t IPR9b_Bit[4];
        volatile UBase_t IPR9w;
        IPRw_t IPR9w_Bit;
        volatile UBase_t IPR9;
        IPR9_t IPR9_Bit;
    };
    union
    {
        volatile uint8_t IPR10b[4];
        IPRb_t IPR10b_Bit[4];
        volatile UBase_t IPR10w;
        IPRw_t IPR10w_Bit;
        volatile UBase_t IPR10;
        IPR10_t IPR10_Bit;
    };
    union
    {
        volatile uint8_t IPR11b[4];
        IPRb_t IPR11b_Bit[4];
        volatile UBase_t IPR11w;
        IPRw_t IPR11w_Bit;
        volatile UBase_t IPR11;
        IPR11_t IPR11_Bit;
    };
    union
    {
        volatile uint8_t IPR12b[4];
        IPRb_t IPR12b_Bit[4];
        volatile UBase_t IPR12w;
        IPRw_t IPR12w_Bit;
        volatile UBase_t IPR12;
        IPR12_t IPR12_Bit;
    };
    union
    {
        volatile uint8_t IPR13b[4];
        IPRb_t IPR13b_Bit[4];
        volatile UBase_t IPR13w;
        IPRw_t IPR13w_Bit;
        volatile UBase_t IPR13;
        IPR13_t IPR13_Bit;
    };
    union
    {
        volatile uint8_t IPR14b[4];
        IPRb_t IPR14b_Bit[4];
        volatile UBase_t IPR14w;
        IPRw_t IPR14w_Bit;
        volatile UBase_t IPR14;
        IPR14_t IPR14_Bit;
    };
    union
    {
        volatile uint8_t IPR15b[4];
        IPRb_t IPR15b_Bit[4];
        volatile UBase_t IPR15w;
        IPRw_t IPR15w_Bit;
        volatile UBase_t IPR15;
        IPR15_t IPR15_Bit;
    };
    union
    {
        volatile uint8_t IPR16b[4];
        IPRb_t IPR16b_Bit[4];
        volatile UBase_t IPR16w;
        IPRw_t IPR16w_Bit;
        volatile UBase_t IPR16;
        IPR16_t IPR16_Bit;
    };
    union
    {
        volatile uint8_t IPR17b[4];
        IPRb_t IPR17b_Bit[4];
        volatile UBase_t IPR17w;
        IPRw_t IPR17w_Bit;
        volatile UBase_t IPR17;
        IPR17_t IPR17_Bit;
    };
    union
    {
        volatile uint8_t IPR18b[4];
        IPRb_t IPR18b_Bit[4];
        volatile UBase_t IPR18w;
        IPRw_t IPR18w_Bit;
        volatile UBase_t IPR18;
        IPR18_t IPR18_Bit;
    };
    union
    {
        volatile uint8_t IPR19b[4];
        IPRb_t IPR19b_Bit[4];
        volatile UBase_t IPR19w;
        IPRw_t IPR19w_Bit;
        volatile UBase_t IPR19;
        IPR19_t IPR19_Bit;
    };
    union
    {
        volatile uint8_t IPR20b[4];
        IPRb_t IPR20b_Bit[4];
        volatile UBase_t IPR20w;
        IPRw_t IPR20w_Bit;
        volatile UBase_t IPR20;
        IPR20_t IPR20_Bit;
    };
    union
    {
        volatile uint8_t IPR21b[4];
        IPRb_t IPR21b_Bit[4];
        volatile UBase_t IPR21w;
        IPRw_t IPR21w_Bit;
        volatile UBase_t IPR21;
        IPR21_t IPR21_Bit;
    };
    union
    {
        volatile uint8_t IPR22b[4];
        IPRb_t IPR22b_Bit[4];
        volatile UBase_t IPR22w;
        IPRw_t IPR22w_Bit;
        volatile UBase_t IPR22;
        IPR22_t IPR22_Bit;
    };
    union
    {
        volatile uint8_t IPR23b[4];
        IPRb_t IPR23b_Bit[4];
        volatile UBase_t IPR23w;
        IPRw_t IPR23w_Bit;
        volatile UBase_t IPR23;
        IPR23_t IPR23_Bit;
    };
    union
    {
        volatile uint8_t IPR24b[4];
        IPRb_t IPR24b_Bit[4];
        volatile UBase_t IPR24w;
        IPRw_t IPR24w_Bit;
        volatile UBase_t IPR24;
        IPR24_t IPR24_Bit;
    };
    union
    {
        volatile uint8_t IPR25b[4];
        IPRb_t IPR25b_Bit[4];
        volatile UBase_t IPR25w;
        IPRw_t IPR25w_Bit;
        volatile UBase_t IPR25;
        IPR25_t IPR25_Bit;
    };
    union
    {
        volatile uint8_t IPR26b[4];
        IPRb_t IPR26b_Bit[4];
        volatile UBase_t IPR26w;
        IPRw_t IPR26w_Bit;
        volatile UBase_t IPR26;
        IPR26_t IPR26_Bit;
    };
    union
    {
        volatile uint8_t IPR27b[4];
        IPRb_t IPR27b_Bit[4];
        volatile UBase_t IPR27w;
        IPRw_t IPR27w_Bit;
        volatile UBase_t IPR27;
        IPR27_t IPR27_Bit;
    };
    union
    {
        volatile uint8_t IPR28b[4];
        IPRb_t IPR28b_Bit[4];
        volatile UBase_t IPR28w;
        IPRw_t IPR28w_Bit;
        volatile UBase_t IPR28;
        IPR28_t IPR28_Bit;
    };
    union
    {
        volatile uint8_t IPR29b[4];
        IPRb_t IPR29b_Bit[4];
        volatile UBase_t IPR29w;
        IPRw_t IPR29w_Bit;
        volatile UBase_t IPR29;
        IPR29_t IPR29_Bit;
    };
    union
    {
        volatile uint8_t IPR30b[4];
        IPRb_t IPR30b_Bit[4];
        volatile UBase_t IPR30w;
        IPRw_t IPR30w_Bit;
        volatile UBase_t IPR30;
        IPR30_t IPR30_Bit;
    };
    union
    {
        volatile uint8_t IPR31b[4];
        IPRb_t IPR31b_Bit[4];
        volatile UBase_t IPR31w;
        IPRw_t IPR31w_Bit;
        volatile UBase_t IPR31;
        IPR31_t IPR31_Bit;
    };
    UBase_t reserved5[662UL];
    union
    {
        volatile UBase_t STIR;
        STIR_t STIR_Bit;
    };
}NVIC_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_STRUCT_NVIC_STRUCTPERIPHERAL_H_ */

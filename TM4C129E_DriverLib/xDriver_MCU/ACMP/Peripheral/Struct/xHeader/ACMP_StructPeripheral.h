/**
 *
 * @file ACMP_StructPeripheral.h
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
 * @verbatim 28 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/ACMP/Peripheral/Struct/xHeader/ACMP_StructRegister.h>
#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>


typedef volatile struct
{
    union
    {
        volatile uint32_t MIS;
        ACMIS_TypeDef MIS_Bit;
    };
    union
    {
        volatile const uint32_t RIS;
        ACRIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile uint32_t INTEN;
        ACINTEN_TypeDef INTEN_Bit;
    };
    const uint32_t reserved;
    union
    {
        volatile uint32_t REFCTL;
        ACREFCTL_TypeDef REFCTL_Bit;
    };
    const uint32_t reserved1 [3UL];
    union
    {
        volatile uint32_t STAT0;
        ACSTAT_TypeDef STAT0_Bit;
    };
    union
    {
        volatile uint32_t CTL0;
        ACCTL_TypeDef CTL0_Bit;
    };
    const uint32_t reserved2 [6UL];
    union
    {
        volatile uint32_t STAT1;
        ACSTAT_TypeDef STAT1_Bit;
    };
    union
    {
        volatile uint32_t CTL1;
        ACCTL_TypeDef CTL1_Bit;
    };
    const uint32_t reserved3 [990UL];
    union
    {
        volatile uint32_t PP;
        ACMPPP_TypeDef  PP_Bit;
    };
    const uint32_t reserved4 [15UL];
}ACMP_TypeDef;

typedef volatile struct
{
    ACMP_TypeDef MODULE [(uint32_t) ACMP_enMODULE_MAX];
}ACMPS_TypeDef;

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTPERIPHERAL_H_ */

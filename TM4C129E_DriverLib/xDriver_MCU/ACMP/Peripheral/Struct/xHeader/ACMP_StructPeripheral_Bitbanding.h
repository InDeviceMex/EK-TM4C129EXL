/**
 *
 * @file ACMP_StructPeripheral_Bitbanding.h
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
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/ACMP/Peripheral/Struct/xHeader/ACMP_StructRegister_Bitbanding.h>
#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t MIS [32UL];
        BITBANDING_ACMIS_TypeDef MIS_Bit;
    };
    union
    {
        volatile const uint32_t RIS [32UL];
        BITBANDING_ACRIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile uint32_t INTEN [32UL];
        BITBANDING_ACINTEN_TypeDef INTEN_Bit;
    };
    const uint32_t reserved [32UL];
    union
    {
        volatile uint32_t REFCTL [32UL];
        BITBANDING_ACREFCTL_TypeDef REFCTL_Bit;
    };
    const uint32_t reserved1 [3UL * 32UL];
    union
    {
        volatile uint32_t STAT0 [32UL];
        BITBANDING_ACSTAT_TypeDef STAT0_Bit;
    };
    union
    {
        volatile uint32_t CTL0 [32UL];
        BITBANDING_ACCTL_TypeDef CTL0_Bit;
    };
    const uint32_t reserved2 [6UL * 32UL];
    union
    {
        volatile uint32_t STAT1 [32UL];
        BITBANDING_ACSTAT_TypeDef STAT1_Bit;
    };
    union
    {
        volatile uint32_t CTL1 [32UL];
        BITBANDING_ACCTL_TypeDef CTL1_Bit;
    };
    const uint32_t reserved3 [990UL * 32UL];
    union
    {
        volatile uint32_t PP [32UL];
        BITBANDING_ACMPPP_TypeDef  PP_Bit;
    };
    const uint32_t reserved4 [15UL * 32UL];
}ACMP_BITBANDING_TypeDef;

typedef volatile struct
{
        ACMP_BITBANDING_TypeDef MODULE [(uint32_t) ACMP_enMODULE_MAX];
}ACMPS_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTPERIPHERAL_BITBANDING_H_ */

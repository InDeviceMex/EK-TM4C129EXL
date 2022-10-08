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
        volatile UBase_t MIS [32UL];
        ACMP_BITBANDING_MIS_t MIS_Bit;
    };
    union
    {
        volatile const UBase_t RIS [32UL];
        ACMP_BITBANDING_RIS_t RIS_Bit;
    };
    union
    {
        volatile UBase_t INTEN [32UL];
        ACMP_BITBANDING_INTEN_t INTEN_Bit;
    };
    const UBase_t reserved [32UL];
    union
    {
        volatile UBase_t REFCTL [32UL];
        ACMP_BITBANDING_REFCTL_t REFCTL_Bit;
    };
    const UBase_t reserved1 [3UL * 32UL];
    union
    {
        volatile UBase_t STAT0 [32UL];
        ACMP_BITBANDING_STAT_t STAT0_Bit;
    };
    union
    {
        volatile UBase_t CTL0 [32UL];
        ACMP_BITBANDING_CTL_t CTL0_Bit;
    };
    const UBase_t reserved2 [6UL * 32UL];
    union
    {
        volatile UBase_t STAT1 [32UL];
        ACMP_BITBANDING_STAT_t STAT1_Bit;
    };
    union
    {
        volatile UBase_t CTL1 [32UL];
        ACMP_BITBANDING_CTL_t CTL1_Bit;
    };
    const UBase_t reserved3 [6UL * 32UL];
    union
    {
        volatile UBase_t STAT2 [32UL];
        ACMP_BITBANDING_STAT_t STAT2_Bit;
    };
    union
    {
        volatile UBase_t CTL2 [32UL];
        ACMP_BITBANDING_CTL_t CTL2_Bit;
    };
    const UBase_t reserved4 [982UL * 32UL];
    union
    {
        volatile UBase_t PP [32UL];
        ACMP_BITBANDING_PP_t  PP_Bit;
    };
    const UBase_t reserved5 [15UL * 32UL];
}ACMP_BITBANDING_t;

typedef volatile struct
{
        ACMP_BITBANDING_t MODULE [(UBase_t) ACMP_enMODULE_MAX];
}ACMPS_BITBANDING_t;

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTPERIPHERAL_BITBANDING_H_ */

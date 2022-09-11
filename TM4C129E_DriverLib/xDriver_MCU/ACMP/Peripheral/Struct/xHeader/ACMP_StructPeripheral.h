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
        ACMP_MIS_t MIS_Bit;
    };
    union
    {
        volatile const uint32_t RIS;
        ACMP_RIS_t RIS_Bit;
    };
    union
    {
        volatile uint32_t INTEN;
        ACMP_INTEN_t INTEN_Bit;
    };
    const uint32_t reserved;
    union
    {
        volatile uint32_t REFCTL;
        ACMP_REFCTL_t REFCTL_Bit;
    };
    const uint32_t reserved1 [3UL];
    union
    {
        volatile uint32_t STAT0;
        ACMP_STAT_t STAT0_Bit;
    };
    union
    {
        volatile uint32_t CTL0;
        ACMP_CTL_t CTL0_Bit;
    };
    const uint32_t reserved2 [6UL];
    union
    {
        volatile uint32_t STAT1;
        ACMP_STAT_t STAT1_Bit;
    };
    union
    {
        volatile uint32_t CTL1;
        ACMP_CTL_t CTL1_Bit;
    };
    const uint32_t reserved3 [6UL];
    union
    {
        volatile uint32_t STAT2;
        ACMP_STAT_t STAT2_Bit;
    };
    union
    {
        volatile uint32_t CTL2;
        ACMP_CTL_t CTL2_Bit;
    };
    const uint32_t reserved4 [982UL];
    union
    {
        volatile uint32_t PP;
        ACMP_PP_t  PP_Bit;
    };
    const uint32_t reserved5 [15UL];
}ACMP_t;

typedef volatile struct
{
    ACMP_t MODULE [(uint32_t) ACMP_enMODULE_MAX];
}ACMPS_t;

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_STRUCT_XHEADER_ACMP_STRUCTPERIPHERAL_H_ */

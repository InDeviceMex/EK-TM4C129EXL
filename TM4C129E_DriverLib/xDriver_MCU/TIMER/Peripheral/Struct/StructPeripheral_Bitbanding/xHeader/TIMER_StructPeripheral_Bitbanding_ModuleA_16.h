/**
 *
 * @file TIMER_StructPeripheral_Bitbanding_ModuleA_16.h
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
 * @verbatim 4 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 4 jul. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEA_16_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEA_16_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister_Bitbanding/xHeader/TIMER_StructRegister_Bitbanding_ModuleA_16.h>

typedef volatile struct
{
    const uint32_t reserved [1UL * 32UL];
    union
    {
        volatile uint32_t TnMR [32UL];
        BITBANDING_TA_GPTMMR_t TnMR_Bit;
    };
    const uint32_t reserved1 [1UL * 32UL];
    union
    {
        volatile uint32_t TnCTL [32UL];
        BITBANDING_TA_GPTMCTL_t TnCTL_Bit;
    };
    const uint32_t reserved3 [2UL * 32UL];
    union
    {
        volatile uint32_t TnIMR [32UL];
        BITBANDING_TA_GPTMIMR_t TnIMR_Bit;
    };
    union
    {
        volatile uint32_t TnRIS [32UL];
        BITBANDING_TA_GPTMRIS_t TnRIS_Bit;
    };
    union
    {
        volatile uint32_t TnMIS [32UL];
        BITBANDING_TA_GPTMMIS_t TnMIS_Bit;
    };
    union
    {
        volatile uint32_t TnICR [32UL];
        BITBANDING_TA_GPTMICR_t TnICR_Bit;
    };
    union
    {
        volatile uint32_t TnILR [32UL];
        BITBANDING_TA_GPTMILR_t TnILR_Bit;
    };
    const uint32_t reserved9 [1UL * 32UL];
    union
    {
        volatile uint32_t TnMATCHR [32UL];
        BITBANDING_TA_GPTMMATCHR_t TnMATCHR_Bit;
    };
    const uint32_t reserved11 [1UL * 32UL];
    union
    {
        volatile uint32_t TnPR [32UL];
        BITBANDING_TA_GPTMPR_t TnPR_Bit;
    };
    const uint32_t reserved13 [1UL * 32UL];
    union
    {
        volatile uint32_t TnPMR [32UL];
        BITBANDING_TA_GPTMPMR_t TnPMR_Bit;
    };
    const uint32_t reserved15 [1UL * 32UL];
    union
    {
        volatile const uint32_t TnR [32UL];
        BITBANDING_TA_GPTMR_t TnR_Bit;
    };
    const uint32_t reserved16 [1UL * 32UL];
    union
    {
        volatile uint32_t TnV [32UL];
        BITBANDING_TA_GPTMV_t TnV_Bit;
    };
    const uint32_t reserved17 [2UL * 32UL];
    union
    {
        volatile const uint32_t TnPS [32UL];
        BITBANDING_TA_GPTMPS_t TnPS_Bit;
    };
    const uint32_t reserved18 [3UL * 32UL];
    union
    {
        volatile const uint32_t DMAEV [32UL];
        BITBANDING_TA_GPTMDMAEV_t DMAEV_Bit;
    };
    union
    {
        volatile const uint32_t ADCEV [32UL];
        BITBANDING_TA_GPTMADCEV_t ADCEV_Bit;
    };
    const uint32_t reserved19 [995UL * 32UL];
}GPTM_TA_BITBANDING_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEA_16_H_ */

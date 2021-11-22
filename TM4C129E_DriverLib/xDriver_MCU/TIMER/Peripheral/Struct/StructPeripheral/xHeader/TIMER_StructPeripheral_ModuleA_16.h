/**
 *
 * @file TIMER_StructPeripheral_ModuleA_16.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEA_16_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEA_16_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister/xHeader/TIMER_StructRegister_ModuleA_16.h>


typedef volatile struct
{

    const uint32_t reserved;
    union
    {
        volatile uint32_t TnMR;
        TA_GPTMMR_t TnMR_Bit;
    };
    const uint32_t reserved1;
    union
    {
        volatile uint32_t TnCTL;
        TA_GPTMCTL_t TnCTL_Bit;
    };
    const uint32_t reserved3 [2UL];
    union
    {
        volatile uint32_t TnIMR;
        TA_GPTMIMR_t TnIMR_Bit;
    };
    union
    {
        volatile uint32_t TnRIS;
        TA_GPTMRIS_t TnRIS_Bit;
    };
    union
    {
        volatile uint32_t TnMIS;
        TA_GPTMMIS_t TnMIS_Bit;
    };
    union
    {
        volatile uint32_t TnICR;
        TA_GPTMICR_t TnICR_Bit;
    };
    union
    {
        volatile uint32_t TnILR;
        TA_GPTMILR_t TnILR_Bit;
    };
    const uint32_t reserved9;
    union
    {
        volatile uint32_t TnMATCHR;
        TA_GPTMMATCHR_t TnMATCHR_Bit;
    };
    const uint32_t reserved11;
    union
    {
        volatile uint32_t TnPR;
        TA_GPTMPR_t TnPR_Bit;
    };
    const uint32_t reserved13;
    union
    {
        volatile uint32_t TnPMR;
        TA_GPTMPMR_t TnPMR_Bit;
    };
    const uint32_t reserved15;
    union
    {
        volatile const uint32_t TnR;
        TA_GPTMR_t TnR_Bit;
    };
    const uint32_t reserved16;
    union
    {
        volatile uint32_t TnV;
        TA_GPTMV_t TnV_Bit;
    };
    const uint32_t reserved17 [2UL];
    union
    {
        volatile const uint32_t TnPS;
        TA_GPTMPS_t TnPS_Bit;
    };
    const uint32_t reserved18 [3UL];
    union
    {
        volatile const uint32_t DMAEV;
        TA_GPTMDMAEV_t DMAEV_Bit;
    };
    union
    {
        volatile const uint32_t ADCEV;
        TA_GPTMADCEV_t ADCEV_Bit;
    };
    const uint32_t reserved19 [995UL];

}GPTM_TA_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEA_16_H_ */

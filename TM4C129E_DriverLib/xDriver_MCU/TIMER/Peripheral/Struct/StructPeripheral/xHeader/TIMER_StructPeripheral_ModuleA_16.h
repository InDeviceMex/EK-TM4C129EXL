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
        TA_GPTMMR_TypeDef TnMR_Bit;
    };
    const uint32_t reserved1;
    union
    {
        volatile uint32_t TnCTL;
        TA_GPTMCTL_TypeDef TnCTL_Bit;
    };
    const uint32_t reserved3 [2UL];
    union
    {
        volatile uint32_t TnIMR;
        TA_GPTMIMR_TypeDef TnIMR_Bit;
    };
    union
    {
        volatile uint32_t TnRIS;
        TA_GPTMRIS_TypeDef TnRIS_Bit;
    };
    union
    {
        volatile uint32_t TnMIS;
        TA_GPTMMIS_TypeDef TnMIS_Bit;
    };
    union
    {
        volatile uint32_t TnICR;
        TA_GPTMICR_TypeDef TnICR_Bit;
    };
    union
    {
        volatile uint32_t TnILR;
        TA_GPTMILR_TypeDef TnILR_Bit;
    };
    const uint32_t reserved9;
    union
    {
        volatile uint32_t TnMATCHR;
        TA_GPTMMATCHR_TypeDef TnMATCHR_Bit;
    };
    const uint32_t reserved11;
    union
    {
        volatile uint32_t TnPR;
        TA_GPTMPR_TypeDef TnPR_Bit;
    };
    const uint32_t reserved13;
    union
    {
        volatile uint32_t TnPMR;
        TA_GPTMPMR_TypeDef TnPMR_Bit;
    };
    const uint32_t reserved15;
    union
    {
        volatile const uint32_t TnR;
        TA_GPTMR_TypeDef TnR_Bit;
    };
    const uint32_t reserved16;
    union
    {
        volatile uint32_t TnV;
        TA_GPTMV_TypeDef TnV_Bit;
    };
    const uint32_t reserved17 [2UL];
    union
    {
        volatile const uint32_t TnPS;
        TA_GPTMPS_TypeDef TnPS_Bit;
    };
    const uint32_t reserved19 [1000UL];

}GPTM_TA_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEA_16_H_ */

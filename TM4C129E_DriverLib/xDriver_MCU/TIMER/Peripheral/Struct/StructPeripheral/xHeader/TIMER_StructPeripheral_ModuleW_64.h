/**
 *
 * @file TIMER_StructPeripheral_ModuleW_64.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEW_64_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEW_64_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister/xHeader/TIMER_StructRegister_ModuleW_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister/xHeader/TIMER_StructRegister_ModuleW_64.h>

typedef volatile struct
{

    const uint32_t reserved;
    union
    {
        volatile uint32_t TnMR;
        TW_GPTMMR_TypeDef TnMR_Bit;
    };
    const uint32_t reserved1;
    union
    {
        volatile uint32_t TnCTL;
        TW_GPTMCTL_TypeDef TnCTL_Bit;
    };
    const uint32_t reserved3 [2UL];
    union
    {
        volatile uint32_t TnIMR;
        TW_GPWTMIMR_TypeDef TnIMR_Bit;
    };
    union
    {
        volatile uint32_t TnRIS;
        TW_GPWTMRIS_TypeDef TnRIS_Bit;
    };
    union
    {
        volatile uint32_t TnMIS;
        TW_GPWTMMIS_TypeDef TnMIS_Bit;
    };
    union
    {
        volatile uint32_t TnICR;
        TW_GPWTMICR_TypeDef TnICR_Bit;
    };
    union
    {
        volatile uint32_t TnILR_LOW;
        TW_GPWTMILR_LOW_TypeDef TnILR_LOW_Bit;
    };
    union
    {
        volatile uint32_t TnILR_HIGH;
        TW_GPWTMILR_HIGH_TypeDef TnILR_HIGH_Bit;
    };
    union
    {
        volatile uint32_t TnMATCHR_LOW;
        TW_GPWTMMATCHR_LOW_TypeDef TnMATCHR_LOW_Bit;
    };
    union
    {
        volatile uint32_t TnMATCHR_HIGH;
        TW_GPWTMMATCHR_HIGH_TypeDef TnMATCHR_HIGH_Bit;
    };
    const uint32_t reserved5 [4UL];
    union
    {
        volatile const uint32_t TnR_LOW;
        TW_GPWTMR_LOW_TypeDef TnR_LOW_Bit;
    };
    union
    {
        volatile const uint32_t TnR_HIGH;
        TW_GPWTMR_HIGH_TypeDef TnR_HIGH_Bit;
    };
    union
    {
        volatile uint32_t TnV_LOW;
        TW_GPWTMV_LOW_TypeDef TnV_LOW_Bit;
    };
    union
    {
        volatile uint32_t TnV_HIGH;
        TW_GPWTMV_HIGH_TypeDef TnV_HIGH_Bit;
    };
    union
    {
        volatile const uint32_t RTCPD;
        TW_GPTMRTCPD_TypeDef RTCPD_Bit;
    };
    const uint32_t reserved9 [1001UL];

}GPWTM_TW_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEW_64_H_ */

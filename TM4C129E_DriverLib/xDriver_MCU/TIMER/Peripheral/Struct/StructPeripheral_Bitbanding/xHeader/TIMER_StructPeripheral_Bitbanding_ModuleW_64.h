/**
 *
 * @file TIMER_StructPeripheral_Bitbanding_ModuleW_64.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEW_64_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEW_64_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister_Bitbanding/xHeader/TIMER_StructRegister_Bitbanding_ModuleW_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister_Bitbanding/xHeader/TIMER_StructRegister_Bitbanding_ModuleW_64.h>

typedef volatile struct
{
    const uint32_t reserved [1UL * 32UL];
    union
    {
        volatile uint32_t TnMR [32UL];
        BITBANDING_TW_GPTMMR_TypeDef TnMR_Bit;
    };
    const uint32_t reserved1 [1UL * 32UL];
    union
    {
        volatile uint32_t TnCTL [32UL];
        BITBANDING_TW_GPTMCTL_TypeDef TnCTL_Bit;
    };
    const uint32_t reserved3 [2UL * 32UL];
    union
    {
        volatile uint32_t TnIMR [32UL];
        BITBANDING_TW_GPWTMIMR_TypeDef TnIMR_Bit;
    };
    union
    {
        volatile uint32_t TnRIS [32UL];
        BITBANDING_TW_GPWTMRIS_TypeDef TnRIS_Bit;
    };
    union
    {
        volatile uint32_t TnMIS [32UL];
        BITBANDING_TW_GPWTMMIS_TypeDef TnMIS_Bit;
    };
    union
    {
        volatile uint32_t TnICR [32UL];
        BITBANDING_TW_GPWTMICR_TypeDef TnICR_Bit;
    };
    union
    {
        volatile uint32_t TnILR_LOMODULE [32UL];
        BITBANDING_TW_GPWTMILR_LOW_TypeDef TnILR_LOW_Bit;
    };
    union
    {
        volatile uint32_t TnILR_HIGH [32UL];
        BITBANDING_TW_GPWTMILR_HIGH_TypeDef TnILR_HIGH_Bit;
    };
    const uint32_t reserved4 [1UL * 32UL];
    union
    {
        volatile uint32_t TnMATCHR_LOMODULE [32UL];
        BITBANDING_TW_GPWTMMATCHR_LOW_TypeDef TnMATCHR_LOW_Bit;
    };
    union
    {
        volatile uint32_t TnMATCHR_HIGH [32UL];
        BITBANDING_TW_GPWTMMATCHR_HIGH_TypeDef TnMATCHR_HIGH_Bit;
    };
    const uint32_t reserved5 [4UL * 32UL];
    union
    {
        volatile const uint32_t TnR_LOMODULE [32UL];
        BITBANDING_TW_GPWTMR_LOW_TypeDef TnR_LOW_Bit;
    };
    union
    {
        volatile const uint32_t TnR_HIGH [32UL];
        BITBANDING_TW_GPWTMR_HIGH_TypeDef TnR_HIGH_Bit;
    };
    union
    {
        volatile uint32_t TnV_LOMODULE [32UL];
        BITBANDING_TW_GPWTMV_LOW_TypeDef TnV_LOW_Bit;
    };
    union
    {
        volatile uint32_t TnV_HIGH [32UL];
        BITBANDING_TW_GPWTMV_HIGH_TypeDef TnV_HIGH_Bit;
    };
    union
    {
        volatile const uint32_t RTCPD [32UL];
        BITBANDING_TW_GPTMRTCPD_TypeDef RTCPD_Bit;
    };
    const uint32_t reserved9 [1001UL * 32UL];
}GPWTM_TW_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEW_64_H_ */

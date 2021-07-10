/**
 *
 * @file TIMER_StructPeripheral_ModuleW_32.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEW_32_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEW_32_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister/xHeader/TIMER_StructRegister_ModuleW_32.h>

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
        TW_GPTMIMR_TypeDef TnIMR_Bit;
    };
    union
    {
        volatile uint32_t TnRIS;
        TW_GPTMRIS_TypeDef TnRIS_Bit;
    };
    union
    {
        volatile uint32_t TnMIS;
        TW_GPTMMIS_TypeDef TnMIS_Bit;
    };
    union
    {
        volatile uint32_t TnICR;
        TW_GPTMICR_TypeDef TnICR_Bit;
    };
    union
    {
        volatile uint32_t TnILR;
        TW_GPTMILR_TypeDef TnILR_Bit;
    };
    const uint32_t reserved8;
    union
    {
        volatile uint32_t TnMATCHR;
        TW_GPTMMATCHR_TypeDef TnMATCHR_Bit;
    };
    const uint32_t reserved9 [5UL];
    union
    {
        volatile const uint32_t TnR;
        TW_GPTMR_TypeDef TnR_Bit;
    };
    const uint32_t reserved10;
    union
    {
        volatile uint32_t TnV;
        TW_GPTMV_TypeDef TnV_Bit;
    };
    const uint32_t reserved11;
    union
    {
        volatile const uint32_t RTCPD;
        TW_GPTMRTCPD_TypeDef RTCPD_Bit;
    };
    const uint32_t reserved13 [1001UL];

}GPTM_TW_TypeDef;




#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_MODULEW_32_H_ */

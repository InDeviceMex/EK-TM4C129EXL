/**
 *
 * @file TIMER_StructPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_Control_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleA_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleB_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleW_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_Standard.h>

typedef volatile struct
{
    GPTM_TypeDef_BITBANDING MODULE05 [(uint32_t) TIMER_enMODULE_NUM_MAX - 2UL];
    GPTM_TypeDef_BITBANDING reserved [170UL];
    GPTM_TypeDef_BITBANDING MODULE67 [(uint32_t) 2UL];
}GPTMS_BITBANDING_TypeDef;

typedef volatile struct
{
    union
    {
        GPTM_CTL_BITBANDING_TypeDef CTL [(uint32_t) TIMER_enMODULE_NUM_MAX - 2UL];
        GPTM_TA_BITBANDING_TypeDef TA [(uint32_t) TIMER_enMODULE_NUM_MAX - 2UL];
        GPTM_TB_BITBANDING_TypeDef TB [(uint32_t) TIMER_enMODULE_NUM_MAX - 2UL];
        GPTM_TW_BITBANDING_TypeDef TW [(uint32_t) TIMER_enMODULE_NUM_MAX - 2UL];
    };
    GPTM_TypeDef_BITBANDING reserved [170UL];
    union
    {
        GPTM_CTL_BITBANDING_TypeDef CTL [2UL];
        GPTM_TA_BITBANDING_TypeDef TA [2UL];
        GPTM_TB_BITBANDING_TypeDef TB [2UL];
        GPTM_TW_BITBANDING_TypeDef TW [2UL];
    };
}GPTM_UNION_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_H_ */

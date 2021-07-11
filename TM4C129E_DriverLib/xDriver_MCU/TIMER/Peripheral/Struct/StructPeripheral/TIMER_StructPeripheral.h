/**
 *
 * @file TIMER_StructPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Control_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleA_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleB_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleW_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Standard.h>

typedef volatile struct
{
    GPTM_TypeDef MODULE0_5 [(uint32_t) TIMER_enMODULE_NUM_MAX - 2UL];
    GPTM_TypeDef reserved [170UL];
    GPTM_TypeDef MODULE6_7 [(uint32_t) 2UL];
}GPTMS_TypeDef;

typedef volatile struct
{
    union
    {
        GPTM_CTL_TypeDef CTL0_5 [(uint32_t) TIMER_enMODULE_NUM_MAX - 2UL];
        GPTM_TA_TypeDef TA0_5 [(uint32_t) TIMER_enMODULE_NUM_MAX - 2UL];
        GPTM_TB_TypeDef TB0_5 [(uint32_t) TIMER_enMODULE_NUM_MAX - 2UL];
        GPTM_TW_TypeDef TW0_5 [(uint32_t) TIMER_enMODULE_NUM_MAX - 2UL];
    };
    GPTM_TypeDef reserved [170UL];
    union
    {
        GPTM_CTL_TypeDef CTL6_7 [(uint32_t) 2UL];
        GPTM_TA_TypeDef TA6_7 [(uint32_t) 2UL];
        GPTM_TB_TypeDef TB6_7 [(uint32_t) 2UL];
        GPTM_TW_TypeDef TW6_7 [(uint32_t) 2UL];
    };
}GPTM_UNION_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_H_ */

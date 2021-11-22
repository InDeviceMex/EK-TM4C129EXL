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
    GPTM_t MODULE0_5 [(uint32_t) TIMER_enMODULE_NUM_MAX - 2UL];
    GPTM_t reserved [170UL];
    GPTM_t MODULE6_7 [(uint32_t) 2UL];
}GPTMS_t;

typedef volatile struct
{
    union
    {
        GPTM_CTL_t CTL0_5 [(uint32_t) TIMER_enMODULE_NUM_MAX - 2UL];
        GPTM_TA_t TA0_5 [(uint32_t) TIMER_enMODULE_NUM_MAX - 2UL];
        GPTM_TB_t TB0_5 [(uint32_t) TIMER_enMODULE_NUM_MAX - 2UL];
        GPTM_TW_t TW0_5 [(uint32_t) TIMER_enMODULE_NUM_MAX - 2UL];
    };
    GPTM_t reserved [170UL];
    union
    {
        GPTM_CTL_t CTL6_7 [(uint32_t) 2UL];
        GPTM_TA_t TA6_7 [(uint32_t) 2UL];
        GPTM_TB_t TB6_7 [(uint32_t) 2UL];
        GPTM_TW_t TW6_7 [(uint32_t) 2UL];
    };
}GPTM_UNION_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_H_ */

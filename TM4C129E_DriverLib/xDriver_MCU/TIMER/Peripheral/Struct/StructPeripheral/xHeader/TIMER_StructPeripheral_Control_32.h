/**
 *
 * @file TIMER_StructPeripheral_Control_32.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_CONTROL_32_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_CONTROL_32_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister/xHeader/TIMER_StructRegister_Control.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t CFG;
        GPTMCFG_TypeDef CFG_Bit;
    };
    const uint32_t reserved [3UL];
    union
    {
        volatile uint32_t SYNC;
        GPTMSYNC_TypeDef SYNC_Bit;
    };
    const uint32_t reserved1 [1003UL];
    union
    {
        volatile uint32_t PP;
        GPTMPP_TypeDef PP_Bit;
    };
    const uint32_t reserved2 [15UL];
}GPTM_CTL_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_CONTROL_32_H_ */

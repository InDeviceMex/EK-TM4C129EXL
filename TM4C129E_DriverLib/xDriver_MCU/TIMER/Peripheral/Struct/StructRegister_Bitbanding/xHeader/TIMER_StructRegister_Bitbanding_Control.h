/**
 *
 * @file TIMER_StructRegister_Bitbanding_Control.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_CONTROL_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_CONTROL_H_

#include <xUtils/Standard/Standard.h>

/*************************************************************
 *********************************  CONTROL REGS BITBANDING**************
 **************************************************************/

typedef volatile struct
{
    volatile uint32_t CFG [3UL];
    const uint32_t reserved [29UL];
}BITBANDING_GPTMCFG_TypeDef;

typedef volatile struct
{
    volatile uint32_t SYNCT0 [2UL];
    volatile uint32_t SYNCT1 [2UL];
    volatile uint32_t SYNCT2 [2UL];
    volatile uint32_t SYNCT3 [2UL];
    volatile uint32_t SYNCT4 [2UL];
    volatile uint32_t SYNCT5 [2UL];
    volatile uint32_t SYNCWT0 [2UL];
    volatile uint32_t SYNCWT1 [2UL];
    volatile uint32_t SYNCWT2 [2UL];
    volatile uint32_t SYNCWT3 [2UL];
    volatile uint32_t SYNCWT4 [2UL];
    volatile uint32_t SYNCWT5 [2UL];
    const uint32_t reserved [8UL];
}BITBANDING_GPTMSYNC_TypeDef;

typedef volatile struct
{
    volatile const uint32_t SIZE [4UL];
    const uint32_t reserved [28UL];
}BITBANDING_GPTMPP_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_CONTROL_H_ */

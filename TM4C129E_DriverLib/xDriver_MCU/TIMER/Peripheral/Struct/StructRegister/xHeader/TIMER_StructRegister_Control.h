/**
 *
 * @file TIMER_StructRegister_Control.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_CONTROL_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_CONTROL_H_

#include <xUtils/Standard/Standard.h>

/*************************************************************
 *********************************  CONTROL REGS **************
 **************************************************************/

typedef volatile struct
{
    volatile uint32_t CFG :3;
    const uint32_t reserved :29;
}GPTMCFG_TypeDef;

typedef volatile struct
{
    volatile uint32_t SYNCT0 :2;
    volatile uint32_t SYNCT1 :2;
    volatile uint32_t SYNCT2 :2;
    volatile uint32_t SYNCT3 :2;
    volatile uint32_t SYNCT4 :2;
    volatile uint32_t SYNCT5 :2;
    volatile uint32_t SYNCWT0 :2;
    volatile uint32_t SYNCWT1 :2;
    volatile uint32_t SYNCWT2 :2;
    volatile uint32_t SYNCWT3 :2;
    volatile uint32_t SYNCWT4 :2;
    volatile uint32_t SYNCWT5 :2;
    const uint32_t reserved :8;
}GPTMSYNC_TypeDef;

typedef volatile struct
{
    volatile const uint32_t SIZE :4;
    const uint32_t reserved :28;
}GPTMPP_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_CONTROL_H_ */

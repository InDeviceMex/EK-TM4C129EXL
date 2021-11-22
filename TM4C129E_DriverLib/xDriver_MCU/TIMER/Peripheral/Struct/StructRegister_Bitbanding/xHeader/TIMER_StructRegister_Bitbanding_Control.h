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

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/*************************************************************
 *********************************  CONTROL REGS BITBANDING**************
 **************************************************************/

typedef volatile struct
{
    volatile uint32_t CFG [3UL];
    const uint32_t reserved [29UL];
}BITBANDING_GPTMCFG_t;

typedef volatile struct
{
    volatile uint32_t SYNCT0 [2UL];
    volatile uint32_t SYNCT1 [2UL];
    volatile uint32_t SYNCT2 [2UL];
    volatile uint32_t SYNCT3 [2UL];
    volatile uint32_t SYNCT4 [2UL];
    volatile uint32_t SYNCT5 [2UL];
    volatile uint32_t SYNCT6 [2UL];
    volatile uint32_t SYNCT7 [2UL];
    const uint32_t reserved [16UL];
}BITBANDING_GPTMSYNC_t;

typedef volatile struct
{
    volatile const uint32_t SIZE [4UL];
    volatile const uint32_t CHAIN;
    volatile const uint32_t SYNCCNT;
    volatile const uint32_t ALTCLK;
    const uint32_t reserved [25UL];
}BITBANDING_GPTMPP_t;

typedef volatile struct
{
    volatile uint32_t ALTCLK;
    const uint32_t reserved [31UL];
}BITBANDING_GPTMCC_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_CONTROL_H_ */

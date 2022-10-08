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

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

/*************************************************************
 *********************************  CONTROL REGS **************
 **************************************************************/

typedef volatile struct
{
    volatile UBase_t CFG :3;
    const UBase_t reserved :29;
}GPTMCFG_t;

typedef volatile struct
{
    volatile UBase_t SYNCT0 :2;
    volatile UBase_t SYNCT1 :2;
    volatile UBase_t SYNCT2 :2;
    volatile UBase_t SYNCT3 :2;
    volatile UBase_t SYNCT4 :2;
    volatile UBase_t SYNCT5 :2;
    volatile UBase_t SYNCT6 :2;
    volatile UBase_t SYNCT7 :2;
    const UBase_t reserved :16;
}GPTMSYNC_t;

typedef volatile struct
{
    volatile const UBase_t SIZE :4;
    volatile const UBase_t CHAIN :1;
    volatile const UBase_t SYNCCNT :1;
    volatile const UBase_t ALTCLK :1;
    const UBase_t reserved :25;
}GPTMPP_t;

typedef volatile struct
{
    volatile UBase_t ALTCLK :1;
    const UBase_t reserved :31;
}GPTMCC_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_CONTROL_H_ */

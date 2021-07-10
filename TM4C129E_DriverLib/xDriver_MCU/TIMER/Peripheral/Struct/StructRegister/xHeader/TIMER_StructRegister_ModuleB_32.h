/**
 *
 * @file TIMER_StructRegister_ModuleB_32.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_MODULEB_32_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_MODULEB_32_H_

#include <xUtils/Standard/Standard.h>

/*************************************************************
 ***************************  TIMERB 32 REGS **************
 **************************************************************/

typedef volatile struct
{
    volatile uint32_t TnILR :32;
}TB_GPWTMILR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnMR :32;
}TB_GPWTMMATCHR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnPSR :16;
    const uint32_t reserved :16;
}TB_GPWTMPR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnPSMR :16;
    const uint32_t reserved :16;
}TB_GPWTMPMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSV :16;
    const uint32_t reserved :16;
}TB_GPWTMPV_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_MODULEB_32_H_ */

/**
 *
 * @file TIMER_StructRegister_Bitbanding_ModuleA_32.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEA_32_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEA_32_H_

#include <xUtils/Standard/Standard.h>

/*************************************************************
 ***************************  TIMERA 32 REGS BITBANDING **************
 **************************************************************/

typedef volatile struct
{
    volatile uint32_t TnILR [32UL];
}BITBANDING_TA_GPWTMILR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnMR [32UL];
}BITBANDING_TA_GPWTMMATCHR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnPSR [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_TA_GPWTMPR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnPSMR [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_TA_GPWTMPMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSV [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_TA_GPWTMPV_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEA_32_H_ */

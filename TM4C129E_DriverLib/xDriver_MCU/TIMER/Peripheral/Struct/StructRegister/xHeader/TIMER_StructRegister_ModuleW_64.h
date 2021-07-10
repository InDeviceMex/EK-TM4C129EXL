/**
 *
 * @file TIMER_StructRegister_ModuleW_64.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_MODULEW_64_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_MODULEW_64_H_

#include <xUtils/Standard/Standard.h>

/*************************************************************
 *********************************  TIMER 64 REGS **************
 **************************************************************/

typedef volatile struct
{
    volatile uint32_t TnTOIM :1;
    volatile uint32_t CnMIM :1;
    volatile uint32_t CnEIM :1;
    volatile uint32_t RTCIM :1;
    volatile uint32_t TnMIM :1;
    const uint32_t reserved :11;
    volatile uint32_t WUEIM :1;
    const uint32_t reserved1 :15;
}TW_GPWTMIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnTORIS :1;
    volatile const uint32_t CnMRIS :1;
    volatile const uint32_t CnERIS :1;
    volatile const uint32_t RTCRIS :1;
    volatile const uint32_t TnMRIS :1;
    const uint32_t reserved :11;
    volatile const uint32_t WUERIS :1;
    const uint32_t reserved1 :15;
}TW_GPWTMRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnTOMIS :1;
    volatile const uint32_t CnMMIS :1;
    volatile const uint32_t CnEMIS :1;
    volatile const uint32_t RTCMIS :1;
    volatile const uint32_t TnMMIS :1;
    const uint32_t reserved :11;
    volatile const uint32_t WUEMIS :1;
    const uint32_t reserved1 :15;
}TW_GPWTMMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnTOCINT :1;
    volatile uint32_t CnMCINT :1;
    volatile uint32_t CnECINT :1;
    volatile uint32_t RTCCINT :1;
    volatile uint32_t TnMCINT :1;
    const uint32_t reserved :11;
    volatile uint32_t WUECINT :1;
    const uint32_t reserved1 :15;
}TW_GPWTMICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnILR_LOW :32;
}TW_GPWTMILR_LOW_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnILR_HIGH :32;
}TW_GPWTMILR_HIGH_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnAMR_LOW :32;
}TW_GPWTMMATCHR_LOW_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnAMR_HIGH :32;
}TW_GPWTMMATCHR_HIGH_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnR_LOW :32;
}TW_GPWTMR_LOW_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnR_HIGH :32;
}TW_GPWTMR_HIGH_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnV_LOW :32;
}TW_GPWTMV_LOW_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnV_HIGH :32;
}TW_GPWTMV_HIGH_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_MODULEW_64_H_ */

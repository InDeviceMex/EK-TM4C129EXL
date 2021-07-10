/**
 *
 * @file TIMER_StructRegister_ModuleW_32.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_MODULEW_32_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_MODULEW_32_H_

#include <xUtils/Standard/Standard.h>

/*************************************************************
 *********************************  TIMER 32 REGS **************
 **************************************************************/

typedef volatile struct
{
    volatile uint32_t TnMR :2;
    volatile uint32_t TnCMR :1;
    volatile uint32_t TnAMS :1;
    volatile uint32_t TnCDIR :1;
    volatile uint32_t TnMIE :1;
    volatile uint32_t TnWOT :1;
    volatile uint32_t TnSNAPS :1;
    volatile uint32_t TnILD :1;
    volatile uint32_t TnPWMIE :1;
    volatile uint32_t TnMRSU :1;
    volatile uint32_t TnPLO :1;
    const uint32_t reserved :20;
}TW_GPTMMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnEN :1;
    volatile uint32_t TnSTALL :1;
    volatile uint32_t TnEVENT :2;
    volatile uint32_t RTCEN :1;
    volatile uint32_t TnOTE :1;
    volatile uint32_t TnPWML :1;
    const uint32_t reserved1 :25;
}TW_GPTMCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnTOIM :1;
    volatile uint32_t CnMIM :1;
    volatile uint32_t CnEIM :1;
    volatile uint32_t RTCIM :1;
    volatile uint32_t TnMIM :1;
    const uint32_t reserved1 :27;
}TW_GPTMIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnTORIS :1;
    volatile const uint32_t CnMRIS :1;
    volatile const uint32_t CnERIS :1;
    volatile const uint32_t RTCRIS :1;
    volatile const uint32_t TnMRIS :1;
    const uint32_t reserved1 :27;
}TW_GPTMRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnTOMIS :1;
    volatile const uint32_t CnMMIS :1;
    volatile const uint32_t CnEMIS :1;
    volatile const uint32_t RTCMIS :1;
    volatile const uint32_t TnMMIS :1;
    const uint32_t reserved1 :27;
}TW_GPTMMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnTOCINT :1;
    volatile uint32_t CnMCINT :1;
    volatile uint32_t CnECINT :1;
    volatile uint32_t RTCCINT :1;
    volatile uint32_t TnMCINT :1;
    const uint32_t reserved1 :27;
}TW_GPTMICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnILR :32;
}TW_GPTMILR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnAMR :32;
}TW_GPTMMATCHR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnR :32;
}TW_GPTMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnV :32;
}TW_GPTMV_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCPD :16;
    const uint32_t reserved :16;
}TW_GPTMRTCPD_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_MODULEW_32_H_ */

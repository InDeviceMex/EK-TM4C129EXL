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

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

/*************************************************************
 *********************************  TIMER 32 REGS **************
 **************************************************************/

typedef volatile struct
{
    volatile UBase_t TnMR :2;
    volatile UBase_t TnCMR :1;
    volatile UBase_t TnAMS :1;
    volatile UBase_t TnCDIR :1;
    volatile UBase_t TnMIE :1;
    volatile UBase_t TnWOT :1;
    volatile UBase_t TnSNAPS :1;
    volatile UBase_t TnILD :1;
    volatile UBase_t TnPWMIE :1;
    volatile UBase_t TnMRSU :1;
    volatile UBase_t TnPLO :1;
    volatile UBase_t TnCINTD :1;
    volatile UBase_t TCACT :3;
    const UBase_t reserved :16;
}TW_GPTMMR_t;

typedef volatile struct
{
    volatile UBase_t TnEN :1;
    volatile UBase_t TnSTALL :1;
    volatile UBase_t TnEVENT :2;
    volatile UBase_t RTCEN :1;
    volatile UBase_t TnOTE :1;
    volatile UBase_t TnPWML :1;
    const UBase_t reserved1 :25;
}TW_GPTMCTL_t;

typedef volatile struct
{
    volatile UBase_t TnTOIM :1;
    volatile UBase_t CnMIM :1;
    volatile UBase_t CnEIM :1;
    volatile UBase_t RTCIM :1;
    volatile UBase_t TnMIM :1;
    volatile UBase_t DMAnIM :1;
    const UBase_t reserved1 :26;
}TW_GPTMIMR_t;

typedef volatile struct
{
    volatile const UBase_t TnTORIS :1;
    volatile const UBase_t CnMRIS :1;
    volatile const UBase_t CnERIS :1;
    volatile const UBase_t RTCRIS :1;
    volatile const UBase_t TnMRIS :1;
    volatile const UBase_t DMAnRIS :1;
    const UBase_t reserved1 :26;
}TW_GPTMRIS_t;

typedef volatile struct
{
    volatile const UBase_t TnTOMIS :1;
    volatile const UBase_t CnMMIS :1;
    volatile const UBase_t CnEMIS :1;
    volatile const UBase_t RTCMIS :1;
    volatile const UBase_t TnMMIS :1;
    volatile const UBase_t DMAnMIS :1;
    const UBase_t reserved1 :26;
}TW_GPTMMIS_t;

typedef volatile struct
{
    volatile UBase_t TnTOCINT :1;
    volatile UBase_t CnMCINT :1;
    volatile UBase_t CnECINT :1;
    volatile UBase_t RTCCINT :1;
    volatile UBase_t TnMCINT :1;
    volatile UBase_t DMAnINT :1;
    const UBase_t reserved1 :26;
}TW_GPTMICR_t;

typedef volatile struct
{
    volatile UBase_t TnILR :32;
}TW_GPTMILR_t;

typedef volatile struct
{
    volatile UBase_t TnMR :32;
}TW_GPTMMATCHR_t;

typedef volatile struct
{
    volatile const UBase_t TnR :32;
}TW_GPTMR_t;

typedef volatile struct
{
    volatile UBase_t TnV :32;
}TW_GPTMV_t;

typedef volatile struct
{
    volatile const UBase_t RTCPD :16;
    const UBase_t reserved :16;
}TW_GPTMRTCPD_t;

typedef volatile struct
{
    volatile UBase_t TnTODMAEN :1;
    volatile UBase_t CnMDMAEN :1;
    volatile UBase_t CnEDMAEN :1;
    volatile UBase_t RTCADCEN :1;
    volatile UBase_t TnMDMAEN :1;
    const UBase_t reserved1 :27;
}TW_GPTMDMAEV_t;

typedef volatile struct
{
    volatile UBase_t TnTOADCEN :1;
    volatile UBase_t CnMADCEN :1;
    volatile UBase_t CnEADCEN :1;
    volatile UBase_t RTCADCEN :1;
    volatile UBase_t TnMADCEN :1;
    const UBase_t reserved1 :27;
}TW_GPTMADCEV_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_MODULEW_32_H_ */

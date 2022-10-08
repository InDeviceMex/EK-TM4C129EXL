/**
 *
 * @file TIMER_StructRegister_Bitbanding_ModuleW_32.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEW_32_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEW_32_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

/*************************************************************
 *********************************  TIMER 32 REGS BITBANDING **************
 **************************************************************/

typedef volatile struct
{
    volatile UBase_t TnMR [2UL];
    volatile UBase_t TnCMR;
    volatile UBase_t TnAMS;
    volatile UBase_t TnCDIR;
    volatile UBase_t TnMIE;
    volatile UBase_t TnWOT;
    volatile UBase_t TnSNAPS;
    volatile UBase_t TnILD;
    volatile UBase_t TnPWMIE;
    volatile UBase_t TnMRSU;
    volatile UBase_t TnPLO;
    volatile UBase_t TnCINTD;
    volatile UBase_t TCACT [3UL];
    const UBase_t reserved [16UL];
}BITBANDING_TW_GPTMMR_t;

typedef volatile struct
{
    volatile UBase_t TnEN;
    volatile UBase_t TnSTALL;
    volatile UBase_t TnEVENT [2UL];
    volatile UBase_t RTCEN;
    volatile UBase_t TnOTE;
    volatile UBase_t TnPWML;
    const UBase_t reserved1 [25UL];
}BITBANDING_TW_GPTMCTL_t;

typedef volatile struct
{
    volatile UBase_t TnTOIM;
    volatile UBase_t CnMIM;
    volatile UBase_t CnEIM;
    volatile UBase_t RTCIM;
    volatile UBase_t TnMIM;
    volatile UBase_t DMAnIM;
    const UBase_t reserved1 [26UL];
}BITBANDING_TW_GPTMIMR_t;

typedef volatile struct
{
    volatile const UBase_t TnTORIS;
    volatile const UBase_t CnMRIS;
    volatile const UBase_t CnERIS;
    volatile const UBase_t RTCRIS;
    volatile const UBase_t TnMRIS;
    volatile const UBase_t DMAnRIS;
    const UBase_t reserved1 [26UL];
}BITBANDING_TW_GPTMRIS_t;

typedef volatile struct
{
    volatile const UBase_t TnTOMIS;
    volatile const UBase_t CnMMIS;
    volatile const UBase_t CnEMIS;
    volatile const UBase_t RTCMIS;
    volatile const UBase_t TnMMIS;
    volatile const UBase_t DMAnMIS;
    const UBase_t reserved1 [26UL];
}BITBANDING_TW_GPTMMIS_t;

typedef volatile struct
{
    volatile UBase_t TnTOCINT;
    volatile UBase_t CnMCINT;
    volatile UBase_t CnECINT;
    volatile UBase_t RTCCINT;
    volatile UBase_t TnMCINT;
    volatile UBase_t DMAnINT;
    const UBase_t reserved1 [26UL];
}BITBANDING_TW_GPTMICR_t;

typedef volatile struct
{
    volatile UBase_t TnILR [32UL];
}BITBANDING_TW_GPTMILR_t;

typedef volatile struct
{
    volatile UBase_t TnMR [32UL];
}BITBANDING_TW_GPTMMATCHR_t;

typedef volatile struct
{
    volatile const UBase_t TnR [32UL];
}BITBANDING_TW_GPTMR_t;

typedef volatile struct
{
    volatile UBase_t TnV [32UL];
}BITBANDING_TW_GPTMV_t;

typedef volatile struct
{
    volatile const UBase_t RTCPD [16UL];
    const UBase_t reserved [16UL];
}BITBANDING_TW_GPTMRTCPD_t;

typedef volatile struct
{
    volatile UBase_t TnTODMAEN;
    volatile UBase_t CnMDMAEN;
    volatile UBase_t CnEDMAEN;
    volatile UBase_t RTCADCEN;
    volatile UBase_t TnMDMAEN;
    const UBase_t reserved1 [27UL];
}BITBANDING_TW_GPTMDMAEV_t;

typedef volatile struct
{
    volatile UBase_t TnTOADCEN;
    volatile UBase_t CnMADCEN;
    volatile UBase_t CnEADCEN;
    volatile UBase_t RTCADCEN;
    volatile UBase_t TnMADCEN;
    const UBase_t reserved1 [27UL];
}BITBANDING_TW_GPTMADCEV_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEW_32_H_ */

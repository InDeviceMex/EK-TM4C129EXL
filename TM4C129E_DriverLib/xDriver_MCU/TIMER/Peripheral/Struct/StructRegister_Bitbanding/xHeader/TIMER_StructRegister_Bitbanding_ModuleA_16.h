/**
 *
 * @file TIMER_StructRegister_Bitbanding_ModuleA_16.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEA_16_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEA_16_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

/*************************************************************
 ***************************  TIMERA 16 REGS BITBANDING**************
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
}BITBANDING_TA_GPTMMR_t;

typedef volatile struct
{
    volatile UBase_t TnEN;
    volatile UBase_t TnSTALL;
    volatile UBase_t TnEVENT [2UL];
    const UBase_t reserved;
    volatile UBase_t TnOTE;
    volatile UBase_t TnPWML;
    const UBase_t reserved1 [25UL];
}BITBANDING_TA_GPTMCTL_t;

typedef volatile struct
{
    volatile UBase_t TnTOIM;
    volatile UBase_t CnMIM;
    volatile UBase_t CnEIM;
    const UBase_t reserved;
    volatile UBase_t TnMIM;
    volatile UBase_t DMAnIM;
    const UBase_t reserved1 [26UL];
}BITBANDING_TA_GPTMIMR_t;

typedef volatile struct
{
    volatile const UBase_t TnTORIS;
    volatile const UBase_t CnMRIS;
    volatile const UBase_t CnERIS;
    const UBase_t reserved;
    volatile const UBase_t TnMRIS;
    volatile const UBase_t DMAnRIS;
    const UBase_t reserved1 [26UL];
}BITBANDING_TA_GPTMRIS_t;

typedef volatile struct
{
    volatile const UBase_t TnTOMIS;
    volatile const UBase_t CnMMIS;
    volatile const UBase_t CnEMIS;
    const UBase_t reserved;
    volatile const UBase_t TnMMIS;
    volatile const UBase_t DMAnMIS;
    const UBase_t reserved1 [26UL];
}BITBANDING_TA_GPTMMIS_t;

typedef volatile struct
{
    volatile UBase_t TnTOCINT;
    volatile UBase_t CnMCINT;
    volatile UBase_t CnECINT;
    const UBase_t reserved;
    volatile UBase_t TnMCINT;
    volatile UBase_t DMAnINT;
    const UBase_t reserved1 [26UL];
}BITBANDING_TA_GPTMICR_t;

typedef volatile struct
{
    volatile UBase_t TnILR [16UL];
    const UBase_t reserved [16UL];
}BITBANDING_TA_GPTMILR_t;

typedef volatile struct
{
    volatile UBase_t TnMR [16UL];
    const UBase_t reserved [16UL];
}BITBANDING_TA_GPTMMATCHR_t;

typedef volatile struct
{
    volatile UBase_t TnPSR [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_TA_GPTMPR_t;

typedef volatile struct
{
    volatile UBase_t TnPSMR [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_TA_GPTMPMR_t;

typedef volatile struct
{
    volatile const UBase_t TnR [32UL];
}BITBANDING_TA_GPTMR_t;

typedef volatile struct
{
    volatile UBase_t TnV [32UL];
}BITBANDING_TA_GPTMV_t;

typedef volatile struct
{
    volatile const UBase_t PSS [16UL];
    const UBase_t reserved [16UL];
}BITBANDING_TA_GPTMPS_t;

typedef volatile struct
{
    volatile UBase_t TnTODMAEN;
    volatile UBase_t CnMDMAEN;
    volatile UBase_t CnEDMAEN;
    const UBase_t reserved;
    volatile UBase_t TnMDMAEN;
    const UBase_t reserved1 [27UL];
}BITBANDING_TA_GPTMDMAEV_t;

typedef volatile struct
{
    volatile UBase_t TnTOADCEN;
    volatile UBase_t CnMADCEN;
    volatile UBase_t CnEADCEN;
    const UBase_t reserved;
    volatile UBase_t TnMADCEN;
    const UBase_t reserved1 [27UL];
}BITBANDING_TA_GPTMADCEV_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEA_16_H_ */

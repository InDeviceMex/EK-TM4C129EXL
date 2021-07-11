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

#include <xUtils/Standard/Standard.h>

/*************************************************************
 ***************************  TIMERA 16 REGS BITBANDING**************
 **************************************************************/

typedef volatile struct
{
    volatile uint32_t TnMR [2UL];
    volatile uint32_t TnCMR;
    volatile uint32_t TnAMS;
    volatile uint32_t TnCDIR;
    volatile uint32_t TnMIE;
    volatile uint32_t TnWOT;
    volatile uint32_t TnSNAPS;
    volatile uint32_t TnILD;
    volatile uint32_t TnPWMIE;
    volatile uint32_t TnMRSU;
    volatile uint32_t TnPLO;
    volatile uint32_t TnCINTD;
    volatile uint32_t TCACT [3UL];
    const uint32_t reserved [16UL];
}BITBANDING_TA_GPTMMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnEN;
    volatile uint32_t TnSTALL;
    volatile uint32_t TnEVENT [2UL];
    const uint32_t reserved;
    volatile uint32_t TnOTE;
    volatile uint32_t TnPWML;
    const uint32_t reserved1 [25UL];
}BITBANDING_TA_GPTMCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnTOIM;
    volatile uint32_t CnMIM;
    volatile uint32_t CnEIM;
    const uint32_t reserved;
    volatile uint32_t TnMIM;
    volatile uint32_t DMAnIM;
    const uint32_t reserved1 [26UL];
}BITBANDING_TA_GPTMIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnTORIS;
    volatile const uint32_t CnMRIS;
    volatile const uint32_t CnERIS;
    const uint32_t reserved;
    volatile const uint32_t TnMRIS;
    volatile const uint32_t DMAnRIS;
    const uint32_t reserved1 [26UL];
}BITBANDING_TA_GPTMRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnTOMIS;
    volatile const uint32_t CnMMIS;
    volatile const uint32_t CnEMIS;
    const uint32_t reserved;
    volatile const uint32_t TnMMIS;
    volatile const uint32_t DMAnMIS;
    const uint32_t reserved1 [26UL];
}BITBANDING_TA_GPTMMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnTOCINT;
    volatile uint32_t CnMCINT;
    volatile uint32_t CnECINT;
    const uint32_t reserved;
    volatile uint32_t TnMCINT;
    volatile uint32_t DMAnINT;
    const uint32_t reserved1 [26UL];
}BITBANDING_TA_GPTMICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnILR [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_TA_GPTMILR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnMR [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_TA_GPTMMATCHR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnPSR [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_TA_GPTMPR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnPSMR [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_TA_GPTMPMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnR [32UL];
}BITBANDING_TA_GPTMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnV [32UL];
}BITBANDING_TA_GPTMV_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSS [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_TA_GPTMPS_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnTODMAEN;
    volatile uint32_t CnMDMAEN;
    volatile uint32_t CnEDMAEN;
    const uint32_t reserved;
    volatile uint32_t TnMDMAEN;
    const uint32_t reserved1 [27UL];
}BITBANDING_TA_GPTMDMAEV_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnTOADCEN;
    volatile uint32_t CnMADCEN;
    volatile uint32_t CnEADCEN;
    const uint32_t reserved;
    volatile uint32_t TnMADCEN;
    const uint32_t reserved1 [27UL];
}BITBANDING_TA_GPTMADCEV_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEA_16_H_ */

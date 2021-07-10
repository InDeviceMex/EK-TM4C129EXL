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

#include <xUtils/Standard/Standard.h>

/*************************************************************
 *********************************  TIMER 32 REGS BITBANDING **************
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
    const uint32_t reserved [20UL];
}BITBANDING_TW_GPTMMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnEN;
    volatile uint32_t TnSTALL;
    volatile uint32_t TnEVENT [2UL];
    volatile uint32_t RTCEN;
    volatile uint32_t TnOTE;
    volatile uint32_t TnPWML;
    const uint32_t reserved1 [25UL];
}BITBANDING_TW_GPTMCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnTOIM;
    volatile uint32_t CnMIM;
    volatile uint32_t CnEIM;
    volatile uint32_t RTCIM;
    volatile uint32_t TnMIM;
    const uint32_t reserved1 [27UL];
}BITBANDING_TW_GPTMIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnTORIS;
    volatile const uint32_t CnMRIS;
    volatile const uint32_t CnERIS;
    volatile const uint32_t RTCRIS;
    volatile const uint32_t TnMRIS;
    const uint32_t reserved1 [27UL];
}BITBANDING_TW_GPTMRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnTOMIS;
    volatile const uint32_t CnMMIS;
    volatile const uint32_t CnEMIS;
    volatile const uint32_t RTCMIS;
    volatile const uint32_t TnMMIS;
    const uint32_t reserved1 [27UL];
}BITBANDING_TW_GPTMMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnTOCINT;
    volatile uint32_t CnMCINT;
    volatile uint32_t CnECINT;
    volatile uint32_t RTCCINT;
    volatile uint32_t TnMCINT;
    const uint32_t reserved1 [27UL];
}BITBANDING_TW_GPTMICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnILR [32UL];
}BITBANDING_TW_GPTMILR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnAMR [32UL];
}BITBANDING_TW_GPTMMATCHR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnR [32UL];
}BITBANDING_TW_GPTMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnV [32UL];
}BITBANDING_TW_GPTMV_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCPD [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_TW_GPTMRTCPD_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEW_32_H_ */

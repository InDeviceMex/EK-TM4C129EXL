/**
 *
 * @file TIMER_StructRegister_Bitbanding_ModuleB_16.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEB_16_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEB_16_H_

#include <xUtils/Standard/Standard.h>

/*************************************************************
 ***************************  TIMERB 16 REGS BITBANDING **************
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
}BITBANDING_TB_GPTMMR_TypeDef;

typedef volatile struct
{
    const uint32_t reserved [8UL];
    volatile uint32_t TnEN;
    volatile uint32_t TnSTALL;
    volatile uint32_t TnEVENT [2UL];
    volatile uint32_t reserved1;
    volatile uint32_t TnOTE;
    volatile uint32_t TnPWML;
    const uint32_t reserved2 [17UL];
}BITBANDING_TB_GPTMCTL_TypeDef;

typedef volatile struct
{
    const uint32_t reserved [8UL];
    volatile uint32_t TnTOIM;
    volatile uint32_t CnMIM;
    volatile uint32_t CnEIM;
    volatile uint32_t TnMIM;
    const uint32_t reserved1 [20UL];
}BITBANDING_TB_GPTMIMR_TypeDef;

typedef volatile struct
{
    const uint32_t reserved [8UL];
    volatile const uint32_t TnTORIS;
    volatile const uint32_t CnMRIS;
    volatile const uint32_t CnERIS;
    volatile const uint32_t TnMRIS;
    const uint32_t reserved1 [20UL];
}BITBANDING_TB_GPTMRIS_TypeDef;

typedef volatile struct
{
    const uint32_t reserved [8UL];
    volatile const uint32_t TnTOMIS;
    volatile const uint32_t CnMMIS;
    volatile const uint32_t CnEMIS;
    volatile const uint32_t TnMMIS;
    const uint32_t reserved1 [20UL];
}BITBANDING_TB_GPTMMIS_TypeDef;

typedef volatile struct
{
    const uint32_t reserved [8UL];
    volatile uint32_t TnTOCINT;
    volatile uint32_t CnMCINT;
    volatile uint32_t CnECINT;
    volatile uint32_t TnMCINT;
    const uint32_t reserved1 [20UL];
}BITBANDING_TB_GPTMICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnILR [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_TB_GPTMILR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnMR [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_TB_GPTMMATCHR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnPSR [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_TB_GPTMPR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnPSMR [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_TB_GPTMPMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnR [32UL];
}BITBANDING_TB_GPTMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnV [32UL];
}BITBANDING_TB_GPTMV_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSS [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_TB_GPTMPS_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEB_16_H_ */

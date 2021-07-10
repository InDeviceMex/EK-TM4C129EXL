/**
 *
 * @file TIMER_StructRegister_Bitbanding_ModuleW_64.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEW_64_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEW_64_H_

#include <xUtils/Standard/Standard.h>

/*************************************************************
 *********************************  TIMER 64 REGS **************
 **************************************************************/

typedef volatile struct
{
    volatile uint32_t TnTOIM;
    volatile uint32_t CnMIM;
    volatile uint32_t CnEIM;
    volatile uint32_t RTCIM;
    volatile uint32_t TnMIM;
    const uint32_t reserved [11UL];
    volatile uint32_t WUEIM;
    const uint32_t reserved1 [15UL];
}BITBANDING_TW_GPWTMIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnTORIS;
    volatile const uint32_t CnMRIS;
    volatile const uint32_t CnERIS;
    volatile const uint32_t RTCRIS;
    volatile const uint32_t TnMRIS;
    const uint32_t reserved [11UL];
    volatile const uint32_t WUERIS;
    const uint32_t reserved1 [15UL];
}BITBANDING_TW_GPWTMRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnTOMIS;
    volatile const uint32_t CnMMIS;
    volatile const uint32_t CnEMIS;
    volatile const uint32_t RTCMIS;
    volatile const uint32_t TnMMIS;
    const uint32_t reserved [11UL];
    volatile const uint32_t WUEMIS;
    const uint32_t reserved1 [15UL];
}BITBANDING_TW_GPWTMMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnTOCINT;
    volatile uint32_t CnMCINT;
    volatile uint32_t CnECINT;
    volatile uint32_t RTCCINT;
    volatile uint32_t TnMCINT;
    const uint32_t reserved [11UL];
    volatile uint32_t WUECINT;
    const uint32_t reserved1 [15UL];
}BITBANDING_TW_GPWTMICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnILR_LOW [32UL];
}BITBANDING_TW_GPWTMILR_LOW_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnILR_HIGH [32UL];
}BITBANDING_TW_GPWTMILR_HIGH_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnAMR_LOW [32UL];
}BITBANDING_TW_GPWTMMATCHR_LOW_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnAMR_HIGH [32UL];
}BITBANDING_TW_GPWTMMATCHR_HIGH_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnR_LOW [32UL];
}BITBANDING_TW_GPWTMR_LOW_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TnR_HIGH [32UL];
}BITBANDING_TW_GPWTMR_HIGH_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnV_LOW [32UL];
}BITBANDING_TW_GPWTMV_LOW_TypeDef;

typedef volatile struct
{
    volatile uint32_t TnV_HIGH [32UL];
}BITBANDING_TW_GPWTMV_HIGH_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_MODULEW_64_H_ */

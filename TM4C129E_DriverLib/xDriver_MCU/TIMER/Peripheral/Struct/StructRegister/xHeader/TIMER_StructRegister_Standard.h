/**
 *
 * @file TIMER_StructRegister_Standard.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_STANDARD_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_STANDARD_H_

#include <xUtils/Standard/Standard.h>

/*************************************************************
 *********************************  STANDARD REGS **************
 **************************************************************/

typedef volatile struct
{
    volatile uint32_t TAMR :2;
    volatile uint32_t TACMR :1;
    volatile uint32_t TAAMS :1;
    volatile uint32_t TACDIR :1;
    volatile uint32_t TAMIE :1;
    volatile uint32_t TAWOT :1;
    volatile uint32_t TASNAPS :1;
    volatile uint32_t TAILD :1;
    volatile uint32_t TAPWMIE :1;
    volatile uint32_t TAMRSU :1;
    volatile uint32_t TAPLO :1;
    const uint32_t reserved :20;
}GPTMTAMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBMR :2;
    volatile uint32_t TBCMR :1;
    volatile uint32_t TBAMS :1;
    volatile uint32_t TBCDIR :1;
    volatile uint32_t TBMIE :1;
    volatile uint32_t TBWOT :1;
    volatile uint32_t TBSNAPS :1;
    volatile uint32_t TBILD :1;
    volatile uint32_t TBPWMIE :1;
    volatile uint32_t TBMRSU :1;
    volatile uint32_t TBPLO :1;
    const uint32_t reserved :20;
}GPTMTBMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAEN :1;
    volatile uint32_t TASTALL :1;
    volatile uint32_t TAEVENT :2;
    volatile uint32_t RTCEN :1;
    volatile uint32_t TAOTE :1;
    volatile uint32_t TAPWML :1;
    const uint32_t reserved :1;
    volatile uint32_t TBEN :1;
    volatile uint32_t TBSTALL :1;
    volatile uint32_t TBEVENT :2;
    const uint32_t reserved1 :1;
    volatile uint32_t TBOTE :1;
    volatile uint32_t TBPWML :1;
    const uint32_t reserved2 :17;
}GPTMCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t TATOIM :1;
    volatile uint32_t CAMIM :1;
    volatile uint32_t CAEIM :1;
    volatile uint32_t RTCIM :1;
    volatile uint32_t TAMIM :1;
    const uint32_t reserved :3;
    volatile uint32_t TBTOIM :1;
    volatile uint32_t CBMIM :1;
    volatile uint32_t CBEIM :1;
    volatile uint32_t TBMIM :1;
    const uint32_t reserved1 :4;
    volatile uint32_t WUEIM :1;
    const uint32_t reserved2 :15;
}GPTMIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TATORIS :1;
    volatile const uint32_t CAMRIS :1;
    volatile const uint32_t CAERIS :1;
    volatile const uint32_t RTCRIS :1;
    volatile const uint32_t TAMRIS :1;
    const uint32_t reserved :3;
    volatile const uint32_t TBTORIS :1;
    volatile const uint32_t CBMRIS :1;
    volatile const uint32_t CBERIS :1;
    volatile const uint32_t TBMRIS :1;
    const uint32_t reserved1 :4;
    volatile const uint32_t WUERIS :1;
    const uint32_t reserved2 :15;
}GPTMRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TATOMIS :1;
    volatile const uint32_t CAMMIS :1;
    volatile const uint32_t CAEMIS :1;
    volatile const uint32_t RTCMIS :1;
    volatile const uint32_t TAMMIS :1;
    const uint32_t reserved :3;
    volatile const uint32_t TBTOMIS :1;
    volatile const uint32_t CBMMIS :1;
    volatile const uint32_t CBEMIS :1;
    volatile const uint32_t TBMMIS :1;
    const uint32_t reserved1 :4;
    volatile const uint32_t WUEMIS :1;
    const uint32_t reserved2 :15;
}GPTMMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t TATOCINT :1;
    volatile uint32_t CAMCINT :1;
    volatile uint32_t CAECINT :1;
    volatile uint32_t RTCCINT :1;
    volatile uint32_t TAMCINT :1;
    const uint32_t reserved :3;
    volatile uint32_t TBTOCINT :1;
    volatile uint32_t CBMCINT :1;
    volatile uint32_t CBECINT :1;
    volatile uint32_t TBMCINT :1;
    const uint32_t reserved1 :4;
    volatile uint32_t WUECINT :1;
    const uint32_t reserved2 :15;
}GPTMICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAILR :32;
}GPTMTAILR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBILR :32;
}GPTMTBILR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAMR :32;
}GPTMTAMATCHR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBMR :32;
}GPTMTBMATCHR_TypeDef;


typedef volatile struct
{
    volatile uint32_t TAPSR :8;
    volatile uint32_t TAPSRH :8;
    const uint32_t reserved :16;
}GPTMTAPR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBPSR :8;
    volatile uint32_t TBPSRH :8;
    const uint32_t reserved :16;
}GPTMTBPR_TypeDef;


typedef volatile struct
{
    volatile uint32_t TAPSMR :8;
    volatile uint32_t TAPSMRH :8;
    const uint32_t reserved :16;
}GPTMTAPMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBPSMR :8;
    volatile uint32_t TBPSMRH :8;
    const uint32_t reserved :16;
}GPTMTBPMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TAR :32;
}GPTMTAR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TBR :32;
}GPTMTBR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAV :32;
}GPTMTAV_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBV :32;
}GPTMTBV_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSS :16;
    const uint32_t reserved :16;
}GPTMTAPS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSS :16;
    const uint32_t reserved :16;
}GPTMTBPS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSV :16;
    const uint32_t reserved :16;
}GPTMTAPV_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSV :16;
    const uint32_t reserved :16;
}GPTMTBPV_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCPD :16;
    const uint32_t reserved :16;
}GPTMRTCPD_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_STANDARD_H_ */

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

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

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
    volatile uint32_t TACINTD :1;
    volatile uint32_t TCACT :3;
    const uint32_t reserved :16;
}GPTMTAMR_t;

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
    volatile uint32_t TBCINTD :1;
    volatile uint32_t TCBCT :3;
    const uint32_t reserved :16;
}GPTMTBMR_t;

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
}GPTMCTL_t;

typedef volatile struct
{
    volatile uint32_t TATOIM :1;
    volatile uint32_t CAMIM :1;
    volatile uint32_t CAEIM :1;
    volatile uint32_t RTCIM :1;
    volatile uint32_t TAMIM :1;
    volatile uint32_t DMAAIM :1;
    const uint32_t reserved :2;
    volatile uint32_t TBTOIM :1;
    volatile uint32_t CBMIM :1;
    volatile uint32_t CBEIM :1;
    volatile uint32_t TBMIM :1;
    const uint32_t reserved1 :1;
    volatile uint32_t DMABIM :1;
    const uint32_t reserved2 :18;
}GPTMIMR_t;

typedef volatile struct
{
    volatile const uint32_t TATORIS :1;
    volatile const uint32_t CAMRIS :1;
    volatile const uint32_t CAERIS :1;
    volatile const uint32_t RTCRIS :1;
    volatile const uint32_t TAMRIS :1;
    volatile const uint32_t DMAARIS :1;
    const uint32_t reserved :2;
    volatile const uint32_t TBTORIS :1;
    volatile const uint32_t CBMRIS :1;
    volatile const uint32_t CBERIS :1;
    volatile const uint32_t TBMRIS :1;
    const uint32_t reserved1 :1;
    volatile const uint32_t DMABRIS :1;
    const uint32_t reserved2 :18;
}GPTMRIS_t;

typedef volatile struct
{
    volatile const uint32_t TATOMIS :1;
    volatile const uint32_t CAMMIS :1;
    volatile const uint32_t CAEMIS :1;
    volatile const uint32_t RTCMIS :1;
    volatile const uint32_t TAMMIS :1;
    volatile const uint32_t DMAAMIS :1;
    const uint32_t reserved :2;
    volatile const uint32_t TBTOMIS :1;
    volatile const uint32_t CBMMIS :1;
    volatile const uint32_t CBEMIS :1;
    volatile const uint32_t TBMMIS :1;
    const uint32_t reserved1 :1;
    volatile const uint32_t DMABMIS :1;
    const uint32_t reserved2 :18;
}GPTMMIS_t;

typedef volatile struct
{
    volatile uint32_t TATOCINT :1;
    volatile uint32_t CAMCINT :1;
    volatile uint32_t CAECINT :1;
    volatile uint32_t RTCCINT :1;
    volatile uint32_t TAMCINT :1;
    volatile uint32_t DMAAINT :1;
    const uint32_t reserved :2;
    volatile uint32_t TBTOCINT :1;
    volatile uint32_t CBMCINT :1;
    volatile uint32_t CBECINT :1;
    volatile uint32_t TBMCINT :1;
    const uint32_t reserved1 :1;
    volatile uint32_t DMABINT :1;
    const uint32_t reserved2 :18;
}GPTMICR_t;

typedef volatile struct
{
    volatile uint32_t TAILR :32;
}GPTMTAILR_t;

typedef volatile struct
{
    volatile uint32_t TBILR :32;
}GPTMTBILR_t;

typedef volatile struct
{
    volatile uint32_t TAMR :32;
}GPTMTAMATCHR_t;

typedef volatile struct
{
    volatile uint32_t TBMR :32;
}GPTMTBMATCHR_t;


typedef volatile struct
{
    volatile uint32_t TAPSR :8;
    const uint32_t reserved :24;
}GPTMTAPR_t;

typedef volatile struct
{
    volatile uint32_t TBPSR :8;
    const uint32_t reserved :24;
}GPTMTBPR_t;


typedef volatile struct
{
    volatile uint32_t TAPSMR :8;
    const uint32_t reserved :24;
}GPTMTAPMR_t;

typedef volatile struct
{
    volatile uint32_t TBPSMR :8;
    const uint32_t reserved :24;
}GPTMTBPMR_t;

typedef volatile struct
{
    volatile const uint32_t TAR :32;
}GPTMTAR_t;

typedef volatile struct
{
    volatile const uint32_t TBR :32;
}GPTMTBR_t;

typedef volatile struct
{
    volatile uint32_t TAV :32;
}GPTMTAV_t;

typedef volatile struct
{
    volatile uint32_t TBV :32;
}GPTMTBV_t;

typedef volatile struct
{
    volatile const uint32_t RTCPD :16;
    const uint32_t reserved :16;
}GPTMRTCPD_t;

typedef volatile struct
{
    volatile const uint32_t PSS :16;
    const uint32_t reserved :16;
}GPTMTAPS_t;

typedef volatile struct
{
    volatile const uint32_t PSS :16;
    const uint32_t reserved :16;
}GPTMTBPS_t;

typedef volatile struct
{
    volatile uint32_t TATODMAEN :1;
    volatile uint32_t CAMDMAEN :1;
    volatile uint32_t CAEDMAEN :1;
    volatile uint32_t RTCDMAEN :1;
    volatile uint32_t TAMDMAEN :1;
    const uint32_t reserved :3;
    volatile uint32_t TBTODMAEN :1;
    volatile uint32_t CBMDMAEN :1;
    volatile uint32_t CBEDMAEN :1;
    volatile uint32_t TBMDMAEN :1;
    const uint32_t reserved1 :20;
}GPTMDMAEV_t;

typedef volatile struct
{
    volatile uint32_t TATOADCEN :1;
    volatile uint32_t CAMADCEN :1;
    volatile uint32_t CAEADCEN :1;
    volatile uint32_t RTCADCEN :1;
    volatile uint32_t TAMADCEN :1;
    const uint32_t reserved :3;
    volatile uint32_t TBTOADCEN :1;
    volatile uint32_t CBMADCEN :1;
    volatile uint32_t CBEADCEN :1;
    volatile uint32_t TBMADCEN :1;
    const uint32_t reserved1 :20;
}GPTMADCEV_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_STANDARD_H_ */

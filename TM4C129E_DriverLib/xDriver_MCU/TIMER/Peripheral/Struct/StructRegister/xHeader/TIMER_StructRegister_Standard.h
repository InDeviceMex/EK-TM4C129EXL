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

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

/*************************************************************
 *********************************  STANDARD REGS **************
 **************************************************************/

typedef volatile struct
{
    volatile UBase_t TAMR :2;
    volatile UBase_t TACMR :1;
    volatile UBase_t TAAMS :1;
    volatile UBase_t TACDIR :1;
    volatile UBase_t TAMIE :1;
    volatile UBase_t TAWOT :1;
    volatile UBase_t TASNAPS :1;
    volatile UBase_t TAILD :1;
    volatile UBase_t TAPWMIE :1;
    volatile UBase_t TAMRSU :1;
    volatile UBase_t TAPLO :1;
    volatile UBase_t TACINTD :1;
    volatile UBase_t TCACT :3;
    const UBase_t reserved :16;
}GPTMTAMR_t;

typedef volatile struct
{
    volatile UBase_t TBMR :2;
    volatile UBase_t TBCMR :1;
    volatile UBase_t TBAMS :1;
    volatile UBase_t TBCDIR :1;
    volatile UBase_t TBMIE :1;
    volatile UBase_t TBWOT :1;
    volatile UBase_t TBSNAPS :1;
    volatile UBase_t TBILD :1;
    volatile UBase_t TBPWMIE :1;
    volatile UBase_t TBMRSU :1;
    volatile UBase_t TBPLO :1;
    volatile UBase_t TBCINTD :1;
    volatile UBase_t TCBCT :3;
    const UBase_t reserved :16;
}GPTMTBMR_t;

typedef volatile struct
{
    volatile UBase_t TAEN :1;
    volatile UBase_t TASTALL :1;
    volatile UBase_t TAEVENT :2;
    volatile UBase_t RTCEN :1;
    volatile UBase_t TAOTE :1;
    volatile UBase_t TAPWML :1;
    const UBase_t reserved :1;
    volatile UBase_t TBEN :1;
    volatile UBase_t TBSTALL :1;
    volatile UBase_t TBEVENT :2;
    const UBase_t reserved1 :1;
    volatile UBase_t TBOTE :1;
    volatile UBase_t TBPWML :1;
    const UBase_t reserved2 :17;
}GPTMCTL_t;

typedef volatile struct
{
    volatile UBase_t TATOIM :1;
    volatile UBase_t CAMIM :1;
    volatile UBase_t CAEIM :1;
    volatile UBase_t RTCIM :1;
    volatile UBase_t TAMIM :1;
    volatile UBase_t DMAAIM :1;
    const UBase_t reserved :2;
    volatile UBase_t TBTOIM :1;
    volatile UBase_t CBMIM :1;
    volatile UBase_t CBEIM :1;
    volatile UBase_t TBMIM :1;
    const UBase_t reserved1 :1;
    volatile UBase_t DMABIM :1;
    const UBase_t reserved2 :18;
}GPTMIMR_t;

typedef volatile struct
{
    volatile const UBase_t TATORIS :1;
    volatile const UBase_t CAMRIS :1;
    volatile const UBase_t CAERIS :1;
    volatile const UBase_t RTCRIS :1;
    volatile const UBase_t TAMRIS :1;
    volatile const UBase_t DMAARIS :1;
    const UBase_t reserved :2;
    volatile const UBase_t TBTORIS :1;
    volatile const UBase_t CBMRIS :1;
    volatile const UBase_t CBERIS :1;
    volatile const UBase_t TBMRIS :1;
    const UBase_t reserved1 :1;
    volatile const UBase_t DMABRIS :1;
    const UBase_t reserved2 :18;
}GPTMRIS_t;

typedef volatile struct
{
    volatile const UBase_t TATOMIS :1;
    volatile const UBase_t CAMMIS :1;
    volatile const UBase_t CAEMIS :1;
    volatile const UBase_t RTCMIS :1;
    volatile const UBase_t TAMMIS :1;
    volatile const UBase_t DMAAMIS :1;
    const UBase_t reserved :2;
    volatile const UBase_t TBTOMIS :1;
    volatile const UBase_t CBMMIS :1;
    volatile const UBase_t CBEMIS :1;
    volatile const UBase_t TBMMIS :1;
    const UBase_t reserved1 :1;
    volatile const UBase_t DMABMIS :1;
    const UBase_t reserved2 :18;
}GPTMMIS_t;

typedef volatile struct
{
    volatile UBase_t TATOCINT :1;
    volatile UBase_t CAMCINT :1;
    volatile UBase_t CAECINT :1;
    volatile UBase_t RTCCINT :1;
    volatile UBase_t TAMCINT :1;
    volatile UBase_t DMAAINT :1;
    const UBase_t reserved :2;
    volatile UBase_t TBTOCINT :1;
    volatile UBase_t CBMCINT :1;
    volatile UBase_t CBECINT :1;
    volatile UBase_t TBMCINT :1;
    const UBase_t reserved1 :1;
    volatile UBase_t DMABINT :1;
    const UBase_t reserved2 :18;
}GPTMICR_t;

typedef volatile struct
{
    volatile UBase_t TAILR :32;
}GPTMTAILR_t;

typedef volatile struct
{
    volatile UBase_t TBILR :32;
}GPTMTBILR_t;

typedef volatile struct
{
    volatile UBase_t TAMR :32;
}GPTMTAMATCHR_t;

typedef volatile struct
{
    volatile UBase_t TBMR :32;
}GPTMTBMATCHR_t;


typedef volatile struct
{
    volatile UBase_t TAPSR :8;
    const UBase_t reserved :24;
}GPTMTAPR_t;

typedef volatile struct
{
    volatile UBase_t TBPSR :8;
    const UBase_t reserved :24;
}GPTMTBPR_t;


typedef volatile struct
{
    volatile UBase_t TAPSMR :8;
    const UBase_t reserved :24;
}GPTMTAPMR_t;

typedef volatile struct
{
    volatile UBase_t TBPSMR :8;
    const UBase_t reserved :24;
}GPTMTBPMR_t;

typedef volatile struct
{
    volatile const UBase_t TAR :32;
}GPTMTAR_t;

typedef volatile struct
{
    volatile const UBase_t TBR :32;
}GPTMTBR_t;

typedef volatile struct
{
    volatile UBase_t TAV :32;
}GPTMTAV_t;

typedef volatile struct
{
    volatile UBase_t TBV :32;
}GPTMTBV_t;

typedef volatile struct
{
    volatile const UBase_t RTCPD :16;
    const UBase_t reserved :16;
}GPTMRTCPD_t;

typedef volatile struct
{
    volatile const UBase_t PSS :16;
    const UBase_t reserved :16;
}GPTMTAPS_t;

typedef volatile struct
{
    volatile const UBase_t PSS :16;
    const UBase_t reserved :16;
}GPTMTBPS_t;

typedef volatile struct
{
    volatile UBase_t TATODMAEN :1;
    volatile UBase_t CAMDMAEN :1;
    volatile UBase_t CAEDMAEN :1;
    volatile UBase_t RTCDMAEN :1;
    volatile UBase_t TAMDMAEN :1;
    const UBase_t reserved :3;
    volatile UBase_t TBTODMAEN :1;
    volatile UBase_t CBMDMAEN :1;
    volatile UBase_t CBEDMAEN :1;
    volatile UBase_t TBMDMAEN :1;
    const UBase_t reserved1 :20;
}GPTMDMAEV_t;

typedef volatile struct
{
    volatile UBase_t TATOADCEN :1;
    volatile UBase_t CAMADCEN :1;
    volatile UBase_t CAEADCEN :1;
    volatile UBase_t RTCADCEN :1;
    volatile UBase_t TAMADCEN :1;
    const UBase_t reserved :3;
    volatile UBase_t TBTOADCEN :1;
    volatile UBase_t CBMADCEN :1;
    volatile UBase_t CBEADCEN :1;
    volatile UBase_t TBMADCEN :1;
    const UBase_t reserved1 :20;
}GPTMADCEV_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_TIMER_STRUCTREGISTER_STANDARD_H_ */

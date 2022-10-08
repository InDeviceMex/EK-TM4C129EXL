/**
 *
 * @file TIMER_StructRegister_Bitbanding_Standard.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_STANDARD_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_STANDARD_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

/*************************************************************
 *********************************  STANDARD REGS BITBANDING **************
 **************************************************************/

typedef volatile struct
{
    volatile UBase_t TAMR [2UL];
    volatile UBase_t TACMR;
    volatile UBase_t TAAMS;
    volatile UBase_t TACDIR;
    volatile UBase_t TAMIE;
    volatile UBase_t TAWOT;
    volatile UBase_t TASNAPS;
    volatile UBase_t TAILD;
    volatile UBase_t TAPWMIE;
    volatile UBase_t TAMRSU;
    volatile UBase_t TAPLO;
    volatile UBase_t TACINTD;
    volatile UBase_t TCACT [3UL];
    const UBase_t reserved [16UL];
}BITBANDING_GPTMTAMR_t;

typedef volatile struct
{
    volatile UBase_t TBMR [2UL];
    volatile UBase_t TBCMR;
    volatile UBase_t TBAMS;
    volatile UBase_t TBCDIR;
    volatile UBase_t TBMIE;
    volatile UBase_t TBWOT;
    volatile UBase_t TBSNAPS;
    volatile UBase_t TBILD;
    volatile UBase_t TBPWMIE;
    volatile UBase_t TBMRSU;
    volatile UBase_t TBPLO;
    volatile UBase_t TBCINTD;
    volatile UBase_t TCBCT [3UL];
    const UBase_t reserved [16UL];
}BITBANDING_GPTMTBMR_t;

typedef volatile struct
{
    volatile UBase_t TAEN;
    volatile UBase_t TASTALL;
    volatile UBase_t TAEVENT [2UL];
    volatile UBase_t RTCEN;
    volatile UBase_t TAOTE;
    volatile UBase_t TAPWML;
    const UBase_t reserved;
    volatile UBase_t TBEN;
    volatile UBase_t TBSTALL;
    volatile UBase_t TBEVENT [2UL];
    const UBase_t reserved1;
    volatile UBase_t TBOTE;
    volatile UBase_t TBPWML;
    const UBase_t reserved2 [17UL];
}BITBANDING_GPTMCTL_t;

typedef volatile struct
{
    volatile UBase_t TATOIM;
    volatile UBase_t CAMIM;
    volatile UBase_t CAEIM;
    volatile UBase_t RTCIM;
    volatile UBase_t TAMIM;
    volatile UBase_t DMAAIM;
    const UBase_t reserved [2UL];
    volatile UBase_t TBTOIM;
    volatile UBase_t CBMIM;
    volatile UBase_t CBEIM;
    volatile UBase_t TBMIM;
    const UBase_t reserved1;
    volatile UBase_t DMABIM;
    const UBase_t reserved2 [18UL];
}BITBANDING_GPTMIMR_t;

typedef volatile struct
{
    volatile const UBase_t TATORIS;
    volatile const UBase_t CAMRIS;
    volatile const UBase_t CAERIS;
    volatile const UBase_t RTCRIS;
    volatile const UBase_t TAMRIS;
    volatile const UBase_t DMAARIS;
    const UBase_t reserved [2UL];
    volatile const UBase_t TBTORIS;
    volatile const UBase_t CBMRIS;
    volatile const UBase_t CBERIS;
    volatile const UBase_t TBMRIS;
    const UBase_t reserved1;
    volatile const UBase_t DMABRIS;
    const UBase_t reserved2 [18UL];
}BITBANDING_GPTMRIS_t;

typedef volatile struct
{
    volatile const UBase_t TATOMIS;
    volatile const UBase_t CAMMIS;
    volatile const UBase_t CAEMIS;
    volatile const UBase_t RTCMIS;
    volatile const UBase_t TAMMIS;
    volatile const UBase_t DMAAMIS;
    const UBase_t reserved [2UL];
    volatile const UBase_t TBTOMIS;
    volatile const UBase_t CBMMIS;
    volatile const UBase_t CBEMIS;
    volatile const UBase_t TBMMIS;
    const UBase_t reserved1;
    volatile const UBase_t DMABMIS;
    const UBase_t reserved2 [18UL];
}BITBANDING_GPTMMIS_t;

typedef volatile struct
{
    volatile UBase_t TATOCINT;
    volatile UBase_t CAMCINT;
    volatile UBase_t CAECINT;
    volatile UBase_t RTCCINT;
    volatile UBase_t TAMCINT;
    volatile UBase_t DMAAINT;
    const UBase_t reserved [2UL];
    volatile UBase_t TBTOCINT;
    volatile UBase_t CBMCINT;
    volatile UBase_t CBECINT;
    volatile UBase_t TBMCINT;
    const UBase_t reserved1;
    volatile UBase_t DMABINT;
    const UBase_t reserved2 [18UL];
}BITBANDING_GPTMICR_t;

typedef volatile struct
{
    volatile UBase_t TAILR [32UL];
}BITBANDING_GPTMTAILR_t;

typedef volatile struct
{
    volatile UBase_t TBILR [32UL];
}BITBANDING_GPTMTBILR_t;

typedef volatile struct
{
    volatile UBase_t TAMR [32UL];
}BITBANDING_GPTMTAMATCHR_t;

typedef volatile struct
{
    volatile UBase_t TBMR [32UL];
}BITBANDING_GPTMTBMATCHR_t;

typedef volatile struct
{
    volatile UBase_t TAPSR [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_GPTMTAPR_t;

typedef volatile struct
{
    volatile UBase_t TBPSR [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_GPTMTBPR_t;

typedef volatile struct
{
    volatile UBase_t TAPSMR [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_GPTMTAPMR_t;

typedef volatile struct
{
    volatile UBase_t TBPSMR [8UL];
    const UBase_t reserved [24UL];
}BITBANDING_GPTMTBPMR_t;

typedef volatile struct
{
    volatile const UBase_t TAR [32UL];
}BITBANDING_GPTMTAR_t;

typedef volatile struct
{
    volatile const UBase_t TBR [32UL];
}BITBANDING_GPTMTBR_t;

typedef volatile struct
{
    volatile UBase_t TAV [32UL];
}BITBANDING_GPTMTAV_t;

typedef volatile struct
{
    volatile UBase_t TBV [32UL];
}BITBANDING_GPTMTBV_t;

typedef volatile struct
{
    volatile const UBase_t RTCPD [16UL];
    const UBase_t reserved [16UL];
}BITBANDING_GPTMRTCPD_t;
typedef volatile struct
{
    volatile const UBase_t PSS [16UL];
    const UBase_t reserved [16UL];
}BITBANDING_GPTMTAPS_t;

typedef volatile struct
{
    volatile const UBase_t PSS [16UL];
    const UBase_t reserved [16UL];
}BITBANDING_GPTMTBPS_t;

typedef volatile struct
{
    volatile UBase_t TATODMAEN;
    volatile UBase_t CAMDMAEN;
    volatile UBase_t CAEDMAEN;
    volatile UBase_t RTCDMAEN;
    volatile UBase_t TAMDMAEN;
    const UBase_t reserved [3UL];
    volatile UBase_t TBTODMAEN;
    volatile UBase_t CBMDMAEN;
    volatile UBase_t CBEDMAEN;
    volatile UBase_t TBMDMAEN;
    const UBase_t reserved1 [20UL];
}BITBANDING_GPTMDMAEV_t;

typedef volatile struct
{
    volatile UBase_t TATOADCEN;
    volatile UBase_t CAMADCEN;
    volatile UBase_t CAEADCEN;
    volatile UBase_t RTCADCEN;
    volatile UBase_t TAMADCEN;
    const UBase_t reserved [3UL];
    volatile UBase_t TBTOADCEN;
    volatile UBase_t CBMADCEN;
    volatile UBase_t CBEADCEN;
    volatile UBase_t TBMADCEN;
    const UBase_t reserved1 [20UL];
}BITBANDING_GPTMADCEV_t;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_STANDARD_H_ */

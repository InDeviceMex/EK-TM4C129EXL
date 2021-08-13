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

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/*************************************************************
 *********************************  STANDARD REGS BITBANDING **************
 **************************************************************/

typedef volatile struct
{
    volatile uint32_t TAMR [2UL];
    volatile uint32_t TACMR;
    volatile uint32_t TAAMS;
    volatile uint32_t TACDIR;
    volatile uint32_t TAMIE;
    volatile uint32_t TAWOT;
    volatile uint32_t TASNAPS;
    volatile uint32_t TAILD;
    volatile uint32_t TAPWMIE;
    volatile uint32_t TAMRSU;
    volatile uint32_t TAPLO;
    volatile uint32_t TACINTD;
    volatile uint32_t TCACT [3UL];
    const uint32_t reserved [16UL];
}BITBANDING_GPTMTAMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBMR [2UL];
    volatile uint32_t TBCMR;
    volatile uint32_t TBAMS;
    volatile uint32_t TBCDIR;
    volatile uint32_t TBMIE;
    volatile uint32_t TBWOT;
    volatile uint32_t TBSNAPS;
    volatile uint32_t TBILD;
    volatile uint32_t TBPWMIE;
    volatile uint32_t TBMRSU;
    volatile uint32_t TBPLO;
    volatile uint32_t TBCINTD;
    volatile uint32_t TCBCT [3UL];
    const uint32_t reserved [16UL];
}BITBANDING_GPTMTBMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAEN;
    volatile uint32_t TASTALL;
    volatile uint32_t TAEVENT [2UL];
    volatile uint32_t RTCEN;
    volatile uint32_t TAOTE;
    volatile uint32_t TAPWML;
    const uint32_t reserved;
    volatile uint32_t TBEN;
    volatile uint32_t TBSTALL;
    volatile uint32_t TBEVENT [2UL];
    const uint32_t reserved1;
    volatile uint32_t TBOTE;
    volatile uint32_t TBPWML;
    const uint32_t reserved2 [17UL];
}BITBANDING_GPTMCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t TATOIM;
    volatile uint32_t CAMIM;
    volatile uint32_t CAEIM;
    volatile uint32_t RTCIM;
    volatile uint32_t TAMIM;
    volatile uint32_t DMAAIM;
    const uint32_t reserved [2UL];
    volatile uint32_t TBTOIM;
    volatile uint32_t CBMIM;
    volatile uint32_t CBEIM;
    volatile uint32_t TBMIM;
    const uint32_t reserved1;
    volatile uint32_t DMABIM;
    const uint32_t reserved2 [18UL];
}BITBANDING_GPTMIMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TATORIS;
    volatile const uint32_t CAMRIS;
    volatile const uint32_t CAERIS;
    volatile const uint32_t RTCRIS;
    volatile const uint32_t TAMRIS;
    volatile const uint32_t DMAARIS;
    const uint32_t reserved [2UL];
    volatile const uint32_t TBTORIS;
    volatile const uint32_t CBMRIS;
    volatile const uint32_t CBERIS;
    volatile const uint32_t TBMRIS;
    const uint32_t reserved1;
    volatile const uint32_t DMABRIS;
    const uint32_t reserved2 [18UL];
}BITBANDING_GPTMRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TATOMIS;
    volatile const uint32_t CAMMIS;
    volatile const uint32_t CAEMIS;
    volatile const uint32_t RTCMIS;
    volatile const uint32_t TAMMIS;
    volatile const uint32_t DMAAMIS;
    const uint32_t reserved [2UL];
    volatile const uint32_t TBTOMIS;
    volatile const uint32_t CBMMIS;
    volatile const uint32_t CBEMIS;
    volatile const uint32_t TBMMIS;
    const uint32_t reserved1;
    volatile const uint32_t DMABMIS;
    const uint32_t reserved2 [18UL];
}BITBANDING_GPTMMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t TATOCINT;
    volatile uint32_t CAMCINT;
    volatile uint32_t CAECINT;
    volatile uint32_t RTCCINT;
    volatile uint32_t TAMCINT;
    volatile uint32_t DMAAINT;
    const uint32_t reserved [2UL];
    volatile uint32_t TBTOCINT;
    volatile uint32_t CBMCINT;
    volatile uint32_t CBECINT;
    volatile uint32_t TBMCINT;
    const uint32_t reserved1;
    volatile uint32_t DMABINT;
    const uint32_t reserved2 [18UL];
}BITBANDING_GPTMICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAILR [32UL];
}BITBANDING_GPTMTAILR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBILR [32UL];
}BITBANDING_GPTMTBILR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAMR [32UL];
}BITBANDING_GPTMTAMATCHR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBMR [32UL];
}BITBANDING_GPTMTBMATCHR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAPSR [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_GPTMTAPR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBPSR [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_GPTMTBPR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAPSMR [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_GPTMTAPMR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBPSMR [8UL];
    const uint32_t reserved [24UL];
}BITBANDING_GPTMTBPMR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TAR [32UL];
}BITBANDING_GPTMTAR_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TBR [32UL];
}BITBANDING_GPTMTBR_TypeDef;

typedef volatile struct
{
    volatile uint32_t TAV [32UL];
}BITBANDING_GPTMTAV_TypeDef;

typedef volatile struct
{
    volatile uint32_t TBV [32UL];
}BITBANDING_GPTMTBV_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCPD [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_GPTMRTCPD_TypeDef;
typedef volatile struct
{
    volatile const uint32_t PSS [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_GPTMTAPS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PSS [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_GPTMTBPS_TypeDef;

typedef volatile struct
{
    volatile uint32_t TATODMAEN;
    volatile uint32_t CAMDMAEN;
    volatile uint32_t CAEDMAEN;
    volatile uint32_t RTCDMAEN;
    volatile uint32_t TAMDMAEN;
    const uint32_t reserved [3UL];
    volatile uint32_t TBTODMAEN;
    volatile uint32_t CBMDMAEN;
    volatile uint32_t CBEDMAEN;
    volatile uint32_t TBMDMAEN;
    const uint32_t reserved1 [20UL];
}BITBANDING_GPTMDMAEV_TypeDef;

typedef volatile struct
{
    volatile uint32_t TATOADCEN;
    volatile uint32_t CAMADCEN;
    volatile uint32_t CAEADCEN;
    volatile uint32_t RTCADCEN;
    volatile uint32_t TAMADCEN;
    const uint32_t reserved [3UL];
    volatile uint32_t TBTOADCEN;
    volatile uint32_t CBMADCEN;
    volatile uint32_t CBEADCEN;
    volatile uint32_t TBMADCEN;
    const uint32_t reserved1 [20UL];
}BITBANDING_GPTMADCEV_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTREGISTER_BITBANDING_TIMER_STRUCTREGISTER_BITBANDING_STANDARD_H_ */

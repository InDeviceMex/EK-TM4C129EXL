/**
 *
 * @file TIMER_StructPeripheral_Bitbanding_Standard.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_STANDARD_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_STANDARD_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister_Bitbanding/xHeader/TIMER_StructRegister_Bitbanding_Control.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister_Bitbanding/xHeader/TIMER_StructRegister_Bitbanding_Standard.h>

typedef volatile struct
{
    union
    {
        volatile UBase_t CFG [32UL];
        BITBANDING_GPTMCFG_t CFG_Bit;
    };
    union
    {
        volatile UBase_t TAMR [32UL];
        BITBANDING_GPTMTAMR_t TAMR_Bit;
    };
    union
    {
        volatile UBase_t TBMR [32UL];
        BITBANDING_GPTMTBMR_t TBMR_Bit;
    };
    union
    {
        volatile UBase_t CTL [32UL];
        BITBANDING_GPTMCTL_t CTL_Bit;
    };
    union
    {
        volatile UBase_t SYNC [32UL];
        BITBANDING_GPTMSYNC_t SYNC_Bit;
    };
    const UBase_t reserved [32UL];

    union
    {
        volatile UBase_t IMR [32UL];
        BITBANDING_GPTMIMR_t IMR_Bit;
    };
    union
    {
        volatile const UBase_t RIS [32UL];
        BITBANDING_GPTMRIS_t RIS_Bit;
    };
    union
    {
        volatile const UBase_t MIS [32UL];
        BITBANDING_GPTMMIS_t MIS_Bit;
    };
    union
    {
        volatile UBase_t ICR [32UL];
        BITBANDING_GPTMICR_t ICR_Bit;
    };
    union
    {
        volatile UBase_t TAILR [32UL];
        BITBANDING_GPTMTAILR_t TAILR_Bit;
    };
    union
    {
        volatile UBase_t TBILR [32UL];
        BITBANDING_GPTMTBILR_t TBILR_Bit;
    };
    union
    {
        volatile UBase_t TAMATCHR [32UL];
        BITBANDING_GPTMTAMATCHR_t TAMATCHR_Bit;
    };
    union
    {
        volatile UBase_t TBMATCHR [32UL];
        BITBANDING_GPTMTBMATCHR_t TBMATCHR_Bit;
    };
    union
    {
        volatile UBase_t TAPR [32UL];
        BITBANDING_GPTMTAPR_t TAPR_Bit;
    };
    union
    {
        volatile UBase_t TBPR [32UL];
        BITBANDING_GPTMTBPR_t TBPR_Bit;
    };
    union
    {
        volatile UBase_t TAPMR [32UL];
        BITBANDING_GPTMTAPMR_t TAPMR_Bit;
    };
    union
    {
        volatile UBase_t TBPMR [32UL];
        BITBANDING_GPTMTBPMR_t TBPMR_Bit;
    };
    union
    {
        volatile const UBase_t TAR [32UL];
        BITBANDING_GPTMTAR_t TAR_Bit;
    };
    union
    {
        volatile const UBase_t TBR [32UL];
        BITBANDING_GPTMTBR_t TBR_Bit;
    };
    union
    {
        volatile UBase_t TAV [32UL];
        BITBANDING_GPTMTAV_t TAV_Bit;
    };
    union
    {
        volatile UBase_t TBV [32UL];
        BITBANDING_GPTMTBV_t TBV_Bit;
    };
    union
    {
        volatile const UBase_t RTCPD [32UL];
        BITBANDING_GPTMRTCPD_t RTCPD_Bit;
    };
    union
    {
        volatile const UBase_t TAPS [32UL];
        BITBANDING_GPTMTAPS_t TAPS_Bit;
    };
    union
    {
        volatile const UBase_t TBPS [32UL];
        BITBANDING_GPTMTBPS_t TBPS_Bit;
    };
    const UBase_t reserved1 [2UL * 32UL];
    union
    {
        volatile const UBase_t DMAEV [32UL];
        BITBANDING_GPTMDMAEV_t DMAEV_Bit;
    };
    union
    {
        volatile const UBase_t ADCEV [32UL];
        BITBANDING_GPTMADCEV_t ADCEV_Bit;
    };

    const UBase_t reserved2 [979UL * 32UL];

    union
    {
        volatile const UBase_t PP [32UL];
        BITBANDING_GPTMPP_t PP_Bit;
    };
    const UBase_t reserved3 [1UL * 32UL];
    union
    {
        volatile const UBase_t CC [32UL];
        BITBANDING_GPTMCC_t CC_Bit;
    };

    const UBase_t reserved4 [13UL * 32UL];
}GPTM_t_BITBANDING;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_STANDARD_H_ */

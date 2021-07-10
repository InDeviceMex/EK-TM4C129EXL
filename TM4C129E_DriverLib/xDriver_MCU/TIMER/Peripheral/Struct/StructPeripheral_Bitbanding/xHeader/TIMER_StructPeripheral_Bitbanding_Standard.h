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
        volatile uint32_t CFG [32UL];
        BITBANDING_GPTMCFG_TypeDef CFG_Bit;
    };
    union
    {
        volatile uint32_t TAMR [32UL];
        BITBANDING_GPTMTAMR_TypeDef TAMR_Bit;
    };
    union
    {
        volatile uint32_t TBMR [32UL];
        BITBANDING_GPTMTBMR_TypeDef TBMR_Bit;
    };
    union
    {
        volatile uint32_t CTL [32UL];
        BITBANDING_GPTMCTL_TypeDef CTL_Bit;
    };
    union
    {
        volatile uint32_t SYNC [32UL];
        BITBANDING_GPTMSYNC_TypeDef SYNC_Bit;
    };
    const uint32_t reserved [32UL];

    union
    {
        volatile uint32_t IMR [32UL];
        BITBANDING_GPTMIMR_TypeDef IMR_Bit;
    };
    union
    {
        volatile const uint32_t RIS [32UL];
        BITBANDING_GPTMRIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile const uint32_t MIS [32UL];
        BITBANDING_GPTMMIS_TypeDef MIS_Bit;
    };
    union
    {
        volatile uint32_t ICR [32UL];
        BITBANDING_GPTMICR_TypeDef ICR_Bit;
    };
    union
    {
        volatile uint32_t TAILR [32UL];
        BITBANDING_GPTMTAILR_TypeDef TAILR_Bit;
    };
    union
    {
        volatile uint32_t TBILR [32UL];
        BITBANDING_GPTMTBILR_TypeDef TBILR_Bit;
    };
    union
    {
        volatile uint32_t TAMATCHR [32UL];
        BITBANDING_GPTMTAMATCHR_TypeDef TAMATCHR_Bit;
    };
    union
    {
        volatile uint32_t TBMATCHR [32UL];
        BITBANDING_GPTMTBMATCHR_TypeDef TBMATCHR_Bit;
    };
    union
    {
        volatile uint32_t TAPR [32UL];
        BITBANDING_GPTMTAPR_TypeDef TAPR_Bit;
    };
    union
    {
        volatile uint32_t TBPR [32UL];
        BITBANDING_GPTMTBPR_TypeDef TBPR_Bit;
    };
    union
    {
        volatile uint32_t TAPMR [32UL];
        BITBANDING_GPTMTAPMR_TypeDef TAPMR_Bit;
    };
    union
    {
        volatile uint32_t TBPMR [32UL];
        BITBANDING_GPTMTBPMR_TypeDef TBPMR_Bit;
    };
    union
    {
        volatile const uint32_t TAR [32UL];
        BITBANDING_GPTMTAR_TypeDef TAR_Bit;
    };
    union
    {
        volatile const uint32_t TBR [32UL];
        BITBANDING_GPTMTBR_TypeDef TBR_Bit;
    };
    union
    {
        volatile uint32_t TAV [32UL];
        BITBANDING_GPTMTAV_TypeDef TAV_Bit;
    };
    union
    {
        volatile uint32_t TBV [32UL];
        BITBANDING_GPTMTBV_TypeDef TBV_Bit;
    };
    union
    {
        volatile const uint32_t RTCPD [32UL];
        BITBANDING_GPTMRTCPD_TypeDef RTCPD_Bit;
    };
    union
    {
        volatile const uint32_t TAPS [32UL];
        BITBANDING_GPTMTAPS_TypeDef TAPS_Bit;
    };
    union
    {
        volatile const uint32_t TBPS [32UL];
        BITBANDING_GPTMTBPS_TypeDef TBPS_Bit;
    };
    union
    {
        volatile const uint32_t TAPV [32UL];
        BITBANDING_GPTMTAPV_TypeDef TAPV_Bit;
    };
    union
    {
        volatile const uint32_t TBPV [32UL];
        BITBANDING_GPTMTBPV_TypeDef TBPV_Bit;
    };
    const uint32_t reserved1 [981UL * 32UL];
    union
    {
        volatile const uint32_t PP [32UL];
        BITBANDING_GPTMPP_TypeDef PP_Bit;
    };
    const uint32_t reserved2 [15UL * 32UL];
}GPTM_TypeDef_BITBANDING;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_STANDARD_H_ */

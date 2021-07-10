/**
 *
 * @file TIMER_StructPeripheral_Standard.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_STANDARD_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_STANDARD_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister/xHeader/TIMER_StructRegister_Control.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister/xHeader/TIMER_StructRegister_Standard.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t CFG;
        GPTMCFG_TypeDef CFG_Bit;
    };
    union
    {
        volatile uint32_t TAMR;
        GPTMTAMR_TypeDef TAMR_Bit;
    };
    union
    {
        volatile uint32_t TBMR;
        GPTMTBMR_TypeDef TBMR_Bit;
    };
    union
    {
        volatile uint32_t CTL;
        GPTMCTL_TypeDef CTL_Bit;
    };
    union
    {
        volatile uint32_t SYNC;
        GPTMSYNC_TypeDef SYNC_Bit;
    };
    const uint32_t reserved;

    union
    {
        volatile uint32_t IMR;
        GPTMIMR_TypeDef IMR_Bit;
    };
    union
    {
        volatile const uint32_t RIS;
        GPTMRIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile const uint32_t MIS;
        GPTMMIS_TypeDef MIS_Bit;
    };
    union
    {
        volatile uint32_t ICR;
        GPTMICR_TypeDef ICR_Bit;
    };
    union
    {
        volatile uint32_t TAILR;
        GPTMTAILR_TypeDef TAILR_Bit;
    };
    union
    {
        volatile uint32_t TBILR;
        GPTMTBILR_TypeDef TBILR_Bit;
    };
    union
    {
        volatile uint32_t TAMATCHR;
        GPTMTAMATCHR_TypeDef TAMATCHR_Bit;
    };

    union
    {
        volatile uint32_t TBMATCHR;
        GPTMTBMATCHR_TypeDef TBMATCHR_Bit;
    };
    union
    {
        volatile uint32_t TAPR;
        GPTMTAPR_TypeDef TAPR_Bit;
    };

    union
    {
        volatile uint32_t TBPR;
        GPTMTBPR_TypeDef TBPR_Bit;
    };
    union
    {
        volatile uint32_t TAPMR;
        GPTMTAPMR_TypeDef TAPMR_Bit;
    };
    union
    {
        volatile uint32_t TBPMR;
        GPTMTBPMR_TypeDef TBPMR_Bit;
    };
    union
    {
        volatile const uint32_t TAR;
        GPTMTAR_TypeDef TAR_Bit;
    };
    union
    {
        volatile const uint32_t TBR;
        GPTMTBR_TypeDef TBR_Bit;
    };
    union
    {
        volatile uint32_t TAV;
        GPTMTAV_TypeDef TAV_Bit;
    };
    union
    {
        volatile uint32_t TBV;
        GPTMTBV_TypeDef TBV_Bit;
    };
    union
    {
        volatile const uint32_t RTCPD;
        GPTMRTCPD_TypeDef RTCPD_Bit;
    };
    union
    {
        volatile const uint32_t TAPS;
        GPTMTAPS_TypeDef TAPS_Bit;
    };
    union
    {
        volatile const uint32_t TBPS;
        GPTMTBPS_TypeDef TBPS_Bit;
    };
    union
    {
        volatile const uint32_t TAPV;
        GPTMTAPV_TypeDef TAPV_Bit;
    };
    union
    {
        volatile const uint32_t TBPV;
        GPTMTBPV_TypeDef TBPV_Bit;
    };

    const uint32_t reserved1 [981UL];


    union
    {
        volatile const uint32_t PP;
        GPTMPP_TypeDef PP_Bit;
    };

    const uint32_t reserved2 [15UL];
}GPTM_TypeDef;



#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_TIMER_STRUCTPERIPHERAL_STANDARD_H_ */

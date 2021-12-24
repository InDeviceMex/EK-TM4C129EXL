/**
 *
 * @file ADC_StructPeripheral_Bitbanding.h
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
 * @verbatim 18 oct. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 18 oct. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/ADC/Peripheral/Struct/xHeader/ADC_StructRegister_Bitbanding.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

typedef volatile struct
{
    union
      {
          volatile uint32_t SSMUX [32UL];
          BITBANDING_ADCSS8_MUX_t SSMUX_Bit;
      };
      union
      {
          volatile uint32_t SSCTL [32UL];
          BITBANDING_ADCSS8_CTL_t SSCTL_Bit;
      };
      union
      {
          volatile const uint32_t SSFIFO [32UL];
          BITBANDING_ADCSSFIFO_t SSFIFO_Bit;
      };
      union
      {
          volatile const uint32_t SSFSTAT [32UL];
          BITBANDING_ADCSSFSTAT_t SSFSTAT_Bit;
      };
      union
      {
          volatile uint32_t SSOP [32UL];
          BITBANDING_ADCSS8_OP_t SSOP_Bit;
      };
      union
      {
          volatile uint32_t SSDC [32UL];
          BITBANDING_ADCSS8_DC_t SSDC_Bit;
      };
      union
      {
          volatile uint32_t SSEMUX [32UL];
          BITBANDING_ADCSS8_EMUX_t SSEMUX_Bit;
      };
      union
      {
          volatile uint32_t SSTSH [32UL];
          BITBANDING_ADCSS8_TSH_t SSTSH_Bit;
      };
}BITBANDING_ADCSEQUENCER_t;

typedef volatile struct
{
    union
    {
        volatile uint32_t ACTSS [32UL];
        BITBANDING_ADCACTSS_t ACTSS_Bit;
    };
    union
    {
        volatile const uint32_t RIS [32UL];
        BITBANDING_ADCRIS_t RIS_Bit;
    };
    union
    {
        volatile uint32_t IM [32UL];
        BITBANDING_ADCIM_t IM_Bit;
    };
    union
    {
        volatile uint32_t ISC [32UL];
        BITBANDING_ADC_ISC_t ISC_Bit;
    };
    union
    {
        volatile uint32_t OSTAT [32UL];
        BITBANDING_ADCOSTAT_t OSTAT_Bit;
    };
    union
    {
        volatile uint32_t EMUX [32UL];
        BITBANDING_ADCEMUX_t EMUX_Bit;
    };
    union
    {
        volatile uint32_t USTAT [32UL];
        BITBANDING_ADCUSTAT_t USTAT_Bit;
    };
    union
    {
        volatile uint32_t TSSEL [32UL];
        BITBANDING_ADCTSSEL_t TSSEL_Bit;
    };
    union
    {
        volatile uint32_t SS_PRI [32UL];
        BITBANDING_ADCSS_PRI_t SS_PRI_Bit;
    };
    union
    {
        volatile uint32_t SPC [32UL];
        BITBANDING_ADCSPC_t SPC_Bit;
    };
    union
    {
        volatile uint32_t PSSI [32UL];
        BITBANDING_ADCPSSI_t PSSI_Bit;
    };

    const uint32_t reserved [32UL];
    union
    {
        volatile uint32_t SAC [32UL];
        BITBANDING_ADCSAC_t SAC_Bit;
    };
    union
    {
        volatile uint32_t DC_ISC [32UL];
        BITBANDING_ADCDC_ISC_t DC_ISC_Bit;
    };
    union
    {
        volatile uint32_t CTL [32UL];
        BITBANDING_ADC_CTL_t CTL_Bit;
    };

    const uint32_t reserved1 [32UL];

    BITBANDING_ADCSEQUENCER_t SEQUENCER [4UL];

    const uint32_t reserved5 [32UL * 784UL];
    union
    {
        volatile uint32_t DC_RIC [32UL];
        BITBANDING_ADCDC_RIC_t DC_RIC_Bit;
    };

    const uint32_t reserved6 [63UL * 32UL];
    union
    {
        volatile uint32_t DC_CTL [8UL][32UL];
        BITBANDING_ADCDC_CTL_t DC_CTL_Bit [8UL];
    };
    const uint32_t reserved7 [8UL * 32UL];
    union
    {
        volatile uint32_t DC_CMP [8UL][32UL];
        BITBANDING_ADCDC_CMP_t DC_CMP_Bit;
    };

    const uint32_t reserved8 [88UL * 32UL];
    union
    {
        volatile const uint32_t PP [32UL];
        BITBANDING_ADCPP_t PP_Bit;
    };
    union
    {
        volatile uint32_t PC [32UL];
        BITBANDING_ADCPC_t PC_Bit;
    };
    union
    {
        volatile uint32_t CC [32UL];
        BITBANDING_ADCCC_t CC_Bit;
    };

    const uint32_t reserved9 [13UL * 32UL];
}ADC_BITBANDING_t;

typedef volatile struct
{
    ADC_BITBANDING_t MODULE [(uint32_t) ADC_enMODULE_MAX];
}ADCS_BITBANDING_t;

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_BITBANDING_H_ */

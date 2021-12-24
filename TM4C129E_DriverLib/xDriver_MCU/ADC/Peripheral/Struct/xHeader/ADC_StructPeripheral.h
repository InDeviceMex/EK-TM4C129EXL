/**
 *
 * @file ADC_StructPeripheral.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/ADC/Peripheral/Struct/xHeader/ADC_StructRegister.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

typedef volatile struct
{
    union
      {
          volatile uint32_t SSMUX;
          ADCSS8_MUX_t SSMUX_Bit;
      };
      union
      {
          volatile uint32_t SSCTL;
          ADCSS8_CTL_t SSCTL_Bit;
      };
      union
      {
          volatile const uint32_t SSFIFO;
          ADCSSFIFO_t SSFIFO_Bit;
      };
      union
      {
          volatile const uint32_t SSFSTAT;
          ADCSSFSTAT_t SSFSTAT_Bit;
      };
      union
      {
          volatile uint32_t SSOP;
          ADCSS8_OP_t SSOP_Bit;
      };
      union
      {
          volatile uint32_t SSDC;
          ADCSS8_DC_t SSDC_Bit;
      };
      union
      {
          volatile uint32_t SSEMUX;
          ADCSS8_EMUX_t SSEMUX_Bit;
      };
      union
      {
          volatile uint32_t SSTSH;
          ADCSS8_TSH_t SSTSH_Bit;
      };
}ADCSEQUENCER_t;

typedef volatile struct
{
    union
    {
        volatile uint32_t ACTSS;
        ADCACTSS_t ACTSS_Bit;
    };
    union
    {
        volatile const uint32_t RIS;
        ADCRIS_t RIS_Bit;
    };
    union
    {
        volatile uint32_t IM;
        ADCIM_t IM_Bit;
    };
    union
    {
        volatile uint32_t ISC;
        ADC_ISC_t ISC_Bit;
    };
    union
    {
        volatile uint32_t OSTAT;
        ADCOSTAT_t OSTAT_Bit;
    };
    union
    {
        volatile uint32_t EMUX;
        ADCEMUX_t EMUX_Bit;
    };
    union
    {
        volatile uint32_t USTAT;
        ADCUSTAT_t USTAT_Bit;
    };
    union
    {
        volatile uint32_t TSSEL;
        ADCTSSEL_t TSSEL_Bit;
    };
    union
    {
        volatile uint32_t SS_PRI;
        ADCSS_PRI_t SS_PRI_Bit;
    };
    union
    {
        volatile uint32_t SPC;
        ADCSPC_t SPC_Bit;
    };
    union
    {
        volatile uint32_t PSSI;
        ADCPSSI_t PSSI_Bit;
    };

    const uint32_t reserved;
    union
    {
        volatile uint32_t SAC;
        ADCSAC_t SAC_Bit;
    };
    union
    {
        volatile uint32_t DC_ISC;
        ADCDC_ISC_t DC_ISC_Bit;
    };
    union
    {
        volatile uint32_t CTL;
        ADC_CTL_t CTL_Bit;
    };

    const uint32_t reserved1;

    ADCSEQUENCER_t SEQUENCER [4UL];

    const uint32_t reserved5 [784UL];
    union
    {
        volatile uint32_t DC_RIC;
        ADCDC_RIC_t DC_RIC_Bit;
    };

    const uint32_t reserved6 [63UL];
    union
    {
        volatile uint32_t DC_CTL [8UL];
        ADCDC_CTL_t DC_CTL_Bit [8UL];
    };
    const uint32_t reserved7 [8UL];
    union
    {
        volatile uint32_t DC_CMP [8UL];
        ADCDC_CMP_t DC_CMP_Bit [8UL];
    };

    const uint32_t reserved8 [88UL];
    union
    {
        volatile const uint32_t PP;
        ADCPP_t PP_Bit;
    };
    union
    {
        volatile uint32_t PC;
        ADCPC_t PC_Bit;
    };
    union
    {
        volatile uint32_t CC;
        ADCCC_t CC_Bit;
    };

    const uint32_t reserved9 [13UL];
}ADC_t;

typedef volatile struct
{
    ADC_t MODULE [(uint32_t) ADC_enMODULE_MAX];
}ADCS_t;


#endif /* XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_H_ */

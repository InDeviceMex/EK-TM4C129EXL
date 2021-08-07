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
          ADCSSMUX8_TypeDef SSMUX_Bit;
      };
      union
      {
          volatile uint32_t SSCTL;
          ADCSSCTL8_TypeDef SSCTL_Bit;
      };
      union
      {
          volatile const uint32_t SSFIFO;
          ADCSSFIFO_TypeDef SSFIFO_Bit;
      };
      union
      {
          volatile const uint32_t SSFSTAT;
          ADCSSFSTAT_TypeDef SSFSTAT_Bit;
      };
      union
      {
          volatile uint32_t SSOP;
          ADCSSOP8_TypeDef SSOP_Bit;
      };
      union
      {
          volatile uint32_t SSDC;
          ADCSSDC8_TypeDef SSDC_Bit;
      };
      union
      {
          volatile uint32_t SSEMUX;
          ADCSSEMUX8_TypeDef SSEMUX_Bit;
      };
      union
      {
          volatile uint32_t SSTSH;
          ADCSSTSH8_TypeDef SSTSH_Bit;
      };
}ADCINPUT_Typedef;

typedef volatile struct
{
    union
    {
        volatile uint32_t ACTSS;
        ADCACTSS_TypeDef ACTSS_Bit;
    };
    union
    {
        volatile const uint32_t RIS;
        ADCRIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile uint32_t IM;
        ADCIM_TypeDef IM_Bit;
    };
    union
    {
        volatile uint32_t ISC;
        ADCISC_TypeDef ISC_Bit;
    };
    union
    {
        volatile uint32_t OSTAT;
        ADCOSTAT_TypeDef OSTAT_Bit;
    };
    union
    {
        volatile uint32_t EMUX;
        ADCEMUX_TypeDef EMUX_Bit;
    };
    union
    {
        volatile uint32_t USTAT;
        ADCUSTAT_TypeDef USTAT_Bit;
    };
    union
    {
        volatile uint32_t TSSEL;
        ADCTSSEL_TypeDef TSSEL_Bit;
    };
    union
    {
        volatile uint32_t SSPRI;
        ADCSSPRI_TypeDef SSPRI_Bit;
    };
    union
    {
        volatile uint32_t SPC;
        ADCSPC_TypeDef SPC_Bit;
    };
    union
    {
        volatile uint32_t PSSI;
        ADCPSSI_TypeDef PSSI_Bit;
    };

    const uint32_t reserved;
    union
    {
        volatile uint32_t SAC;
        ADCSAC_TypeDef SAC_Bit;
    };
    union
    {
        volatile uint32_t DCISC;
        ADCDCISC_TypeDef DCISC_Bit;
    };
    union
    {
        volatile uint32_t CTL;
        ADCCTL_TypeDef CTL_Bit;
    };

    const uint32_t reserved1;

    ADCINPUT_Typedef INPUT [4UL];

    const uint32_t reserved5 [784UL];
    union
    {
        volatile uint32_t DCRIC;
        ADCDCRIC_TypeDef DCRIC_Bit;
    };

    const uint32_t reserved6 [63UL];
    union
    {
        volatile uint32_t DCCTL [8UL];
        ADCDCCTL_TypeDef DCCTL_Bit [8UL];
    };
    const uint32_t reserved7 [8UL];
    union
    {
        volatile uint32_t DCCMP [8UL];
        ADCDCCMP_TypeDef DCCMP_Bit [8UL];
    };

    const uint32_t reserved8 [88UL];
    union
    {
        volatile const uint32_t PP;
        ADCPP_TypeDef PP_Bit;
    };
    union
    {
        volatile uint32_t PC;
        ADCPC_TypeDef PC_Bit;
    };
    union
    {
        volatile uint32_t CC;
        ADCCC_TypeDef CC_Bit;
    };

    const uint32_t reserved9 [13UL];
}ADC_TypeDef;

typedef volatile struct
{
    ADC_TypeDef MODULE [(uint32_t) ADC_enMODULE_MAX];
}ADCS_TypeDef;


#endif /* XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_H_ */

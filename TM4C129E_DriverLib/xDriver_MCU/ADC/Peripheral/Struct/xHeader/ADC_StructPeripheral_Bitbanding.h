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
          BITBANDING_ADCSSMUX8_TypeDef SSMUX_Bit;
      };
      union
      {
          volatile uint32_t SSCTL [32UL];
          BITBANDING_ADCSSCTL8_TypeDef SSCTL_Bit;
      };
      union
      {
          volatile const uint32_t SSFIFO [32UL];
          BITBANDING_ADCSSFIFO_TypeDef SSFIFO_Bit;
      };
      union
      {
          volatile const uint32_t SSFSTAT [32UL];
          BITBANDING_ADCSSFSTAT_TypeDef SSFSTAT_Bit;
      };
      union
      {
          volatile uint32_t SSOP [32UL];
          BITBANDING_ADCSSOP8_TypeDef SSOP_Bit;
      };
      union
      {
          volatile uint32_t SSDC [32UL];
          BITBANDING_ADCSSDC8_TypeDef SSDC_Bit;
      };
      union
      {
          volatile uint32_t SSEMUX [32UL];
          BITBANDING_ADCSSEMUX8_TypeDef SSEMUX_Bit;
      };
      union
      {
          volatile uint32_t SSTSH [32UL];
          BITBANDING_ADCSSTSH8_TypeDef SSTSH_Bit;
      };
}BITBANDING_ADCINPUT_Typedef;

typedef volatile struct
{
    union
    {
        volatile uint32_t ACTSS [32UL];
        BITBANDING_ADCACTSS_TypeDef ACTSS_Bit;
    };
    union
    {
        volatile const uint32_t RIS [32UL];
        BITBANDING_ADCRIS_TypeDef RIS_Bit;
    };
    union
    {
        volatile uint32_t IM [32UL];
        BITBANDING_ADCIM_TypeDef IM_Bit;
    };
    union
    {
        volatile uint32_t ISC [32UL];
        BITBANDING_ADCISC_TypeDef ISC_Bit;
    };
    union
    {
        volatile uint32_t OSTAT [32UL];
        BITBANDING_ADCOSTAT_TypeDef OSTAT_Bit;
    };
    union
    {
        volatile uint32_t EMUX [32UL];
        BITBANDING_ADCEMUX_TypeDef EMUX_Bit;
    };
    union
    {
        volatile uint32_t USTAT [32UL];
        BITBANDING_ADCUSTAT_TypeDef USTAT_Bit;
    };
    union
    {
        volatile uint32_t TSSEL [32UL];
        BITBANDING_ADCTSSEL_TypeDef TSSEL_Bit;
    };
    union
    {
        volatile uint32_t SSPRI [32UL];
        BITBANDING_ADCSSPRI_TypeDef SSPRI_Bit;
    };
    union
    {
        volatile uint32_t SPC [32UL];
        BITBANDING_ADCSPC_TypeDef SPC_Bit;
    };
    union
    {
        volatile uint32_t PSSI [32UL];
        BITBANDING_ADCPSSI_TypeDef PSSI_Bit;
    };

    const uint32_t reserved [32UL];
    union
    {
        volatile uint32_t SAC [32UL];
        BITBANDING_ADCSAC_TypeDef SAC_Bit;
    };
    union
    {
        volatile uint32_t DCISC [32UL];
        BITBANDING_ADCDCISC_TypeDef DCISC_Bit;
    };
    union
    {
        volatile uint32_t CTL [32UL];
        BITBANDING_ADCCTL_TypeDef CTL_Bit;
    };

    const uint32_t reserved1 [32UL];

    BITBANDING_ADCINPUT_Typedef INPUT [4UL];

    const uint32_t reserved5 [32UL * 784UL];
    union
    {
        volatile uint32_t DCRIC [32UL];
        BITBANDING_ADCDCRIC_TypeDef DCRIC_Bit;
    };

    const uint32_t reserved6 [63UL * 32UL];
    union
    {
        volatile uint32_t DCCTL [8UL][32UL];
        BITBANDING_ADCDCCTL_TypeDef DCCTL_Bit [8UL];
    };
    const uint32_t reserved7 [8UL * 32UL];
    union
    {
        volatile uint32_t DCCMP [8UL][32UL];
        BITBANDING_ADCDCCMP_TypeDef DCCMP_Bit;
    };

    const uint32_t reserved8 [88UL * 32UL];
    union
    {
        volatile const uint32_t PP [32UL];
        BITBANDING_ADCPP_TypeDef PP_Bit;
    };
    union
    {
        volatile uint32_t PC [32UL];
        BITBANDING_ADCPC_TypeDef PC_Bit;
    };
    union
    {
        volatile uint32_t CC [32UL];
        BITBANDING_ADCCC_TypeDef CC_Bit;
    };

    const uint32_t reserved9 [13UL * 32UL];
}ADC_BITBANDING_TypeDef;

typedef volatile struct
{
    ADC_BITBANDING_TypeDef MODULE [(uint32_t) ADC_enMODULE_MAX];
}ADCS_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_BITBANDING_H_ */

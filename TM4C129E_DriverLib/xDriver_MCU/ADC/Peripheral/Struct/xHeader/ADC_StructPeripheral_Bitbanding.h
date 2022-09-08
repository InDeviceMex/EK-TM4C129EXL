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
          volatile uint32_t MUX [32UL];
          BITBANDING_ADC_SS8_MUX_t MUX_Bit;
      };
      union
      {
          volatile uint32_t CTL [32UL];
          BITBANDING_ADC_SS8_CTL_t CTL_Bit;
      };
      union
      {
          volatile const uint32_t FIFO [32UL];
          BITBANDING_ADC_SS_FIFO_t FIFO_Bit;
      };
      union
      {
          volatile const uint32_t FSTAT [32UL];
          BITBANDING_ADC_SS_FSTAT_t FSTAT_Bit;
      };
      union
      {
          volatile uint32_t OP [32UL];
          BITBANDING_ADC_SS8_OP_t OP_Bit;
      };
      union
      {
          volatile uint32_t DC [32UL];
          BITBANDING_ADC_SS8_DC_t DC_Bit;
      };
      union
      {
          volatile uint32_t EMUX [32UL];
          BITBANDING_ADC_SS8_EMUX_t EMUX_Bit;
      };
      union
      {
          volatile uint32_t TSH [32UL];
          BITBANDING_ADC_SS8_TSH_t TSH_Bit;
      };
}BITBANDING_ADC_SEQUENCER_t;

typedef volatile struct
{
    union
    {
        volatile uint32_t ACTSS [32UL];
        BITBANDING_ADC_ACTSS_t ACTSS_Bit;
    };
    union
    {
        volatile const uint32_t RIS [32UL];
        BITBANDING_ADC_RIS_t RIS_Bit;
    };
    union
    {
        volatile uint32_t IM [32UL];
        BITBANDING_ADC_IM_t IM_Bit;
    };
    union
    {
        volatile uint32_t ISC [32UL];
        BITBANDING_ADC_ISC_t ISC_Bit;
    };
    union
    {
        volatile uint32_t OSTAT [32UL];
        BITBANDING_ADC_OSTAT_t OSTAT_Bit;
    };
    union
    {
        volatile uint32_t EMUX [32UL];
        BITBANDING_ADC_EMUX_t EMUX_Bit;
    };
    union
    {
        volatile uint32_t USTAT [32UL];
        BITBANDING_ADC_USTAT_t USTAT_Bit;
    };
    union
    {
        volatile uint32_t TSSEL [32UL];
        BITBANDING_ADC_TSSEL_t TSSEL_Bit;
    };
    union
    {
        volatile uint32_t SSPRI [32UL];
        BITBANDING_ADC_SSPRI_t SSPRI_Bit;
    };
    union
    {
        volatile uint32_t SPC [32UL];
        BITBANDING_ADC_SPC_t SPC_Bit;
    };
    union
    {
        volatile uint32_t PSSI [32UL];
        BITBANDING_ADC_PSSI_t PSSI_Bit;
    };

    const uint32_t reserved [32UL];
    union
    {
        volatile uint32_t SAC [32UL];
        BITBANDING_ADC_SAC_t SAC_Bit;
    };
    union
    {
        volatile uint32_t DCISC [32UL];
        BITBANDING_ADC_DCISC_t DCISC_Bit;
    };
    union
    {
        volatile uint32_t CTL [32UL];
        BITBANDING_ADC_CTL_t CTL_Bit;
    };

    const uint32_t reserved1 [32UL];

    BITBANDING_ADC_SEQUENCER_t SEQUENCER [4UL];

    const uint32_t reserved5 [32UL * 784UL];
    union
    {
        volatile uint32_t DC_RIC [32UL];
        BITBANDING_ADC_DC_RIC_t DC_RIC_Bit;
    };

    const uint32_t reserved6 [63UL * 32UL];
    union
    {
        volatile uint32_t DC_CTL [8UL][32UL];
        BITBANDING_ADC_DC_CTL_t DC_CTL_Bit [8UL];
    };
    const uint32_t reserved7 [8UL * 32UL];
    union
    {
        volatile uint32_t DC_CMP [8UL][32UL];
        BITBANDING_ADC_DC_CMP_t DC_CMP_Bit;
    };

    const uint32_t reserved8 [88UL * 32UL];
    union
    {
        volatile const uint32_t PP [32UL];
        BITBANDING_ADC_PP_t PP_Bit;
    };
    union
    {
        volatile uint32_t PC [32UL];
        BITBANDING_ADC_PC_t PC_Bit;
    };
    union
    {
        volatile uint32_t CC [32UL];
        BITBANDING_ADC_CC_t CC_Bit;
    };

    const uint32_t reserved9 [13UL * 32UL];
}ADC_BITBANDING_t;

typedef volatile struct
{
    ADC_BITBANDING_t MODULE [(uint32_t) ADC_enMODULE_MAX];
}ADCS_BITBANDING_t;

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_BITBANDING_H_ */

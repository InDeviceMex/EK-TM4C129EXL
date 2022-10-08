/**
 *
 * @file ADC_StructRegister_Bitbanding.h
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
 * @verbatim 27 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 27 sep. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTREGISTER_BITBANDING_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

/**
 *  Global Struct Definitions for ADC Sequences
 */

typedef volatile struct
{
    volatile UBase_t ASEN0;
    volatile UBase_t ASEN1;
    volatile UBase_t ASEN2;
    volatile UBase_t ASEN3;
    const UBase_t reserved [4UL];
    volatile UBase_t ADEN0;
    volatile UBase_t ADEN1;
    volatile UBase_t ADEN2;
    volatile UBase_t ADEN3;
    const UBase_t reserved1 [4UL];
    volatile const UBase_t BUSY;
    const UBase_t reserved2 [15UL];
}ADC_BITBANDING_ACTSS_t;

typedef volatile struct
{
    volatile const UBase_t INR0;
    volatile const UBase_t INR1;
    volatile const UBase_t INR2;
    volatile const UBase_t INR3;
    const UBase_t reserved [4UL];
    volatile const UBase_t DMAINR0;
    volatile const UBase_t DMAINR1;
    volatile const UBase_t DMAINR2;
    volatile const UBase_t DMAINR3;
    const UBase_t reserved1 [4UL];
    volatile const UBase_t INRDC;
    const UBase_t reserved2 [15UL];
}ADC_BITBANDING_RIS_t;

typedef volatile struct
{
    volatile UBase_t MASK0;
    volatile UBase_t MASK1;
    volatile UBase_t MASK2;
    volatile UBase_t MASK3;
    const UBase_t reserved [4UL];
    volatile UBase_t DMAMASK0;
    volatile UBase_t DMAMASK1;
    volatile UBase_t DMAMASK2;
    volatile UBase_t DMAMASK3;
    const UBase_t reserved1 [4UL];
    volatile UBase_t DCONSS0;
    volatile UBase_t DCONSS1;
    volatile UBase_t DCONSS2;
    volatile UBase_t DCONSS3;
    const UBase_t reserved2 [12UL];
}ADC_BITBANDING_IM_t;

typedef volatile struct
{
    volatile UBase_t IN0;
    volatile UBase_t IN1;
    volatile UBase_t IN2;
    volatile UBase_t IN3;
    const UBase_t reserved [4UL];
    volatile UBase_t DMAIN0;
    volatile UBase_t DMAIN1;
    volatile UBase_t DMAIN2;
    volatile UBase_t DMAIN3;
    const UBase_t reserved1 [4UL];
    volatile const UBase_t DCINSS0;
    volatile const UBase_t DCINSS1;
    volatile const UBase_t DCINSS2;
    volatile const UBase_t DCINSS3;
    const UBase_t reserved2 [12UL];
}ADC_BITBANDING_ISC_t;

typedef volatile struct
{
    volatile UBase_t OV0;
    volatile UBase_t OV1;
    volatile UBase_t OV2;
    volatile UBase_t OV3;
    const UBase_t reserved [28UL];
}ADC_BITBANDING_OSTAT_t;

typedef volatile struct
{
    volatile UBase_t EM0 [4UL];
    volatile UBase_t EM1 [4UL];
    volatile UBase_t EM2 [4UL];
    volatile UBase_t EM3 [4UL];
    const UBase_t reserved [16UL];
}ADC_BITBANDING_EMUX_t;

typedef volatile struct
{
    volatile UBase_t UV0;
    volatile UBase_t UV1;
    volatile UBase_t UV2;
    volatile UBase_t UV3;
    const UBase_t reserved [28UL];
}ADC_BITBANDING_USTAT_t;

typedef volatile struct
{
    const UBase_t reserved [4UL];
    volatile UBase_t PS0 [2UL];
    const UBase_t reserved1 [6UL];
    volatile UBase_t PS1 [2UL];
    const UBase_t reserved2 [6UL];
    volatile UBase_t PS2 [2UL];
    const UBase_t reserved3 [6UL];
    volatile UBase_t PS3 [2UL];
    const UBase_t reserved4 [2UL];
}ADC_BITBANDING_TSSEL_t;

typedef volatile struct
{
    volatile UBase_t SS0 [2UL];
    const UBase_t reserved1 [2UL];
    volatile UBase_t SS1 [2UL];
    const UBase_t reserved2 [2UL];
    volatile UBase_t SS2 [2UL];
    const UBase_t reserved3 [2UL];
    volatile UBase_t SS3 [2UL];
    const UBase_t reserved4 [18UL];
}ADC_BITBANDING_SSPRI_t;

typedef volatile struct
{
    volatile UBase_t SS0;
    volatile UBase_t SS1;
    volatile UBase_t SS2;
    volatile UBase_t SS3;
    const UBase_t reserved [23UL];
    volatile UBase_t SYNCWAIT;
    const UBase_t reserved1 [3UL];
    volatile UBase_t GSYNC;
}ADC_BITBANDING_PSSI_t;

/**
 *  Global Struct Definitions for ADC Properties
 */

typedef volatile struct
{
    volatile UBase_t PHASE [4UL];
    const UBase_t reserved [28UL];
}ADC_BITBANDING_SPC_t;

typedef volatile struct
{
    volatile UBase_t AVG [3UL];
    const UBase_t reserved [29UL];
}ADC_BITBANDING_SAC_t;

typedef volatile struct
{
    volatile UBase_t VREF;
    const UBase_t reserved [31UL];
}ADC_BITBANDING_CTL_t;

typedef volatile struct
{
    volatile const UBase_t MCR [4UL];
    volatile const UBase_t CH [6UL];
    volatile const UBase_t DC [6UL];
    volatile const UBase_t TYPE [2UL];
    volatile const UBase_t RSL [5UL];
    volatile const UBase_t TS;
    volatile const UBase_t APSHT;
    const UBase_t reserved [7UL];
}ADC_BITBANDING_PP_t;

typedef volatile struct
{
    volatile UBase_t MCR [4UL];
    const UBase_t reserved [28UL];
}ADC_BITBANDING_PC_t;

typedef volatile struct
{
    volatile UBase_t CS [4UL];
    volatile UBase_t CLKDIV [6UL];
    const UBase_t reserved [22UL];
}ADC_BITBANDING_CC_t;

/**
 * ADC Sequences inputs configurations
 */

typedef volatile struct
{
    volatile UBase_t MUX0 [4UL];
    volatile UBase_t MUX1 [4UL];
    volatile UBase_t MUX2 [4UL];
    volatile UBase_t MUX3 [4UL];
    volatile UBase_t MUX4 [4UL];
    volatile UBase_t MUX5 [4UL];
    volatile UBase_t MUX6 [4UL];
    volatile UBase_t MUX7 [4UL];
}ADC_BITBANDING_SS8_MUX_t;

typedef volatile struct
{
    volatile UBase_t MUX0 [4UL];
    volatile UBase_t MUX1 [4UL];
    volatile UBase_t MUX2 [4UL];
    volatile UBase_t MUX3 [4UL];
    const UBase_t reserved [16UL];
}ADC_BITBANDING_SS4_MUX_t;

typedef volatile struct
{
    volatile UBase_t MUX0 [4UL];
    const UBase_t reserved [28UL];
}ADC_BITBANDING_SS1_MUX_t;

typedef volatile struct
{
    volatile UBase_t EMUX0;
    const UBase_t reserved [3UL];
    volatile UBase_t EMUX1;
    const UBase_t reserved1 [3UL];
    volatile UBase_t EMUX2;
    const UBase_t reserved2 [3UL];
    volatile UBase_t EMUX3;
    const UBase_t reserved3 [3UL];
    volatile UBase_t EMUX4;
    const UBase_t reserved4 [3UL];
    volatile UBase_t EMUX5;
    const UBase_t reserved5 [3UL];
    volatile UBase_t EMUX6;
    const UBase_t reserved6 [3UL];
    volatile UBase_t EMUX7;
    const UBase_t reserved7 [3UL];
}ADC_BITBANDING_SS8_EMUX_t;

typedef volatile struct
{
    volatile UBase_t EMUX0;
    const UBase_t reserved [3UL];
    volatile UBase_t EMUX1;
    const UBase_t reserved1 [3UL];
    volatile UBase_t EMUX2;
    const UBase_t reserved2 [3UL];
    volatile UBase_t EMUX3;
    const UBase_t reserved3 [19UL];
}ADC_BITBANDING_SS4_EMUX_t;

typedef volatile struct
{
    volatile UBase_t EMUX0;
    const UBase_t reserved [31UL];
}ADC_BITBANDING_SS1_EMUX_t;

typedef volatile struct
{
    volatile UBase_t TSH0 [4UL];
    volatile UBase_t TSH1 [4UL];
    volatile UBase_t TSH2 [4UL];
    volatile UBase_t TSH3 [4UL];
    volatile UBase_t TSH4 [4UL];
    volatile UBase_t TSH5 [4UL];
    volatile UBase_t TSH6 [4UL];
    volatile UBase_t TSH7 [4UL];
}ADC_BITBANDING_SS8_TSH_t;

typedef volatile struct
{
    volatile UBase_t TSH0 [4UL];
    volatile UBase_t TSH1 [4UL];
    volatile UBase_t TSH2 [4UL];
    volatile UBase_t TSH3 [4UL];
    const UBase_t reserved [16UL];
}ADC_BITBANDING_SS4_TSH_t;

typedef volatile struct
{
    volatile UBase_t TSH0 [4UL];
    const UBase_t reserved [28UL];
}ADC_BITBANDING_SS1_TSH_t;

typedef volatile struct
{
    volatile UBase_t D0;
    volatile UBase_t END0;
    volatile UBase_t IE0;
    volatile UBase_t TS0;
    volatile UBase_t D1;
    volatile UBase_t END1;
    volatile UBase_t IE1;
    volatile UBase_t TS1;
    volatile UBase_t D2;
    volatile UBase_t END2;
    volatile UBase_t IE2;
    volatile UBase_t TS2;
    volatile UBase_t D3;
    volatile UBase_t END3;
    volatile UBase_t IE3;
    volatile UBase_t TS3;
    volatile UBase_t D4;
    volatile UBase_t END4;
    volatile UBase_t IE4;
    volatile UBase_t TS4;
    volatile UBase_t D5;
    volatile UBase_t END5;
    volatile UBase_t IE5;
    volatile UBase_t TS5;
    volatile UBase_t D6;
    volatile UBase_t END6;
    volatile UBase_t IE6;
    volatile UBase_t TS6;
    volatile UBase_t D7;
    volatile UBase_t END7;
    volatile UBase_t IE7;
    volatile UBase_t TS7;
}ADC_BITBANDING_SS8_CTL_t;

typedef volatile struct
{
    volatile UBase_t D0;
    volatile UBase_t END0;
    volatile UBase_t IE0;
    volatile UBase_t TS0;
    volatile UBase_t D1;
    volatile UBase_t END1;
    volatile UBase_t IE1;
    volatile UBase_t TS1;
    volatile UBase_t D2;
    volatile UBase_t END2;
    volatile UBase_t IE2;
    volatile UBase_t TS2;
    volatile UBase_t D3;
    volatile UBase_t END3;
    volatile UBase_t IE3;
    volatile UBase_t TS3;
    const UBase_t reserved [16UL];
}ADC_BITBANDING_SS4_CTL_t;

typedef volatile struct
{
    volatile UBase_t D0;
    volatile UBase_t END0;
    volatile UBase_t IE0;
    volatile UBase_t TS0;
    const UBase_t reserved [28UL];
}ADC_BITBANDING_SS1_CTL_t;

typedef volatile struct
{
    volatile const UBase_t DATA [12UL];
    const UBase_t reserved [20UL];
}ADC_BITBANDING_SS_FIFO_t;

typedef volatile struct
{
    volatile const UBase_t TPTR [4UL];
    volatile const UBase_t HPTR [4UL];
    volatile const UBase_t EMPTY;
    const UBase_t reserved [3UL];
    volatile const UBase_t FULL;
    const UBase_t reserved1 [19UL];
}ADC_BITBANDING_SS_FSTAT_t;

typedef volatile struct
{
    volatile UBase_t S0DCOP;
    const UBase_t reserved [3UL];
    volatile UBase_t S1DCOP;
    const UBase_t reserved1 [3UL];
    volatile UBase_t S2DCOP;
    const UBase_t reserved2 [3UL];
    volatile UBase_t S3DCOP;
    const UBase_t reserved3 [3UL];
    volatile UBase_t S4DCOP;
    const UBase_t reserved4 [3UL];
    volatile UBase_t S5DCOP;
    const UBase_t reserved5 [3UL];
    volatile UBase_t S6DCOP;
    const UBase_t reserved6 [3UL];
    volatile UBase_t S7DCOP;
    const UBase_t reserved7 [3UL];
}ADC_BITBANDING_SS8_OP_t;

typedef volatile struct
{
    volatile UBase_t S0DCOP;
    const UBase_t reserved [3UL];
    volatile UBase_t S1DCOP;
    const UBase_t reserved1 [3UL];
    volatile UBase_t S2DCOP;
    const UBase_t reserved2 [3UL];
    volatile UBase_t S3DCOP;
    const UBase_t reserved3 [19UL];
}ADC_BITBANDING_SS4_OP_t;

typedef volatile struct
{
    volatile UBase_t S0DCOP;
    const UBase_t reserved [31UL];
}ADC_BITBANDING_SS1_OP_t;

typedef volatile struct
{
    volatile UBase_t S0DCSEL [4UL];
    volatile UBase_t S1DCSEL [4UL];
    volatile UBase_t S2DCSEL [4UL];
    volatile UBase_t S3DCSEL [4UL];
    volatile UBase_t S4DCSEL [4UL];
    volatile UBase_t S5DCSEL [4UL];
    volatile UBase_t S6DCSEL [4UL];
    volatile UBase_t S7DCSEL [4UL];
}ADC_BITBANDING_SS8_DC_t;

typedef volatile struct
{
    volatile UBase_t S0DCSEL [4UL];
    volatile UBase_t S1DCSEL [4UL];
    volatile UBase_t S2DCSEL [4UL];
    volatile UBase_t S3DCSEL [4UL];
    const UBase_t reserved [16UL];
}ADC_BITBANDING_SS4_DC_t;

typedef volatile struct
{
    volatile UBase_t S0DCSEL [4UL];
    const UBase_t reserved [28UL];
}ADC_BITBANDING_SS1_DC_t;

/**
 *  Global Struct Definitions for ADC Digital Comparators
 */

typedef volatile struct
{
    volatile UBase_t DCINT0;
    volatile UBase_t DCINT1;
    volatile UBase_t DCINT2;
    volatile UBase_t DCINT3;
    volatile UBase_t DCINT4;
    volatile UBase_t DCINT5;
    volatile UBase_t DCINT6;
    volatile UBase_t DCINT7;
    const UBase_t reserved [24UL];
}ADC_BITBANDING_DCISC_t;

typedef volatile struct
{
    volatile UBase_t DCINT0;
    volatile UBase_t DCINT1;
    volatile UBase_t DCINT2;
    volatile UBase_t DCINT3;
    volatile UBase_t DCINT4;
    volatile UBase_t DCINT5;
    volatile UBase_t DCINT6;
    volatile UBase_t DCINT7;
    const UBase_t reserved [8UL];
    volatile UBase_t DCTRIG0;
    volatile UBase_t DCTRIG1;
    volatile UBase_t DCTRIG2;
    volatile UBase_t DCTRIG3;
    volatile UBase_t DCTRIG4;
    volatile UBase_t DCTRIG5;
    volatile UBase_t DCTRIG6;
    volatile UBase_t DCTRIG7;
    const UBase_t reserved1 [8UL];
}ADC_BITBANDING_DC_RIC_t;

/**
 * ADC Digital Comparator configurations
 */

typedef volatile struct
{
    volatile UBase_t CIM [2UL];
    volatile UBase_t CIC [2UL];
    volatile UBase_t CIE;
    const UBase_t reserved [3UL];
    volatile UBase_t CTM [2UL];
    volatile UBase_t CTC [2UL];
    volatile UBase_t CTE;
    const UBase_t reserved1 [19UL];
}ADC_BITBANDING_DC_CTL_t;

typedef volatile struct
{
    volatile UBase_t COMP0 [12UL];
    const UBase_t reserved [4UL];
    volatile UBase_t COMP1 [12UL];
    const UBase_t reserved1 [4UL];
}ADC_BITBANDING_DC_CMP_t;

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTREGISTER_BITBANDING_H_ */

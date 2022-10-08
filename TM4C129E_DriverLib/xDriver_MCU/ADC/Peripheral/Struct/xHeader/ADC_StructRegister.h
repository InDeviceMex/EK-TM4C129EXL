/**
 *
 * @file ADC_StructRegister.h
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
 * @verbatim 26 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 26 sep. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTREGISTER_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTREGISTER_H_

#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

/**
 *  Global Struct Definitions for ADC Sequences
 */

typedef volatile struct
{
    volatile UBase_t ASEN0: 1;
    volatile UBase_t ASEN1: 1;
    volatile UBase_t ASEN2: 1;
    volatile UBase_t ASEN3: 1;
    const UBase_t reserved: 4;
    volatile UBase_t ADEN0: 1;
    volatile UBase_t ADEN1: 1;
    volatile UBase_t ADEN2: 1;
    volatile UBase_t ADEN3: 1;
    const UBase_t reserved1: 4;
    volatile const UBase_t BUSY: 1;
    const UBase_t reserved2: 15;
}ADC_ACTSS_t;

typedef volatile struct
{
    volatile const UBase_t INR0: 1;
    volatile const UBase_t INR1: 1;
    volatile const UBase_t INR2: 1;
    volatile const UBase_t INR3: 1;
    const UBase_t reserved: 4;
    volatile const UBase_t DMAINR0: 1;
    volatile const UBase_t DMAINR1: 1;
    volatile const UBase_t DMAINR2: 1;
    volatile const UBase_t DMAINR3: 1;
    const UBase_t reserved1: 4;
    volatile const UBase_t INRDC: 1;
    const UBase_t reserved2: 15;
}ADC_RIS_t;

typedef volatile struct
{
    volatile UBase_t MASK0: 1;
    volatile UBase_t MASK1: 1;
    volatile UBase_t MASK2: 1;
    volatile UBase_t MASK3: 1;
    const UBase_t reserved: 4;
    volatile UBase_t DMAMASK0: 1;
    volatile UBase_t DMAMASK1: 1;
    volatile UBase_t DMAMASK2: 1;
    volatile UBase_t DMAMASK3: 1;
    const UBase_t reserved1: 4;
    volatile UBase_t DCONSS0: 1;
    volatile UBase_t DCONSS1: 1;
    volatile UBase_t DCONSS2: 1;
    volatile UBase_t DCONSS3: 1;
    const UBase_t reserved2: 12;
}ADC_IM_t;

typedef volatile struct
{
    volatile UBase_t IN0: 1;
    volatile UBase_t IN1: 1;
    volatile UBase_t IN2: 1;
    volatile UBase_t IN3: 1;
    const UBase_t reserved: 4;
    volatile UBase_t DMAIN0: 1;
    volatile UBase_t DMAIN1: 1;
    volatile UBase_t DMAIN2: 1;
    volatile UBase_t DMAIN3: 1;
    const UBase_t reserved1: 4;
    volatile const UBase_t DCINSS0: 1;
    volatile const UBase_t DCINSS1: 1;
    volatile const UBase_t DCINSS2: 1;
    volatile const UBase_t DCINSS3: 1;
    const UBase_t reserved2: 12;
}ADC_ISC_t;

typedef volatile struct
{
    volatile UBase_t OV0: 1;
    volatile UBase_t OV1: 1;
    volatile UBase_t OV2: 1;
    volatile UBase_t OV3: 1;
    const UBase_t reserved: 28;
}ADC_OSTAT_t;

typedef volatile struct
{
    volatile UBase_t EM0: 4;
    volatile UBase_t EM1: 4;
    volatile UBase_t EM2: 4;
    volatile UBase_t EM3: 4;
    const UBase_t reserved: 16;
}ADC_EMUX_t;

typedef volatile struct
{
    volatile UBase_t UV0: 1;
    volatile UBase_t UV1: 1;
    volatile UBase_t UV2: 1;
    volatile UBase_t UV3: 1;
    const UBase_t reserved: 28;
}ADC_USTAT_t;

typedef volatile struct
{
    const UBase_t reserved: 4;
    volatile UBase_t PS0: 2;
    const UBase_t reserved1: 6;
    volatile UBase_t PS1: 2;
    const UBase_t reserved2: 6;
    volatile UBase_t PS2: 2;
    const UBase_t reserved3: 6;
    volatile UBase_t PS3: 2;
    const UBase_t reserved4: 2;
}ADC_TSSEL_t;

typedef volatile struct
{
    volatile UBase_t SS0: 2;
    const UBase_t reserved1: 2;
    volatile UBase_t SS1: 2;
    const UBase_t reserved2: 2;
    volatile UBase_t SS2: 2;
    const UBase_t reserved3: 2;
    volatile UBase_t SS3: 2;
    const UBase_t reserved4: 18;
}ADC_SSPRI_t;

typedef volatile struct
{
    volatile UBase_t SS0: 1;
    volatile UBase_t SS1: 1;
    volatile UBase_t SS2: 1;
    volatile UBase_t SS3: 1;
    const UBase_t reserved: 23;
    volatile UBase_t SYNCWAIT: 1;
    const UBase_t reserved1: 3;
    volatile UBase_t GSYNC: 1;
}ADC_PSSI_t;

/**
 *  Global Struct Definitions for ADC Properties
 */

typedef volatile struct
{
    volatile UBase_t PHASE: 4;
    const UBase_t reserved: 28;
}ADC_SPC_t;

typedef volatile struct
{
    volatile UBase_t AVG: 3;
    const UBase_t reserved: 29;
}ADC_SAC_t;

typedef volatile struct
{
    volatile UBase_t VREF: 1;
    const UBase_t reserved: 31;
}ADC_CTL_t;

typedef volatile struct
{
    volatile const UBase_t MCR: 4;
    volatile const UBase_t CH: 6;
    volatile const UBase_t DC: 6;
    volatile const UBase_t TYPE: 2;
    volatile const UBase_t RSL: 5;
    volatile const UBase_t TS: 1;
    volatile const UBase_t APSHT: 1;
    const UBase_t reserved: 7;
}ADC_PP_t;

typedef volatile struct
{
    volatile UBase_t MCR: 4;
    const UBase_t reserved: 28;
}ADC_PC_t;

typedef volatile struct
{
    volatile UBase_t CS: 4;
    volatile UBase_t CLKDIV: 6;
    const UBase_t reserved: 22;
}ADC_CC_t;


/**
 * ADC Sequences inputs configurations
 */

typedef volatile struct
{
    volatile UBase_t MUX0: 4;
    volatile UBase_t MUX1: 4;
    volatile UBase_t MUX2: 4;
    volatile UBase_t MUX3: 4;
    volatile UBase_t MUX4: 4;
    volatile UBase_t MUX5: 4;
    volatile UBase_t MUX6: 4;
    volatile UBase_t MUX7: 4;
}ADC_SS8_MUX_t;

typedef volatile struct
{
    volatile UBase_t MUX0: 4;
    volatile UBase_t MUX1: 4;
    volatile UBase_t MUX2: 4;
    volatile UBase_t MUX3: 4;
    const UBase_t reserved: 16;
}ADC_SS4_MUX_t;

typedef volatile struct
{
    volatile UBase_t MUX0: 4;
    const UBase_t reserved: 28;
}ADC_SS1_MUX_t;

typedef volatile struct
{
    volatile UBase_t EMUX0: 1;
    const UBase_t reserved: 3;
    volatile UBase_t EMUX1: 1;
    const UBase_t reserved1: 3;
    volatile UBase_t EMUX2: 1;
    const UBase_t reserved2: 3;
    volatile UBase_t EMUX3: 1;
    const UBase_t reserved3: 3;
    volatile UBase_t EMUX4: 1;
    const UBase_t reserved4: 3;
    volatile UBase_t EMUX5: 1;
    const UBase_t reserved5: 3;
    volatile UBase_t EMUX6: 1;
    const UBase_t reserved6: 3;
    volatile UBase_t EMUX7: 1;
    const UBase_t reserved7: 3;
}ADC_SS8_EMUX_t;

typedef volatile struct
{
    volatile UBase_t EMUX0: 1;
    const UBase_t reserved: 3;
    volatile UBase_t EMUX1: 1;
    const UBase_t reserved1: 3;
    volatile UBase_t EMUX2: 1;
    const UBase_t reserved2: 3;
    volatile UBase_t EMUX3: 1;
    const UBase_t reserved3: 19;
}ADC_SS4_EMUX_t;

typedef volatile struct
{
    volatile UBase_t EMUX0: 1;
    const UBase_t reserved: 31;
}ADC_SS1_EMUX_t;

typedef volatile struct
{
    volatile UBase_t TSH0: 4;
    volatile UBase_t TSH1: 4;
    volatile UBase_t TSH2: 4;
    volatile UBase_t TSH3: 4;
    volatile UBase_t TSH4: 4;
    volatile UBase_t TSH5: 4;
    volatile UBase_t TSH6: 4;
    volatile UBase_t TSH7: 4;
}ADC_SS8_TSH_t;

typedef volatile struct
{
    volatile UBase_t TSH0: 4;
    volatile UBase_t TSH1: 4;
    volatile UBase_t TSH2: 4;
    volatile UBase_t TSH3: 4;
    const UBase_t reserved: 16;
}ADC_SS4_TSH_t;

typedef volatile struct
{
    volatile UBase_t TSH0: 4;
    const UBase_t reserved: 28;
}ADC_SS1_TSH_t;


typedef volatile struct
{
    volatile UBase_t D0: 1;
    volatile UBase_t END0: 1;
    volatile UBase_t IE0: 1;
    volatile UBase_t TS0: 1;
    volatile UBase_t D1: 1;
    volatile UBase_t END1: 1;
    volatile UBase_t IE1: 1;
    volatile UBase_t TS1: 1;
    volatile UBase_t D2: 1;
    volatile UBase_t END2: 1;
    volatile UBase_t IE2: 1;
    volatile UBase_t TS2: 1;
    volatile UBase_t D3: 1;
    volatile UBase_t END3: 1;
    volatile UBase_t IE3: 1;
    volatile UBase_t TS3: 1;
    volatile UBase_t D4: 1;
    volatile UBase_t END4: 1;
    volatile UBase_t IE4: 1;
    volatile UBase_t TS4: 1;
    volatile UBase_t D5: 1;
    volatile UBase_t END5: 1;
    volatile UBase_t IE5: 1;
    volatile UBase_t TS5: 1;
    volatile UBase_t D6: 1;
    volatile UBase_t END6: 1;
    volatile UBase_t IE6: 1;
    volatile UBase_t TS6: 1;
    volatile UBase_t D7: 1;
    volatile UBase_t END7: 1;
    volatile UBase_t IE7: 1;
    volatile UBase_t TS7: 1;
}ADC_SS8_CTL_t;

typedef volatile struct
{
    volatile UBase_t D0: 1;
    volatile UBase_t END0: 1;
    volatile UBase_t IE0: 1;
    volatile UBase_t TS0: 1;
    volatile UBase_t D1: 1;
    volatile UBase_t END1: 1;
    volatile UBase_t IE1: 1;
    volatile UBase_t TS1: 1;
    volatile UBase_t D2: 1;
    volatile UBase_t END2: 1;
    volatile UBase_t IE2: 1;
    volatile UBase_t TS2: 1;
    volatile UBase_t D3: 1;
    volatile UBase_t END3: 1;
    volatile UBase_t IE3: 1;
    volatile UBase_t TS3: 1;
    const UBase_t reserved: 16;
}ADC_SS4_CTL_t;

typedef volatile struct
{
    volatile UBase_t D0: 1;
    volatile UBase_t END0: 1;
    volatile UBase_t IE0: 1;
    volatile UBase_t TS0: 1;
    const UBase_t reserved: 28;
}ADC_SS1_CTL_t;

typedef volatile struct
{
    volatile const UBase_t DATA: 12;
    const UBase_t reserved: 20;
}ADC_SS_FIFO_t;

typedef volatile struct
{
    volatile const UBase_t TPTR: 4;
    volatile const UBase_t HPTR: 4;
    volatile const UBase_t EMPTY: 1;
    const UBase_t reserved: 3;
    volatile const UBase_t FULL: 1;
    const UBase_t reserved1: 19;
}ADC_SS_FSTAT_t;

/**
 * ADC Sequences Comparator configurations
 */

typedef volatile struct
{
    volatile UBase_t S0DCOP: 1;
    const UBase_t reserved: 3;
    volatile UBase_t S1DCOP: 1;
    const UBase_t reserved1: 3;
    volatile UBase_t S2DCOP: 1;
    const UBase_t reserved2: 3;
    volatile UBase_t S3DCOP: 1;
    const UBase_t reserved3: 3;
    volatile UBase_t S4DCOP: 1;
    const UBase_t reserved4: 3;
    volatile UBase_t S5DCOP: 1;
    const UBase_t reserved5: 3;
    volatile UBase_t S6DCOP: 1;
    const UBase_t reserved6: 3;
    volatile UBase_t S7DCOP: 1;
    const UBase_t reserved7: 3;
}ADC_SS8_OP_t;

typedef volatile struct
{
    volatile UBase_t S0DCOP: 1;
    const UBase_t reserved: 3;
    volatile UBase_t S1DCOP: 1;
    const UBase_t reserved1: 3;
    volatile UBase_t S2DCOP: 1;
    const UBase_t reserved2: 3;
    volatile UBase_t S3DCOP: 1;
    const UBase_t reserved3: 19;
}ADC_SS4_OP_t;

typedef volatile struct
{
    volatile UBase_t S0DCOP: 1;
    const UBase_t reserved: 31;
}ADC_SS1_OP_t;

typedef volatile struct
{
    volatile UBase_t S0DCSEL: 4;
    volatile UBase_t S1DCSEL: 4;
    volatile UBase_t S2DCSEL: 4;
    volatile UBase_t S3DCSEL: 4;
    volatile UBase_t S4DCSEL: 4;
    volatile UBase_t S5DCSEL: 4;
    volatile UBase_t S6DCSEL: 4;
    volatile UBase_t S7DCSEL: 4;
}ADC_SS8_DC_t;

typedef volatile struct
{
    volatile UBase_t S0DCSEL: 4;
    volatile UBase_t S1DCSEL: 4;
    volatile UBase_t S2DCSEL: 4;
    volatile UBase_t S3DCSEL: 4;
    const UBase_t reserved: 16;
}ADC_SS4_DC_t;

typedef volatile struct
{
    volatile UBase_t S0DCSEL: 4;
    const UBase_t reserved: 28;
}ADC_SS1_DC_t;


/**
 *  Global Struct Definitions for ADC Digital Comparators
 */

typedef volatile struct
{
    volatile UBase_t DCINT0: 1;
    volatile UBase_t DCINT1: 1;
    volatile UBase_t DCINT2: 1;
    volatile UBase_t DCINT3: 1;
    volatile UBase_t DCINT4: 1;
    volatile UBase_t DCINT5: 1;
    volatile UBase_t DCINT6: 1;
    volatile UBase_t DCINT7: 1;
    const UBase_t reserved: 24;
}ADC_DCISC_t;

typedef volatile struct
{
    volatile UBase_t DCINT0   : 1;
    volatile UBase_t DCINT1   : 1;
    volatile UBase_t DCINT2   : 1;
    volatile UBase_t DCINT3   : 1;
    volatile UBase_t DCINT4   : 1;
    volatile UBase_t DCINT5   : 1;
    volatile UBase_t DCINT6   : 1;
    volatile UBase_t DCINT7   : 1;
    const UBase_t reserved : 8;
    volatile UBase_t DCTRIG0  : 1;
    volatile UBase_t DCTRIG1  : 1;
    volatile UBase_t DCTRIG2  : 1;
    volatile UBase_t DCTRIG3  : 1;
    volatile UBase_t DCTRIG4  : 1;
    volatile UBase_t DCTRIG5  : 1;
    volatile UBase_t DCTRIG6  : 1;
    volatile UBase_t DCTRIG7  : 1;
    const UBase_t reserved1: 8;
}ADC_DC_RIC_t;

/**
 * ADC Sequence Digital Comparator configurations
 */

typedef volatile struct
{
    volatile UBase_t CIM: 2;
    volatile UBase_t CIC: 2;
    volatile UBase_t CIE: 1;
    const UBase_t reserved: 3;
    volatile UBase_t CTM: 2;
    volatile UBase_t CTC: 2;
    volatile UBase_t CTE: 1;
    const UBase_t reserved1: 19;
}ADC_DC_CTL_t;

typedef volatile struct
{
    volatile UBase_t COMP0: 12;
    const UBase_t reserved: 4;
    volatile UBase_t COMP1: 12;
    const UBase_t reserved1: 4;
}ADC_DC_CMP_t;

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTREGISTER_H_ */

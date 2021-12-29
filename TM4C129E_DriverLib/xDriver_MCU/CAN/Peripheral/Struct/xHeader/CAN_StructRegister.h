/**
 *
 * @file CAN_StructRegister.h
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTREGISTER_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTREGISTER_H_

#include <xUtils/Standard/Standard.h>

/**
 *  Global Struct Definitions for CAN Sequences
 */

typedef volatile struct
{
    volatile uint32_t INIT: 1;
    volatile uint32_t IE: 1;
    volatile uint32_t SIE: 1;
    volatile uint32_t EIE: 1;
    const uint32_t reserved: 1;
    volatile uint32_t DAR: 1;
    volatile uint32_t CCE: 1;
    volatile uint32_t TEST: 1;
    const uint32_t reserved1: 24;
}CANCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t LEC: 3;
    volatile uint32_t TXOK: 1;
    volatile uint32_t RXOK: 1;
    volatile const uint32_t EPASS: 1;
    volatile const uint32_t EWARN: 1;
    volatile const uint32_t BOFF: 1;
    const uint32_t reserved: 24;
}CANSTS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TEC: 8;
    volatile const uint32_t REC: 7;
    volatile const uint32_t RP: 1;
    const uint32_t reserved: 16;
}CANERR_TypeDef;

typedef volatile struct
{
    volatile uint32_t BRP: 6;
    volatile uint32_t SJW: 2;
    volatile uint32_t TSEG1: 4;
    volatile uint32_t TSEG2: 3;
    const uint32_t reserved: 17;
}CANBIT_TypeDef;

typedef volatile struct
{
    volatile const uint32_t INTID: 16;
    const uint32_t reserved: 16;
}CANINT_TypeDef;

typedef volatile struct
{
    const uint32_t reserved: 2;
    volatile uint32_t BASIC: 1;
    volatile uint32_t SILENT: 1;
    volatile uint32_t LBACK: 1;
    volatile uint32_t TX: 2;
    volatile const uint32_t RX: 1;
    const uint32_t reserved1: 24;
}CANTST_TypeDef;

typedef volatile struct
{
    volatile uint32_t BRPE: 4;
    const uint32_t reserved: 28;
}CANBRPE_TypeDef;

typedef volatile struct
{
    volatile uint32_t MNUM: 6;
    const uint32_t reserved: 9;
    volatile const uint32_t BUSY: 1;
    const uint32_t reserved1: 16;
}CANIFnCRQ_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATAB: 1;
    volatile uint32_t DATAA: 1;
    volatile uint32_t NEWDAT_TXRQST: 1;
    volatile uint32_t CLRINTPND: 1;
    volatile uint32_t CONTROL: 1;
    volatile uint32_t ARB: 1;
    volatile uint32_t MASK: 1;
    volatile uint32_t WRNRD: 1;
    const uint32_t reserved: 24;
}CANIFnCMSK_TypeDef;

typedef volatile struct
{
    volatile uint32_t MSK: 16;
    const uint32_t reserved: 16;
}CANIFnMSK1_TypeDef;

typedef volatile struct
{
    volatile uint32_t MSK: 13;
    const uint32_t reserved: 1;
    volatile uint32_t MDIR: 1;
    volatile uint32_t MXTD: 1;
    const uint32_t reserved1: 16;
}CANIFnMSK2_TypeDef;

typedef volatile struct
{
    volatile uint32_t ID: 16;
    const uint32_t reserved: 16;
}CANIFnARB1_TypeDef;

typedef volatile struct
{
    volatile uint32_t ID: 13;
    volatile uint32_t DIR: 1;
    volatile uint32_t MXTD: 1;
    volatile uint32_t MSGVAL: 1;
    const uint32_t reserved1: 16;
}CANIFnARB2_TypeDef;

typedef volatile struct
{
    volatile uint32_t DLC: 4;
    const uint32_t reserved: 3;
    volatile uint32_t EOB: 1;
    volatile uint32_t TXRQST: 1;
    volatile uint32_t RMTEN: 1;
    volatile uint32_t RXIE: 1;
    volatile uint32_t TXIE: 1;
    volatile uint32_t UMASK: 1;
    volatile uint32_t INTPND: 1;
    volatile uint32_t MSGLST: 1;
    volatile uint32_t NEWDAT: 1;
    const uint32_t reserved1: 16;
}CANIFnMCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA: 16;
    const uint32_t reserved: 16;
}CANIFnD_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA0: 8;
    volatile uint32_t DATA1: 8;
    const uint32_t reserved: 16;
}CANIFnDA1_TypeDef; /*IFnDA1*/

typedef volatile struct
{
    volatile uint32_t DATA2: 8;
    volatile uint32_t DATA3: 8;
    const uint32_t reserved: 16;
}CANIFnDA2_TypeDef; /*IFnDA2*/

typedef volatile struct
{
    volatile uint32_t DATA4: 8;
    volatile uint32_t DATA5: 8;
    const uint32_t reserved: 16;
}CANIFnDB1_TypeDef; /*IFnDB1*/

typedef volatile struct
{
    volatile uint32_t DATA6: 8;
    volatile uint32_t DATA7: 8;
    const uint32_t reserved: 16;
}CANIFnDB2_TypeDef; /*IFnDB2*/

typedef volatile struct
{
    volatile uint32_t TXRQST: 16;
    const uint32_t reserved: 16;
}CANTXRQn_TypeDef;

#if defined (__TI_ARM__ )
    #pragma CHECK_MISRA("-6.4")
#endif

typedef volatile struct
{
    volatile uint64_t TXRQST_0_15: 16;
    const uint64_t reserved: 16;
    volatile uint64_t TXRQST_16_31: 16;
    const uint64_t reserved1: 16;
}CANTXRQ_TypeDef;

typedef volatile struct
{
    volatile const uint32_t NEWDAT: 16;
    const uint32_t reserved: 16;
}CANNWDAn_TypeDef;

typedef volatile struct
{
    volatile uint64_t NEWDAT_0_15: 16;
    const uint64_t reserved: 16;
    volatile uint64_t NEWDAT_16_31: 16;
    const uint64_t reserved1: 16;
}CANNWDA_TypeDef;

typedef volatile struct
{
    volatile const uint32_t INTPND: 16;
    const uint32_t reserved: 16;
}CANMSGnINT_TypeDef;

typedef volatile struct
{
    volatile uint64_t INTPND_0_15: 16;
    const uint64_t reserved: 16;
    volatile uint64_t INTPND_16_31: 16;
    const uint64_t reserved1: 16;
}CANMSGINT_TypeDef;

typedef volatile struct
{
    volatile const uint32_t MSGVAL: 16;
    const uint32_t reserved: 16;
}CANMSGnVAL_TypeDef;

typedef volatile struct
{
    volatile uint64_t MSGVAL_0_15: 16;
    const uint64_t reserved: 16;
    volatile uint64_t MSGVAL_16_31: 16;
    const uint64_t reserved1: 16;
}CANMSGVAL_TypeDef;

#if defined (__TI_ARM__ )
    #pragma RESET_MISRA("6.4")
#endif

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTREGISTER_H_ */

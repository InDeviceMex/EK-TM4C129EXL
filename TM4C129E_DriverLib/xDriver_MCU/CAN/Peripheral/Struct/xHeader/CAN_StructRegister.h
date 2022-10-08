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

#include <xDriver_MCU/CAN/Peripheral/xHeader/CAN_Enum.h>

/**
 *  Global Struct Definitions for CAN Sequences
 */

typedef volatile struct
{
    volatile UBase_t INIT: 1;
    volatile UBase_t IE: 1;
    volatile UBase_t SIE: 1;
    volatile UBase_t EIE: 1;
    const UBase_t reserved: 1;
    volatile UBase_t DAR: 1;
    volatile UBase_t CCE: 1;
    volatile UBase_t TEST: 1;
    const UBase_t reserved1: 24;
}CAN_CTL_t;

typedef volatile struct
{
    volatile UBase_t LEC: 3;
    volatile UBase_t TXOK: 1;
    volatile UBase_t RXOK: 1;
    volatile const UBase_t EPASS: 1;
    volatile const UBase_t EWARN: 1;
    volatile const UBase_t BOFF: 1;
    const UBase_t reserved: 24;
}CAN_STS_t;

typedef volatile struct
{
    volatile const UBase_t TEC: 8;
    volatile const UBase_t REC: 7;
    volatile const UBase_t RP: 1;
    const UBase_t reserved: 16;
}CAN_ERR_t;

typedef volatile struct
{
    volatile UBase_t BRP: 6;
    volatile UBase_t SJW: 2;
    volatile UBase_t TSEG1: 4;
    volatile UBase_t TSEG2: 3;
    const UBase_t reserved: 17;
}CAN_BIT_t;

typedef volatile struct
{
    volatile const UBase_t INTID: 16;
    const UBase_t reserved: 16;
}CAN_INT_t;

typedef volatile struct
{
    const UBase_t reserved: 2;
    volatile UBase_t BASIC: 1;
    volatile UBase_t SILENT: 1;
    volatile UBase_t LBACK: 1;
    volatile UBase_t TX: 2;
    volatile const UBase_t RX: 1;
    const UBase_t reserved1: 24;
}CAN_TST_t;

typedef volatile struct
{
    volatile UBase_t BRPE: 4;
    const UBase_t reserved: 28;
}CAN_BRPE_t;

typedef volatile struct
{
    volatile UBase_t MNUM: 6;
    const UBase_t reserved: 9;
    volatile const UBase_t BUSY: 1;
    const UBase_t reserved1: 16;
}CAN_IFn_CRQ_t;

typedef volatile struct
{
    volatile UBase_t DATAB: 1;
    volatile UBase_t DATAA: 1;
    volatile UBase_t NEWDAT_TXRQST: 1;
    volatile UBase_t CLRINTPND: 1;
    volatile UBase_t CONTROL: 1;
    volatile UBase_t ARB: 1;
    volatile UBase_t MASK: 1;
    volatile UBase_t WRNRD: 1;
    const UBase_t reserved: 24;
}CAN_IFn_CMSK_t;

typedef volatile struct
{
    volatile UBase_t MSK: 16;
    const UBase_t reserved: 16;
}CAN_IFn_MSK1_t;

typedef volatile struct
{
    volatile UBase_t MSK: 13;
    const UBase_t reserved: 1;
    volatile UBase_t MDIR: 1;
    volatile UBase_t MXTD: 1;
    const UBase_t reserved1: 16;
}CAN_IFn_MSK2_t;

typedef volatile struct
{
    volatile UBase_t ID: 16;
    const UBase_t reserved: 16;
}CAN_IFn_ARB1_t;

typedef volatile struct
{
    volatile UBase_t ID: 13;
    volatile UBase_t DIR: 1;
    volatile UBase_t MXTD: 1;
    volatile UBase_t MSG_VAL: 1;
    const UBase_t reserved1: 16;
}CAN_IFn_ARB2_t;

typedef volatile struct
{
    volatile UBase_t DLC: 4;
    const UBase_t reserved: 3;
    volatile UBase_t EOB: 1;
    volatile UBase_t TXRQST: 1;
    volatile UBase_t RMTEN: 1;
    volatile UBase_t RXIE: 1;
    volatile UBase_t TXIE: 1;
    volatile UBase_t UMASK: 1;
    volatile UBase_t INTPND: 1;
    volatile UBase_t MSGLST: 1;
    volatile UBase_t NEWDAT: 1;
    const UBase_t reserved1: 16;
}CAN_IFn_MCTL_t;

typedef volatile struct
{
    volatile UBase_t DATA: 16;
    const UBase_t reserved: 16;
}CAN_IFn_D_t;

typedef volatile struct
{
    volatile UBase_t DATA0: 8;
    volatile UBase_t DATA1: 8;
    const UBase_t reserved: 16;
}CAN_IFn_DA1_t; /*IFn_DA1*/

typedef volatile struct
{
    volatile UBase_t DATA2: 8;
    volatile UBase_t DATA3: 8;
    const UBase_t reserved: 16;
}CAN_IFn_DA2_t; /*IFn_DA2*/

typedef volatile struct
{
    volatile UBase_t DATA4: 8;
    volatile UBase_t DATA5: 8;
    const UBase_t reserved: 16;
}CAN_IFn_DB1_t; /*IFn_DB1*/

typedef volatile struct
{
    volatile UBase_t DATA6: 8;
    volatile UBase_t DATA7: 8;
    const UBase_t reserved: 16;
}CAN_IFn_DB2_t; /*IFn_DB2*/

typedef volatile struct
{
    volatile UBase_t TXRQST: 16;
    const UBase_t reserved: 16;
}CAN_TXRQn_t;

typedef volatile struct
{
    volatile const UBase_t NEWDAT: 16;
    const UBase_t reserved: 16;
}CAN_NWDAn_t;

typedef volatile struct
{
    volatile const UBase_t INTPND: 16;
    const UBase_t reserved: 16;
}CAN_MSGn_INT_t;

typedef volatile struct
{
    volatile const UBase_t MSG_VAL: 16;
    const UBase_t reserved: 16;
}CAN_MSGn_VAL_t;


#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma CHECK_MISRA("-6.4")
#endif

typedef volatile struct
{
    volatile uint64_t TXRQST_0_15: 16;
    const uint64_t reserved: 16;
    volatile uint64_t TXRQST_16_31: 16;
    const uint64_t reserved1: 16;
}CAN_TXRQ_t;

typedef volatile struct
{
    volatile uint64_t NEWDAT_0_15: 16;
    const uint64_t reserved: 16;
    volatile uint64_t NEWDAT_16_31: 16;
    const uint64_t reserved1: 16;
}CAN_NWDA_t;

typedef volatile struct
{
    volatile uint64_t INTPND_0_15: 16;
    const uint64_t reserved: 16;
    volatile uint64_t INTPND_16_31: 16;
    const uint64_t reserved1: 16;
}CAN_MSG_INT_t;

typedef volatile struct
{
    volatile uint64_t MSG_VAL_0_15: 16;
    const uint64_t reserved: 16;
    volatile uint64_t MSG_VAL_16_31: 16;
    const uint64_t reserved1: 16;
}CANMSG_VAL_t;

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("6.4")
#endif

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTREGISTER_H_ */

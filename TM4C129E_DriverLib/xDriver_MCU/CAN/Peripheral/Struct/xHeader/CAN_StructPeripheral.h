/**
 *
 * @file CAN_StructPeripheral.h
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
 * @verbatim Apr 13, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 13, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/CAN/Peripheral/Struct/xHeader/CAN_StructRegister.h>
#include <xDriver_MCU/CAN/Peripheral/xHeader/CAN_Enum.h>

typedef volatile struct
{
    union
    {
      volatile uint32_t CRQ;
      CAN_IFn_CRQ_t CRQ_Bit;
    };
    union
    {
      volatile uint32_t CMSK;
      CAN_IFn_CMSK_t CMSK_Bit;
    };
    union
    {
      volatile uint32_t MSK1;
      CAN_IFn_MSK1_t MSK1_Bit;
    };
    union
    {
      volatile uint32_t MSK2;
      CAN_IFn_MSK2_t MSK2_Bit;
    };
    union
    {
      volatile uint32_t ARB1;
      CAN_IFn_ARB1_t ARB1_Bit;
    };
    union
    {
      volatile uint32_t ARB2;
      CAN_IFn_ARB2_t ARB2_Bit;
    };
    union
    {
      volatile uint32_t MCTL;
      CAN_IFn_MCTL_t MCTL_Bit;
    };
    union
    {
      volatile uint32_t DA1;
      CAN_IFn_DA1_t DA1_Bit;
    };
    union
    {
      volatile uint32_t DA2;
      CAN_IFn_DA2_t DA2_Bit;
    };
    union
    {
      volatile uint32_t DB1;
      CAN_IFn_DB1_t DB1_Bit;
    };
    union
    {
      volatile uint32_t DB2;
      CAN_IFn_DB2_t DB2_Bit;
    };
    const uint32_t reserved [13UL];
}CAN_INTERFACE_t;

typedef volatile struct
{

    union
    {
      volatile uint32_t TXRQ1;
      volatile uint32_t TXRQ_LOW;
      CAN_TXRQn_t TXRQ1_Bit;
      CAN_TXRQn_t TXRQ_LOW_Bit;
    };
    union
    {
      volatile uint32_t TXRQ2;
      volatile uint32_t TXRQ_HIGH;
      CAN_TXRQn_t TXRQ2_Bit;
      CAN_TXRQn_t TXRQ_HIGH_Bit;
    };
    const uint32_t reserved [6UL];
    union
    {
      volatile const uint32_t NWDA1;
      volatile const uint32_t NWDA_LOW;
      CAN_NWDAn_t NWDA1_Bit;
      CAN_NWDAn_t NWDA_LOW_Bit;
    };
    union
    {
      volatile const uint32_t NWDA2;
      volatile const uint32_t NWDA_HIGH;
      CAN_NWDAn_t NWDA2_Bit;
      CAN_NWDAn_t NWDA_HIGH_Bit;
    };
    const uint32_t reserved1 [6UL];
    union
    {
      volatile uint32_t MSG1_INT;
      volatile uint32_t MSG_INT_LOW;
      CAN_MSGn_INT_t MSG1_INT_Bit;
      CAN_MSGn_INT_t MSG_INT_LOW_Bit;
    };
    union
    {
      volatile uint32_t MSG2_INT;
      volatile uint32_t MSG_INT_HIGH;
      CAN_MSGn_INT_t MSG2_INT_Bit;
      CAN_MSGn_INT_t MSG_INT_HIGH_Bit;
    };
    const uint32_t reserved2 [6UL];
    union
    {
      volatile uint32_t MSG1_VAL;
      volatile uint32_t MSG_VAL_LOW;
      CAN_MSGn_VAL_t MSG1_VAL_Bit;
      CAN_MSGn_VAL_t MSG_VAL_LOW_Bit;
    };
    union
    {
      volatile uint32_t MSG2_VAL;
      volatile uint32_t MSG_VAL_HIGH;
      CAN_MSGn_VAL_t MSG2_VAL_Bit;
      CAN_MSGn_VAL_t MSG_VAL_HIGH_Bit;
    };
}CANMESSAGE_t;

typedef volatile struct
{
    union
    {
      volatile uint32_t CTL;
      CAN_CTL_t CTL_Bit;
    };
    union
    {
      volatile uint32_t STS;
      CAN_STS_t STS_Bit;
    };
    union
    {
      volatile const uint32_t ERR;
      CAN_ERR_t ERR_Bit;
    };
    union
    {
      volatile uint32_t BIT;
      CAN_BIT_t BIT_Bit;
    };
    union
    {
      volatile const uint32_t INT;
      CAN_INT_t INT_Bit;
    };
    union
    {
      volatile uint32_t TST;
      CAN_TST_t TST_Bit;
    };
    union
    {
      volatile uint32_t BRPE;
      CAN_BRPE_t BRPE_Bit;
    };
    const uint32_t reserved [1UL];

    CAN_INTERFACE_t IF[2UL];

    const uint32_t reserved1 [8UL];

    CANMESSAGE_t MSG;

    const uint32_t reserved2 [934UL];
}CAN_t;


typedef volatile struct
{
    CAN_t MODULE [(uint32_t) CAN_enMODULE_MAX];
}CANS_t;

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_H_ */

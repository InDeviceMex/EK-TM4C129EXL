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
      CANIFnCRQ_t CRQ_Bit;
    };
    union
    {
      volatile uint32_t CMSK;
      CANIFnCMSK_t CMSK_Bit;
    };
    union
    {
      volatile uint32_t MSK1;
      CANIFnMSK1_t MSK1_Bit;
    };
    union
    {
      volatile uint32_t MSK2;
      CANIFnMSK2_t MSK2_Bit;
    };
    union
    {
      volatile uint32_t ARB1;
      CANIFnARB1_t ARB1_Bit;
    };
    union
    {
      volatile uint32_t ARB2;
      CANIFnARB2_t ARB2_Bit;
    };
    union
    {
      volatile uint32_t MCTL;
      CANIFnMCTL_t MCTL_Bit;
    };
    union
    {
      volatile uint32_t DA1;
      CANIFnDA1_t DA1_Bit;
    };
    union
    {
      volatile uint32_t DA2;
      CANIFnDA2_t DA2_Bit;
    };
    union
    {
      volatile uint32_t DB1;
      CANIFnDB1_t DB1_Bit;
    };
    union
    {
      volatile uint32_t DB2;
      CANIFnDB2_t DB2_Bit;
    };
    const uint32_t reserved [13UL];
}CANINTERFACE_t;

typedef volatile struct
{

    union
    {
      volatile uint32_t TXRQ1;
      volatile uint32_t TXRQ_LOW;
      CANTXRQn_t TXRQ1_Bit;
      CANTXRQn_t TXRQ_LOW_Bit;
    };
    union
    {
      volatile uint32_t TXRQ2;
      volatile uint32_t TXRQ_HIGH;
      CANTXRQn_t TXRQ2_Bit;
      CANTXRQn_t TXRQ_HIGH_Bit;
    };
    const uint32_t reserved [6UL];
    union
    {
      volatile const uint32_t NWDA1;
      volatile const uint32_t NWDA_LOW;
      CANNWDAn_t NWDA1_Bit;
      CANNWDAn_t NWDA_LOW_Bit;
    };
    union
    {
      volatile const uint32_t NWDA2;
      volatile const uint32_t NWDA_HIGH;
      CANNWDAn_t NWDA2_Bit;
      CANNWDAn_t NWDA_HIGH_Bit;
    };
    const uint32_t reserved1 [6UL];
    union
    {
      volatile uint32_t MSG1INT;
      volatile uint32_t MSGINT_LOW;
      CANMSGnINT_t MSG1INT_Bit;
      CANMSGnINT_t MSGINT_LOW_Bit;
    };
    union
    {
      volatile uint32_t MSG2INT;
      volatile uint32_t MSGINT_HIGH;
      CANMSGnINT_t MSG2INT_Bit;
      CANMSGnINT_t MSGINT_HIGH_Bit;
    };
    const uint32_t reserved2 [6UL];
    union
    {
      volatile uint32_t MSG1VAL;
      volatile uint32_t MSGVAL_LOW;
      CANMSGnVAL_t MSG1VAL_Bit;
      CANMSGnVAL_t MSGVAL_LOW_Bit;
    };
    union
    {
      volatile uint32_t MSG2VAL;
      volatile uint32_t MSGVAL_HIGH;
      CANMSGnVAL_t MSG2VAL_Bit;
      CANMSGnVAL_t MSGVAL_HIGH_Bit;
    };
}CANMESSAGE_t;

typedef volatile struct
{
    union
    {
      volatile uint32_t CTL;
      CANCTL_t CTL_Bit;
    };
    union
    {
      volatile uint32_t STS;
      CANSTS_t STS_Bit;
    };
    union
    {
      volatile const uint32_t ERR;
      CANERR_t ERR_Bit;
    };
    union
    {
      volatile uint32_t BIT;
      CANBIT_t BIT_Bit;
    };
    union
    {
      volatile const uint32_t INT;
      CANINT_t INT_Bit;
    };
    union
    {
      volatile uint32_t TST;
      CANTST_t TST_Bit;
    };
    union
    {
      volatile uint32_t BRPE;
      CANBRPE_t BRPE_Bit;
    };
    const uint32_t reserved [1UL];

    CANINTERFACE_t IF[2UL];

    const uint32_t reserved1 [8UL];

    CANMESSAGE_t MSG;

    const uint32_t reserved2 [934UL];
}CAN_t;


typedef volatile struct
{
    CAN_t MODULE [(uint32_t) CAN_enMODULE_MAX];
}CANS_t;

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_H_ */

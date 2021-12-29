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
      volatile uint32_t IFnCRQ;
      CANIFnCRQ_TypeDef IFnCRQ_Bit;
    };
    union
    {
      volatile uint32_t IFnCMSK;
      CANIFnCMSK_TypeDef IF1CMSK_Bit;
    };
    union
    {
      volatile const uint32_t IFnMSK1;
      CANIFnMSK1_TypeDef IFnMSK1_Bit;
    };
    union
    {
      volatile const uint32_t IFnMSK2;
      CANIFnMSK2_TypeDef IFnMSK2_Bit;
    };
    union
    {
      volatile uint32_t IFnARB1;
      CANIFnARB1_TypeDef IFnARB1_Bit;
    };
    union
    {
      volatile uint32_t IFnARB2;
      CANIFnARB2_TypeDef IFnARB2_Bit;
    };
    union
    {
      volatile uint32_t IFnMCTL;
      CANIFnMCTL_TypeDef IFnMCTL_Bit;
    };
    union
    {
      volatile uint32_t IFnDA1;
      CANIFnDA1_TypeDef IFnDA1_Bit;
    };
    union
    {
      volatile uint32_t IFnDA2;
      CANIFnDA2_TypeDef IFnDA2_Bit;
    };
    union
    {
      volatile uint32_t IFnDB1;
      CANIFnDB1_TypeDef IFnDB1_Bit;
    };
    union
    {
      volatile uint32_t IFnDB2;
      CANIFnDB2_TypeDef IFnDB2_Bit;
    };
    const uint32_t reserved [13UL];
}CANINTERFACE_TypeDef;

typedef volatile struct
{

    union
    {
      volatile uint32_t TXRQ1;
      volatile uint32_t TXRQ_LOW;
      CANTXRQn_TypeDef TXRQ1_Bit;
      CANTXRQn_TypeDef TXRQ_LOW_Bit;
    };
    union
    {
      volatile uint32_t TXRQ2;
      volatile uint32_t TXRQ_HIGH;
      CANTXRQn_TypeDef TXRQ2_Bit;
      CANTXRQn_TypeDef TXRQ_HIGH_Bit;
    };
    const uint32_t reserved [6UL];
    union
    {
      volatile const uint32_t NWDA1;
      volatile const uint32_t NWDA_LOW;
      CANNWDAn_TypeDef NWDA1_Bit;
      CANNWDAn_TypeDef NWDA_LOW_Bit;
    };
    union
    {
      volatile const uint32_t NWDA2;
      volatile const uint32_t NWDA_HIGH;
      CANNWDAn_TypeDef NWDA2_Bit;
      CANNWDAn_TypeDef NWDA_HIGH_Bit;
    };
    const uint32_t reserved1 [6UL];
    union
    {
      volatile uint32_t MSG1INT;
      volatile uint32_t MSGINT_LOW;
      CANMSGnINT_TypeDef MSG1INT_Bit;
      CANMSGnINT_TypeDef MSGINT_LOW_Bit;
    };
    union
    {
      volatile uint32_t MSG2INT;
      volatile uint32_t MSGINT_HIGH;
      CANMSGnINT_TypeDef MSG2INT_Bit;
      CANMSGnINT_TypeDef MSGINT_HIGH_Bit;
    };
    const uint32_t reserved2 [6UL];
    union
    {
      volatile uint32_t MSG1VAL;
      volatile uint32_t MSGVAL_LOW;
      CANMSGnVAL_TypeDef MSG1VAL_Bit;
      CANMSGnVAL_TypeDef MSGVAL_LOW_Bit;
    };
    union
    {
      volatile uint32_t MSG2VAL;
      volatile uint32_t MSGVAL_HIGH;
      CANMSGnVAL_TypeDef MSG2VAL_Bit;
      CANMSGnVAL_TypeDef MSGVAL_HIGH_Bit;
    };
}CANMESSAGE_TypeDef;

typedef volatile struct
{
    union
    {
      volatile uint32_t CTL;
      CANCTL_TypeDef CTL_Bit;
    };
    union
    {
      volatile uint32_t STS;
      CANSTS_TypeDef STS_Bit;
    };
    union
    {
      volatile const uint32_t ERR;
      CANERR_TypeDef ERR_Bit;
    };
    union
    {
      volatile uint32_t BIT;
      CANBIT_TypeDef BIT_Bit;
    };
    union
    {
      volatile const uint32_t INT;
      CANINT_TypeDef INT_Bit;
    };
    union
    {
      volatile uint32_t TST;
      CANTST_TypeDef TST_Bit;
    };
    union
    {
      volatile uint32_t BRPE;
      CANBRPE_TypeDef BRPE_Bit;
    };
    const uint32_t reserved [1UL];

    CANINTERFACE_TypeDef INTERFACE[2UL];

    const uint32_t reserved1 [8UL];

    CANMESSAGE_TypeDef MESSAGE;

    const uint32_t reserved2 [934UL];
}CAN_TypeDef;


typedef volatile struct
{
    CAN_TypeDef MODULE [(uint32_t) CAN_enMODULE_MAX];
}CANS_TypeDef;

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_H_ */

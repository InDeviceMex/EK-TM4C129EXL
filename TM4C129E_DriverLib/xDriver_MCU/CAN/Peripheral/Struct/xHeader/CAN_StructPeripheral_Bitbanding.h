/**
 *
 * @file CAN_StructPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/CAN/Peripheral/Struct/xHeader/CAN_StructRegister_Bitbanding.h>
#include <xDriver_MCU/CAN/Peripheral/xHeader/CAN_Enum.h>

typedef volatile struct
{
    union
    {
      volatile uint32_t IFnCRQ [32UL];
      BITBANDING_CANIFnCRQ_t IFnCRQ_Bit;
    };
    union
    {
      volatile uint32_t IFnCMSK [32UL];
      BITBANDING_CANIFnCMSK_t IF1CMSK_Bit;
    };
    union
    {
      volatile const uint32_t IFnMSK1 [32UL];
      BITBANDING_CANIFnMSK1_t IFnMSK1_Bit;
    };
    union
    {
      volatile const uint32_t IFnMSK2 [32UL];
      BITBANDING_CANIFnMSK2_t IFnMSK2_Bit;
    };
    union
    {
      volatile uint32_t IFnARB1 [32UL];
      BITBANDING_CANIFnARB1_t IFnARB1_Bit;
    };
    union
    {
      volatile uint32_t IFnARB2 [32UL];
      BITBANDING_CANIFnARB2_t IFnARB2_Bit;
    };
    union
    {
      volatile uint32_t IFnMCTL [32UL];
      BITBANDING_CANIFnMCTL_t IFnMCTL_Bit;
    };
    union
    {
      volatile uint32_t IFnDA1 [32UL];
      BITBANDING_CANIFnDA1_t IFnDA1_Bit;
    };
    union
    {
      volatile uint32_t IFnDA2 [32UL];
      BITBANDING_CANIFnDA2_t IFnDA2_Bit;
    };
    union
    {
      volatile uint32_t IFnDB1 [32UL];
      BITBANDING_CANIFnDB1_t IFnDB1_Bit;
    };
    union
    {
      volatile uint32_t IFnDB2 [32UL];
      BITBANDING_CANIFnDB2_t IFnDB2_Bit;
    };
    const uint32_t reserved [13UL * 32UL];
}BITBANDING_CANINTERFACE_t;

typedef volatile struct
{

    union
    {
      volatile uint32_t TXRQ1 [32UL];
      volatile uint32_t TXRQ_LOW [32UL];
      BITBANDING_CANTXRQn_t TXRQ1_Bit;
      BITBANDING_CANTXRQn_t TXRQ_LOW_Bit;
    };
    union
    {
      volatile uint32_t TXRQ2 [32UL];
      volatile uint32_t TXRQ_HIGH [32UL];
      BITBANDING_CANTXRQn_t TXRQ2_Bit;
      BITBANDING_CANTXRQn_t TXRQ_HIGH_Bit;
    };
    const uint32_t reserved [6UL * 32UL];
    union
    {
      volatile const uint32_t NWDA1 [32UL];
      volatile const uint32_t NWDA_LOW [32UL];
      BITBANDING_CANNWDAn_t NWDA1_Bit;
      BITBANDING_CANNWDAn_t NWDA_LOW_Bit;
    };
    union
    {
      volatile const uint32_t NWDA2 [32UL];
      volatile const uint32_t NWDA_HIGH [32UL];
      BITBANDING_CANNWDAn_t NWDA2_Bit;
      BITBANDING_CANNWDAn_t NWDA_HIGH_Bit;
    };
    const uint32_t reserved1 [6UL * 32UL];
    union
    {
      volatile uint32_t MSG1INT [32UL];
      volatile uint32_t MSGINT_LOW [32UL];
      BITBANDING_CANMSGnINT_t MSG1INT_Bit;
      BITBANDING_CANMSGnINT_t MSGINT_LOW_Bit;
    };
    union
    {
      volatile uint32_t MSG2INT [32UL];
      volatile uint32_t MSGINT_HIGH [32UL];
      BITBANDING_CANMSGnINT_t MSG2INT_Bit;
      BITBANDING_CANMSGnINT_t MSGINT_HIGH_Bit;
    };
    const uint32_t reserved2 [6UL * 32UL];
    union
    {
      volatile uint32_t MSG1VAL [32UL];
      volatile uint32_t MSGVAL_LOW [32UL];
      BITBANDING_CANMSGnVAL_t MSG1VAL_Bit;
      BITBANDING_CANMSGnVAL_t MSGVAL_LOW_Bit;
    };
    union
    {
      volatile uint32_t MSG2VAL [32UL];
      volatile uint32_t MSGVAL_HIGH [32UL];
      BITBANDING_CANMSGnVAL_t MSG2VAL_Bit;
      BITBANDING_CANMSGnVAL_t MSGVAL_HIGH_Bit;
    };
}BITBANDING_CANMESSAGE_t;

typedef volatile struct
{
    union
    {
      volatile uint32_t CTL [32UL];
      BITBANDING_CANCTL_t CTL_Bit;
    };
    union
    {
      volatile uint32_t STS [32UL];
      BITBANDING_CANSTS_t STS_Bit;
    };
    union
    {
      volatile const uint32_t ERR [32UL];
      BITBANDING_CANERR_t ERR_Bit;
    };
    union
    {
      volatile uint32_t BIT [32UL];
      BITBANDING_CANBIT_t BIT_Bit;
    };
    union
    {
      volatile const uint32_t INT [32UL];
      BITBANDING_CANINT_t INT_Bit;
    };
    union
    {
      volatile uint32_t TST [32UL];
      BITBANDING_CANTST_t TST_Bit;
    };
    union
    {
      volatile uint32_t BRPE [32UL];
      BITBANDING_CANBRPE_t BRPE_Bit;
    };
    const uint32_t reserved [1UL * 32UL];

    BITBANDING_CANINTERFACE_t INTERFACE[2UL];

    const uint32_t reserved1 [8UL * 32UL];

    BITBANDING_CANMESSAGE_t MESSAGE [32UL];

    const uint32_t reserved2 [934UL * 32UL];
}CAN_BITBANDING_t;


typedef volatile struct
{
    CAN_BITBANDING_t MODULE [(uint32_t) CAN_enMODULE_MAX];
}CANS_BITBANDING_t;

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_BITBANDING_H_ */

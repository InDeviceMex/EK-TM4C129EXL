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
      BITBANDING_CANIFnCRQ_TypeDef IFnCRQ_Bit;
    };
    union
    {
      volatile uint32_t IFnCMSK [32UL];
      BITBANDING_CANIFnCMSK_TypeDef IF1CMSK_Bit;
    };
    union
    {
      volatile const uint32_t IFnMSK1 [32UL];
      BITBANDING_CANIFnMSK1_TypeDef IFnMSK1_Bit;
    };
    union
    {
      volatile const uint32_t IFnMSK2 [32UL];
      BITBANDING_CANIFnMSK2_TypeDef IFnMSK2_Bit;
    };
    union
    {
      volatile uint32_t IFnARB1 [32UL];
      BITBANDING_CANIFnARB1_TypeDef IFnARB1_Bit;
    };
    union
    {
      volatile uint32_t IFnARB2 [32UL];
      BITBANDING_CANIFnARB2_TypeDef IFnARB2_Bit;
    };
    union
    {
      volatile uint32_t IFnMCTL [32UL];
      BITBANDING_CANIFnMCTL_TypeDef IFnMCTL_Bit;
    };
    union
    {
      volatile uint32_t IFnDA1 [32UL];
      BITBANDING_CANIFnDA1_TypeDef IFnDA1_Bit;
    };
    union
    {
      volatile uint32_t IFnDA2 [32UL];
      BITBANDING_CANIFnDA2_TypeDef IFnDA2_Bit;
    };
    union
    {
      volatile uint32_t IFnDB1 [32UL];
      BITBANDING_CANIFnDB1_TypeDef IFnDB1_Bit;
    };
    union
    {
      volatile uint32_t IFnDB2 [32UL];
      BITBANDING_CANIFnDB2_TypeDef IFnDB2_Bit;
    };
    const uint32_t reserved [13UL * 32UL];
}BITBANDING_CANINTERFACE_TypeDef;

typedef volatile struct
{

    union
    {
      volatile uint32_t TXRQ1 [32UL];
      volatile uint32_t TXRQ_LOW [32UL];
      BITBANDING_CANTXRQn_TypeDef TXRQ1_Bit;
      BITBANDING_CANTXRQn_TypeDef TXRQ_LOW_Bit;
    };
    union
    {
      volatile uint32_t TXRQ2 [32UL];
      volatile uint32_t TXRQ_HIGH [32UL];
      BITBANDING_CANTXRQn_TypeDef TXRQ2_Bit;
      BITBANDING_CANTXRQn_TypeDef TXRQ_HIGH_Bit;
    };
    const uint32_t reserved [6UL * 32UL];
    union
    {
      volatile const uint32_t NWDA1 [32UL];
      volatile const uint32_t NWDA_LOW [32UL];
      BITBANDING_CANNWDAn_TypeDef NWDA1_Bit;
      BITBANDING_CANNWDAn_TypeDef NWDA_LOW_Bit;
    };
    union
    {
      volatile const uint32_t NWDA2 [32UL];
      volatile const uint32_t NWDA_HIGH [32UL];
      BITBANDING_CANNWDAn_TypeDef NWDA2_Bit;
      BITBANDING_CANNWDAn_TypeDef NWDA_HIGH_Bit;
    };
    const uint32_t reserved1 [6UL * 32UL];
    union
    {
      volatile uint32_t MSG1INT [32UL];
      volatile uint32_t MSGINT_LOW [32UL];
      BITBANDING_CANMSGnINT_TypeDef MSG1INT_Bit;
      BITBANDING_CANMSGnINT_TypeDef MSGINT_LOW_Bit;
    };
    union
    {
      volatile uint32_t MSG2INT [32UL];
      volatile uint32_t MSGINT_HIGH [32UL];
      BITBANDING_CANMSGnINT_TypeDef MSG2INT_Bit;
      BITBANDING_CANMSGnINT_TypeDef MSGINT_HIGH_Bit;
    };
    const uint32_t reserved2 [6UL * 32UL];
    union
    {
      volatile uint32_t MSG1VAL [32UL];
      volatile uint32_t MSGVAL_LOW [32UL];
      BITBANDING_CANMSGnVAL_TypeDef MSG1VAL_Bit;
      BITBANDING_CANMSGnVAL_TypeDef MSGVAL_LOW_Bit;
    };
    union
    {
      volatile uint32_t MSG2VAL [32UL];
      volatile uint32_t MSGVAL_HIGH [32UL];
      BITBANDING_CANMSGnVAL_TypeDef MSG2VAL_Bit;
      BITBANDING_CANMSGnVAL_TypeDef MSGVAL_HIGH_Bit;
    };
}BITBANDING_CANMESSAGE_TypeDef;

typedef volatile struct
{
    union
    {
      volatile uint32_t CTL [32UL];
      BITBANDING_CANCTL_TypeDef CTL_Bit;
    };
    union
    {
      volatile uint32_t STS [32UL];
      BITBANDING_CANSTS_TypeDef STS_Bit;
    };
    union
    {
      volatile const uint32_t ERR [32UL];
      BITBANDING_CANERR_TypeDef ERR_Bit;
    };
    union
    {
      volatile uint32_t BIT [32UL];
      BITBANDING_CANBIT_TypeDef BIT_Bit;
    };
    union
    {
      volatile const uint32_t INT [32UL];
      BITBANDING_CANINT_TypeDef INT_Bit;
    };
    union
    {
      volatile uint32_t TST [32UL];
      BITBANDING_CANTST_TypeDef TST_Bit;
    };
    union
    {
      volatile uint32_t BRPE [32UL];
      BITBANDING_CANBRPE_TypeDef BRPE_Bit;
    };
    const uint32_t reserved [1UL * 32UL];

    BITBANDING_CANINTERFACE_TypeDef INTERFACE[2UL];

    const uint32_t reserved1 [8UL * 32UL];

    BITBANDING_CANMESSAGE_TypeDef MESSAGE [32UL];

    const uint32_t reserved2 [934UL * 32UL];
}CAN_BITBANDING_TypeDef;


typedef volatile struct
{
    CAN_BITBANDING_TypeDef MODULE [(uint32_t) CAN_enMODULE_MAX];
}CANS_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_BITBANDING_H_ */

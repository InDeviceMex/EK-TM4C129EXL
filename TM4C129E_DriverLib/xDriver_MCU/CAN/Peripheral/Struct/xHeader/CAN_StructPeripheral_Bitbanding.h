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
      volatile uint32_t CRQ [32UL];
      CAN_BITBANDING_IFn_CRQ_t CRQ_Bit;
    };
    union
    {
      volatile uint32_t CMSK [32UL];
      CAN_BITBANDING_IFn_CMSK_t CMSK_Bit;
    };
    union
    {
      volatile const uint32_t MSK1 [32UL];
      CAN_BITBANDING_IFn_MSK1_t MSK1_Bit;
    };
    union
    {
      volatile const uint32_t MSK2 [32UL];
      CAN_BITBANDING_IFn_MSK2_t MSK2_Bit;
    };
    union
    {
      volatile uint32_t ARB1 [32UL];
      CAN_BITBANDING_IFn_ARB1_t ARB1_Bit;
    };
    union
    {
      volatile uint32_t ARB2 [32UL];
      CAN_BITBANDING_IFn_ARB2_t ARB2_Bit;
    };
    union
    {
      volatile uint32_t MCTL [32UL];
      CAN_BITBANDING_IFn_MCTL_t MCTL_Bit;
    };
    union
    {
      volatile uint32_t DA1 [32UL];
      CAN_BITBANDING_IFn_DA1_t DA1_Bit;
    };
    union
    {
      volatile uint32_t DA2 [32UL];
      CAN_BITBANDING_IFn_DA2_t DA2_Bit;
    };
    union
    {
      volatile uint32_t DB1 [32UL];
      CAN_BITBANDING_IFn_DB1_t DB1_Bit;
    };
    union
    {
      volatile uint32_t DB2 [32UL];
      CAN_BITBANDING_IFn_DB2_t DB2_Bit;
    };
    const uint32_t reserved [13UL * 32UL];
}CAN_BITBANDING_INTERFACE_t;

typedef volatile struct
{

    union
    {
      volatile uint32_t TXRQ1 [32UL];
      volatile uint32_t TXRQ_LOW [32UL];
      CAN_BITBANDING_TXRQn_t TXRQ1_Bit;
      CAN_BITBANDING_TXRQn_t TXRQ_LOW_Bit;
    };
    union
    {
      volatile uint32_t TXRQ2 [32UL];
      volatile uint32_t TXRQ_HIGH [32UL];
      CAN_BITBANDING_TXRQn_t TXRQ2_Bit;
      CAN_BITBANDING_TXRQn_t TXRQ_HIGH_Bit;
    };
    const uint32_t reserved [6UL * 32UL];
    union
    {
      volatile const uint32_t NWDA1 [32UL];
      volatile const uint32_t NWDA_LOW [32UL];
      CAN_BITBANDING_NWDAn_t NWDA1_Bit;
      CAN_BITBANDING_NWDAn_t NWDA_LOW_Bit;
    };
    union
    {
      volatile const uint32_t NWDA2 [32UL];
      volatile const uint32_t NWDA_HIGH [32UL];
      CAN_BITBANDING_NWDAn_t NWDA2_Bit;
      CAN_BITBANDING_NWDAn_t NWDA_HIGH_Bit;
    };
    const uint32_t reserved1 [6UL * 32UL];
    union
    {
      volatile uint32_t MSG1_INT [32UL];
      volatile uint32_t MSG_INT_LOW [32UL];
      CAN_BITBANDING_MSGn_INT_t MSG1_INT_Bit;
      CAN_BITBANDING_MSGn_INT_t MSG_INT_LOW_Bit;
    };
    union
    {
      volatile uint32_t MSG2_INT [32UL];
      volatile uint32_t MSG_INT_HIGH [32UL];
      CAN_BITBANDING_MSGn_INT_t MSG2_INT_Bit;
      CAN_BITBANDING_MSGn_INT_t MSG_INT_HIGH_Bit;
    };
    const uint32_t reserved2 [6UL * 32UL];
    union
    {
      volatile uint32_t MSG1_VAL [32UL];
      volatile uint32_t MSG_VAL_LOW [32UL];
      CAN_BITBANDING_MSGn_VAL_t MSG1_VAL_Bit;
      CAN_BITBANDING_MSGn_VAL_t MSG_VAL_LOW_Bit;
    };
    union
    {
      volatile uint32_t MSG2_VAL [32UL];
      volatile uint32_t MSG_VAL_HIGH [32UL];
      CAN_BITBANDING_MSGn_VAL_t MSG2_VAL_Bit;
      CAN_BITBANDING_MSGn_VAL_t MSG_VAL_HIGH_Bit;
    };
}BITBANDING_CANMESSAGE_t;

typedef volatile struct
{
    union
    {
      volatile uint32_t CTL [32UL];
      CAN_BITBANDING_CTL_t CTL_Bit;
    };
    union
    {
      volatile uint32_t STS [32UL];
      CAN_BITBANDING_STS_t STS_Bit;
    };
    union
    {
      volatile const uint32_t ERR [32UL];
      CAN_BITBANDING_ERR_t ERR_Bit;
    };
    union
    {
      volatile uint32_t BIT [32UL];
      CAN_BITBANDING_BIT_t BIT_Bit;
    };
    union
    {
      volatile const uint32_t INT [32UL];
      CAN_BITBANDING_INT_t INT_Bit;
    };
    union
    {
      volatile uint32_t TST [32UL];
      CAN_BITBANDING_TST_t TST_Bit;
    };
    union
    {
      volatile uint32_t BRPE [32UL];
      CAN_BITBANDING_BRPE_t BRPE_Bit;
    };
    const uint32_t reserved [1UL * 32UL];

    CAN_BITBANDING_INTERFACE_t IF[2UL];

    const uint32_t reserved1 [8UL * 32UL];

    BITBANDING_CANMESSAGE_t MSG [32UL];

    const uint32_t reserved2 [934UL * 32UL];
}CAN_BITBANDING_t;


typedef volatile struct
{
    CAN_BITBANDING_t MODULE [(uint32_t) CAN_enMODULE_MAX];
}CANS_BITBANDING_t;

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTPERIPHERAL_BITBANDING_H_ */

/**
 *
 * @file CAN_StructRegister_Bitbanding.h
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

#ifndef XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTREGISTER_BITBANDING_H_

#include <xUtils/Standard/Standard.h>

/**
 *  Global Struct Definitions for CAN Sequences
 */

typedef volatile struct
{
    volatile uint32_t INIT;
    volatile uint32_t IE;
    volatile uint32_t SIE;
    volatile uint32_t EIE;
    const uint32_t reserved;
    volatile uint32_t DAR;
    volatile uint32_t CCE;
    volatile uint32_t TEST;
    const uint32_t reserved1 [24UL];
}BITBANDING_CANCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t LEC [3UL];
    volatile uint32_t TXOK;
    volatile uint32_t RXOK;
    volatile const uint32_t EPASS;
    volatile const uint32_t EWARN;
    volatile const uint32_t BOFF;
    const uint32_t reserved [24UL];
}BITBANDING_CANSTS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TEC [8UL];
    volatile const uint32_t REC [7UL];
    volatile const uint32_t RP;
    const uint32_t reserved [16UL];
}BITBANDING_CANERR_TypeDef;

typedef volatile struct
{
    volatile uint32_t BRP [6UL];
    volatile uint32_t SJW [2UL];
    volatile uint32_t TSEG1 [4UL];
    volatile uint32_t TSEG2 [3UL];
    const uint32_t reserved [17UL];
}BITBANDING_CANBIT_TypeDef;

typedef volatile struct
{
    volatile const uint32_t INTID [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_CANINT_TypeDef;

typedef volatile struct
{
    const uint32_t reserved [2UL];
    volatile uint32_t BASIC;
    volatile uint32_t SILENT;
    volatile uint32_t LBACK;
    volatile uint32_t TX [2UL];
    volatile const uint32_t RX;
    const uint32_t reserved1 [24UL];
}BITBANDING_CANTST_TypeDef;

typedef volatile struct
{
    volatile uint32_t BRPE [4UL];
    const uint32_t reserved [28UL];
}BITBANDING_CANBRPE_TypeDef;

typedef volatile struct
{
    volatile uint32_t MNUM [6UL];
    const uint32_t reserved [9UL];
    volatile const uint32_t BUSY;
    const uint32_t reserved1 [16UL];
}BITBANDING_CANIFnCRQ_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATAB;
    volatile uint32_t DATAA;
    volatile uint32_t NEWDAT_TXRQST;
    volatile uint32_t CLRINTPND;
    volatile uint32_t CONTROL;
    volatile uint32_t ARB;
    volatile uint32_t MASK;
    volatile uint32_t WRNRD;
    const uint32_t reserved [24UL];
}BITBANDING_CANIFnCMSK_TypeDef;

typedef volatile struct
{
    volatile uint32_t MSK [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_CANIFnMSK1_TypeDef;

typedef volatile struct
{
    volatile uint32_t MSK [13UL];
    const uint32_t reserved;
    volatile uint32_t MDIR;
    volatile uint32_t MXTD;
    const uint32_t reserved1 [16UL];
}BITBANDING_CANIFnMSK2_TypeDef;

typedef volatile struct
{
    volatile uint32_t ID [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_CANIFnARB1_TypeDef;

typedef volatile struct
{
    volatile uint32_t ID [13UL];
    volatile uint32_t DIR;
    volatile uint32_t MXTD;
    volatile uint32_t MSGVAL;
    const uint32_t reserved1 [16UL];
}BITBANDING_CANIFnARB2_TypeDef;

typedef volatile struct
{
    volatile uint32_t DLC [4UL];
    const uint32_t reserved [3UL];
    volatile uint32_t EOB;
    volatile uint32_t TXRQST;
    volatile uint32_t RMTEN;
    volatile uint32_t RXIE;
    volatile uint32_t TXIE;
    volatile uint32_t UMASK;
    volatile uint32_t INTPND;
    volatile uint32_t MSGLST;
    volatile uint32_t NEWDAT;
    const uint32_t reserved1 [16UL];
}BITBANDING_CANIFnMCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_CANIFnD_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA0 [8UL];
    volatile uint32_t DATA1 [8UL];
    const uint32_t reserved [16UL];
}BITBANDING_CANIFnDA1_TypeDef; /*IFnDA1*/

typedef volatile struct
{
    volatile uint32_t DATA2 [8UL];
    volatile uint32_t DATA3 [8UL];
    const uint32_t reserved [16UL];
}BITBANDING_CANIFnDA2_TypeDef; /*IFnDA2*/

typedef volatile struct
{
    volatile uint32_t DATA4 [8UL];
    volatile uint32_t DATA5 [8UL];
    const uint32_t reserved [16UL];
}BITBANDING_CANIFnDB1_TypeDef; /*IFnDB1*/

typedef volatile struct
{
    volatile uint32_t DATA6 [8UL];
    volatile uint32_t DATA7 [8UL];
    const uint32_t reserved [16UL];
}BITBANDING_CANIFnDB2_TypeDef; /*IFnDB2*/

typedef volatile struct
{
    volatile uint32_t TXRQST [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_CANTXRQn_TypeDef;

typedef volatile struct
{
    volatile const uint32_t NEWDAT [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_CANNWDAn_TypeDef;

typedef volatile struct
{
    volatile const uint32_t INTPND [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_CANMSGnINT_TypeDef;

typedef volatile struct
{
    volatile const uint32_t MSGVAL [16UL];
    const uint32_t reserved [16UL];
}BITBANDING_CANMSGnVAL_TypeDef;

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTREGISTER_BITBANDING_H_ */

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

#include <xDriver_MCU/CAN/Peripheral/xHeader/CAN_Enum.h>

/**
 *  Global Struct Definitions for CAN Sequences
 */

typedef volatile struct
{
    volatile UBase_t INIT;
    volatile UBase_t IE;
    volatile UBase_t SIE;
    volatile UBase_t EIE;
    const UBase_t reserved;
    volatile UBase_t DAR;
    volatile UBase_t CCE;
    volatile UBase_t TEST;
    const UBase_t reserved1 [24UL];
}CAN_BITBANDING_CTL_t;

typedef volatile struct
{
    volatile UBase_t LEC [3UL];
    volatile UBase_t TXOK;
    volatile UBase_t RXOK;
    volatile const UBase_t EPASS;
    volatile const UBase_t EWARN;
    volatile const UBase_t BOFF;
    const UBase_t reserved [24UL];
}CAN_BITBANDING_STS_t;

typedef volatile struct
{
    volatile const UBase_t TEC [8UL];
    volatile const UBase_t REC [7UL];
    volatile const UBase_t RP;
    const UBase_t reserved [16UL];
}CAN_BITBANDING_ERR_t;

typedef volatile struct
{
    volatile UBase_t BRP [6UL];
    volatile UBase_t SJW [2UL];
    volatile UBase_t TSEG1 [4UL];
    volatile UBase_t TSEG2 [3UL];
    const UBase_t reserved [17UL];
}CAN_BITBANDING_BIT_t;

typedef volatile struct
{
    volatile const UBase_t INTID [16UL];
    const UBase_t reserved [16UL];
}CAN_BITBANDING_INT_t;

typedef volatile struct
{
    const UBase_t reserved [2UL];
    volatile UBase_t BASIC;
    volatile UBase_t SILENT;
    volatile UBase_t LBACK;
    volatile UBase_t TX [2UL];
    volatile const UBase_t RX;
    const UBase_t reserved1 [24UL];
}CAN_BITBANDING_TST_t;

typedef volatile struct
{
    volatile UBase_t BRPE [4UL];
    const UBase_t reserved [28UL];
}CAN_BITBANDING_BRPE_t;

typedef volatile struct
{
    volatile UBase_t MNUM [6UL];
    const UBase_t reserved [9UL];
    volatile const UBase_t BUSY;
    const UBase_t reserved1 [16UL];
}CAN_BITBANDING_IFn_CRQ_t;

typedef volatile struct
{
    volatile UBase_t DATAB;
    volatile UBase_t DATAA;
    volatile UBase_t NEWDAT_TXRQST;
    volatile UBase_t CLRINTPND;
    volatile UBase_t CONTROL;
    volatile UBase_t ARB;
    volatile UBase_t MASK;
    volatile UBase_t WRNRD;
    const UBase_t reserved [24UL];
}CAN_BITBANDING_IFn_CMSK_t;

typedef volatile struct
{
    volatile UBase_t MSK [16UL];
    const UBase_t reserved [16UL];
}CAN_BITBANDING_IFn_MSK1_t;

typedef volatile struct
{
    volatile UBase_t MSK [13UL];
    const UBase_t reserved;
    volatile UBase_t MDIR;
    volatile UBase_t MXTD;
    const UBase_t reserved1 [16UL];
}CAN_BITBANDING_IFn_MSK2_t;

typedef volatile struct
{
    volatile UBase_t ID [16UL];
    const UBase_t reserved [16UL];
}CAN_BITBANDING_IFn_ARB1_t;

typedef volatile struct
{
    volatile UBase_t ID [13UL];
    volatile UBase_t DIR;
    volatile UBase_t MXTD;
    volatile UBase_t MSG_VAL;
    const UBase_t reserved1 [16UL];
}CAN_BITBANDING_IFn_ARB2_t;

typedef volatile struct
{
    volatile UBase_t DLC [4UL];
    const UBase_t reserved [3UL];
    volatile UBase_t EOB;
    volatile UBase_t TXRQST;
    volatile UBase_t RMTEN;
    volatile UBase_t RXIE;
    volatile UBase_t TXIE;
    volatile UBase_t UMASK;
    volatile UBase_t INTPND;
    volatile UBase_t MSGLST;
    volatile UBase_t NEWDAT;
    const UBase_t reserved1 [16UL];
}CAN_BITBANDING_IFn_MCTL_t;

typedef volatile struct
{
    volatile UBase_t DATA [16UL];
    const UBase_t reserved [16UL];
}CAN_BITBANDING_IFn_D_t;

typedef volatile struct
{
    volatile UBase_t DATA0 [8UL];
    volatile UBase_t DATA1 [8UL];
    const UBase_t reserved [16UL];
}CAN_BITBANDING_IFn_DA1_t; /*IFn_DA1*/

typedef volatile struct
{
    volatile UBase_t DATA2 [8UL];
    volatile UBase_t DATA3 [8UL];
    const UBase_t reserved [16UL];
}CAN_BITBANDING_IFn_DA2_t; /*IFn_DA2*/

typedef volatile struct
{
    volatile UBase_t DATA4 [8UL];
    volatile UBase_t DATA5 [8UL];
    const UBase_t reserved [16UL];
}CAN_BITBANDING_IFn_DB1_t; /*IFn_DB1*/

typedef volatile struct
{
    volatile UBase_t DATA6 [8UL];
    volatile UBase_t DATA7 [8UL];
    const UBase_t reserved [16UL];
}CAN_BITBANDING_IFn_DB2_t; /*IFn_DB2*/

typedef volatile struct
{
    volatile UBase_t TXRQST [16UL];
    const UBase_t reserved [16UL];
}CAN_BITBANDING_TXRQn_t;

typedef volatile struct
{
    volatile const UBase_t NEWDAT [16UL];
    const UBase_t reserved [16UL];
}CAN_BITBANDING_NWDAn_t;

typedef volatile struct
{
    volatile const UBase_t INTPND [16UL];
    const UBase_t reserved [16UL];
}CAN_BITBANDING_MSGn_INT_t;

typedef volatile struct
{
    volatile const UBase_t MSG_VAL [16UL];
    const UBase_t reserved [16UL];
}CAN_BITBANDING_MSGn_VAL_t;

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTREGISTER_BITBANDING_H_ */

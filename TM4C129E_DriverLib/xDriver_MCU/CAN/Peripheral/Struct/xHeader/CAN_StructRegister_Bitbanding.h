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

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

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
}CAN_BITBANDING_CTL_t;

typedef volatile struct
{
    volatile uint32_t LEC [3UL];
    volatile uint32_t TXOK;
    volatile uint32_t RXOK;
    volatile const uint32_t EPASS;
    volatile const uint32_t EWARN;
    volatile const uint32_t BOFF;
    const uint32_t reserved [24UL];
}CAN_BITBANDING_STS_t;

typedef volatile struct
{
    volatile const uint32_t TEC [8UL];
    volatile const uint32_t REC [7UL];
    volatile const uint32_t RP;
    const uint32_t reserved [16UL];
}CAN_BITBANDING_ERR_t;

typedef volatile struct
{
    volatile uint32_t BRP [6UL];
    volatile uint32_t SJW [2UL];
    volatile uint32_t TSEG1 [4UL];
    volatile uint32_t TSEG2 [3UL];
    const uint32_t reserved [17UL];
}CAN_BITBANDING_BIT_t;

typedef volatile struct
{
    volatile const uint32_t INTID [16UL];
    const uint32_t reserved [16UL];
}CAN_BITBANDING_INT_t;

typedef volatile struct
{
    const uint32_t reserved [2UL];
    volatile uint32_t BASIC;
    volatile uint32_t SILENT;
    volatile uint32_t LBACK;
    volatile uint32_t TX [2UL];
    volatile const uint32_t RX;
    const uint32_t reserved1 [24UL];
}CAN_BITBANDING_TST_t;

typedef volatile struct
{
    volatile uint32_t BRPE [4UL];
    const uint32_t reserved [28UL];
}CAN_BITBANDING_BRPE_t;

typedef volatile struct
{
    volatile uint32_t MNUM [6UL];
    const uint32_t reserved [9UL];
    volatile const uint32_t BUSY;
    const uint32_t reserved1 [16UL];
}CAN_BITBANDING_IFn_CRQ_t;

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
}CAN_BITBANDING_IFn_CMSK_t;

typedef volatile struct
{
    volatile uint32_t MSK [16UL];
    const uint32_t reserved [16UL];
}CAN_BITBANDING_IFn_MSK1_t;

typedef volatile struct
{
    volatile uint32_t MSK [13UL];
    const uint32_t reserved;
    volatile uint32_t MDIR;
    volatile uint32_t MXTD;
    const uint32_t reserved1 [16UL];
}CAN_BITBANDING_IFn_MSK2_t;

typedef volatile struct
{
    volatile uint32_t ID [16UL];
    const uint32_t reserved [16UL];
}CAN_BITBANDING_IFn_ARB1_t;

typedef volatile struct
{
    volatile uint32_t ID [13UL];
    volatile uint32_t DIR;
    volatile uint32_t MXTD;
    volatile uint32_t MSG_VAL;
    const uint32_t reserved1 [16UL];
}CAN_BITBANDING_IFn_ARB2_t;

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
}CAN_BITBANDING_IFn_MCTL_t;

typedef volatile struct
{
    volatile uint32_t DATA [16UL];
    const uint32_t reserved [16UL];
}CAN_BITBANDING_IFn_D_t;

typedef volatile struct
{
    volatile uint32_t DATA0 [8UL];
    volatile uint32_t DATA1 [8UL];
    const uint32_t reserved [16UL];
}CAN_BITBANDING_IFn_DA1_t; /*IFn_DA1*/

typedef volatile struct
{
    volatile uint32_t DATA2 [8UL];
    volatile uint32_t DATA3 [8UL];
    const uint32_t reserved [16UL];
}CAN_BITBANDING_IFn_DA2_t; /*IFn_DA2*/

typedef volatile struct
{
    volatile uint32_t DATA4 [8UL];
    volatile uint32_t DATA5 [8UL];
    const uint32_t reserved [16UL];
}CAN_BITBANDING_IFn_DB1_t; /*IFn_DB1*/

typedef volatile struct
{
    volatile uint32_t DATA6 [8UL];
    volatile uint32_t DATA7 [8UL];
    const uint32_t reserved [16UL];
}CAN_BITBANDING_IFn_DB2_t; /*IFn_DB2*/

typedef volatile struct
{
    volatile uint32_t TXRQST [16UL];
    const uint32_t reserved [16UL];
}CAN_BITBANDING_TXRQn_t;

typedef volatile struct
{
    volatile const uint32_t NEWDAT [16UL];
    const uint32_t reserved [16UL];
}CAN_BITBANDING_NWDAn_t;

typedef volatile struct
{
    volatile const uint32_t INTPND [16UL];
    const uint32_t reserved [16UL];
}CAN_BITBANDING_MSGn_INT_t;

typedef volatile struct
{
    volatile const uint32_t MSG_VAL [16UL];
    const uint32_t reserved [16UL];
}CAN_BITBANDING_MSGn_VAL_t;

#endif /* XDRIVER_MCU_CAN_PERIPHERAL_STRUCT_XHEADER_CAN_STRUCTREGISTER_BITBANDING_H_ */

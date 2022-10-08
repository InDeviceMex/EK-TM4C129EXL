/**
 *
 * @file I2C_RegisterDefines_FIFOCTL.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 30 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_FIFOCTL_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_FIFOCTL_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/******************************************************************************************
************************************ 24 FIFOCTL *********************************************
******************************************************************************************/
/*--------*/
#define I2C_FIFO_CTL_R_TXTRIG_MASK    ((UBase_t) 0x00000007UL)
#define I2C_FIFO_CTL_R_TXTRIG_BIT    ((UBase_t) 0UL)
#define I2C_FIFO_CTL_R_TXTRIG_EMPTY    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_R_TXTRIG_1BYTE    ((UBase_t) 0x00000001UL)
#define I2C_FIFO_CTL_R_TXTRIG_2BYTE    ((UBase_t) 0x00000002UL)
#define I2C_FIFO_CTL_R_TXTRIG_3BYTE    ((UBase_t) 0x00000003UL)
#define I2C_FIFO_CTL_R_TXTRIG_4BYTE    ((UBase_t) 0x00000004UL)
#define I2C_FIFO_CTL_R_TXTRIG_5BYTE    ((UBase_t) 0x00000005UL)
#define I2C_FIFO_CTL_R_TXTRIG_6BYTE    ((UBase_t) 0x00000006UL)
#define I2C_FIFO_CTL_R_TXTRIG_7BYTE    ((UBase_t) 0x00000007UL)

#define I2C_FIFO_CTL_TXTRIG_MASK    ((UBase_t) 0x00000007UL)
#define I2C_FIFO_CTL_TXTRIG_EMPTY    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_TXTRIG_1BYTE    ((UBase_t) 0x00000001UL)
#define I2C_FIFO_CTL_TXTRIG_2BYTE    ((UBase_t) 0x00000002UL)
#define I2C_FIFO_CTL_TXTRIG_3BYTE    ((UBase_t) 0x00000003UL)
#define I2C_FIFO_CTL_TXTRIG_4BYTE    ((UBase_t) 0x00000004UL)
#define I2C_FIFO_CTL_TXTRIG_5BYTE    ((UBase_t) 0x00000005UL)
#define I2C_FIFO_CTL_TXTRIG_6BYTE    ((UBase_t) 0x00000006UL)
#define I2C_FIFO_CTL_TXTRIG_7BYTE    ((UBase_t) 0x00000007UL)
/*--------*/

/*--------*/
#define I2C_FIFO_CTL_R_DMATXENA_MASK    ((UBase_t) 0x00002000UL)
#define I2C_FIFO_CTL_R_DMATXENA_BIT    ((UBase_t) 13UL)
#define I2C_FIFO_CTL_R_DMATXENA_DIS    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_R_DMATXENA_ENA    ((UBase_t) 0x00002000UL)

#define I2C_FIFO_CTL_DMATXENA_MASK    ((UBase_t) 0x00000001UL)
#define I2C_FIFO_CTL_DMATXENA_DIS    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_DMATXENA_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFO_CTL_R_TXFLUSH_MASK    ((UBase_t) 0x00004000UL)
#define I2C_FIFO_CTL_R_TXFLUSH_BIT    ((UBase_t) 14UL)
#define I2C_FIFO_CTL_R_TXFLUSH_COMPLETE    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_R_TXFLUSH_FLUSH    ((UBase_t) 0x00004000UL)

#define I2C_FIFO_CTL_TXFLUSH_MASK    ((UBase_t) 0x00000001UL)
#define I2C_FIFO_CTL_TXFLUSH_COMPLETE    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_TXFLUSH_FLUSH    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFO_CTL_R_TXASGNMT_MASK    ((UBase_t) 0x00008000UL)
#define I2C_FIFO_CTL_R_TXASGNMT_BIT    ((UBase_t) 15UL)
#define I2C_FIFO_CTL_R_TXASGNMT_MASTER    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_R_TXASGNMT_SLAVE    ((UBase_t) 0x00008000UL)

#define I2C_FIFO_CTL_TXASGNMT_MASK    ((UBase_t) 0x00000001UL)
#define I2C_FIFO_CTL_TXASGNMT_MASTER    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_TXASGNMT_SLAVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFO_CTL_R_RXTRIG_MASK    ((UBase_t) 0x00070000UL)
#define I2C_FIFO_CTL_R_RXTRIG_BIT    ((UBase_t) 16UL)
#define I2C_FIFO_CTL_R_RXTRIG_EMPTY    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_R_RXTRIG_1BYTE    ((UBase_t) 0x00010000UL)
#define I2C_FIFO_CTL_R_RXTRIG_2BYTE    ((UBase_t) 0x00020000UL)
#define I2C_FIFO_CTL_R_RXTRIG_3BYTE    ((UBase_t) 0x00030000UL)
#define I2C_FIFO_CTL_R_RXTRIG_4BYTE    ((UBase_t) 0x00040000UL)
#define I2C_FIFO_CTL_R_RXTRIG_5BYTE    ((UBase_t) 0x00050000UL)
#define I2C_FIFO_CTL_R_RXTRIG_6BYTE    ((UBase_t) 0x00060000UL)
#define I2C_FIFO_CTL_R_RXTRIG_7BYTE    ((UBase_t) 0x00070000UL)

#define I2C_FIFO_CTL_RXTRIG_MASK    ((UBase_t) 0x00000007UL)
#define I2C_FIFO_CTL_RXTRIG_EMPTY    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_RXTRIG_1BYTE    ((UBase_t) 0x00000001UL)
#define I2C_FIFO_CTL_RXTRIG_2BYTE    ((UBase_t) 0x00000002UL)
#define I2C_FIFO_CTL_RXTRIG_3BYTE    ((UBase_t) 0x00000003UL)
#define I2C_FIFO_CTL_RXTRIG_4BYTE    ((UBase_t) 0x00000004UL)
#define I2C_FIFO_CTL_RXTRIG_5BYTE    ((UBase_t) 0x00000005UL)
#define I2C_FIFO_CTL_RXTRIG_6BYTE    ((UBase_t) 0x00000006UL)
#define I2C_FIFO_CTL_RXTRIG_7BYTE    ((UBase_t) 0x00000007UL)
/*--------*/

/*--------*/
#define I2C_FIFO_CTL_R_DMARXENA_MASK    ((UBase_t) 0x20000000UL)
#define I2C_FIFO_CTL_R_DMARXENA_BIT    ((UBase_t) 29UL)
#define I2C_FIFO_CTL_R_DMARXENA_DIS    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_R_DMARXENA_ENA    ((UBase_t) 0x20000000UL)

#define I2C_FIFO_CTL_DMARXENA_MASK    ((UBase_t) 0x00000001UL)
#define I2C_FIFO_CTL_DMARXENA_DIS    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_DMARXENA_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFO_CTL_R_RXFLUSH_MASK    ((UBase_t) 0x40000000UL)
#define I2C_FIFO_CTL_R_RXFLUSH_BIT    ((UBase_t) 30UL)
#define I2C_FIFO_CTL_R_RXFLUSH_COMPLETE    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_R_RXFLUSH_FLUSH    ((UBase_t) 0x40000000UL)

#define I2C_FIFO_CTL_RXFLUSH_MASK    ((UBase_t) 0x00000001UL)
#define I2C_FIFO_CTL_RXFLUSH_COMPLETE    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_RXFLUSH_FLUSH    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFO_CTL_R_RXASGNMT_MASK    ((UBase_t) 0x80000000UL)
#define I2C_FIFO_CTL_R_RXASGNMT_BIT    ((UBase_t) 31UL)
#define I2C_FIFO_CTL_R_RXASGNMT_MASTER    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_R_RXASGNMT_SLAVE    ((UBase_t) 0x80000000UL)

#define I2C_FIFO_CTL_RXASGNMT_MASK    ((UBase_t) 0x00000001UL)
#define I2C_FIFO_CTL_RXASGNMT_MASTER    ((UBase_t) 0x00000000UL)
#define I2C_FIFO_CTL_RXASGNMT_SLAVE    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 24 FIFOCTL *********************************************
******************************************************************************************/
/*--------*/
#define I2C_FIFOCTL_R_TXTRIG_MASK    ((UBase_t) 0x00000007UL)
#define I2C_FIFOCTL_R_TXTRIG_BIT    ((UBase_t) 0UL)
#define I2C_FIFOCTL_R_TXTRIG_EMPTY    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_R_TXTRIG_1BYTE    ((UBase_t) 0x00000001UL)
#define I2C_FIFOCTL_R_TXTRIG_2BYTE    ((UBase_t) 0x00000002UL)
#define I2C_FIFOCTL_R_TXTRIG_3BYTE    ((UBase_t) 0x00000003UL)
#define I2C_FIFOCTL_R_TXTRIG_4BYTE    ((UBase_t) 0x00000004UL)
#define I2C_FIFOCTL_R_TXTRIG_5BYTE    ((UBase_t) 0x00000005UL)
#define I2C_FIFOCTL_R_TXTRIG_6BYTE    ((UBase_t) 0x00000006UL)
#define I2C_FIFOCTL_R_TXTRIG_7BYTE    ((UBase_t) 0x00000007UL)

#define I2C_FIFOCTL_TXTRIG_MASK    ((UBase_t) 0x00000007UL)
#define I2C_FIFOCTL_TXTRIG_EMPTY    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_TXTRIG_1BYTE    ((UBase_t) 0x00000001UL)
#define I2C_FIFOCTL_TXTRIG_2BYTE    ((UBase_t) 0x00000002UL)
#define I2C_FIFOCTL_TXTRIG_3BYTE    ((UBase_t) 0x00000003UL)
#define I2C_FIFOCTL_TXTRIG_4BYTE    ((UBase_t) 0x00000004UL)
#define I2C_FIFOCTL_TXTRIG_5BYTE    ((UBase_t) 0x00000005UL)
#define I2C_FIFOCTL_TXTRIG_6BYTE    ((UBase_t) 0x00000006UL)
#define I2C_FIFOCTL_TXTRIG_7BYTE    ((UBase_t) 0x00000007UL)
/*--------*/

/*--------*/
#define I2C_FIFOCTL_R_DMATXENA_MASK    ((UBase_t) 0x00002000UL)
#define I2C_FIFOCTL_R_DMATXENA_BIT    ((UBase_t) 13UL)
#define I2C_FIFOCTL_R_DMATXENA_DIS    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_R_DMATXENA_ENA    ((UBase_t) 0x00002000UL)

#define I2C_FIFOCTL_DMATXENA_MASK    ((UBase_t) 0x00000001UL)
#define I2C_FIFOCTL_DMATXENA_DIS    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_DMATXENA_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFOCTL_R_TXFLUSH_MASK    ((UBase_t) 0x00004000UL)
#define I2C_FIFOCTL_R_TXFLUSH_BIT    ((UBase_t) 14UL)
#define I2C_FIFOCTL_R_TXFLUSH_COMPLETE    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_R_TXFLUSH_FLUSH    ((UBase_t) 0x00004000UL)

#define I2C_FIFOCTL_TXFLUSH_MASK    ((UBase_t) 0x00000001UL)
#define I2C_FIFOCTL_TXFLUSH_COMPLETE    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_TXFLUSH_FLUSH    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFOCTL_R_TXASGNMT_MASK    ((UBase_t) 0x00008000UL)
#define I2C_FIFOCTL_R_TXASGNMT_BIT    ((UBase_t) 15UL)
#define I2C_FIFOCTL_R_TXASGNMT_MASTER    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_R_TXASGNMT_SLAVE    ((UBase_t) 0x00008000UL)

#define I2C_FIFOCTL_TXASGNMT_MASK    ((UBase_t) 0x00000001UL)
#define I2C_FIFOCTL_TXASGNMT_MASTER    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_TXASGNMT_SLAVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFOCTL_R_RXTRIG_MASK    ((UBase_t) 0x00070000UL)
#define I2C_FIFOCTL_R_RXTRIG_BIT    ((UBase_t) 16UL)
#define I2C_FIFOCTL_R_RXTRIG_EMPTY    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_R_RXTRIG_1BYTE    ((UBase_t) 0x00010000UL)
#define I2C_FIFOCTL_R_RXTRIG_2BYTE    ((UBase_t) 0x00020000UL)
#define I2C_FIFOCTL_R_RXTRIG_3BYTE    ((UBase_t) 0x00030000UL)
#define I2C_FIFOCTL_R_RXTRIG_4BYTE    ((UBase_t) 0x00040000UL)
#define I2C_FIFOCTL_R_RXTRIG_5BYTE    ((UBase_t) 0x00050000UL)
#define I2C_FIFOCTL_R_RXTRIG_6BYTE    ((UBase_t) 0x00060000UL)
#define I2C_FIFOCTL_R_RXTRIG_7BYTE    ((UBase_t) 0x00070000UL)

#define I2C_FIFOCTL_RXTRIG_MASK    ((UBase_t) 0x00000007UL)
#define I2C_FIFOCTL_RXTRIG_EMPTY    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_RXTRIG_1BYTE    ((UBase_t) 0x00000001UL)
#define I2C_FIFOCTL_RXTRIG_2BYTE    ((UBase_t) 0x00000002UL)
#define I2C_FIFOCTL_RXTRIG_3BYTE    ((UBase_t) 0x00000003UL)
#define I2C_FIFOCTL_RXTRIG_4BYTE    ((UBase_t) 0x00000004UL)
#define I2C_FIFOCTL_RXTRIG_5BYTE    ((UBase_t) 0x00000005UL)
#define I2C_FIFOCTL_RXTRIG_6BYTE    ((UBase_t) 0x00000006UL)
#define I2C_FIFOCTL_RXTRIG_7BYTE    ((UBase_t) 0x00000007UL)
/*--------*/

/*--------*/
#define I2C_FIFOCTL_R_DMARXENA_MASK    ((UBase_t) 0x20000000UL)
#define I2C_FIFOCTL_R_DMARXENA_BIT    ((UBase_t) 29UL)
#define I2C_FIFOCTL_R_DMARXENA_DIS    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_R_DMARXENA_ENA    ((UBase_t) 0x20000000UL)

#define I2C_FIFOCTL_DMARXENA_MASK    ((UBase_t) 0x00000001UL)
#define I2C_FIFOCTL_DMARXENA_DIS    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_DMARXENA_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFOCTL_R_RXFLUSH_MASK    ((UBase_t) 0x40000000UL)
#define I2C_FIFOCTL_R_RXFLUSH_BIT    ((UBase_t) 30UL)
#define I2C_FIFOCTL_R_RXFLUSH_COMPLETE    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_R_RXFLUSH_FLUSH    ((UBase_t) 0x40000000UL)

#define I2C_FIFOCTL_RXFLUSH_MASK    ((UBase_t) 0x00000001UL)
#define I2C_FIFOCTL_RXFLUSH_COMPLETE    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_RXFLUSH_FLUSH    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFOCTL_R_RXASGNMT_MASK    ((UBase_t) 0x80000000UL)
#define I2C_FIFOCTL_R_RXASGNMT_BIT    ((UBase_t) 31UL)
#define I2C_FIFOCTL_R_RXASGNMT_MASTER    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_R_RXASGNMT_SLAVE    ((UBase_t) 0x80000000UL)

#define I2C_FIFOCTL_RXASGNMT_MASK    ((UBase_t) 0x00000001UL)
#define I2C_FIFOCTL_RXASGNMT_MASTER    ((UBase_t) 0x00000000UL)
#define I2C_FIFOCTL_RXASGNMT_SLAVE    ((UBase_t) 0x00000001UL)
/*--------*/
#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_FIFOCTL_H_ */

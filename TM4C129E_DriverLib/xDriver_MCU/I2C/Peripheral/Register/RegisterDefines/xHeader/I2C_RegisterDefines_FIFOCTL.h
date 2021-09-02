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

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 24 FIFOCTL *********************************************
******************************************************************************************/
/*--------*/
#define I2C_FIFOCTL_R_TXTRIG_MASK    ((uint32_t) 0x00000007UL)
#define I2C_FIFOCTL_R_TXTRIG_BIT    ((uint32_t) 0UL)
#define I2C_FIFOCTL_R_TXTRIG_EMPTY    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_R_TXTRIG_1BYTE    ((uint32_t) 0x00000001UL)
#define I2C_FIFOCTL_R_TXTRIG_2BYTE    ((uint32_t) 0x00000002UL)
#define I2C_FIFOCTL_R_TXTRIG_3BYTE    ((uint32_t) 0x00000003UL)
#define I2C_FIFOCTL_R_TXTRIG_4BYTE    ((uint32_t) 0x00000004UL)
#define I2C_FIFOCTL_R_TXTRIG_5BYTE    ((uint32_t) 0x00000005UL)
#define I2C_FIFOCTL_R_TXTRIG_6BYTE    ((uint32_t) 0x00000006UL)
#define I2C_FIFOCTL_R_TXTRIG_7BYTE    ((uint32_t) 0x00000007UL)

#define I2C_FIFOCTL_TXTRIG_MASK    ((uint32_t) 0x00000007UL)
#define I2C_FIFOCTL_TXTRIG_EMPTY    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_TXTRIG_1BYTE    ((uint32_t) 0x00000001UL)
#define I2C_FIFOCTL_TXTRIG_2BYTE    ((uint32_t) 0x00000002UL)
#define I2C_FIFOCTL_TXTRIG_3BYTE    ((uint32_t) 0x00000003UL)
#define I2C_FIFOCTL_TXTRIG_4BYTE    ((uint32_t) 0x00000004UL)
#define I2C_FIFOCTL_TXTRIG_5BYTE    ((uint32_t) 0x00000005UL)
#define I2C_FIFOCTL_TXTRIG_6BYTE    ((uint32_t) 0x00000006UL)
#define I2C_FIFOCTL_TXTRIG_7BYTE    ((uint32_t) 0x00000007UL)
/*--------*/

/*--------*/
#define I2C_FIFOCTL_R_DMATXENA_MASK    ((uint32_t) 0x00002000UL)
#define I2C_FIFOCTL_R_DMATXENA_BIT    ((uint32_t) 13UL)
#define I2C_FIFOCTL_R_DMATXENA_DIS    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_R_DMATXENA_ENA    ((uint32_t) 0x00002000UL)

#define I2C_FIFOCTL_DMATXENA_MASK    ((uint32_t) 0x00000001UL)
#define I2C_FIFOCTL_DMATXENA_DIS    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_DMATXENA_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFOCTL_R_TXFLUSH_MASK    ((uint32_t) 0x00004000UL)
#define I2C_FIFOCTL_R_TXFLUSH_BIT    ((uint32_t) 14UL)
#define I2C_FIFOCTL_R_TXFLUSH_COMPLETE    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_R_TXFLUSH_FLUSH    ((uint32_t) 0x00004000UL)

#define I2C_FIFOCTL_TXFLUSH_MASK    ((uint32_t) 0x00000001UL)
#define I2C_FIFOCTL_TXFLUSH_COMPLETE    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_TXFLUSH_FLUSH    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFOCTL_R_TXASGNMT_MASK    ((uint32_t) 0x00008000UL)
#define I2C_FIFOCTL_R_TXASGNMT_BIT    ((uint32_t) 15UL)
#define I2C_FIFOCTL_R_TXASGNMT_MASTER    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_R_TXASGNMT_SLAVE    ((uint32_t) 0x00008000UL)

#define I2C_FIFOCTL_TXASGNMT_MASK    ((uint32_t) 0x00000001UL)
#define I2C_FIFOCTL_TXASGNMT_MASTER    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_TXASGNMT_SLAVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFOCTL_R_RXTRIG_MASK    ((uint32_t) 0x00070000UL)
#define I2C_FIFOCTL_R_RXTRIG_BIT    ((uint32_t) 16UL)
#define I2C_FIFOCTL_R_RXTRIG_EMPTY    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_R_RXTRIG_1BYTE    ((uint32_t) 0x00010000UL)
#define I2C_FIFOCTL_R_RXTRIG_2BYTE    ((uint32_t) 0x00020000UL)
#define I2C_FIFOCTL_R_RXTRIG_3BYTE    ((uint32_t) 0x00030000UL)
#define I2C_FIFOCTL_R_RXTRIG_4BYTE    ((uint32_t) 0x00040000UL)
#define I2C_FIFOCTL_R_RXTRIG_5BYTE    ((uint32_t) 0x00050000UL)
#define I2C_FIFOCTL_R_RXTRIG_6BYTE    ((uint32_t) 0x00060000UL)
#define I2C_FIFOCTL_R_RXTRIG_7BYTE    ((uint32_t) 0x00070000UL)

#define I2C_FIFOCTL_RXTRIG_MASK    ((uint32_t) 0x00000007UL)
#define I2C_FIFOCTL_RXTRIG_EMPTY    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_RXTRIG_1BYTE    ((uint32_t) 0x00000001UL)
#define I2C_FIFOCTL_RXTRIG_2BYTE    ((uint32_t) 0x00000002UL)
#define I2C_FIFOCTL_RXTRIG_3BYTE    ((uint32_t) 0x00000003UL)
#define I2C_FIFOCTL_RXTRIG_4BYTE    ((uint32_t) 0x00000004UL)
#define I2C_FIFOCTL_RXTRIG_5BYTE    ((uint32_t) 0x00000005UL)
#define I2C_FIFOCTL_RXTRIG_6BYTE    ((uint32_t) 0x00000006UL)
#define I2C_FIFOCTL_RXTRIG_7BYTE    ((uint32_t) 0x00000007UL)
/*--------*/

/*--------*/
#define I2C_FIFOCTL_R_DMARXENA_MASK    ((uint32_t) 0x20000000UL)
#define I2C_FIFOCTL_R_DMARXENA_BIT    ((uint32_t) 29UL)
#define I2C_FIFOCTL_R_DMARXENA_DIS    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_R_DMARXENA_ENA    ((uint32_t) 0x20000000UL)

#define I2C_FIFOCTL_DMARXENA_MASK    ((uint32_t) 0x00000001UL)
#define I2C_FIFOCTL_DMARXENA_DIS    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_DMARXENA_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFOCTL_R_RXFLUSH_MASK    ((uint32_t) 0x40000000UL)
#define I2C_FIFOCTL_R_RXFLUSH_BIT    ((uint32_t) 30UL)
#define I2C_FIFOCTL_R_RXFLUSH_COMPLETE    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_R_RXFLUSH_FLUSH    ((uint32_t) 0x40000000UL)

#define I2C_FIFOCTL_RXFLUSH_MASK    ((uint32_t) 0x00000001UL)
#define I2C_FIFOCTL_RXFLUSH_COMPLETE    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_RXFLUSH_FLUSH    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFOCTL_R_RXASGNMT_MASK    ((uint32_t) 0x80000000UL)
#define I2C_FIFOCTL_R_RXASGNMT_BIT    ((uint32_t) 31UL)
#define I2C_FIFOCTL_R_RXASGNMT_MASTER    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_R_RXASGNMT_SLAVE    ((uint32_t) 0x80000000UL)

#define I2C_FIFOCTL_RXASGNMT_MASK    ((uint32_t) 0x00000001UL)
#define I2C_FIFOCTL_RXASGNMT_MASTER    ((uint32_t) 0x00000000UL)
#define I2C_FIFOCTL_RXASGNMT_SLAVE    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_FIFOCTL_H_ */

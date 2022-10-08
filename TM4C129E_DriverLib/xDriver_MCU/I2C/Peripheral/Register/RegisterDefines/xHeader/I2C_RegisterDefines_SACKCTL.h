/**
 *
 * @file I2C_RegisterDefines_SACKCTL.h
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
 * @verbatim 7 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SACKCTL_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SACKCTL_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/******************************************************************************************
************************************ 21 SACKCTL *********************************************
******************************************************************************************/
/*--------*/
#define I2C_SLAVE_ACKCTL_R_ACKOEN_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SLAVE_ACKCTL_R_ACKOEN_BIT    ((UBase_t) 0UL)
#define I2C_SLAVE_ACKCTL_R_ACKOEN_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_ACKCTL_R_ACKOEN_ENA    ((UBase_t) 0x00000001UL)

#define I2C_SLAVE_ACKCTL_ACKOEN_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SLAVE_ACKCTL_ACKOEN_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_ACKCTL_ACKOEN_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SLAVE_ACKCTL_R_ACKOVAL_MASK    ((UBase_t) 0x00000002UL)
#define I2C_SLAVE_ACKCTL_R_ACKOVAL_BIT    ((UBase_t) 1UL)
#define I2C_SLAVE_ACKCTL_R_ACKOVAL_ACK    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_ACKCTL_R_ACKOVAL_NACK    ((UBase_t) 0x00000002UL)

#define I2C_SLAVE_ACKCTL_ACKOVAL_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SLAVE_ACKCTL_ACKOVAL_ACK    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_ACKCTL_ACKOVAL_NACK    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 21 SACKCTL *********************************************
******************************************************************************************/
/*--------*/
#define I2C_SACKCTL_R_ACKOEN_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SACKCTL_R_ACKOEN_BIT    ((UBase_t) 0UL)
#define I2C_SACKCTL_R_ACKOEN_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SACKCTL_R_ACKOEN_ENA    ((UBase_t) 0x00000001UL)

#define I2C_SACKCTL_ACKOEN_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SACKCTL_ACKOEN_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SACKCTL_ACKOEN_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SACKCTL_R_ACKOVAL_MASK    ((UBase_t) 0x00000002UL)
#define I2C_SACKCTL_R_ACKOVAL_BIT    ((UBase_t) 1UL)
#define I2C_SACKCTL_R_ACKOVAL_ACK    ((UBase_t) 0x00000000UL)
#define I2C_SACKCTL_R_ACKOVAL_NACK    ((UBase_t) 0x00000002UL)

#define I2C_SACKCTL_ACKOVAL_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SACKCTL_ACKOVAL_ACK    ((UBase_t) 0x00000000UL)
#define I2C_SACKCTL_ACKOVAL_NACK    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SACKCTL_H_ */

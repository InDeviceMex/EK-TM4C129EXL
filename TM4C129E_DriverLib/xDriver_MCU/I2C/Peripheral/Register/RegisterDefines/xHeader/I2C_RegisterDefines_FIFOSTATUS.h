/**
 *
 * @file I2C_RegisterDefines_FIFOSTATUS.h
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

#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_FIFOSTATUS_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_FIFOSTATUS_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 24 FIFOSTATUS *********************************************
******************************************************************************************/
/*--------*/
#define I2C_FIFOSTATUS_R_TXFE_MASK    ((uint32_t) 0x00000001UL)
#define I2C_FIFOSTATUS_R_TXFE_BIT    ((uint32_t) 0UL)
#define I2C_FIFOSTATUS_R_TXFE_NOTEMPTY    ((uint32_t) 0x00000000UL)
#define I2C_FIFOSTATUS_R_TXFE_EMPTY    ((uint32_t) 0x00000001UL)

#define I2C_FIFOSTATUS_TXFE_MASK    ((uint32_t) 0x00000001UL)
#define I2C_FIFOSTATUS_TXFE_NOTEMPTY    ((uint32_t) 0x00000000UL)
#define I2C_FIFOSTATUS_TXFE_EMPTY    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFOSTATUS_R_TXFF_MASK    ((uint32_t) 0x00000002UL)
#define I2C_FIFOSTATUS_R_TXFF_BIT    ((uint32_t) 1UL)
#define I2C_FIFOSTATUS_R_TXFF_NOTFULL    ((uint32_t) 0x00000000UL)
#define I2C_FIFOSTATUS_R_TXFF_FULL    ((uint32_t) 0x00000002UL)

#define I2C_FIFOSTATUS_TXFF_MASK    ((uint32_t) 0x00000001UL)
#define I2C_FIFOSTATUS_TXFF_NOTFULL    ((uint32_t) 0x00000000UL)
#define I2C_FIFOSTATUS_TXFF_FULL    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFOSTATUS_R_TXBLWTRIG_MASK    ((uint32_t) 0x00000004UL)
#define I2C_FIFOSTATUS_R_TXBLWTRIG_BIT    ((uint32_t) 2UL)
#define I2C_FIFOSTATUS_R_TXBLWTRIG_ABOVE    ((uint32_t) 0x00000000UL)
#define I2C_FIFOSTATUS_R_TXBLWTRIG_BELOW    ((uint32_t) 0x00000004UL)

#define I2C_FIFOSTATUS_TXBLWTRIG_MASK    ((uint32_t) 0x00000001UL)
#define I2C_FIFOSTATUS_TXBLWTRIG_ABOVE    ((uint32_t) 0x00000000UL)
#define I2C_FIFOSTATUS_TXBLWTRIG_BELOW    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFOSTATUS_R_RXFE_MASK    ((uint32_t) 0x00010000UL)
#define I2C_FIFOSTATUS_R_RXFE_BIT    ((uint32_t) 16UL)
#define I2C_FIFOSTATUS_R_RXFE_NOTEMPTY    ((uint32_t) 0x00000000UL)
#define I2C_FIFOSTATUS_R_RXFE_EMPTY    ((uint32_t) 0x00010000UL)

#define I2C_FIFOSTATUS_RXFE_MASK    ((uint32_t) 0x00000001UL)
#define I2C_FIFOSTATUS_RXFE_NOTEMPTY    ((uint32_t) 0x00000000UL)
#define I2C_FIFOSTATUS_RXFE_EMPTY    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFOSTATUS_R_RXFF_MASK    ((uint32_t) 0x00020000UL)
#define I2C_FIFOSTATUS_R_RXFF_BIT    ((uint32_t) 17UL)
#define I2C_FIFOSTATUS_R_RXFF_NOTFULL    ((uint32_t) 0x00000000UL)
#define I2C_FIFOSTATUS_R_RXFF_FULL    ((uint32_t) 0x00020000UL)

#define I2C_FIFOSTATUS_RXFF_MASK    ((uint32_t) 0x00000001UL)
#define I2C_FIFOSTATUS_RXFF_NOTFULL    ((uint32_t) 0x00000000UL)
#define I2C_FIFOSTATUS_RXFF_FULL    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_FIFOSTATUS_R_RXBLWTRIG_MASK    ((uint32_t) 0x00040000UL)
#define I2C_FIFOSTATUS_R_RXBLWTRIG_BIT    ((uint32_t) 18UL)
#define I2C_FIFOSTATUS_R_RXBLWTRIG_BELOW    ((uint32_t) 0x00000000UL)
#define I2C_FIFOSTATUS_R_RXBLWTRIG_ABOVE    ((uint32_t) 0x00040000UL)

#define I2C_FIFOSTATUS_RXBLWTRIG_MASK    ((uint32_t) 0x00000001UL)
#define I2C_FIFOSTATUS_RXBLWTRIG_BELOW    ((uint32_t) 0x00000000UL)
#define I2C_FIFOSTATUS_RXBLWTRIG_ABOVE    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_FIFOSTATUS_H_ */

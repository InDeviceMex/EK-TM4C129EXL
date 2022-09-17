/**
 *
 * @file I2C_RegisterDefines_SRIS.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SRIS_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SRIS_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/******************************************************************************************
************************************ 17 SRIS *********************************************
******************************************************************************************/

/*--------*/
#define I2C_SRIS_R_DATARIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SRIS_R_DATARIS_BIT    ((uint32_t) 0UL)
#define I2C_SRIS_R_DATARIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_R_DATARIS_ACTIVE    ((uint32_t) 0x00000001UL)

#define I2C_SRIS_DATARIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SRIS_DATARIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_DATARIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SRIS_R_STARTRIS_MASK    ((uint32_t) 0x00000002UL)
#define I2C_SRIS_R_STARTRIS_BIT    ((uint32_t) 1UL)
#define I2C_SRIS_R_STARTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_R_STARTRIS_ACTIVE    ((uint32_t) 0x00000002UL)

#define I2C_SRIS_STARTRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SRIS_STARTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_STARTRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SRIS_R_STOPRIS_MASK    ((uint32_t) 0x00000004UL)
#define I2C_SRIS_R_STOPRIS_BIT    ((uint32_t) 2UL)
#define I2C_SRIS_R_STOPRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_R_STOPRIS_ACTIVE    ((uint32_t) 0x00000004UL)

#define I2C_SRIS_STOPRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SRIS_STOPRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_STOPRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SRIS_R_DMARXRIS_MASK    ((uint32_t) 0x00000008UL)
#define I2C_SRIS_R_DMARXRIS_BIT    ((uint32_t) 3UL)
#define I2C_SRIS_R_DMARXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_R_DMARXRIS_ACTIVE    ((uint32_t) 0x00000008UL)

#define I2C_SRIS_DMARXRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SRIS_DMARXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_DMARXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SRIS_R_DMATXRIS_MASK    ((uint32_t) 0x00000010UL)
#define I2C_SRIS_R_DMATXRIS_BIT    ((uint32_t) 4UL)
#define I2C_SRIS_R_DMATXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_R_DMATXRIS_ACTIVE    ((uint32_t) 0x00000010UL)

#define I2C_SRIS_DMATXRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SRIS_DMATXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_DMATXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SRIS_R_TXRIS_MASK    ((uint32_t) 0x00000020UL)
#define I2C_SRIS_R_TXRIS_BIT    ((uint32_t) 5UL)
#define I2C_SRIS_R_TXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_R_TXRIS_ACTIVE    ((uint32_t) 0x00000020UL)

#define I2C_SRIS_TXRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SRIS_TXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_TXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SRIS_R_RXRIS_MASK    ((uint32_t) 0x00000040UL)
#define I2C_SRIS_R_RXRIS_BIT    ((uint32_t) 6UL)
#define I2C_SRIS_R_RXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_R_RXRIS_ACTIVE    ((uint32_t) 0x00000040UL)

#define I2C_SRIS_RXRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SRIS_RXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_RXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SRIS_R_TXFERIS_MASK    ((uint32_t) 0x00000080UL)
#define I2C_SRIS_R_TXFERIS_BIT    ((uint32_t) 7UL)
#define I2C_SRIS_R_TXFERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_R_TXFERIS_ACTIVE    ((uint32_t) 0x00000080UL)

#define I2C_SRIS_TXFERIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SRIS_TXFERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_TXFERIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SRIS_R_RXFFRIS_MASK    ((uint32_t) 0x00000100UL)
#define I2C_SRIS_R_RXFFRIS_BIT    ((uint32_t) 8UL)
#define I2C_SRIS_R_RXFFRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_R_RXFFRIS_ACTIVE    ((uint32_t) 0x00000100UL)

#define I2C_SRIS_RXFFRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SRIS_RXFFRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_SRIS_RXFFRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SRIS_H_ */

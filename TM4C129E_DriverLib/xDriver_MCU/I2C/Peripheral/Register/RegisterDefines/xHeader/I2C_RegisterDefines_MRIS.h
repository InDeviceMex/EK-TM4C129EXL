/**
 *
 * @file I2C_RegisterDefines_MRIS.h
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
 * @verbatim 6 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MRIS_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MRIS_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/******************************************************************************************
************************************ 6 MRIS *********************************************
******************************************************************************************/

/*--------*/
#define I2C_MRIS_R_RIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_R_RIS_BIT    ((uint32_t) 0UL)
#define I2C_MRIS_R_RIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_R_RIS_ACTIVE    ((uint32_t) 0x00000001UL)

#define I2C_MRIS_RIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_RIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_RIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MRIS_R_CLKRIS_MASK    ((uint32_t) 0x00000002UL)
#define I2C_MRIS_R_CLKRIS_BIT    ((uint32_t) 1UL)
#define I2C_MRIS_R_CLKRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_R_CLKRIS_ACTIVE    ((uint32_t) 0x00000002UL)

#define I2C_MRIS_CLKRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_CLKRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_CLKRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MRIS_R_DMARXRIS_MASK    ((uint32_t) 0x00000004UL)
#define I2C_MRIS_R_DMARXRIS_BIT    ((uint32_t) 2UL)
#define I2C_MRIS_R_DMARXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_R_DMARXRIS_ACTIVE    ((uint32_t) 0x00000004UL)

#define I2C_MRIS_DMARXRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_DMARXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_DMARXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MRIS_R_DMATXRIS_MASK    ((uint32_t) 0x00000008UL)
#define I2C_MRIS_R_DMATXRIS_BIT    ((uint32_t) 3UL)
#define I2C_MRIS_R_DMATXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_R_DMATXRIS_ACTIVE    ((uint32_t) 0x00000008UL)

#define I2C_MRIS_DMATXRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_DMATXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_DMATXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MRIS_R_NACKRIS_MASK    ((uint32_t) 0x00000010UL)
#define I2C_MRIS_R_NACKRIS_BIT    ((uint32_t) 4UL)
#define I2C_MRIS_R_NACKRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_R_NACKRIS_ACTIVE    ((uint32_t) 0x00000010UL)

#define I2C_MRIS_NACKRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_NACKRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_NACKRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MRIS_R_STARTRIS_MASK    ((uint32_t) 0x00000020UL)
#define I2C_MRIS_R_STARTRIS_BIT    ((uint32_t) 5UL)
#define I2C_MRIS_R_STARTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_R_STARTRIS_ACTIVE    ((uint32_t) 0x00000020UL)

#define I2C_MRIS_STARTRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_STARTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_STARTRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MRIS_R_STOPRIS_MASK    ((uint32_t) 0x00000040UL)
#define I2C_MRIS_R_STOPRIS_BIT    ((uint32_t) 6UL)
#define I2C_MRIS_R_STOPRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_R_STOPRIS_ACTIVE    ((uint32_t) 0x00000040UL)

#define I2C_MRIS_STOPRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_STOPRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_STOPRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MRIS_R_ARBLOSTRIS_MASK    ((uint32_t) 0x00000080UL)
#define I2C_MRIS_R_ARBLOSTRIS_BIT    ((uint32_t) 7UL)
#define I2C_MRIS_R_ARBLOSTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_R_ARBLOSTRIS_ACTIVE    ((uint32_t) 0x00000080UL)

#define I2C_MRIS_ARBLOSTRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_ARBLOSTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_ARBLOSTRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MRIS_R_TXRIS_MASK    ((uint32_t) 0x00000100UL)
#define I2C_MRIS_R_TXRIS_BIT    ((uint32_t) 8UL)
#define I2C_MRIS_R_TXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_R_TXRIS_ACTIVE    ((uint32_t) 0x00000100UL)

#define I2C_MRIS_TXRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_TXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_TXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MRIS_R_RXRIS_MASK    ((uint32_t) 0x00000200UL)
#define I2C_MRIS_R_RXRIS_BIT    ((uint32_t) 9UL)
#define I2C_MRIS_R_RXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_R_RXRIS_ACTIVE    ((uint32_t) 0x00000200UL)

#define I2C_MRIS_RXRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_RXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_RXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MRIS_R_TXFERIS_MASK    ((uint32_t) 0x00000400UL)
#define I2C_MRIS_R_TXFERIS_BIT    ((uint32_t) 10UL)
#define I2C_MRIS_R_TXFERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_R_TXFERIS_ACTIVE    ((uint32_t) 0x00000400UL)

#define I2C_MRIS_TXFERIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_TXFERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_TXFERIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MRIS_R_RXFFRIS_MASK    ((uint32_t) 0x00000800UL)
#define I2C_MRIS_R_RXFFRIS_BIT    ((uint32_t) 11UL)
#define I2C_MRIS_R_RXFFRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_R_RXFFRIS_ACTIVE    ((uint32_t) 0x00000800UL)

#define I2C_MRIS_RXFFRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_RXFFRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_RXFFRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MRIS_H_ */

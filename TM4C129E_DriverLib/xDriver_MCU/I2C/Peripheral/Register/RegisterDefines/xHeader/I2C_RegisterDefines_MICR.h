/**
 *
 * @file I2C_RegisterDefines_MICR.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MICR_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MICR_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/******************************************************************************************
************************************ 8 MICR *********************************************
******************************************************************************************/

/*--------*/
#define I2C_MICR_R_IC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_R_IC_BIT    ((uint32_t) 0UL)
#define I2C_MICR_R_IC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_R_IC_CLEAR    ((uint32_t) 0x00000001UL)

#define I2C_MICR_IC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_IC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_IC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MICR_R_CLKIC_MASK    ((uint32_t) 0x00000002UL)
#define I2C_MICR_R_CLKIC_BIT    ((uint32_t) 1UL)
#define I2C_MICR_R_CLKIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_R_CLKIC_CLEAR    ((uint32_t) 0x00000002UL)

#define I2C_MICR_CLKIC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_CLKIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_CLKIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MICR_R_DMARXIC_MASK    ((uint32_t) 0x00000004UL)
#define I2C_MICR_R_DMARXIC_BIT    ((uint32_t) 2UL)
#define I2C_MICR_R_DMARXIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_R_DMARXIC_CLEAR    ((uint32_t) 0x00000004UL)

#define I2C_MICR_DMARXIC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_DMARXIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_DMARXIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MICR_R_DMATXIC_MASK    ((uint32_t) 0x00000008UL)
#define I2C_MICR_R_DMATXIC_BIT    ((uint32_t) 3UL)
#define I2C_MICR_R_DMATXIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_R_DMATXIC_CLEAR    ((uint32_t) 0x00000008UL)

#define I2C_MICR_DMATXIC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_DMATXIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_DMATXIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MICR_R_NACKIC_MASK    ((uint32_t) 0x00000010UL)
#define I2C_MICR_R_NACKIC_BIT    ((uint32_t) 4UL)
#define I2C_MICR_R_NACKIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_R_NACKIC_CLEAR    ((uint32_t) 0x00000010UL)

#define I2C_MICR_NACKIC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_NACKIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_NACKIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MICR_R_STARTIC_MASK    ((uint32_t) 0x00000020UL)
#define I2C_MICR_R_STARTIC_BIT    ((uint32_t) 5UL)
#define I2C_MICR_R_STARTIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_R_STARTIC_CLEAR    ((uint32_t) 0x00000020UL)

#define I2C_MICR_STARTIC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_STARTIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_STARTIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MICR_R_STOPIC_MASK    ((uint32_t) 0x00000040UL)
#define I2C_MICR_R_STOPIC_BIT    ((uint32_t) 6UL)
#define I2C_MICR_R_STOPIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_R_STOPIC_CLEAR    ((uint32_t) 0x00000040UL)

#define I2C_MICR_STOPIC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_STOPIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_STOPIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MICR_R_ARBLOSTIC_MASK    ((uint32_t) 0x00000080UL)
#define I2C_MICR_R_ARBLOSTIC_BIT    ((uint32_t) 7UL)
#define I2C_MICR_R_ARBLOSTIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_R_ARBLOSTIC_CLEAR    ((uint32_t) 0x00000080UL)

#define I2C_MICR_ARBLOSTIC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_ARBLOSTIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_ARBLOSTIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MICR_R_TXIC_MASK    ((uint32_t) 0x00000100UL)
#define I2C_MICR_R_TXIC_BIT    ((uint32_t) 8UL)
#define I2C_MICR_R_TXIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_R_TXIC_CLEAR    ((uint32_t) 0x00000100UL)

#define I2C_MICR_TXIC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_TXIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_TXIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MICR_R_RXIC_MASK    ((uint32_t) 0x00000200UL)
#define I2C_MICR_R_RXIC_BIT    ((uint32_t) 9UL)
#define I2C_MICR_R_RXIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_R_RXIC_CLEAR    ((uint32_t) 0x00000200UL)

#define I2C_MICR_RXIC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_RXIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_RXIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MICR_R_TXFEIC_MASK    ((uint32_t) 0x00000400UL)
#define I2C_MICR_R_TXFEIC_BIT    ((uint32_t) 10UL)
#define I2C_MICR_R_TXFEIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_R_TXFEIC_CLEAR    ((uint32_t) 0x00000400UL)

#define I2C_MICR_TXFEIC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_TXFEIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_TXFEIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MICR_R_RXFFIC_MASK    ((uint32_t) 0x00000800UL)
#define I2C_MICR_R_RXFFIC_BIT    ((uint32_t) 11UL)
#define I2C_MICR_R_RXFFIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_R_RXFFIC_CLEAR    ((uint32_t) 0x00000800UL)

#define I2C_MICR_RXFFIC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_RXFFIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_RXFFIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MICR_H_ */

/**
 *
 * @file I2C_RegisterDefines_MMIS.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MMIS_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MMIS_H_
#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 7 MMIS *********************************************
******************************************************************************************/

/*--------*/
#define I2C_MMIS_R_MIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_R_MIS_BIT    ((uint32_t) 0UL)
#define I2C_MMIS_R_MIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_MIS_ACTIVE    ((uint32_t) 0x00000001UL)

#define I2C_MMIS_MIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_MIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_MIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_CLKMIS_MASK    ((uint32_t) 0x00000002UL)
#define I2C_MMIS_R_CLKMIS_BIT    ((uint32_t) 1UL)
#define I2C_MMIS_R_CLKMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_CLKMIS_ACTIVE    ((uint32_t) 0x00000002UL)

#define I2C_MMIS_CLKMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_CLKMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_CLKMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_DMARXMIS_MASK    ((uint32_t) 0x00000004UL)
#define I2C_MMIS_R_DMARXMIS_BIT    ((uint32_t) 2UL)
#define I2C_MMIS_R_DMARXMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_DMARXMIS_ACTIVE    ((uint32_t) 0x00000004UL)

#define I2C_MMIS_DMARXMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_DMARXMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_DMARXMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_DMATXMIS_MASK    ((uint32_t) 0x00000008UL)
#define I2C_MMIS_R_DMATXMIS_BIT    ((uint32_t) 3UL)
#define I2C_MMIS_R_DMATXMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_DMATXMIS_ACTIVE    ((uint32_t) 0x00000008UL)

#define I2C_MMIS_DMATXMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_DMATXMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_DMATXMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_NACKMIS_MASK    ((uint32_t) 0x00000010UL)
#define I2C_MMIS_R_NACKMIS_BIT    ((uint32_t) 4UL)
#define I2C_MMIS_R_NACKMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_NACKMIS_ACTIVE    ((uint32_t) 0x00000010UL)

#define I2C_MMIS_NACKMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_NACKMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_NACKMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_STARTMIS_MASK    ((uint32_t) 0x00000020UL)
#define I2C_MMIS_R_STARTMIS_BIT    ((uint32_t) 5UL)
#define I2C_MMIS_R_STARTMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_STARTMIS_ACTIVE    ((uint32_t) 0x00000020UL)

#define I2C_MMIS_STARTMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_STARTMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_STARTMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_STOPMIS_MASK    ((uint32_t) 0x00000040UL)
#define I2C_MMIS_R_STOPMIS_BIT    ((uint32_t) 6UL)
#define I2C_MMIS_R_STOPMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_STOPMIS_ACTIVE    ((uint32_t) 0x00000040UL)

#define I2C_MMIS_STOPMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_STOPMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_STOPMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_ARBLOSTMIS_MASK    ((uint32_t) 0x00000080UL)
#define I2C_MMIS_R_ARBLOSTMIS_BIT    ((uint32_t) 7UL)
#define I2C_MMIS_R_ARBLOSTMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_ARBLOSTMIS_ACTIVE    ((uint32_t) 0x00000080UL)

#define I2C_MMIS_ARBLOSTMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_ARBLOSTMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_ARBLOSTMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_TXMIS_MASK    ((uint32_t) 0x00000100UL)
#define I2C_MMIS_R_TXMIS_BIT    ((uint32_t) 8UL)
#define I2C_MMIS_R_TXMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_TXMIS_ACTIVE    ((uint32_t) 0x00000100UL)

#define I2C_MMIS_TXMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_TXMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_TXMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_RXMIS_MASK    ((uint32_t) 0x00000200UL)
#define I2C_MMIS_R_RXMIS_BIT    ((uint32_t) 9UL)
#define I2C_MMIS_R_RXMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_RXMIS_ACTIVE    ((uint32_t) 0x00000200UL)

#define I2C_MMIS_RXMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_RXMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_RXMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_TXFEMIS_MASK    ((uint32_t) 0x00000400UL)
#define I2C_MMIS_R_TXFEMIS_BIT    ((uint32_t) 10UL)
#define I2C_MMIS_R_TXFEMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_TXFEMIS_ACTIVE    ((uint32_t) 0x00000400UL)

#define I2C_MMIS_TXFEMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_TXFEMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_TXFEMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_RXFFMIS_MASK    ((uint32_t) 0x00000800UL)
#define I2C_MMIS_R_RXFFMIS_BIT    ((uint32_t) 11UL)
#define I2C_MMIS_R_RXFFMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_RXFFMIS_ACTIVE    ((uint32_t) 0x00000800UL)

#define I2C_MMIS_RXFFMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_RXFFMIS_INACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_RXFFMIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MMIS_H_ */

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

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/******************************************************************************************
************************************ 7 MMIS *********************************************
******************************************************************************************/

/*--------*/
#define I2C_MASTER_MIS_R_MIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_MIS_R_MIS_BIT    ((UBase_t) 0UL)
#define I2C_MASTER_MIS_R_MIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_R_MIS_ACTIVE    ((UBase_t) 0x00000001UL)

#define I2C_MASTER_MIS_MIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_MIS_MIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_MIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_MIS_R_CLKMIS_MASK    ((UBase_t) 0x00000002UL)
#define I2C_MASTER_MIS_R_CLKMIS_BIT    ((UBase_t) 1UL)
#define I2C_MASTER_MIS_R_CLKMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_R_CLKMIS_ACTIVE    ((UBase_t) 0x00000002UL)

#define I2C_MASTER_MIS_CLKMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_MIS_CLKMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_CLKMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_MIS_R_DMARXMIS_MASK    ((UBase_t) 0x00000004UL)
#define I2C_MASTER_MIS_R_DMARXMIS_BIT    ((UBase_t) 2UL)
#define I2C_MASTER_MIS_R_DMARXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_R_DMARXMIS_ACTIVE    ((UBase_t) 0x00000004UL)

#define I2C_MASTER_MIS_DMARXMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_MIS_DMARXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_DMARXMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_MIS_R_DMATXMIS_MASK    ((UBase_t) 0x00000008UL)
#define I2C_MASTER_MIS_R_DMATXMIS_BIT    ((UBase_t) 3UL)
#define I2C_MASTER_MIS_R_DMATXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_R_DMATXMIS_ACTIVE    ((UBase_t) 0x00000008UL)

#define I2C_MASTER_MIS_DMATXMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_MIS_DMATXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_DMATXMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_MIS_R_NACKMIS_MASK    ((UBase_t) 0x00000010UL)
#define I2C_MASTER_MIS_R_NACKMIS_BIT    ((UBase_t) 4UL)
#define I2C_MASTER_MIS_R_NACKMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_R_NACKMIS_ACTIVE    ((UBase_t) 0x00000010UL)

#define I2C_MASTER_MIS_NACKMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_MIS_NACKMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_NACKMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_MIS_R_STARTMIS_MASK    ((UBase_t) 0x00000020UL)
#define I2C_MASTER_MIS_R_STARTMIS_BIT    ((UBase_t) 5UL)
#define I2C_MASTER_MIS_R_STARTMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_R_STARTMIS_ACTIVE    ((UBase_t) 0x00000020UL)

#define I2C_MASTER_MIS_STARTMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_MIS_STARTMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_STARTMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_MIS_R_STOPMIS_MASK    ((UBase_t) 0x00000040UL)
#define I2C_MASTER_MIS_R_STOPMIS_BIT    ((UBase_t) 6UL)
#define I2C_MASTER_MIS_R_STOPMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_R_STOPMIS_ACTIVE    ((UBase_t) 0x00000040UL)

#define I2C_MASTER_MIS_STOPMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_MIS_STOPMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_STOPMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_MIS_R_ARBLOSTMIS_MASK    ((UBase_t) 0x00000080UL)
#define I2C_MASTER_MIS_R_ARBLOSTMIS_BIT    ((UBase_t) 7UL)
#define I2C_MASTER_MIS_R_ARBLOSTMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_R_ARBLOSTMIS_ACTIVE    ((UBase_t) 0x00000080UL)

#define I2C_MASTER_MIS_ARBLOSTMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_MIS_ARBLOSTMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_ARBLOSTMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_MIS_R_TXMIS_MASK    ((UBase_t) 0x00000100UL)
#define I2C_MASTER_MIS_R_TXMIS_BIT    ((UBase_t) 8UL)
#define I2C_MASTER_MIS_R_TXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_R_TXMIS_ACTIVE    ((UBase_t) 0x00000100UL)

#define I2C_MASTER_MIS_TXMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_MIS_TXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_TXMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_MIS_R_RXMIS_MASK    ((UBase_t) 0x00000200UL)
#define I2C_MASTER_MIS_R_RXMIS_BIT    ((UBase_t) 9UL)
#define I2C_MASTER_MIS_R_RXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_R_RXMIS_ACTIVE    ((UBase_t) 0x00000200UL)

#define I2C_MASTER_MIS_RXMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_MIS_RXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_RXMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_MIS_R_TXFEMIS_MASK    ((UBase_t) 0x00000400UL)
#define I2C_MASTER_MIS_R_TXFEMIS_BIT    ((UBase_t) 10UL)
#define I2C_MASTER_MIS_R_TXFEMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_R_TXFEMIS_ACTIVE    ((UBase_t) 0x00000400UL)

#define I2C_MASTER_MIS_TXFEMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_MIS_TXFEMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_TXFEMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_MIS_R_RXFFMIS_MASK    ((UBase_t) 0x00000800UL)
#define I2C_MASTER_MIS_R_RXFFMIS_BIT    ((UBase_t) 11UL)
#define I2C_MASTER_MIS_R_RXFFMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_R_RXFFMIS_ACTIVE    ((UBase_t) 0x00000800UL)

#define I2C_MASTER_MIS_RXFFMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_MIS_RXFFMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_MIS_RXFFMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 7 MMIS *********************************************
******************************************************************************************/

/*--------*/
#define I2C_MMIS_R_MIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MMIS_R_MIS_BIT    ((UBase_t) 0UL)
#define I2C_MMIS_R_MIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_R_MIS_ACTIVE    ((UBase_t) 0x00000001UL)

#define I2C_MMIS_MIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MMIS_MIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_MIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_CLKMIS_MASK    ((UBase_t) 0x00000002UL)
#define I2C_MMIS_R_CLKMIS_BIT    ((UBase_t) 1UL)
#define I2C_MMIS_R_CLKMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_R_CLKMIS_ACTIVE    ((UBase_t) 0x00000002UL)

#define I2C_MMIS_CLKMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MMIS_CLKMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_CLKMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_DMARXMIS_MASK    ((UBase_t) 0x00000004UL)
#define I2C_MMIS_R_DMARXMIS_BIT    ((UBase_t) 2UL)
#define I2C_MMIS_R_DMARXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_R_DMARXMIS_ACTIVE    ((UBase_t) 0x00000004UL)

#define I2C_MMIS_DMARXMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MMIS_DMARXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_DMARXMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_DMATXMIS_MASK    ((UBase_t) 0x00000008UL)
#define I2C_MMIS_R_DMATXMIS_BIT    ((UBase_t) 3UL)
#define I2C_MMIS_R_DMATXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_R_DMATXMIS_ACTIVE    ((UBase_t) 0x00000008UL)

#define I2C_MMIS_DMATXMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MMIS_DMATXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_DMATXMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_NACKMIS_MASK    ((UBase_t) 0x00000010UL)
#define I2C_MMIS_R_NACKMIS_BIT    ((UBase_t) 4UL)
#define I2C_MMIS_R_NACKMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_R_NACKMIS_ACTIVE    ((UBase_t) 0x00000010UL)

#define I2C_MMIS_NACKMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MMIS_NACKMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_NACKMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_STARTMIS_MASK    ((UBase_t) 0x00000020UL)
#define I2C_MMIS_R_STARTMIS_BIT    ((UBase_t) 5UL)
#define I2C_MMIS_R_STARTMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_R_STARTMIS_ACTIVE    ((UBase_t) 0x00000020UL)

#define I2C_MMIS_STARTMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MMIS_STARTMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_STARTMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_STOPMIS_MASK    ((UBase_t) 0x00000040UL)
#define I2C_MMIS_R_STOPMIS_BIT    ((UBase_t) 6UL)
#define I2C_MMIS_R_STOPMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_R_STOPMIS_ACTIVE    ((UBase_t) 0x00000040UL)

#define I2C_MMIS_STOPMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MMIS_STOPMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_STOPMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_ARBLOSTMIS_MASK    ((UBase_t) 0x00000080UL)
#define I2C_MMIS_R_ARBLOSTMIS_BIT    ((UBase_t) 7UL)
#define I2C_MMIS_R_ARBLOSTMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_R_ARBLOSTMIS_ACTIVE    ((UBase_t) 0x00000080UL)

#define I2C_MMIS_ARBLOSTMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MMIS_ARBLOSTMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_ARBLOSTMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_TXMIS_MASK    ((UBase_t) 0x00000100UL)
#define I2C_MMIS_R_TXMIS_BIT    ((UBase_t) 8UL)
#define I2C_MMIS_R_TXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_R_TXMIS_ACTIVE    ((UBase_t) 0x00000100UL)

#define I2C_MMIS_TXMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MMIS_TXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_TXMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_RXMIS_MASK    ((UBase_t) 0x00000200UL)
#define I2C_MMIS_R_RXMIS_BIT    ((UBase_t) 9UL)
#define I2C_MMIS_R_RXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_R_RXMIS_ACTIVE    ((UBase_t) 0x00000200UL)

#define I2C_MMIS_RXMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MMIS_RXMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_RXMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_TXFEMIS_MASK    ((UBase_t) 0x00000400UL)
#define I2C_MMIS_R_TXFEMIS_BIT    ((UBase_t) 10UL)
#define I2C_MMIS_R_TXFEMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_R_TXFEMIS_ACTIVE    ((UBase_t) 0x00000400UL)

#define I2C_MMIS_TXFEMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MMIS_TXFEMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_TXFEMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_RXFFMIS_MASK    ((UBase_t) 0x00000800UL)
#define I2C_MMIS_R_RXFFMIS_BIT    ((UBase_t) 11UL)
#define I2C_MMIS_R_RXFFMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_R_RXFFMIS_ACTIVE    ((UBase_t) 0x00000800UL)

#define I2C_MMIS_RXFFMIS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MMIS_RXFFMIS_INACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MMIS_RXFFMIS_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/
#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MMIS_H_ */

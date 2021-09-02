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
#define I2C_MMIS_R_MIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_MIS_OCCUR    ((uint32_t) 0x00000001UL)

#define I2C_MMIS_MIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_MIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_MIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_CLKMIS_MASK    ((uint32_t) 0x00000002UL)
#define I2C_MMIS_R_CLKMIS_BIT    ((uint32_t) 1UL)
#define I2C_MMIS_R_CLKMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_CLKMIS_OCCUR    ((uint32_t) 0x00000002UL)

#define I2C_MMIS_CLKMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_CLKMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_CLKMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_DMARXMIS_MASK    ((uint32_t) 0x00000004UL)
#define I2C_MMIS_R_DMARXMIS_BIT    ((uint32_t) 2UL)
#define I2C_MMIS_R_DMARXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_DMARXMIS_OCCUR    ((uint32_t) 0x00000004UL)

#define I2C_MMIS_DMARXMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_DMARXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_DMARXMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_DMATXMIS_MASK    ((uint32_t) 0x00000008UL)
#define I2C_MMIS_R_DMATXMIS_BIT    ((uint32_t) 3UL)
#define I2C_MMIS_R_DMATXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_DMATXMIS_OCCUR    ((uint32_t) 0x00000008UL)

#define I2C_MMIS_DMATXMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_DMATXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_DMATXMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_NACKMIS_MASK    ((uint32_t) 0x00000010UL)
#define I2C_MMIS_R_NACKMIS_BIT    ((uint32_t) 4UL)
#define I2C_MMIS_R_NACKMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_NACKMIS_OCCUR    ((uint32_t) 0x00000010UL)

#define I2C_MMIS_NACKMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_NACKMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_NACKMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_STARTMIS_MASK    ((uint32_t) 0x00000020UL)
#define I2C_MMIS_R_STARTMIS_BIT    ((uint32_t) 5UL)
#define I2C_MMIS_R_STARTMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_STARTMIS_OCCUR    ((uint32_t) 0x00000020UL)

#define I2C_MMIS_STARTMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_STARTMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_STARTMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_STOPMIS_MASK    ((uint32_t) 0x00000040UL)
#define I2C_MMIS_R_STOPMIS_BIT    ((uint32_t) 6UL)
#define I2C_MMIS_R_STOPMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_STOPMIS_OCCUR    ((uint32_t) 0x00000040UL)

#define I2C_MMIS_STOPMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_STOPMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_STOPMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_ARBLOSTMIS_MASK    ((uint32_t) 0x00000080UL)
#define I2C_MMIS_R_ARBLOSTMIS_BIT    ((uint32_t) 7UL)
#define I2C_MMIS_R_ARBLOSTMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_ARBLOSTMIS_OCCUR    ((uint32_t) 0x00000080UL)

#define I2C_MMIS_ARBLOSTMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_ARBLOSTMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_ARBLOSTMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_TXMIS_MASK    ((uint32_t) 0x00000100UL)
#define I2C_MMIS_R_TXMIS_BIT    ((uint32_t) 8UL)
#define I2C_MMIS_R_TXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_TXMIS_OCCUR    ((uint32_t) 0x00000100UL)

#define I2C_MMIS_TXMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_TXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_TXMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_RXMIS_MASK    ((uint32_t) 0x00000200UL)
#define I2C_MMIS_R_RXMIS_BIT    ((uint32_t) 9UL)
#define I2C_MMIS_R_RXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_RXMIS_OCCUR    ((uint32_t) 0x00000200UL)

#define I2C_MMIS_RXMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_RXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_RXMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_TXFEMIS_MASK    ((uint32_t) 0x00000400UL)
#define I2C_MMIS_R_TXFEMIS_BIT    ((uint32_t) 10UL)
#define I2C_MMIS_R_TXFEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_TXFEMIS_OCCUR    ((uint32_t) 0x00000400UL)

#define I2C_MMIS_TXFEMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_TXFEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_TXFEMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_RXFFMIS_MASK    ((uint32_t) 0x00000800UL)
#define I2C_MMIS_R_RXFFMIS_BIT    ((uint32_t) 11UL)
#define I2C_MMIS_R_RXFFMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_RXFFMIS_OCCUR    ((uint32_t) 0x00000800UL)

#define I2C_MMIS_RXFFMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_RXFFMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_RXFFMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MMIS_H_ */

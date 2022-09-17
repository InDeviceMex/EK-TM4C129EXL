/**
 *
 * @file I2C_RegisterDefines_MIMR.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MIMR_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MIMR_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/******************************************************************************************
************************************ 5 MIMR *********************************************
******************************************************************************************/

/*--------*/
#define I2C_MIMR_R_IM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MIMR_R_IM_BIT    ((uint32_t) 0UL)
#define I2C_MIMR_R_IM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_R_IM_ENA    ((uint32_t) 0x00000001UL)

#define I2C_MIMR_IM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MIMR_IM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_IM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MIMR_R_CLKIM_MASK    ((uint32_t) 0x00000002UL)
#define I2C_MIMR_R_CLKIM_BIT    ((uint32_t) 1UL)
#define I2C_MIMR_R_CLKIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_R_CLKIM_ENA    ((uint32_t) 0x00000002UL)

#define I2C_MIMR_CLKIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MIMR_CLKIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_CLKIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MIMR_R_DMARXIM_MASK    ((uint32_t) 0x00000004UL)
#define I2C_MIMR_R_DMARXIM_BIT    ((uint32_t) 2UL)
#define I2C_MIMR_R_DMARXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_R_DMARXIM_ENA    ((uint32_t) 0x00000004UL)

#define I2C_MIMR_DMARXIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MIMR_DMARXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_DMARXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MIMR_R_DMATXIM_MASK    ((uint32_t) 0x00000008UL)
#define I2C_MIMR_R_DMATXIM_BIT    ((uint32_t) 3UL)
#define I2C_MIMR_R_DMATXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_R_DMATXIM_ENA    ((uint32_t) 0x00000008UL)

#define I2C_MIMR_DMATXIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MIMR_DMATXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_DMATXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MIMR_R_NACKIM_MASK    ((uint32_t) 0x00000010UL)
#define I2C_MIMR_R_NACKIM_BIT    ((uint32_t) 4UL)
#define I2C_MIMR_R_NACKIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_R_NACKIM_ENA    ((uint32_t) 0x00000010UL)

#define I2C_MIMR_NACKIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MIMR_NACKIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_NACKIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MIMR_R_STARTIM_MASK    ((uint32_t) 0x00000020UL)
#define I2C_MIMR_R_STARTIM_BIT    ((uint32_t) 5UL)
#define I2C_MIMR_R_STARTIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_R_STARTIM_ENA    ((uint32_t) 0x00000020UL)

#define I2C_MIMR_STARTIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MIMR_STARTIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_STARTIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MIMR_R_STOPIM_MASK    ((uint32_t) 0x00000040UL)
#define I2C_MIMR_R_STOPIM_BIT    ((uint32_t) 6UL)
#define I2C_MIMR_R_STOPIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_R_STOPIM_ENA    ((uint32_t) 0x00000040UL)

#define I2C_MIMR_STOPIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MIMR_STOPIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_STOPIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MIMR_R_ARBLOSTIM_MASK    ((uint32_t) 0x00000080UL)
#define I2C_MIMR_R_ARBLOSTIM_BIT    ((uint32_t) 7UL)
#define I2C_MIMR_R_ARBLOSTIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_R_ARBLOSTIM_ENA    ((uint32_t) 0x00000080UL)

#define I2C_MIMR_ARBLOSTIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MIMR_ARBLOSTIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_ARBLOSTIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MIMR_R_TXIM_MASK    ((uint32_t) 0x00000100UL)
#define I2C_MIMR_R_TXIM_BIT    ((uint32_t) 8UL)
#define I2C_MIMR_R_TXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_R_TXIM_ENA    ((uint32_t) 0x00000100UL)

#define I2C_MIMR_TXIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MIMR_TXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_TXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MIMR_R_RXIM_MASK    ((uint32_t) 0x00000200UL)
#define I2C_MIMR_R_RXIM_BIT    ((uint32_t) 9UL)
#define I2C_MIMR_R_RXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_R_RXIM_ENA    ((uint32_t) 0x00000200UL)

#define I2C_MIMR_RXIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MIMR_RXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_RXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MIMR_R_TXFEIM_MASK    ((uint32_t) 0x00000400UL)
#define I2C_MIMR_R_TXFEIM_BIT    ((uint32_t) 10UL)
#define I2C_MIMR_R_TXFEIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_R_TXFEIM_ENA    ((uint32_t) 0x00000400UL)

#define I2C_MIMR_TXFEIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MIMR_TXFEIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_TXFEIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MIMR_R_RXFFIM_MASK    ((uint32_t) 0x00000800UL)
#define I2C_MIMR_R_RXFFIM_BIT    ((uint32_t) 11UL)
#define I2C_MIMR_R_RXFFIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_R_RXFFIM_ENA    ((uint32_t) 0x00000800UL)

#define I2C_MIMR_RXFFIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MIMR_RXFFIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MIMR_RXFFIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MIMR_H_ */

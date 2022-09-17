/**
 *
 * @file I2C_RegisterDefines_SIMR.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SIMR_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SIMR_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/******************************************************************************************
************************************ 16 SIMR *********************************************
******************************************************************************************/

/*--------*/
#define I2C_SIMR_R_DATAIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SIMR_R_DATAIM_BIT    ((uint32_t) 0UL)
#define I2C_SIMR_R_DATAIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_R_DATAIM_ENA    ((uint32_t) 0x00000001UL)

#define I2C_SIMR_DATAIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SIMR_DATAIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_DATAIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_STARTIM_MASK    ((uint32_t) 0x00000002UL)
#define I2C_SIMR_R_STARTIM_BIT    ((uint32_t) 1UL)
#define I2C_SIMR_R_STARTIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_R_STARTIM_ENA    ((uint32_t) 0x00000002UL)

#define I2C_SIMR_STARTIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SIMR_STARTIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_STARTIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_STOPIM_MASK    ((uint32_t) 0x00000004UL)
#define I2C_SIMR_R_STOPIM_BIT    ((uint32_t) 2UL)
#define I2C_SIMR_R_STOPIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_R_STOPIM_ENA    ((uint32_t) 0x00000004UL)

#define I2C_SIMR_STOPIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SIMR_STOPIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_STOPIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_DMARXIM_MASK    ((uint32_t) 0x00000008UL)
#define I2C_SIMR_R_DMARXIM_BIT    ((uint32_t) 3UL)
#define I2C_SIMR_R_DMARXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_R_DMARXIM_ENA    ((uint32_t) 0x00000008UL)

#define I2C_SIMR_DMARXIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SIMR_DMARXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_DMARXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_DMATXIM_MASK    ((uint32_t) 0x00000010UL)
#define I2C_SIMR_R_DMATXIM_BIT    ((uint32_t) 4UL)
#define I2C_SIMR_R_DMATXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_R_DMATXIM_ENA    ((uint32_t) 0x00000010UL)

#define I2C_SIMR_DMATXIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SIMR_DMATXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_DMATXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_TXIM_MASK    ((uint32_t) 0x00000020UL)
#define I2C_SIMR_R_TXIM_BIT    ((uint32_t) 5UL)
#define I2C_SIMR_R_TXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_R_TXIM_ENA    ((uint32_t) 0x00000020UL)

#define I2C_SIMR_TXIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SIMR_TXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_TXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_RXIM_MASK    ((uint32_t) 0x00000040UL)
#define I2C_SIMR_R_RXIM_BIT    ((uint32_t) 6UL)
#define I2C_SIMR_R_RXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_R_RXIM_ENA    ((uint32_t) 0x00000040UL)

#define I2C_SIMR_RXIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SIMR_RXIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_RXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_TXFEIM_MASK    ((uint32_t) 0x00000080UL)
#define I2C_SIMR_R_TXFEIM_BIT    ((uint32_t) 7UL)
#define I2C_SIMR_R_TXFEIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_R_TXFEIM_ENA    ((uint32_t) 0x00000080UL)

#define I2C_SIMR_TXFEIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SIMR_TXFEIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_TXFEIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_RXFFIM_MASK    ((uint32_t) 0x00000100UL)
#define I2C_SIMR_R_RXFFIM_BIT    ((uint32_t) 8UL)
#define I2C_SIMR_R_RXFFIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_R_RXFFIM_ENA    ((uint32_t) 0x00000100UL)

#define I2C_SIMR_RXFFIM_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SIMR_RXFFIM_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SIMR_RXFFIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SIMR_H_ */

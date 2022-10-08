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
#define I2C_SLAVE_IMR_R_DATAIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SLAVE_IMR_R_DATAIM_BIT    ((UBase_t) 0UL)
#define I2C_SLAVE_IMR_R_DATAIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_R_DATAIM_ENA    ((UBase_t) 0x00000001UL)

#define I2C_SLAVE_IMR_DATAIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SLAVE_IMR_DATAIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_DATAIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SLAVE_IMR_R_STARTIM_MASK    ((UBase_t) 0x00000002UL)
#define I2C_SLAVE_IMR_R_STARTIM_BIT    ((UBase_t) 1UL)
#define I2C_SLAVE_IMR_R_STARTIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_R_STARTIM_ENA    ((UBase_t) 0x00000002UL)

#define I2C_SLAVE_IMR_STARTIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SLAVE_IMR_STARTIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_STARTIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SLAVE_IMR_R_STOPIM_MASK    ((UBase_t) 0x00000004UL)
#define I2C_SLAVE_IMR_R_STOPIM_BIT    ((UBase_t) 2UL)
#define I2C_SLAVE_IMR_R_STOPIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_R_STOPIM_ENA    ((UBase_t) 0x00000004UL)

#define I2C_SLAVE_IMR_STOPIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SLAVE_IMR_STOPIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_STOPIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SLAVE_IMR_R_DMARXIM_MASK    ((UBase_t) 0x00000008UL)
#define I2C_SLAVE_IMR_R_DMARXIM_BIT    ((UBase_t) 3UL)
#define I2C_SLAVE_IMR_R_DMARXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_R_DMARXIM_ENA    ((UBase_t) 0x00000008UL)

#define I2C_SLAVE_IMR_DMARXIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SLAVE_IMR_DMARXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_DMARXIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SLAVE_IMR_R_DMATXIM_MASK    ((UBase_t) 0x00000010UL)
#define I2C_SLAVE_IMR_R_DMATXIM_BIT    ((UBase_t) 4UL)
#define I2C_SLAVE_IMR_R_DMATXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_R_DMATXIM_ENA    ((UBase_t) 0x00000010UL)

#define I2C_SLAVE_IMR_DMATXIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SLAVE_IMR_DMATXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_DMATXIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SLAVE_IMR_R_TXIM_MASK    ((UBase_t) 0x00000020UL)
#define I2C_SLAVE_IMR_R_TXIM_BIT    ((UBase_t) 5UL)
#define I2C_SLAVE_IMR_R_TXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_R_TXIM_ENA    ((UBase_t) 0x00000020UL)

#define I2C_SLAVE_IMR_TXIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SLAVE_IMR_TXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_TXIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SLAVE_IMR_R_RXIM_MASK    ((UBase_t) 0x00000040UL)
#define I2C_SLAVE_IMR_R_RXIM_BIT    ((UBase_t) 6UL)
#define I2C_SLAVE_IMR_R_RXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_R_RXIM_ENA    ((UBase_t) 0x00000040UL)

#define I2C_SLAVE_IMR_RXIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SLAVE_IMR_RXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_RXIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SLAVE_IMR_R_TXFEIM_MASK    ((UBase_t) 0x00000080UL)
#define I2C_SLAVE_IMR_R_TXFEIM_BIT    ((UBase_t) 7UL)
#define I2C_SLAVE_IMR_R_TXFEIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_R_TXFEIM_ENA    ((UBase_t) 0x00000080UL)

#define I2C_SLAVE_IMR_TXFEIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SLAVE_IMR_TXFEIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_TXFEIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SLAVE_IMR_R_RXFFIM_MASK    ((UBase_t) 0x00000100UL)
#define I2C_SLAVE_IMR_R_RXFFIM_BIT    ((UBase_t) 8UL)
#define I2C_SLAVE_IMR_R_RXFFIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_R_RXFFIM_ENA    ((UBase_t) 0x00000100UL)

#define I2C_SLAVE_IMR_RXFFIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SLAVE_IMR_RXFFIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SLAVE_IMR_RXFFIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 16 SIMR *********************************************
******************************************************************************************/

/*--------*/
#define I2C_SIMR_R_DATAIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SIMR_R_DATAIM_BIT    ((UBase_t) 0UL)
#define I2C_SIMR_R_DATAIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_R_DATAIM_ENA    ((UBase_t) 0x00000001UL)

#define I2C_SIMR_DATAIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SIMR_DATAIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_DATAIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_STARTIM_MASK    ((UBase_t) 0x00000002UL)
#define I2C_SIMR_R_STARTIM_BIT    ((UBase_t) 1UL)
#define I2C_SIMR_R_STARTIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_R_STARTIM_ENA    ((UBase_t) 0x00000002UL)

#define I2C_SIMR_STARTIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SIMR_STARTIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_STARTIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_STOPIM_MASK    ((UBase_t) 0x00000004UL)
#define I2C_SIMR_R_STOPIM_BIT    ((UBase_t) 2UL)
#define I2C_SIMR_R_STOPIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_R_STOPIM_ENA    ((UBase_t) 0x00000004UL)

#define I2C_SIMR_STOPIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SIMR_STOPIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_STOPIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_DMARXIM_MASK    ((UBase_t) 0x00000008UL)
#define I2C_SIMR_R_DMARXIM_BIT    ((UBase_t) 3UL)
#define I2C_SIMR_R_DMARXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_R_DMARXIM_ENA    ((UBase_t) 0x00000008UL)

#define I2C_SIMR_DMARXIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SIMR_DMARXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_DMARXIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_DMATXIM_MASK    ((UBase_t) 0x00000010UL)
#define I2C_SIMR_R_DMATXIM_BIT    ((UBase_t) 4UL)
#define I2C_SIMR_R_DMATXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_R_DMATXIM_ENA    ((UBase_t) 0x00000010UL)

#define I2C_SIMR_DMATXIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SIMR_DMATXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_DMATXIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_TXIM_MASK    ((UBase_t) 0x00000020UL)
#define I2C_SIMR_R_TXIM_BIT    ((UBase_t) 5UL)
#define I2C_SIMR_R_TXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_R_TXIM_ENA    ((UBase_t) 0x00000020UL)

#define I2C_SIMR_TXIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SIMR_TXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_TXIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_RXIM_MASK    ((UBase_t) 0x00000040UL)
#define I2C_SIMR_R_RXIM_BIT    ((UBase_t) 6UL)
#define I2C_SIMR_R_RXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_R_RXIM_ENA    ((UBase_t) 0x00000040UL)

#define I2C_SIMR_RXIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SIMR_RXIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_RXIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_TXFEIM_MASK    ((UBase_t) 0x00000080UL)
#define I2C_SIMR_R_TXFEIM_BIT    ((UBase_t) 7UL)
#define I2C_SIMR_R_TXFEIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_R_TXFEIM_ENA    ((UBase_t) 0x00000080UL)

#define I2C_SIMR_TXFEIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SIMR_TXFEIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_TXFEIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_SIMR_R_RXFFIM_MASK    ((UBase_t) 0x00000100UL)
#define I2C_SIMR_R_RXFFIM_BIT    ((UBase_t) 8UL)
#define I2C_SIMR_R_RXFFIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_R_RXFFIM_ENA    ((UBase_t) 0x00000100UL)

#define I2C_SIMR_RXFFIM_MASK    ((UBase_t) 0x00000001UL)
#define I2C_SIMR_RXFFIM_DIS    ((UBase_t) 0x00000000UL)
#define I2C_SIMR_RXFFIM_ENA    ((UBase_t) 0x00000001UL)
/*--------*/
#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SIMR_H_ */

/**
 *
 * @file I2C_RegisterDefines_MCS.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MCS_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MCS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 2 MCS *********************************************
******************************************************************************************/
/*--------*/
#define I2C_MCS_R_BUSY_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MCS_R_BUSY_BIT    ((uint32_t) 0UL)
#define I2C_MCS_R_BUSY_IDLE    ((uint32_t) 0x00000000UL)
#define I2C_MCS_R_BUSY_BUSY    ((uint32_t) 0x00000001UL)

#define I2C_MCS_BUSY_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MCS_BUSY_IDLE    ((uint32_t) 0x00000000UL)
#define I2C_MCS_BUSY_BUSY    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_ERROR_MASK    ((uint32_t) 0x00000002UL)
#define I2C_MCS_R_ERROR_BIT    ((uint32_t) 1UL)
#define I2C_MCS_R_ERROR_NOERROR    ((uint32_t) 0x00000000UL)
#define I2C_MCS_R_ERROR_ERROR    ((uint32_t) 0x00000002UL)

#define I2C_MCS_ERROR_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MCS_ERROR_NOERROR    ((uint32_t) 0x00000000UL)
#define I2C_MCS_ERROR_ERROR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_ADRACK_MASK    ((uint32_t) 0x00000004UL)
#define I2C_MCS_R_ADRACK_BIT    ((uint32_t) 2UL)
#define I2C_MCS_R_ADRACK_ACK    ((uint32_t) 0x00000000UL)
#define I2C_MCS_R_ADRACK_NOACK    ((uint32_t) 0x00000004UL)

#define I2C_MCS_ADRACK_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MCS_ADRACK_ACK    ((uint32_t) 0x00000000UL)
#define I2C_MCS_ADRACK_NOACK    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_DATACK_MASK    ((uint32_t) 0x00000008UL)
#define I2C_MCS_R_DATACK_BIT    ((uint32_t) 3UL)
#define I2C_MCS_R_DATACK_ACK    ((uint32_t) 0x00000000UL)
#define I2C_MCS_R_DATACK_NOACK    ((uint32_t) 0x00000008UL)

#define I2C_MCS_DATACK_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MCS_DATACK_ACK    ((uint32_t) 0x00000000UL)
#define I2C_MCS_DATACK_NOACK    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_ARBLST_MASK    ((uint32_t) 0x00000010UL)
#define I2C_MCS_R_ARBLST_BIT    ((uint32_t) 4UL)
#define I2C_MCS_R_ARBLST_WON    ((uint32_t) 0x00000000UL)
#define I2C_MCS_R_ARBLST_LOST    ((uint32_t) 0x00000010UL)

#define I2C_MCS_ARBLST_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MCS_ARBLST_WON    ((uint32_t) 0x00000000UL)
#define I2C_MCS_ARBLST_LOST    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_IDLE_MASK    ((uint32_t) 0x00000020UL)
#define I2C_MCS_R_IDLE_BIT    ((uint32_t) 5UL)
#define I2C_MCS_R_IDLE_NOIDLE    ((uint32_t) 0x00000000UL)
#define I2C_MCS_R_IDLE_IDLE    ((uint32_t) 0x00000020UL)

#define I2C_MCS_IDLE_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MCS_IDLE_NOIDLE    ((uint32_t) 0x00000000UL)
#define I2C_MCS_IDLE_IDLE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_BUSBSY_MASK    ((uint32_t) 0x00000040UL)
#define I2C_MCS_R_BUSBSY_BIT    ((uint32_t) 6UL)
#define I2C_MCS_R_BUSBSY_IDLE    ((uint32_t) 0x00000000UL)
#define I2C_MCS_R_BUSBSY_BUSY    ((uint32_t) 0x00000040UL)

#define I2C_MCS_BUSBSY_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MCS_BUSBSY_IDLE    ((uint32_t) 0x00000000UL)
#define I2C_MCS_BUSBSY_BUSY    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_CLKTO_MASK    ((uint32_t) 0x00000080UL)
#define I2C_MCS_R_CLKTO_BIT    ((uint32_t) 7UL)
#define I2C_MCS_R_CLKTO_NOERROR    ((uint32_t) 0x00000000UL)
#define I2C_MCS_R_CLKTO_ERROR    ((uint32_t) 0x00000080UL)

#define I2C_MCS_CLKTO_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MCS_CLKTO_NOERROR    ((uint32_t) 0x00000000UL)
#define I2C_MCS_CLKTO_ERROR    ((uint32_t) 0x00000001UL)
/*--------*/



/*--------*/
#define I2C_MCS_R_RUN_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MCS_R_RUN_BIT    ((uint32_t) 0UL)
#define I2C_MCS_R_RUN_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MCS_R_RUN_ENA    ((uint32_t) 0x00000001UL)

#define I2C_MCS_RUN_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MCS_RUN_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MCS_RUN_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_START_MASK    ((uint32_t) 0x00000002UL)
#define I2C_MCS_R_START_BIT    ((uint32_t) 1UL)
#define I2C_MCS_R_START_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MCS_R_START_ENA    ((uint32_t) 0x00000002UL)

#define I2C_MCS_START_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MCS_START_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MCS_START_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_STOP_MASK    ((uint32_t) 0x00000004UL)
#define I2C_MCS_R_STOP_BIT    ((uint32_t) 2UL)
#define I2C_MCS_R_STOP_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MCS_R_STOP_ENA    ((uint32_t) 0x00000004UL)

#define I2C_MCS_STOP_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MCS_STOP_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MCS_STOP_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_ACK_MASK    ((uint32_t) 0x00000008UL)
#define I2C_MCS_R_ACK_BIT    ((uint32_t) 3UL)
#define I2C_MCS_R_ACK_MANUAL    ((uint32_t) 0x00000000UL)
#define I2C_MCS_R_ACK_AUTO    ((uint32_t) 0x00000008UL)

#define I2C_MCS_ACK_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MCS_ACK_MANUAL    ((uint32_t) 0x00000000UL)
#define I2C_MCS_ACK_AUTO    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_HS_MASK    ((uint32_t) 0x00000010UL)
#define I2C_MCS_R_HS_BIT    ((uint32_t) 4UL)
#define I2C_MCS_R_HS_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MCS_R_HS_ENA    ((uint32_t) 0x00000010UL)

#define I2C_MCS_HS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MCS_HS_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MCS_HS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/


#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MCS_H_ */

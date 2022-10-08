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

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/******************************************************************************************
************************************ 2 MCS *********************************************
******************************************************************************************/
/*--------*/
#define I2C_MASTER_STS_R_BUSY_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_STS_R_BUSY_BIT    ((UBase_t) 0UL)
#define I2C_MASTER_STS_R_BUSY_IDLE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_R_BUSY_BUSY    ((UBase_t) 0x00000001UL)

#define I2C_MASTER_STS_BUSY_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_STS_BUSY_IDLE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_BUSY_BUSY    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_STS_R_ERROR_MASK    ((UBase_t) 0x00000002UL)
#define I2C_MASTER_STS_R_ERROR_BIT    ((UBase_t) 1UL)
#define I2C_MASTER_STS_R_ERROR_NOERROR    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_R_ERROR_ERROR    ((UBase_t) 0x00000002UL)

#define I2C_MASTER_STS_ERROR_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_STS_ERROR_NOERROR    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_ERROR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_STS_R_ADRACK_MASK    ((UBase_t) 0x00000004UL)
#define I2C_MASTER_STS_R_ADRACK_BIT    ((UBase_t) 2UL)
#define I2C_MASTER_STS_R_ADRACK_ACK    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_R_ADRACK_NOACK    ((UBase_t) 0x00000004UL)

#define I2C_MASTER_STS_ADRACK_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_STS_ADRACK_ACK    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_ADRACK_NOACK    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_STS_R_DATACK_MASK    ((UBase_t) 0x00000008UL)
#define I2C_MASTER_STS_R_DATACK_BIT    ((UBase_t) 3UL)
#define I2C_MASTER_STS_R_DATACK_ACK    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_R_DATACK_NOACK    ((UBase_t) 0x00000008UL)

#define I2C_MASTER_STS_DATACK_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_STS_DATACK_ACK    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_DATACK_NOACK    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_STS_R_ARBLST_MASK    ((UBase_t) 0x00000010UL)
#define I2C_MASTER_STS_R_ARBLST_BIT    ((UBase_t) 4UL)
#define I2C_MASTER_STS_R_ARBLST_WON    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_R_ARBLST_LOST    ((UBase_t) 0x00000010UL)

#define I2C_MASTER_STS_ARBLST_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_STS_ARBLST_WON    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_ARBLST_LOST    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_STS_R_IDLE_MASK    ((UBase_t) 0x00000020UL)
#define I2C_MASTER_STS_R_IDLE_BIT    ((UBase_t) 5UL)
#define I2C_MASTER_STS_R_IDLE_NOIDLE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_R_IDLE_IDLE    ((UBase_t) 0x00000020UL)

#define I2C_MASTER_STS_IDLE_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_STS_IDLE_NOIDLE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_IDLE_IDLE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_STS_R_BUSBSY_MASK    ((UBase_t) 0x00000040UL)
#define I2C_MASTER_STS_R_BUSBSY_BIT    ((UBase_t) 6UL)
#define I2C_MASTER_STS_R_BUSBSY_IDLE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_R_BUSBSY_BUSY    ((UBase_t) 0x00000040UL)

#define I2C_MASTER_STS_BUSBSY_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_STS_BUSBSY_IDLE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_BUSBSY_BUSY    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_STS_R_CLKTO_MASK    ((UBase_t) 0x00000080UL)
#define I2C_MASTER_STS_R_CLKTO_BIT    ((UBase_t) 7UL)
#define I2C_MASTER_STS_R_CLKTO_NOERROR    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_R_CLKTO_ERROR    ((UBase_t) 0x00000080UL)

#define I2C_MASTER_STS_CLKTO_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_STS_CLKTO_NOERROR    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_CLKTO_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_STS_R_ACTDMATX_MASK    ((UBase_t) 0x40000000UL)
#define I2C_MASTER_STS_R_ACTDMATX_BIT    ((UBase_t) 30UL)
#define I2C_MASTER_STS_R_ACTDMATX_NOACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_R_ACTDMATX_ACTIVE    ((UBase_t) 0x40000000UL)

#define I2C_MASTER_STS_ACTDMATX_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_STS_ACTDMATX_NOACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_ACTDMATX_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_STS_R_ACTDMARX_MASK    ((UBase_t) 0x80000000UL)
#define I2C_MASTER_STS_R_ACTDMARX_BIT    ((UBase_t) 31UL)
#define I2C_MASTER_STS_R_ACTDMARX_NOACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_R_ACTDMARX_ACTIVE    ((UBase_t) 0x80000000UL)

#define I2C_MASTER_STS_ACTDMARX_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_STS_ACTDMARX_NOACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_STS_ACTDMARX_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/



/*--------*/
#define I2C_MASTER_CTL_R_RUN_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_CTL_R_RUN_BIT    ((UBase_t) 0UL)
#define I2C_MASTER_CTL_R_RUN_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CTL_R_RUN_ENA    ((UBase_t) 0x00000001UL)

#define I2C_MASTER_CTL_RUN_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_CTL_RUN_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CTL_RUN_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_CTL_R_START_MASK    ((UBase_t) 0x00000002UL)
#define I2C_MASTER_CTL_R_START_BIT    ((UBase_t) 1UL)
#define I2C_MASTER_CTL_R_START_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CTL_R_START_ENA    ((UBase_t) 0x00000002UL)

#define I2C_MASTER_CTL_START_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_CTL_START_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CTL_START_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_CTL_R_STOP_MASK    ((UBase_t) 0x00000004UL)
#define I2C_MASTER_CTL_R_STOP_BIT    ((UBase_t) 2UL)
#define I2C_MASTER_CTL_R_STOP_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CTL_R_STOP_ENA    ((UBase_t) 0x00000004UL)

#define I2C_MASTER_CTL_STOP_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_CTL_STOP_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CTL_STOP_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_CTL_R_ACK_MASK    ((UBase_t) 0x00000008UL)
#define I2C_MASTER_CTL_R_ACK_BIT    ((UBase_t) 3UL)
#define I2C_MASTER_CTL_R_ACK_MANUAL    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CTL_R_ACK_AUTO    ((UBase_t) 0x00000008UL)

#define I2C_MASTER_CTL_ACK_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_CTL_ACK_MANUAL    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CTL_ACK_AUTO    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_CTL_R_HS_MASK    ((UBase_t) 0x00000010UL)
#define I2C_MASTER_CTL_R_HS_BIT    ((UBase_t) 4UL)
#define I2C_MASTER_CTL_R_HS_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CTL_R_HS_ENA    ((UBase_t) 0x00000010UL)

#define I2C_MASTER_CTL_HS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_CTL_HS_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CTL_HS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_CTL_R_QCMD_MASK    ((UBase_t) 0x00000020UL)
#define I2C_MASTER_CTL_R_QCMD_BIT    ((UBase_t) 5UL)
#define I2C_MASTER_CTL_R_QCMD_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CTL_R_QCMD_ENA    ((UBase_t) 0x00000020UL)

#define I2C_MASTER_CTL_QCMD_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_CTL_QCMD_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CTL_QCMD_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_CTL_R_BURST_MASK    ((UBase_t) 0x00000040UL)
#define I2C_MASTER_CTL_R_BURST_BIT    ((UBase_t) 6UL)
#define I2C_MASTER_CTL_R_BURST_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CTL_R_BURST_ENA    ((UBase_t) 0x00000040UL)

#define I2C_MASTER_CTL_BURST_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_CTL_BURST_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_CTL_BURST_ENA    ((UBase_t) 0x00000001UL)
/*--------*/


/******************************************************************************************
************************************ 2 MCS *********************************************
******************************************************************************************/
/*--------*/
#define I2C_MCS_R_BUSY_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_R_BUSY_BIT    ((UBase_t) 0UL)
#define I2C_MCS_R_BUSY_IDLE    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_BUSY_BUSY    ((UBase_t) 0x00000001UL)

#define I2C_MCS_BUSY_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_BUSY_IDLE    ((UBase_t) 0x00000000UL)
#define I2C_MCS_BUSY_BUSY    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_ERROR_MASK    ((UBase_t) 0x00000002UL)
#define I2C_MCS_R_ERROR_BIT    ((UBase_t) 1UL)
#define I2C_MCS_R_ERROR_NOERROR    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_ERROR_ERROR    ((UBase_t) 0x00000002UL)

#define I2C_MCS_ERROR_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_ERROR_NOERROR    ((UBase_t) 0x00000000UL)
#define I2C_MCS_ERROR_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_ADRACK_MASK    ((UBase_t) 0x00000004UL)
#define I2C_MCS_R_ADRACK_BIT    ((UBase_t) 2UL)
#define I2C_MCS_R_ADRACK_ACK    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_ADRACK_NOACK    ((UBase_t) 0x00000004UL)

#define I2C_MCS_ADRACK_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_ADRACK_ACK    ((UBase_t) 0x00000000UL)
#define I2C_MCS_ADRACK_NOACK    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_DATACK_MASK    ((UBase_t) 0x00000008UL)
#define I2C_MCS_R_DATACK_BIT    ((UBase_t) 3UL)
#define I2C_MCS_R_DATACK_ACK    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_DATACK_NOACK    ((UBase_t) 0x00000008UL)

#define I2C_MCS_DATACK_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_DATACK_ACK    ((UBase_t) 0x00000000UL)
#define I2C_MCS_DATACK_NOACK    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_ARBLST_MASK    ((UBase_t) 0x00000010UL)
#define I2C_MCS_R_ARBLST_BIT    ((UBase_t) 4UL)
#define I2C_MCS_R_ARBLST_WON    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_ARBLST_LOST    ((UBase_t) 0x00000010UL)

#define I2C_MCS_ARBLST_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_ARBLST_WON    ((UBase_t) 0x00000000UL)
#define I2C_MCS_ARBLST_LOST    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_IDLE_MASK    ((UBase_t) 0x00000020UL)
#define I2C_MCS_R_IDLE_BIT    ((UBase_t) 5UL)
#define I2C_MCS_R_IDLE_NOIDLE    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_IDLE_IDLE    ((UBase_t) 0x00000020UL)

#define I2C_MCS_IDLE_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_IDLE_NOIDLE    ((UBase_t) 0x00000000UL)
#define I2C_MCS_IDLE_IDLE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_BUSBSY_MASK    ((UBase_t) 0x00000040UL)
#define I2C_MCS_R_BUSBSY_BIT    ((UBase_t) 6UL)
#define I2C_MCS_R_BUSBSY_IDLE    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_BUSBSY_BUSY    ((UBase_t) 0x00000040UL)

#define I2C_MCS_BUSBSY_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_BUSBSY_IDLE    ((UBase_t) 0x00000000UL)
#define I2C_MCS_BUSBSY_BUSY    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_CLKTO_MASK    ((UBase_t) 0x00000080UL)
#define I2C_MCS_R_CLKTO_BIT    ((UBase_t) 7UL)
#define I2C_MCS_R_CLKTO_NOERROR    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_CLKTO_ERROR    ((UBase_t) 0x00000080UL)

#define I2C_MCS_CLKTO_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_CLKTO_NOERROR    ((UBase_t) 0x00000000UL)
#define I2C_MCS_CLKTO_ERROR    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_ACTDMATX_MASK    ((UBase_t) 0x40000000UL)
#define I2C_MCS_R_ACTDMATX_BIT    ((UBase_t) 30UL)
#define I2C_MCS_R_ACTDMATX_NOACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_ACTDMATX_ACTIVE    ((UBase_t) 0x40000000UL)

#define I2C_MCS_ACTDMATX_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_ACTDMATX_NOACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MCS_ACTDMATX_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_ACTDMARX_MASK    ((UBase_t) 0x80000000UL)
#define I2C_MCS_R_ACTDMARX_BIT    ((UBase_t) 31UL)
#define I2C_MCS_R_ACTDMARX_NOACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_ACTDMARX_ACTIVE    ((UBase_t) 0x80000000UL)

#define I2C_MCS_ACTDMARX_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_ACTDMARX_NOACTIVE    ((UBase_t) 0x00000000UL)
#define I2C_MCS_ACTDMARX_ACTIVE    ((UBase_t) 0x00000001UL)
/*--------*/



/*--------*/
#define I2C_MCS_R_RUN_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_R_RUN_BIT    ((UBase_t) 0UL)
#define I2C_MCS_R_RUN_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_RUN_ENA    ((UBase_t) 0x00000001UL)

#define I2C_MCS_RUN_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_RUN_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCS_RUN_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_START_MASK    ((UBase_t) 0x00000002UL)
#define I2C_MCS_R_START_BIT    ((UBase_t) 1UL)
#define I2C_MCS_R_START_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_START_ENA    ((UBase_t) 0x00000002UL)

#define I2C_MCS_START_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_START_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCS_START_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_STOP_MASK    ((UBase_t) 0x00000004UL)
#define I2C_MCS_R_STOP_BIT    ((UBase_t) 2UL)
#define I2C_MCS_R_STOP_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_STOP_ENA    ((UBase_t) 0x00000004UL)

#define I2C_MCS_STOP_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_STOP_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCS_STOP_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_ACK_MASK    ((UBase_t) 0x00000008UL)
#define I2C_MCS_R_ACK_BIT    ((UBase_t) 3UL)
#define I2C_MCS_R_ACK_MANUAL    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_ACK_AUTO    ((UBase_t) 0x00000008UL)

#define I2C_MCS_ACK_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_ACK_MANUAL    ((UBase_t) 0x00000000UL)
#define I2C_MCS_ACK_AUTO    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_HS_MASK    ((UBase_t) 0x00000010UL)
#define I2C_MCS_R_HS_BIT    ((UBase_t) 4UL)
#define I2C_MCS_R_HS_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_HS_ENA    ((UBase_t) 0x00000010UL)

#define I2C_MCS_HS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_HS_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCS_HS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_QCMD_MASK    ((UBase_t) 0x00000020UL)
#define I2C_MCS_R_QCMD_BIT    ((UBase_t) 5UL)
#define I2C_MCS_R_QCMD_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_QCMD_ENA    ((UBase_t) 0x00000020UL)

#define I2C_MCS_QCMD_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_QCMD_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCS_QCMD_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MCS_R_BURST_MASK    ((UBase_t) 0x00000040UL)
#define I2C_MCS_R_BURST_BIT    ((UBase_t) 6UL)
#define I2C_MCS_R_BURST_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCS_R_BURST_ENA    ((UBase_t) 0x00000040UL)

#define I2C_MCS_BURST_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MCS_BURST_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MCS_BURST_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MCS_H_ */

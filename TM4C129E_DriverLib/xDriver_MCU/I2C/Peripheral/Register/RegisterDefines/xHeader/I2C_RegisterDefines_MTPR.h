/**
 *
 * @file I2C_RegisterDefines_MTPR.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MTPR_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MTPR_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

/******************************************************************************************
************************************ 4 MTPR *********************************************
******************************************************************************************/

/*--------*/
#define I2C_MASTER_TPR_R_TPR_MASK    ((UBase_t) 0x0000007FUL)
#define I2C_MASTER_TPR_R_TPR_BIT    ((UBase_t) 0UL)

#define I2C_MASTER_TPR_TPR_MASK    ((UBase_t) 0x0000007FUL)
/*--------*/

/*--------*/
#define I2C_MASTER_TPR_R_HS_MASK    ((UBase_t) 0x00000080UL)
#define I2C_MASTER_TPR_R_HS_BIT    ((UBase_t) 7UL)
#define I2C_MASTER_TPR_R_HS_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_TPR_R_HS_ENA    ((UBase_t) 0x00000080UL)

#define I2C_MASTER_TPR_HS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_TPR_HS_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_TPR_HS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MASTER_TPR_R_PULSEL_MASK    ((UBase_t) 0x00070000UL)
#define I2C_MASTER_TPR_R_PULSEL_BIT    ((UBase_t) 16UL)
#define I2C_MASTER_TPR_R_PULSEL_BYPASS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_TPR_R_PULSEL_1CLOCK    ((UBase_t) 0x00010000UL)
#define I2C_MASTER_TPR_R_PULSEL_2CLOCK    ((UBase_t) 0x00020000UL)
#define I2C_MASTER_TPR_R_PULSEL_3CLOCK    ((UBase_t) 0x00030000UL)
#define I2C_MASTER_TPR_R_PULSEL_4CLOCK    ((UBase_t) 0x00040000UL)
#define I2C_MASTER_TPR_R_PULSEL_8CLOCK    ((UBase_t) 0x00050000UL)
#define I2C_MASTER_TPR_R_PULSEL_16CLOCK    ((UBase_t) 0x00060000UL)
#define I2C_MASTER_TPR_R_PULSEL_31CLOCK    ((UBase_t) 0x00070000UL)

#define I2C_MASTER_TPR_PULSEL_MASK    ((UBase_t) 0x00000007UL)
#define I2C_MASTER_TPR_PULSEL_BYPASS    ((UBase_t) 0x00000000UL)
#define I2C_MASTER_TPR_PULSEL_1CLOCK    ((UBase_t) 0x00000001UL)
#define I2C_MASTER_TPR_PULSEL_2CLOCK    ((UBase_t) 0x00000002UL)
#define I2C_MASTER_TPR_PULSEL_3CLOCK    ((UBase_t) 0x00000003UL)
#define I2C_MASTER_TPR_PULSEL_4CLOCK    ((UBase_t) 0x00000004UL)
#define I2C_MASTER_TPR_PULSEL_8CLOCK    ((UBase_t) 0x00000005UL)
#define I2C_MASTER_TPR_PULSEL_16CLOCK    ((UBase_t) 0x00000006UL)
#define I2C_MASTER_TPR_PULSEL_31CLOCK    ((UBase_t) 0x00000007UL)
/*--------*/

/******************************************************************************************
************************************ 4 MTPR *********************************************
******************************************************************************************/

/*--------*/
#define I2C_MTPR_R_TPR_MASK    ((UBase_t) 0x0000007FUL)
#define I2C_MTPR_R_TPR_BIT    ((UBase_t) 0UL)

#define I2C_MTPR_TPR_MASK    ((UBase_t) 0x0000007FUL)
/*--------*/

/*--------*/
#define I2C_MTPR_R_HS_MASK    ((UBase_t) 0x00000080UL)
#define I2C_MTPR_R_HS_BIT    ((UBase_t) 7UL)
#define I2C_MTPR_R_HS_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MTPR_R_HS_ENA    ((UBase_t) 0x00000080UL)

#define I2C_MTPR_HS_MASK    ((UBase_t) 0x00000001UL)
#define I2C_MTPR_HS_DIS    ((UBase_t) 0x00000000UL)
#define I2C_MTPR_HS_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MTPR_R_PULSEL_MASK    ((UBase_t) 0x00070000UL)
#define I2C_MTPR_R_PULSEL_BIT    ((UBase_t) 16UL)
#define I2C_MTPR_R_PULSEL_BYPASS    ((UBase_t) 0x00000000UL)
#define I2C_MTPR_R_PULSEL_1CLOCK    ((UBase_t) 0x00010000UL)
#define I2C_MTPR_R_PULSEL_2CLOCK    ((UBase_t) 0x00020000UL)
#define I2C_MTPR_R_PULSEL_3CLOCK    ((UBase_t) 0x00030000UL)
#define I2C_MTPR_R_PULSEL_4CLOCK    ((UBase_t) 0x00040000UL)
#define I2C_MTPR_R_PULSEL_8CLOCK    ((UBase_t) 0x00050000UL)
#define I2C_MTPR_R_PULSEL_16CLOCK    ((UBase_t) 0x00060000UL)
#define I2C_MTPR_R_PULSEL_31CLOCK    ((UBase_t) 0x00070000UL)

#define I2C_MTPR_PULSEL_MASK    ((UBase_t) 0x00000007UL)
#define I2C_MTPR_PULSEL_BYPASS    ((UBase_t) 0x00000000UL)
#define I2C_MTPR_PULSEL_1CLOCK    ((UBase_t) 0x00000001UL)
#define I2C_MTPR_PULSEL_2CLOCK    ((UBase_t) 0x00000002UL)
#define I2C_MTPR_PULSEL_3CLOCK    ((UBase_t) 0x00000003UL)
#define I2C_MTPR_PULSEL_4CLOCK    ((UBase_t) 0x00000004UL)
#define I2C_MTPR_PULSEL_8CLOCK    ((UBase_t) 0x00000005UL)
#define I2C_MTPR_PULSEL_16CLOCK    ((UBase_t) 0x00000006UL)
#define I2C_MTPR_PULSEL_31CLOCK    ((UBase_t) 0x00000007UL)
/*--------*/


#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MTPR_H_ */

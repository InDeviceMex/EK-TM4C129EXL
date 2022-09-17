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
#define I2C_MTPR_R_TPR_MASK    ((uint32_t) 0x0000007FUL)
#define I2C_MTPR_R_TPR_BIT    ((uint32_t) 0UL)

#define I2C_MTPR_TPR_MASK    ((uint32_t) 0x0000007FUL)
/*--------*/

/*--------*/
#define I2C_MTPR_R_HS_MASK    ((uint32_t) 0x00000080UL)
#define I2C_MTPR_R_HS_BIT    ((uint32_t) 7UL)
#define I2C_MTPR_R_HS_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MTPR_R_HS_ENA    ((uint32_t) 0x00000080UL)

#define I2C_MTPR_HS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MTPR_HS_DIS    ((uint32_t) 0x00000000UL)
#define I2C_MTPR_HS_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MTPR_R_PULSEL_MASK    ((uint32_t) 0x00070000UL)
#define I2C_MTPR_R_PULSEL_BIT    ((uint32_t) 16UL)
#define I2C_MTPR_R_PULSEL_BYPASS    ((uint32_t) 0x00000000UL)
#define I2C_MTPR_R_PULSEL_1CLOCK    ((uint32_t) 0x00010000UL)
#define I2C_MTPR_R_PULSEL_2CLOCK    ((uint32_t) 0x00020000UL)
#define I2C_MTPR_R_PULSEL_3CLOCK    ((uint32_t) 0x00030000UL)
#define I2C_MTPR_R_PULSEL_4CLOCK    ((uint32_t) 0x00040000UL)
#define I2C_MTPR_R_PULSEL_8CLOCK    ((uint32_t) 0x00050000UL)
#define I2C_MTPR_R_PULSEL_16CLOCK    ((uint32_t) 0x00060000UL)
#define I2C_MTPR_R_PULSEL_31CLOCK    ((uint32_t) 0x00070000UL)

#define I2C_MTPR_PULSEL_MASK    ((uint32_t) 0x00000007UL)
#define I2C_MTPR_PULSEL_BYPASS    ((uint32_t) 0x00000000UL)
#define I2C_MTPR_PULSEL_1CLOCK    ((uint32_t) 0x00000001UL)
#define I2C_MTPR_PULSEL_2CLOCK    ((uint32_t) 0x00000002UL)
#define I2C_MTPR_PULSEL_3CLOCK    ((uint32_t) 0x00000003UL)
#define I2C_MTPR_PULSEL_4CLOCK    ((uint32_t) 0x00000004UL)
#define I2C_MTPR_PULSEL_8CLOCK    ((uint32_t) 0x00000005UL)
#define I2C_MTPR_PULSEL_16CLOCK    ((uint32_t) 0x00000006UL)
#define I2C_MTPR_PULSEL_31CLOCK    ((uint32_t) 0x00000007UL)
/*--------*/


#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MTPR_H_ */

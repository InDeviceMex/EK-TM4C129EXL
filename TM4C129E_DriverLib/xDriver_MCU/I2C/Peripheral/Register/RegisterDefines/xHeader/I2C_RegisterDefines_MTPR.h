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

#include <xUtils/Standard/Standard.h>

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

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MTPR_H_ */

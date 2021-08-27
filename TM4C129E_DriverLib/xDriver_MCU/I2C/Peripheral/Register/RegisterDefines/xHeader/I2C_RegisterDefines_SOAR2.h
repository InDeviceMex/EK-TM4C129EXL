/**
 *
 * @file I2C_RegisterDefines_SOAR2.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SOAR2_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SOAR2_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 20 SOAR2 *********************************************
******************************************************************************************/
/*--------*/
#define I2C_SOAR2_R_OAR2_MASK    ((uint32_t) 0x0000007FUL)
#define I2C_SOAR2_R_OAR2_BIT    ((uint32_t) 0UL)

#define I2C_SOAR2_OAR2_MASK    ((uint32_t) 0x0000007FUL)
/*--------*/

/*--------*/
#define I2C_SOAR2_R_OAR2EN_MASK    ((uint32_t) 0x00000080UL)
#define I2C_SOAR2_R_OAR2EN_BIT    ((uint32_t) 7UL)
#define I2C_SOAR2_R_OAR2EN_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SOAR2_R_OAR2EN_ENA    ((uint32_t) 0x00000080UL)

#define I2C_SOAR2_OAR2EN_MASK    ((uint32_t) 0x00000001UL)
#define I2C_SOAR2_OAR2EN_DIS    ((uint32_t) 0x00000000UL)
#define I2C_SOAR2_OAR2EN_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SOAR2_H_ */

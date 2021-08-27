/**
 *
 * @file I2C_RegisterDefines_MRIS.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MRIS_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MRIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 6 MRIS *********************************************
******************************************************************************************/

/*--------*/
#define I2C_MRIS_R_RIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_R_RIS_BIT    ((uint32_t) 0UL)
#define I2C_MRIS_R_RIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_R_RIS_ACTIVE    ((uint32_t) 0x00000001UL)

#define I2C_MRIS_RIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_RIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_RIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MRIS_R_CLKRIS_MASK    ((uint32_t) 0x00000002UL)
#define I2C_MRIS_R_CLKRIS_BIT    ((uint32_t) 1UL)
#define I2C_MRIS_R_CLKRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_R_CLKRIS_ACTIVE    ((uint32_t) 0x00000002UL)

#define I2C_MRIS_CLKRIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MRIS_CLKRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define I2C_MRIS_CLKRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MRIS_H_ */

/**
 *
 * @file I2C_RegisterDefines_MICR.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MICR_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MICR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 8 MICR *********************************************
******************************************************************************************/

/*--------*/
#define I2C_MICR_R_IC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_R_IC_BIT    ((uint32_t) 0UL)
#define I2C_MICR_R_IC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_R_IC_CLEAR    ((uint32_t) 0x00000001UL)

#define I2C_MICR_IC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_IC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_IC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MICR_R_CLKIC_MASK    ((uint32_t) 0x00000002UL)
#define I2C_MICR_R_CLKIC_BIT    ((uint32_t) 1UL)
#define I2C_MICR_R_CLKIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_R_CLKIC_CLEAR    ((uint32_t) 0x00000002UL)

#define I2C_MICR_CLKIC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MICR_CLKIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_MICR_CLKIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MICR_H_ */

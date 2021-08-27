/**
 *
 * @file I2C_RegisterDefines_PP.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_PP_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_PP_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 22 PP *********************************************
******************************************************************************************/

/*--------*/
#define I2C_PP_R_HS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_PP_R_HS_BIT    ((uint32_t) 0UL)
#define I2C_PP_R_HS_STD    ((uint32_t) 0x00000000UL)
#define I2C_PP_R_HS_HS    ((uint32_t) 0x00000001UL)

#define I2C_PP_HS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_PP_HS_STD    ((uint32_t) 0x00000000UL)
#define I2C_PP_HS_HS    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_PP_H_ */

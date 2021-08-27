/**
 *
 * @file I2C_RegisterDefines_MCR2.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MCR2_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MCR2_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 9 MCR2 *********************************************
******************************************************************************************/
/*--------*/
#define I2C_MCR2_R_GFPW_MASK    ((uint32_t) 0x00000070UL)
#define I2C_MCR2_R_GFPW_BIT    ((uint32_t) 4UL)
#define I2C_MCR2_R_GFPW_BYPASS    ((uint32_t) 0x00000000UL)
#define I2C_MCR2_R_GFPW_1CLOCK    ((uint32_t) 0x00000010UL)
#define I2C_MCR2_R_GFPW_2CLOCK    ((uint32_t) 0x00000020UL)
#define I2C_MCR2_R_GFPW_3CLOCK    ((uint32_t) 0x00000030UL)
#define I2C_MCR2_R_GFPW_4CLOCK    ((uint32_t) 0x00000040UL)
#define I2C_MCR2_R_GFPW_8CLOCK    ((uint32_t) 0x00000050UL)
#define I2C_MCR2_R_GFPW_16CLOCK    ((uint32_t) 0x00000060UL)
#define I2C_MCR2_R_GFPW_31CLOCK    ((uint32_t) 0x00000070UL)

#define I2C_MCR2_GFPW_MASK    ((uint32_t) 0x00000007UL)
#define I2C_MCR2_GFPW_BYPASS    ((uint32_t) 0x00000000UL)
#define I2C_MCR2_GFPW_1CLOCK    ((uint32_t) 0x00000001UL)
#define I2C_MCR2_GFPW_2CLOCK    ((uint32_t) 0x00000002UL)
#define I2C_MCR2_GFPW_3CLOCK    ((uint32_t) 0x00000003UL)
#define I2C_MCR2_GFPW_4CLOCK    ((uint32_t) 0x00000004UL)
#define I2C_MCR2_GFPW_8CLOCK    ((uint32_t) 0x00000005UL)
#define I2C_MCR2_GFPW_16CLOCK    ((uint32_t) 0x00000006UL)
#define I2C_MCR2_GFPW_31CLOCK    ((uint32_t) 0x00000007UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MCR2_H_ */

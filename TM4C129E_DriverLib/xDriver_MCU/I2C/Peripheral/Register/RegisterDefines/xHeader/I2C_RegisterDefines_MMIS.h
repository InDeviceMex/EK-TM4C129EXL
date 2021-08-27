/**
 *
 * @file I2C_RegisterDefines_MMIS.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MMIS_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MMIS_H_
#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 7 MMIS *********************************************
******************************************************************************************/

/*--------*/
#define I2C_MMIS_R_MIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_R_MIS_BIT    ((uint32_t) 0UL)
#define I2C_MMIS_R_MIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_MIS_OCCUR    ((uint32_t) 0x00000001UL)

#define I2C_MMIS_MIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_MIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_MIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_MMIS_R_CLKMIS_MASK    ((uint32_t) 0x00000002UL)
#define I2C_MMIS_R_CLKMIS_BIT    ((uint32_t) 1UL)
#define I2C_MMIS_R_CLKMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_R_CLKMIS_OCCUR    ((uint32_t) 0x00000002UL)

#define I2C_MMIS_CLKMIS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_MMIS_CLKMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define I2C_MMIS_CLKMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MMIS_H_ */

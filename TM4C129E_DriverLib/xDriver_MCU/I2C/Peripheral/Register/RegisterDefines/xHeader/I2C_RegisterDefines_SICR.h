/**
 *
 * @file I2C_RegisterDefines_SICR.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SICR_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SICR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 18 SICR *********************************************
******************************************************************************************/

/*--------*/
#define SSI_SICR_R_DATAIC_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SICR_R_DATAIC_BIT    ((uint32_t) 0UL)
#define SSI_SICR_R_DATAIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define SSI_SICR_R_DATAIC_CLEAR    ((uint32_t) 0x00000001UL)

#define SSI_SICR_DATAIC_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SICR_DATAIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define SSI_SICR_DATAIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SICR_R_STARTIC_MASK    ((uint32_t) 0x00000002UL)
#define SSI_SICR_R_STARTIC_BIT    ((uint32_t) 1UL)
#define SSI_SICR_R_STARTIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define SSI_SICR_R_STARTIC_CLEAR    ((uint32_t) 0x00000002UL)

#define SSI_SICR_STARTIC_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SICR_STARTIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define SSI_SICR_STARTIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SICR_R_STOPIC_MASK    ((uint32_t) 0x00000004UL)
#define SSI_SICR_R_STOPIC_BIT    ((uint32_t) 2UL)
#define SSI_SICR_R_STOPIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define SSI_SICR_R_STOPIC_CLEAR    ((uint32_t) 0x00000004UL)

#define SSI_SICR_STOPIC_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SICR_STOPIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define SSI_SICR_STOPIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SICR_H_ */

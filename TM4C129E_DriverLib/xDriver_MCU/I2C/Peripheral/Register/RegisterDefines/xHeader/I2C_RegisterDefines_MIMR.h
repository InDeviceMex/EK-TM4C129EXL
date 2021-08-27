/**
 *
 * @file I2C_RegisterDefines_MIMR.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MIMR_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MIMR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 5 MIMR *********************************************
******************************************************************************************/

/*--------*/
#define SSI_MIMR_R_IM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_MIMR_R_IM_BIT    ((uint32_t) 0UL)
#define SSI_MIMR_R_IM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_MIMR_R_IM_ENA    ((uint32_t) 0x00000001UL)

#define SSI_MIMR_IM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_MIMR_IM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_MIMR_IM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_MIMR_R_CLKIM_MASK    ((uint32_t) 0x00000002UL)
#define SSI_MIMR_R_CLKIM_BIT    ((uint32_t) 1UL)
#define SSI_MIMR_R_CLKIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_MIMR_R_CLKIM_ENA    ((uint32_t) 0x00000002UL)

#define SSI_MIMR_CLKIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_MIMR_CLKIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_MIMR_CLKIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_MIMR_H_ */

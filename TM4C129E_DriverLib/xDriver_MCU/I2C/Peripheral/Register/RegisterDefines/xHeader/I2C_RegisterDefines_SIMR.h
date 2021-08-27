/**
 *
 * @file I2C_RegisterDefines_SIMR.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SIMR_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SIMR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 16 SIMR *********************************************
******************************************************************************************/

/*--------*/
#define SSI_SIMR_R_DATAIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SIMR_R_DATAIM_BIT    ((uint32_t) 0UL)
#define SSI_SIMR_R_DATAIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SIMR_R_DATAIM_ENA    ((uint32_t) 0x00000001UL)

#define SSI_SIMR_DATAIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SIMR_DATAIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SIMR_DATAIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SIMR_R_STARTIM_MASK    ((uint32_t) 0x00000002UL)
#define SSI_SIMR_R_STARTIM_BIT    ((uint32_t) 1UL)
#define SSI_SIMR_R_STARTIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SIMR_R_STARTIM_ENA    ((uint32_t) 0x00000002UL)

#define SSI_SIMR_STARTIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SIMR_STARTIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SIMR_STARTIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SIMR_R_STOPIM_MASK    ((uint32_t) 0x00000004UL)
#define SSI_SIMR_R_STOPIM_BIT    ((uint32_t) 2UL)
#define SSI_SIMR_R_STOPIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SIMR_R_STOPIM_ENA    ((uint32_t) 0x00000004UL)

#define SSI_SIMR_STOPIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SIMR_STOPIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SIMR_STOPIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_SIMR_H_ */

/**
 *
 * @file SSI_RegisterDefines_CR0.h
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
 * @verbatim 16 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_CR0_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_CR0_H_

#include <xDriver_MCU/Common/xHeader/MCU_Variables.h>

/******************************************************************************************
************************************ 1 CR0 *********************************************
******************************************************************************************/

/*--------*/
#define SSI_CR0_R_DSS_MASK    ((uint32_t) 0x0000000FUL)
#define SSI_CR0_R_DSS_BIT    ((uint32_t) 0UL)
#define SSI_CR0_R_DSS_4BIT    ((uint32_t) 0x00000003UL)
#define SSI_CR0_R_DSS_5BIT    ((uint32_t) 0x00000004UL)
#define SSI_CR0_R_DSS_6BIT    ((uint32_t) 0x00000005UL)
#define SSI_CR0_R_DSS_7BIT    ((uint32_t) 0x00000006UL)
#define SSI_CR0_R_DSS_8BIT    ((uint32_t) 0x00000007UL)
#define SSI_CR0_R_DSS_9BIT    ((uint32_t) 0x00000008UL)
#define SSI_CR0_R_DSS_10BIT    ((uint32_t) 0x00000009UL)
#define SSI_CR0_R_DSS_11BIT    ((uint32_t) 0x0000000AUL)
#define SSI_CR0_R_DSS_12BIT    ((uint32_t) 0x0000000BUL)
#define SSI_CR0_R_DSS_13BIT    ((uint32_t) 0x0000000CUL)
#define SSI_CR0_R_DSS_14BIT    ((uint32_t) 0x0000000DUL)
#define SSI_CR0_R_DSS_15BIT    ((uint32_t) 0x0000000EUL)
#define SSI_CR0_R_DSS_16BIT    ((uint32_t) 0x0000000FUL)

#define SSI_CR0_DSS_MASK    ((uint32_t) 0x0000000FUL)
#define SSI_CR0_DSS_4BIT    ((uint32_t) 0x00000003UL)
#define SSI_CR0_DSS_5BIT    ((uint32_t) 0x00000004UL)
#define SSI_CR0_DSS_6BIT    ((uint32_t) 0x00000005UL)
#define SSI_CR0_DSS_7BIT    ((uint32_t) 0x00000006UL)
#define SSI_CR0_DSS_8BIT    ((uint32_t) 0x00000007UL)
#define SSI_CR0_DSS_9BIT    ((uint32_t) 0x00000008UL)
#define SSI_CR0_DSS_10BIT    ((uint32_t) 0x00000009UL)
#define SSI_CR0_DSS_11BIT    ((uint32_t) 0x0000000AUL)
#define SSI_CR0_DSS_12BIT    ((uint32_t) 0x0000000BUL)
#define SSI_CR0_DSS_13BIT    ((uint32_t) 0x0000000CUL)
#define SSI_CR0_DSS_14BIT    ((uint32_t) 0x0000000DUL)
#define SSI_CR0_DSS_15BIT    ((uint32_t) 0x0000000EUL)
#define SSI_CR0_DSS_16BIT    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define SSI_CR0_R_FRF_MASK    ((uint32_t) 0x00000030UL)
#define SSI_CR0_R_FRF_BIT    ((uint32_t) 4UL)
#define SSI_CR0_R_FRF_FREESCALE    ((uint32_t) 0x00000000UL)
#define SSI_CR0_R_FRF_TEXAS_INSTRUMENTS    ((uint32_t) 0x00000010UL)

#define SSI_CR0_FRF_MASK    ((uint32_t) 0x00000003UL)
#define SSI_CR0_FRF_FREESCALE    ((uint32_t) 0x00000000UL)
#define SSI_CR0_FRF_TEXAS_INSTRUMENTS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR0_R_SPO_MASK    ((uint32_t) 0x00000040UL)
#define SSI_CR0_R_SPO_BIT    ((uint32_t) 6UL)
#define SSI_CR0_R_SPO_LOW    ((uint32_t) 0x00000000UL)
#define SSI_CR0_R_SPO_HIGH    ((uint32_t) 0x00000040UL)

#define SSI_CR0_SPO_MASK    ((uint32_t) 0x00000001UL)
#define SSI_CR0_SPO_LOW    ((uint32_t) 0x00000000UL)
#define SSI_CR0_SPO_HIGH    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR0_R_SPH_MASK    ((uint32_t) 0x00000080UL)
#define SSI_CR0_R_SPH_BIT    ((uint32_t) 7UL)
#define SSI_CR0_R_SPH_FIRST    ((uint32_t) 0x00000000UL)
#define SSI_CR0_R_SPH_SECOND    ((uint32_t) 0x00000080UL)

#define SSI_CR0_SPH_MASK    ((uint32_t) 0x00000001UL)
#define SSI_CR0_SPH_FIRST    ((uint32_t) 0x00000000UL)
#define SSI_CR0_SPH_SECOND    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR0_R_SCR_MASK    ((uint32_t) 0x0000FF00UL)
#define SSI_CR0_R_SCR_BIT    ((uint32_t) 8UL)

#define SSI_CR0_SCR_MASK    ((uint32_t) 0x000000FFUL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_CR0_H_ */

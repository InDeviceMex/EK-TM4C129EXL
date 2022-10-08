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

#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

/******************************************************************************************
************************************ 1 CR0 *********************************************
******************************************************************************************/

/*--------*/
#define SSI_CR0_R_DSS_MASK    ((UBase_t) 0x0000000FUL)
#define SSI_CR0_R_DSS_BIT    ((UBase_t) 0UL)
#define SSI_CR0_R_DSS_4BIT    ((UBase_t) 0x00000003UL)
#define SSI_CR0_R_DSS_5BIT    ((UBase_t) 0x00000004UL)
#define SSI_CR0_R_DSS_6BIT    ((UBase_t) 0x00000005UL)
#define SSI_CR0_R_DSS_7BIT    ((UBase_t) 0x00000006UL)
#define SSI_CR0_R_DSS_8BIT    ((UBase_t) 0x00000007UL)
#define SSI_CR0_R_DSS_9BIT    ((UBase_t) 0x00000008UL)
#define SSI_CR0_R_DSS_10BIT    ((UBase_t) 0x00000009UL)
#define SSI_CR0_R_DSS_11BIT    ((UBase_t) 0x0000000AUL)
#define SSI_CR0_R_DSS_12BIT    ((UBase_t) 0x0000000BUL)
#define SSI_CR0_R_DSS_13BIT    ((UBase_t) 0x0000000CUL)
#define SSI_CR0_R_DSS_14BIT    ((UBase_t) 0x0000000DUL)
#define SSI_CR0_R_DSS_15BIT    ((UBase_t) 0x0000000EUL)
#define SSI_CR0_R_DSS_16BIT    ((UBase_t) 0x0000000FUL)

#define SSI_CR0_DSS_MASK    ((UBase_t) 0x0000000FUL)
#define SSI_CR0_DSS_4BIT    ((UBase_t) 0x00000003UL)
#define SSI_CR0_DSS_5BIT    ((UBase_t) 0x00000004UL)
#define SSI_CR0_DSS_6BIT    ((UBase_t) 0x00000005UL)
#define SSI_CR0_DSS_7BIT    ((UBase_t) 0x00000006UL)
#define SSI_CR0_DSS_8BIT    ((UBase_t) 0x00000007UL)
#define SSI_CR0_DSS_9BIT    ((UBase_t) 0x00000008UL)
#define SSI_CR0_DSS_10BIT    ((UBase_t) 0x00000009UL)
#define SSI_CR0_DSS_11BIT    ((UBase_t) 0x0000000AUL)
#define SSI_CR0_DSS_12BIT    ((UBase_t) 0x0000000BUL)
#define SSI_CR0_DSS_13BIT    ((UBase_t) 0x0000000CUL)
#define SSI_CR0_DSS_14BIT    ((UBase_t) 0x0000000DUL)
#define SSI_CR0_DSS_15BIT    ((UBase_t) 0x0000000EUL)
#define SSI_CR0_DSS_16BIT    ((UBase_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define SSI_CR0_R_FRF_MASK    ((UBase_t) 0x00000030UL)
#define SSI_CR0_R_FRF_BIT    ((UBase_t) 4UL)
#define SSI_CR0_R_FRF_FREESCALE    ((UBase_t) 0x00000000UL)
#define SSI_CR0_R_FRF_TEXAS_INSTRUMENTS    ((UBase_t) 0x00000010UL)

#define SSI_CR0_FRF_MASK    ((UBase_t) 0x00000003UL)
#define SSI_CR0_FRF_FREESCALE    ((UBase_t) 0x00000000UL)
#define SSI_CR0_FRF_TEXAS_INSTRUMENTS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR0_R_SPO_MASK    ((UBase_t) 0x00000040UL)
#define SSI_CR0_R_SPO_BIT    ((UBase_t) 6UL)
#define SSI_CR0_R_SPO_LOW    ((UBase_t) 0x00000000UL)
#define SSI_CR0_R_SPO_HIGH    ((UBase_t) 0x00000040UL)

#define SSI_CR0_SPO_MASK    ((UBase_t) 0x00000001UL)
#define SSI_CR0_SPO_LOW    ((UBase_t) 0x00000000UL)
#define SSI_CR0_SPO_HIGH    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR0_R_SPH_MASK    ((UBase_t) 0x00000080UL)
#define SSI_CR0_R_SPH_BIT    ((UBase_t) 7UL)
#define SSI_CR0_R_SPH_FIRST    ((UBase_t) 0x00000000UL)
#define SSI_CR0_R_SPH_SECOND    ((UBase_t) 0x00000080UL)

#define SSI_CR0_SPH_MASK    ((UBase_t) 0x00000001UL)
#define SSI_CR0_SPH_FIRST    ((UBase_t) 0x00000000UL)
#define SSI_CR0_SPH_SECOND    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_CR0_R_SCR_MASK    ((UBase_t) 0x0000FF00UL)
#define SSI_CR0_R_SCR_BIT    ((UBase_t) 8UL)

#define SSI_CR0_SCR_MASK    ((UBase_t) 0x000000FFUL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_CR0_H_ */

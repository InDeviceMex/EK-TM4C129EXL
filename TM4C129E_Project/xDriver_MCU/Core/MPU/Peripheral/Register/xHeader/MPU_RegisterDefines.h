/**
 *
 * @file MPU_RegisterDefines.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERDEFINES_H_

#include <xUtils/Standard/Standard.h>

/**********************************************************************************************
************************************** 1 TYPER ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_TYPER_R_SEPARATE_MASK    ((uint32_t) 0x00000001UL)
#define MPU_TYPER_R_SEPARATE_BIT    (0UL)
#define MPU_TYPER_R_SEPARATE_UNIFIED    ((uint32_t) 0x00000000UL)
#define MPU_TYPER_R_SEPARATE_SEPARATE    ((uint32_t) 0x00000001UL)

#define MPU_TYPER_SEPARATE_MASK    ((uint32_t) 0x00000001UL)
#define MPU_TYPER_SEPARATE_UNIFIED    ((uint32_t) 0x00000000UL)
#define MPU_TYPER_SEPARATE_SEPARATE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_TYPER_R_DREGION_MASK    ((uint32_t) 0x0000FF00UL)
#define MPU_TYPER_R_DREGION_BIT    (8UL)
#define MPU_TYPER_R_DREGION_D8    ((uint32_t) 0x00000800UL)
#define MPU_TYPER_R_DREGION_D16    ((uint32_t) 0x00000F00UL)

#define MPU_TYPER_DREGION_MASK    ((uint32_t) 0x000000FFUL)
#define MPU_TYPER_DREGION_D8    ((uint32_t) 0x00000008UL)
#define MPU_TYPER_DREGION_D16    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define MPU_TYPER_R_IREGION_MASK    ((uint32_t) 0x00FF0000UL)
#define MPU_TYPER_R_IREGION_BIT    (16UL)
#define MPU_TYPER_R_IREGION_I0    ((uint32_t) 0x00000000UL)

#define MPU_TYPER_IREGION_MASK    ((uint32_t) 0x000000FFUL)
#define MPU_TYPER_IREGION_I0    ((uint32_t) 0x00000000UL)
/*--------*/

/**********************************************************************************************
************************************** 2 CTRL ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_CTRL_R_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define MPU_CTRL_R_ENABLE_BIT    (0UL)
#define MPU_CTRL_R_ENABLE_DIS    ((uint32_t) 0x00000000UL)
#define MPU_CTRL_R_ENABLE_ENA    ((uint32_t) 0x00000001UL)

#define MPU_CTRL_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define MPU_CTRL_ENABLE_DIS    ((uint32_t) 0x00000000UL)
#define MPU_CTRL_ENABLE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_CTRL_R_HFNMIENA_MASK    ((uint32_t) 0x00000002UL)
#define MPU_CTRL_R_HFNMIENA_BIT    (1UL)
#define MPU_CTRL_R_HFNMIENA_DIS    ((uint32_t) 0x00000000UL)
#define MPU_CTRL_R_HFNMIENA_ENA    ((uint32_t) 0x00000002UL)

#define MPU_CTRL_HFNMIENA_MASK    ((uint32_t) 0x00000001UL)
#define MPU_CTRL_HFNMIENA_DIS    ((uint32_t) 0x00000000UL)
#define MPU_CTRL_HFNMIENA_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_CTRL_R_PRIVDEFENA_MASK    ((uint32_t) 0x00000004UL)
#define MPU_CTRL_R_PRIVDEFENA_BIT    (2UL)
#define MPU_CTRL_R_PRIVDEFENA_DIS    ((uint32_t) 0x00000000UL)
#define MPU_CTRL_R_PRIVDEFENA_ENA    ((uint32_t) 0x00000004UL)

#define MPU_CTRL_PRIVDEFENA_MASK    ((uint32_t) 0x00000001UL)
#define MPU_CTRL_PRIVDEFENA_DIS    ((uint32_t) 0x00000000UL)
#define MPU_CTRL_PRIVDEFENA_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/**********************************************************************************************
**************************************3 RNR ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RNR_R_REGION_MASK    ((uint32_t) 0x0000000FUL)
#define MPU_RNR_R_REGION_BIT    (0UL)
#define MPU_RNR_R_REGION_REG0    ((uint32_t) 0x00000000UL)
#define MPU_RNR_R_REGION_REG1    ((uint32_t) 0x00000001UL)
#define MPU_RNR_R_REGION_REG2    ((uint32_t) 0x00000002UL)
#define MPU_RNR_R_REGION_REG3    ((uint32_t) 0x00000003UL)
#define MPU_RNR_R_REGION_REG4    ((uint32_t) 0x00000004UL)
#define MPU_RNR_R_REGION_REG5    ((uint32_t) 0x00000005UL)
#define MPU_RNR_R_REGION_REG6    ((uint32_t) 0x00000006UL)
#define MPU_RNR_R_REGION_REG7    ((uint32_t) 0x00000007UL)
#define MPU_RNR_R_REGION_REG8    ((uint32_t) 0x00000008UL)
#define MPU_RNR_R_REGION_REG9    ((uint32_t) 0x00000009UL)
#define MPU_RNR_R_REGION_REG10    ((uint32_t) 0x0000000AUL)
#define MPU_RNR_R_REGION_REG11    ((uint32_t) 0x0000000BUL)
#define MPU_RNR_R_REGION_REG12    ((uint32_t) 0x0000000CUL)
#define MPU_RNR_R_REGION_REG13    ((uint32_t) 0x0000000DUL)
#define MPU_RNR_R_REGION_REG14    ((uint32_t) 0x0000000EUL)
#define MPU_RNR_R_REGION_REG15    ((uint32_t) 0x0000000FUL)

#define MPU_RNR_REGION_MASK    ((uint32_t) 0x0000000FUL)
#define MPU_RNR_REGION_REG0    ((uint32_t) 0x00000000UL)
#define MPU_RNR_REGION_REG1    ((uint32_t) 0x00000001UL)
#define MPU_RNR_REGION_REG2    ((uint32_t) 0x00000002UL)
#define MPU_RNR_REGION_REG3    ((uint32_t) 0x00000003UL)
#define MPU_RNR_REGION_REG4    ((uint32_t) 0x00000004UL)
#define MPU_RNR_REGION_REG5    ((uint32_t) 0x00000005UL)
#define MPU_RNR_REGION_REG6    ((uint32_t) 0x00000006UL)
#define MPU_RNR_REGION_REG7    ((uint32_t) 0x00000007UL)
#define MPU_RNR_REGION_REG8    ((uint32_t) 0x00000008UL)
#define MPU_RNR_REGION_REG9    ((uint32_t) 0x00000009UL)
#define MPU_RNR_REGION_REG10    ((uint32_t) 0x0000000AUL)
#define MPU_RNR_REGION_REG11    ((uint32_t) 0x0000000BUL)
#define MPU_RNR_REGION_REG12    ((uint32_t) 0x0000000CUL)
#define MPU_RNR_REGION_REG13    ((uint32_t) 0x0000000DUL)
#define MPU_RNR_REGION_REG14    ((uint32_t) 0x0000000EUL)
#define MPU_RNR_REGION_REG15    ((uint32_t) 0x0000000FUL)
/*--------*/

/**********************************************************************************************
**************************************4 RBAR ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RBAR_R_REGION_MASK    ((uint32_t) 0x0000000FUL)
#define MPU_RBAR_R_REGION_BIT    (0UL)
#define MPU_RBAR_R_REGION_REG0    ((uint32_t) 0x00000000UL)
#define MPU_RBAR_R_REGION_REG1    ((uint32_t) 0x00000001UL)
#define MPU_RBAR_R_REGION_REG2    ((uint32_t) 0x00000002UL)
#define MPU_RBAR_R_REGION_REG3    ((uint32_t) 0x00000003UL)
#define MPU_RBAR_R_REGION_REG4    ((uint32_t) 0x00000004UL)
#define MPU_RBAR_R_REGION_REG5    ((uint32_t) 0x00000005UL)
#define MPU_RBAR_R_REGION_REG6    ((uint32_t) 0x00000006UL)
#define MPU_RBAR_R_REGION_REG7    ((uint32_t) 0x00000007UL)
#define MPU_RBAR_R_REGION_REG8    ((uint32_t) 0x00000008UL)
#define MPU_RBAR_R_REGION_REG9    ((uint32_t) 0x00000009UL)
#define MPU_RBAR_R_REGION_REG10    ((uint32_t) 0x0000000AUL)
#define MPU_RBAR_R_REGION_REG11    ((uint32_t) 0x0000000BUL)
#define MPU_RBAR_R_REGION_REG12    ((uint32_t) 0x0000000CUL)
#define MPU_RBAR_R_REGION_REG13    ((uint32_t) 0x0000000DUL)
#define MPU_RBAR_R_REGION_REG14    ((uint32_t) 0x0000000EUL)
#define MPU_RBAR_R_REGION_REG15    ((uint32_t) 0x0000000FUL)

#define MPU_RBAR_REGION_MASK    ((uint32_t) 0x0000000FUL)
#define MPU_RBAR_REGION_REG0    ((uint32_t) 0x00000000UL)
#define MPU_RBAR_REGION_REG1    ((uint32_t) 0x00000001UL)
#define MPU_RBAR_REGION_REG2    ((uint32_t) 0x00000002UL)
#define MPU_RBAR_REGION_REG3    ((uint32_t) 0x00000003UL)
#define MPU_RBAR_REGION_REG4    ((uint32_t) 0x00000004UL)
#define MPU_RBAR_REGION_REG5    ((uint32_t) 0x00000005UL)
#define MPU_RBAR_REGION_REG6    ((uint32_t) 0x00000006UL)
#define MPU_RBAR_REGION_REG7    ((uint32_t) 0x00000007UL)
#define MPU_RBAR_REGION_REG8    ((uint32_t) 0x00000008UL)
#define MPU_RBAR_REGION_REG9    ((uint32_t) 0x00000009UL)
#define MPU_RBAR_REGION_REG10    ((uint32_t) 0x0000000AUL)
#define MPU_RBAR_REGION_REG11    ((uint32_t) 0x0000000BUL)
#define MPU_RBAR_REGION_REG12    ((uint32_t) 0x0000000CUL)
#define MPU_RBAR_REGION_REG13    ((uint32_t) 0x0000000DUL)
#define MPU_RBAR_REGION_REG14    ((uint32_t) 0x0000000EUL)
#define MPU_RBAR_REGION_REG15    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define MPU_RBAR_R_VALID_MASK    ((uint32_t) 0x00000010UL)
#define MPU_RBAR_R_VALID_BIT    (4UL)
#define MPU_RBAR_R_VALID_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RBAR_R_VALID_ENA    ((uint32_t) 0x00000010UL)

#define MPU_RBAR_VALID_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RBAR_VALID_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RBAR_VALID_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RBAR_R_ADDR_MASK    ((uint32_t) 0xFFFFFFE0UL)
#define MPU_RBAR_R_ADDR_BIT    (5UL)

#define MPU_RBAR_ADDR_MASK    ((uint32_t) 0x01FFFFFFUL)
/*--------*/

/**********************************************************************************************
**************************************5 RASR ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RASR_R_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR_R_ENABLE_BIT    (0UL)
#define MPU_RASR_R_ENABLE_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_ENABLE_ENA    ((uint32_t) 0x00000001UL)

#define MPU_RASR_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR_ENABLE_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR_ENABLE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/


/*--------*/
#define MPU_RASR_R_SIZE_MASK    ((uint32_t) 0x0000003EUL)
#define MPU_RASR_R_SIZE_BIT    (1UL)
#define MPU_RASR_R_SIZE_32B    ((uint32_t) 0x00000008UL)
#define MPU_RASR_R_SIZE_1KB    ((uint32_t) 0x00000012UL)
#define MPU_RASR_R_SIZE_1MB    ((uint32_t) 0x00000026UL)
#define MPU_RASR_R_SIZE_1GB    ((uint32_t) 0x0000003AUL)
#define MPU_RASR_R_SIZE_4GB    ((uint32_t) 0x0000003EUL)

#define MPU_RASR_SIZE_MASK    ((uint32_t) 0x0000001FUL)
#define MPU_RASR_SIZE_32B    ((uint32_t) 0x00000004UL)
#define MPU_RASR_SIZE_1KB    ((uint32_t) 0x00000009UL)
#define MPU_RASR_SIZE_1MB    ((uint32_t) 0x00000013UL)
#define MPU_RASR_SIZE_1GB    ((uint32_t) 0x0000001DUL)
#define MPU_RASR_SIZE_4GB    ((uint32_t) 0x0000001FUL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD_MASK    ((uint32_t) 0x0000FF00UL)
#define MPU_RASR_R_SRD_BIT    (8UL)
#define MPU_RASR_R_SRD_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_SRD_DIS    ((uint32_t) 0x0000FF00UL)

#define MPU_RASR_SRD_MASK    ((uint32_t) 0x000000FFUL)
#define MPU_RASR_SRD_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_SRD_DIS    ((uint32_t) 0x000000FFUL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD0_MASK    ((uint32_t) 0x00000100UL)
#define MPU_RASR_R_SRD0_BIT    (8UL)
#define MPU_RASR_R_SRD0_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_SRD0_DIS    ((uint32_t) 0x00000100UL)

#define MPU_RASR_SRD0_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR_SRD0_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_SRD0_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD1_MASK    ((uint32_t) 0x00000200UL)
#define MPU_RASR_R_SRD1_BIT    (9UL)
#define MPU_RASR_R_SRD1_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_SRD1_DIS    ((uint32_t) 0x00000200UL)

#define MPU_RASR_SRD1_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR_SRD1_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_SRD1_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD2_MASK    ((uint32_t) 0x00000400UL)
#define MPU_RASR_R_SRD2_BIT    (10UL)
#define MPU_RASR_R_SRD2_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_SRD2_DIS    ((uint32_t) 0x00000400UL)

#define MPU_RASR_SRD2_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR_SRD2_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_SRD2_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD3_MASK    ((uint32_t) 0x00000800UL)
#define MPU_RASR_R_SRD3_BIT    (11UL)
#define MPU_RASR_R_SRD3_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_SRD3_DIS    ((uint32_t) 0x00000800UL)

#define MPU_RASR_SRD3_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR_SRD3_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_SRD3_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD4_MASK    ((uint32_t) 0x00001000UL)
#define MPU_RASR_R_SRD4_BIT    (12UL)
#define MPU_RASR_R_SRD4_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_SRD4_DIS    ((uint32_t) 0x00001000UL)

#define MPU_RASR_SRD4_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR_SRD4_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_SRD4_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD5_MASK    ((uint32_t) 0x00002000UL)
#define MPU_RASR_R_SRD5_BIT    (13UL)
#define MPU_RASR_R_SRD5_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_SRD5_DIS    ((uint32_t) 0x00002000UL)

#define MPU_RASR_SRD5_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR_SRD5_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_SRD5_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD6_MASK    ((uint32_t) 0x00004000UL)
#define MPU_RASR_R_SRD6_BIT    (14UL)
#define MPU_RASR_R_SRD6_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_SRD6_DIS    ((uint32_t) 0x00004000UL)

#define MPU_RASR_SRD6_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR_SRD6_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_SRD6_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD7_MASK    ((uint32_t) 0x00008000UL)
#define MPU_RASR_R_SRD7_BIT    (15UL)
#define MPU_RASR_R_SRD7_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_SRD7_DIS    ((uint32_t) 0x00008000UL)

#define MPU_RASR_SRD7_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR_SRD7_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_SRD7_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_B_MASK    ((uint32_t) 0x00010000UL)
#define MPU_RASR_R_B_BIT    (16UL)
#define MPU_RASR_R_B_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_B_ENA    ((uint32_t) 0x00010000UL)

#define MPU_RASR_B_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR_B_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR_B_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_C_MASK    ((uint32_t) 0x00020000UL)
#define MPU_RASR_R_C_BIT    (17UL)
#define MPU_RASR_R_C_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_C_ENA    ((uint32_t) 0x00020000UL)

#define MPU_RASR_C_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR_C_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR_C_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_S_MASK    ((uint32_t) 0x00040000UL)
#define MPU_RASR_R_S_BIT    (18UL)
#define MPU_RASR_R_S_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_S_ENA    ((uint32_t) 0x00040000UL)

#define MPU_RASR_S_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR_S_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR_S_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_TEX_MASK    ((uint32_t) 0x00380000UL)
#define MPU_RASR_R_TEX_BIT    (19UL)
#define MPU_RASR_R_TEX_NC    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_TEX_WB_WRA    ((uint32_t) 0x00080000UL)
#define MPU_RASR_R_TEX_WT_NWA    ((uint32_t) 0x00100000UL)
#define MPU_RASR_R_TEX_WB_NWA    ((uint32_t) 0x00180000UL)

#define MPU_RASR_TEX_MASK    ((uint32_t) 0x00000007UL)
#define MPU_RASR_TEX_NC    ((uint32_t) 0x00000000UL)
#define MPU_RASR_TEX_WB_WRA    ((uint32_t) 0x00000001UL)
#define MPU_RASR_TEX_WT_NWA    ((uint32_t) 0x00000002UL)
#define MPU_RASR_TEX_WB_NWA    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_AP_MASK    ((uint32_t) 0x07000000UL)
#define MPU_RASR_R_AP_BIT    (24UL)
#define MPU_RASR_R_AP_NANA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_AP_RWNA    ((uint32_t) 0x01000000UL)
#define MPU_RASR_R_AP_RWRO    ((uint32_t) 0x02000000UL)
#define MPU_RASR_R_AP_RWRW    ((uint32_t) 0x03000000UL)
#define MPU_RASR_R_AP_RONA    ((uint32_t) 0x05000000UL)
#define MPU_RASR_R_AP_RORO    ((uint32_t) 0x06000000UL)

#define MPU_RASR_AP_MASK    ((uint32_t) 0x00000007UL)
#define MPU_RASR_AP_NANA    ((uint32_t) 0x00000000UL)
#define MPU_RASR_AP_RWNA    ((uint32_t) 0x00000001UL)
#define MPU_RASR_AP_RWRO    ((uint32_t) 0x00000002UL)
#define MPU_RASR_AP_RWRW    ((uint32_t) 0x00000003UL)
#define MPU_RASR_AP_RONA    ((uint32_t) 0x00000005UL)
#define MPU_RASR_AP_RORO    ((uint32_t) 0x00000006UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_XN_MASK    ((uint32_t) 0x10000000UL)
#define MPU_RASR_R_XN_BIT    (28UL)
#define MPU_RASR_R_XN_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR_R_XN_ENA    ((uint32_t) 0x10000000UL)

#define MPU_RASR_XN_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR_XN_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR_XN_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/**********************************************************************************************
**************************************6 RBAR1 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RBAR1_R_REGION_MASK    ((uint32_t) 0x0000000FUL)
#define MPU_RBAR1_R_REGION_BIT    (0UL)
#define MPU_RBAR1_R_REGION_REG0    ((uint32_t) 0x00000000UL)
#define MPU_RBAR1_R_REGION_REG1    ((uint32_t) 0x00000001UL)
#define MPU_RBAR1_R_REGION_REG2    ((uint32_t) 0x00000002UL)
#define MPU_RBAR1_R_REGION_REG3    ((uint32_t) 0x00000003UL)
#define MPU_RBAR1_R_REGION_REG4    ((uint32_t) 0x00000004UL)
#define MPU_RBAR1_R_REGION_REG5    ((uint32_t) 0x00000005UL)
#define MPU_RBAR1_R_REGION_REG6    ((uint32_t) 0x00000006UL)
#define MPU_RBAR1_R_REGION_REG7    ((uint32_t) 0x00000007UL)
#define MPU_RBAR1_R_REGION_REG8    ((uint32_t) 0x00000008UL)
#define MPU_RBAR1_R_REGION_REG9    ((uint32_t) 0x00000009UL)
#define MPU_RBAR1_R_REGION_REG10    ((uint32_t) 0x0000000AUL)
#define MPU_RBAR1_R_REGION_REG11    ((uint32_t) 0x0000000BUL)
#define MPU_RBAR1_R_REGION_REG12    ((uint32_t) 0x0000000CUL)
#define MPU_RBAR1_R_REGION_REG13    ((uint32_t) 0x0000000DUL)
#define MPU_RBAR1_R_REGION_REG14    ((uint32_t) 0x0000000EUL)
#define MPU_RBAR1_R_REGION_REG15    ((uint32_t) 0x0000000FUL)

#define MPU_RBAR1_REGION_MASK    ((uint32_t) 0x0000000FUL)
#define MPU_RBAR1_REGION_REG0    ((uint32_t) 0x00000000UL)
#define MPU_RBAR1_REGION_REG1    ((uint32_t) 0x00000001UL)
#define MPU_RBAR1_REGION_REG2    ((uint32_t) 0x00000002UL)
#define MPU_RBAR1_REGION_REG3    ((uint32_t) 0x00000003UL)
#define MPU_RBAR1_REGION_REG4    ((uint32_t) 0x00000004UL)
#define MPU_RBAR1_REGION_REG5    ((uint32_t) 0x00000005UL)
#define MPU_RBAR1_REGION_REG6    ((uint32_t) 0x00000006UL)
#define MPU_RBAR1_REGION_REG7    ((uint32_t) 0x00000007UL)
#define MPU_RBAR1_REGION_REG8    ((uint32_t) 0x00000008UL)
#define MPU_RBAR1_REGION_REG9    ((uint32_t) 0x00000009UL)
#define MPU_RBAR1_REGION_REG10    ((uint32_t) 0x0000000AUL)
#define MPU_RBAR1_REGION_REG11    ((uint32_t) 0x0000000BUL)
#define MPU_RBAR1_REGION_REG12    ((uint32_t) 0x0000000CUL)
#define MPU_RBAR1_REGION_REG13    ((uint32_t) 0x0000000DUL)
#define MPU_RBAR1_REGION_REG14    ((uint32_t) 0x0000000EUL)
#define MPU_RBAR1_REGION_REG15    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define MPU_RBAR1_R_VALID_MASK    ((uint32_t) 0x00000010UL)
#define MPU_RBAR1_R_VALID_BIT    (4UL)
#define MPU_RBAR1_R_VALID_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RBAR1_R_VALID_ENA    ((uint32_t) 0x00000010UL)

#define MPU_RBAR1_VALID_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RBAR1_VALID_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RBAR1_VALID_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RBAR1_R_ADDR_MASK    ((uint32_t) 0xFFFFFFE0UL)
#define MPU_RBAR1_R_ADDR_BIT    (5UL)

#define MPU_RBAR1_ADDR_MASK    ((uint32_t) 0x01FFFFFFUL)
/*--------*/

/**********************************************************************************************
**************************************7 RASR1 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RASR1_R_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_R_ENABLE_BIT    (0UL)
#define MPU_RASR1_R_ENABLE_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_R_ENABLE_ENA    ((uint32_t) 0x00000001UL)

#define MPU_RASR1_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_ENABLE_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_ENABLE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SIZE_MASK    ((uint32_t) 0x0000003EUL)
#define MPU_RASR1_R_SIZE_BIT    (1UL)
#define MPU_RASR1_R_SIZE_32B    ((uint32_t) 0x00000008UL)
#define MPU_RASR1_R_SIZE_1KB    ((uint32_t) 0x00000012UL)
#define MPU_RASR1_R_SIZE_1MB    ((uint32_t) 0x00000026UL)
#define MPU_RASR1_R_SIZE_1GB    ((uint32_t) 0x0000003AUL)
#define MPU_RASR1_R_SIZE_4GB    ((uint32_t) 0x0000003EUL)

#define MPU_RASR1_SIZE_MASK    ((uint32_t) 0x0000001FUL)
#define MPU_RASR1_SIZE_32B    ((uint32_t) 0x00000004UL)
#define MPU_RASR1_SIZE_1KB    ((uint32_t) 0x00000009UL)
#define MPU_RASR1_SIZE_1MB    ((uint32_t) 0x00000013UL)
#define MPU_RASR1_SIZE_1GB    ((uint32_t) 0x0000001DUL)
#define MPU_RASR1_SIZE_4GB    ((uint32_t) 0x0000001FUL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD0_MASK    ((uint32_t) 0x00000100UL)
#define MPU_RASR1_R_SRD0_BIT    (8UL)
#define MPU_RASR1_R_SRD0_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_R_SRD0_DIS    ((uint32_t) 0x00000100UL)

#define MPU_RASR1_SRD0_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_SRD0_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_SRD0_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD1_MASK    ((uint32_t) 0x00000200UL)
#define MPU_RASR1_R_SRD1_BIT    (9UL)
#define MPU_RASR1_R_SRD1_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_R_SRD1_DIS    ((uint32_t) 0x00000200UL)

#define MPU_RASR1_SRD1_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_SRD1_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_SRD1_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD2_MASK    ((uint32_t) 0x00000400UL)
#define MPU_RASR1_R_SRD2_BIT    (10UL)
#define MPU_RASR1_R_SRD2_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_R_SRD2_DIS    ((uint32_t) 0x00000400UL)

#define MPU_RASR1_SRD2_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_SRD2_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_SRD2_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD3_MASK    ((uint32_t) 0x00000800UL)
#define MPU_RASR1_R_SRD3_BIT    (11UL)
#define MPU_RASR1_R_SRD3_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_R_SRD3_DIS    ((uint32_t) 0x00000800UL)

#define MPU_RASR1_SRD3_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_SRD3_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_SRD3_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD4_MASK    ((uint32_t) 0x00001000UL)
#define MPU_RASR1_R_SRD4_BIT    (12UL)
#define MPU_RASR1_R_SRD4_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_R_SRD4_DIS    ((uint32_t) 0x00001000UL)

#define MPU_RASR1_SRD4_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_SRD4_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_SRD4_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD5_MASK    ((uint32_t) 0x00002000UL)
#define MPU_RASR1_R_SRD5_BIT    (13UL)
#define MPU_RASR1_R_SRD5_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_R_SRD5_DIS    ((uint32_t) 0x00002000UL)

#define MPU_RASR1_SRD5_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_SRD5_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_SRD5_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD6_MASK    ((uint32_t) 0x00004000UL)
#define MPU_RASR1_R_SRD6_BIT    (14UL)
#define MPU_RASR1_R_SRD6_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_R_SRD6_DIS    ((uint32_t) 0x00004000UL)

#define MPU_RASR1_SRD6_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_SRD6_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_SRD6_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD7_MASK    ((uint32_t) 0x00008000UL)
#define MPU_RASR1_R_SRD7_BIT    (15UL)
#define MPU_RASR1_R_SRD7_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_R_SRD7_DIS    ((uint32_t) 0x00008000UL)

#define MPU_RASR1_SRD7_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_SRD7_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_SRD7_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_B_MASK    ((uint32_t) 0x00010000UL)
#define MPU_RASR1_R_B_BIT    (16UL)
#define MPU_RASR1_R_B_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_R_B_ENA    ((uint32_t) 0x00010000UL)

#define MPU_RASR1_B_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_B_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_B_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_C_MASK    ((uint32_t) 0x00020000UL)
#define MPU_RASR1_R_C_BIT    (17UL)
#define MPU_RASR1_R_C_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_R_C_ENA    ((uint32_t) 0x00020000UL)

#define MPU_RASR1_C_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_C_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_C_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_S_MASK    ((uint32_t) 0x00040000UL)
#define MPU_RASR1_R_S_BIT    (18UL)
#define MPU_RASR1_R_S_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_R_S_ENA    ((uint32_t) 0x00040000UL)

#define MPU_RASR1_S_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_S_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_S_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_TEX_MASK    ((uint32_t) 0x00380000UL)
#define MPU_RASR1_R_TEX_BIT    (19UL)
#define MPU_RASR1_R_TEX_NC    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_R_TEX_WB_WRA    ((uint32_t) 0x00080000UL)
#define MPU_RASR1_R_TEX_WT_NWA    ((uint32_t) 0x00100000UL)
#define MPU_RASR1_R_TEX_WB_NWA    ((uint32_t) 0x00180000UL)

#define MPU_RASR1_TEX_MASK    ((uint32_t) 0x00000007UL)
#define MPU_RASR1_TEX_NC    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_TEX_WB_WRA    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_TEX_WT_NWA    ((uint32_t) 0x00000002UL)
#define MPU_RASR1_TEX_WB_NWA    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_AP_MASK    ((uint32_t) 0x07000000UL)
#define MPU_RASR1_R_AP_BIT    (24UL)
#define MPU_RASR1_R_AP_NANA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_R_AP_RWNA    ((uint32_t) 0x01000000UL)
#define MPU_RASR1_R_AP_RWRO    ((uint32_t) 0x02000000UL)
#define MPU_RASR1_R_AP_RWRW    ((uint32_t) 0x03000000UL)
#define MPU_RASR1_R_AP_RONA    ((uint32_t) 0x05000000UL)
#define MPU_RASR1_R_AP_RORO    ((uint32_t) 0x06000000UL)

#define MPU_RASR1_AP_MASK    ((uint32_t) 0x00000007UL)
#define MPU_RASR1_AP_NANA    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_AP_RWNA    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_AP_RWRO    ((uint32_t) 0x00000002UL)
#define MPU_RASR1_AP_RWRW    ((uint32_t) 0x00000003UL)
#define MPU_RASR1_AP_RONA    ((uint32_t) 0x00000005UL)
#define MPU_RASR1_AP_RORO    ((uint32_t) 0x00000006UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_XN_MASK    ((uint32_t) 0x10000000UL)
#define MPU_RASR1_R_XN_BIT    (28UL)
#define MPU_RASR1_R_XN_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_R_XN_ENA    ((uint32_t) 0x10000000UL)

#define MPU_RASR1_XN_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR1_XN_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR1_XN_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/**********************************************************************************************
**************************************8 RBAR2 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RBAR2_R_REGION_MASK    ((uint32_t) 0x0000000FUL)
#define MPU_RBAR2_R_REGION_BIT    (0UL)
#define MPU_RBAR2_R_REGION_REG0    ((uint32_t) 0x00000000UL)
#define MPU_RBAR2_R_REGION_REG1    ((uint32_t) 0x00000001UL)
#define MPU_RBAR2_R_REGION_REG2    ((uint32_t) 0x00000002UL)
#define MPU_RBAR2_R_REGION_REG3    ((uint32_t) 0x00000003UL)
#define MPU_RBAR2_R_REGION_REG4    ((uint32_t) 0x00000004UL)
#define MPU_RBAR2_R_REGION_REG5    ((uint32_t) 0x00000005UL)
#define MPU_RBAR2_R_REGION_REG6    ((uint32_t) 0x00000006UL)
#define MPU_RBAR2_R_REGION_REG7    ((uint32_t) 0x00000007UL)
#define MPU_RBAR2_R_REGION_REG8    ((uint32_t) 0x00000008UL)
#define MPU_RBAR2_R_REGION_REG9    ((uint32_t) 0x00000009UL)
#define MPU_RBAR2_R_REGION_REG10    ((uint32_t) 0x0000000AUL)
#define MPU_RBAR2_R_REGION_REG11    ((uint32_t) 0x0000000BUL)
#define MPU_RBAR2_R_REGION_REG12    ((uint32_t) 0x0000000CUL)
#define MPU_RBAR2_R_REGION_REG13    ((uint32_t) 0x0000000DUL)
#define MPU_RBAR2_R_REGION_REG14    ((uint32_t) 0x0000000EUL)
#define MPU_RBAR2_R_REGION_REG15    ((uint32_t) 0x0000000FUL)

#define MPU_RBAR2_REGION_MASK    ((uint32_t) 0x0000000FUL)
#define MPU_RBAR2_REGION_REG0    ((uint32_t) 0x00000000UL)
#define MPU_RBAR2_REGION_REG1    ((uint32_t) 0x00000001UL)
#define MPU_RBAR2_REGION_REG2    ((uint32_t) 0x00000002UL)
#define MPU_RBAR2_REGION_REG3    ((uint32_t) 0x00000003UL)
#define MPU_RBAR2_REGION_REG4    ((uint32_t) 0x00000004UL)
#define MPU_RBAR2_REGION_REG5    ((uint32_t) 0x00000005UL)
#define MPU_RBAR2_REGION_REG6    ((uint32_t) 0x00000006UL)
#define MPU_RBAR2_REGION_REG7    ((uint32_t) 0x00000007UL)
#define MPU_RBAR2_REGION_REG8    ((uint32_t) 0x00000008UL)
#define MPU_RBAR2_REGION_REG9    ((uint32_t) 0x00000009UL)
#define MPU_RBAR2_REGION_REG10    ((uint32_t) 0x0000000AUL)
#define MPU_RBAR2_REGION_REG11    ((uint32_t) 0x0000000BUL)
#define MPU_RBAR2_REGION_REG12    ((uint32_t) 0x0000000CUL)
#define MPU_RBAR2_REGION_REG13    ((uint32_t) 0x0000000DUL)
#define MPU_RBAR2_REGION_REG14    ((uint32_t) 0x0000000EUL)
#define MPU_RBAR2_REGION_REG15    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define MPU_RBAR2_R_VALID_MASK    ((uint32_t) 0x00000010UL)
#define MPU_RBAR2_R_VALID_BIT    (4UL)
#define MPU_RBAR2_R_VALID_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RBAR2_R_VALID_ENA    ((uint32_t) 0x00000010UL)

#define MPU_RBAR2_VALID_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RBAR2_VALID_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RBAR2_VALID_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RBAR2_R_ADDR_MASK    ((uint32_t) 0xFFFFFFE0UL)
#define MPU_RBAR2_R_ADDR_BIT    (5UL)

#define MPU_RBAR2_ADDR_MASK    ((uint32_t) 0x01FFFFFFUL)
/*--------*/

/**********************************************************************************************
**************************************9 RASR2 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RASR2_R_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_R_ENABLE_BIT    (0UL)
#define MPU_RASR2_R_ENABLE_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_R_ENABLE_ENA    ((uint32_t) 0x00000001UL)

#define MPU_RASR2_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_ENABLE_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_ENABLE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SIZE_MASK    ((uint32_t) 0x0000003EUL)
#define MPU_RASR2_R_SIZE_BIT    (1UL)
#define MPU_RASR2_R_SIZE_32B    ((uint32_t) 0x00000008UL)
#define MPU_RASR2_R_SIZE_1KB    ((uint32_t) 0x00000012UL)
#define MPU_RASR2_R_SIZE_1MB    ((uint32_t) 0x00000026UL)
#define MPU_RASR2_R_SIZE_1GB    ((uint32_t) 0x0000003AUL)
#define MPU_RASR2_R_SIZE_4GB    ((uint32_t) 0x0000003EUL)

#define MPU_RASR2_SIZE_MASK    ((uint32_t) 0x0000001FUL)
#define MPU_RASR2_SIZE_32B    ((uint32_t) 0x00000004UL)
#define MPU_RASR2_SIZE_1KB    ((uint32_t) 0x00000009UL)
#define MPU_RASR2_SIZE_1MB    ((uint32_t) 0x00000013UL)
#define MPU_RASR2_SIZE_1GB    ((uint32_t) 0x0000001DUL)
#define MPU_RASR2_SIZE_4GB    ((uint32_t) 0x0000001FUL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD0_MASK    ((uint32_t) 0x00000100UL)
#define MPU_RASR2_R_SRD0_BIT    (8UL)
#define MPU_RASR2_R_SRD0_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_R_SRD0_DIS    ((uint32_t) 0x00000100UL)

#define MPU_RASR2_SRD0_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_SRD0_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_SRD0_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD1_MASK    ((uint32_t) 0x00000200UL)
#define MPU_RASR2_R_SRD1_BIT    (9UL)
#define MPU_RASR2_R_SRD1_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_R_SRD1_DIS    ((uint32_t) 0x00000200UL)

#define MPU_RASR2_SRD1_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_SRD1_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_SRD1_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD2_MASK    ((uint32_t) 0x00000400UL)
#define MPU_RASR2_R_SRD2_BIT    (10UL)
#define MPU_RASR2_R_SRD2_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_R_SRD2_DIS    ((uint32_t) 0x00000400UL)

#define MPU_RASR2_SRD2_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_SRD2_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_SRD2_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD3_MASK    ((uint32_t) 0x00000800UL)
#define MPU_RASR2_R_SRD3_BIT    (11UL)
#define MPU_RASR2_R_SRD3_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_R_SRD3_DIS    ((uint32_t) 0x00000800UL)

#define MPU_RASR2_SRD3_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_SRD3_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_SRD3_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD4_MASK    ((uint32_t) 0x00001000UL)
#define MPU_RASR2_R_SRD4_BIT    (12UL)
#define MPU_RASR2_R_SRD4_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_R_SRD4_DIS    ((uint32_t) 0x00001000UL)

#define MPU_RASR2_SRD4_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_SRD4_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_SRD4_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD5_MASK    ((uint32_t) 0x00002000UL)
#define MPU_RASR2_R_SRD5_BIT    (13UL)
#define MPU_RASR2_R_SRD5_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_R_SRD5_DIS    ((uint32_t) 0x00002000UL)

#define MPU_RASR2_SRD5_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_SRD5_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_SRD5_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD6_MASK    ((uint32_t) 0x00004000UL)
#define MPU_RASR2_R_SRD6_BIT    (14UL)
#define MPU_RASR2_R_SRD6_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_R_SRD6_DIS    ((uint32_t) 0x00004000UL)

#define MPU_RASR2_SRD6_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_SRD6_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_SRD6_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD7_MASK    ((uint32_t) 0x00008000UL)
#define MPU_RASR2_R_SRD7_BIT    (15UL)
#define MPU_RASR2_R_SRD7_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_R_SRD7_DIS    ((uint32_t) 0x00008000UL)

#define MPU_RASR2_SRD7_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_SRD7_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_SRD7_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_B_MASK    ((uint32_t) 0x00010000UL)
#define MPU_RASR2_R_B_BIT    (16UL)
#define MPU_RASR2_R_B_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_R_B_ENA    ((uint32_t) 0x00010000UL)

#define MPU_RASR2_B_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_B_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_B_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_C_MASK    ((uint32_t) 0x00020000UL)
#define MPU_RASR2_R_C_BIT    (17UL)
#define MPU_RASR2_R_C_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_R_C_ENA    ((uint32_t) 0x00020000UL)

#define MPU_RASR2_C_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_C_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_C_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_S_MASK    ((uint32_t) 0x00040000UL)
#define MPU_RASR2_R_S_BIT    (18UL)
#define MPU_RASR2_R_S_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_R_S_ENA    ((uint32_t) 0x00040000UL)

#define MPU_RASR2_S_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_S_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_S_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_TEX_MASK    ((uint32_t) 0x00380000UL)
#define MPU_RASR2_R_TEX_BIT    (19UL)
#define MPU_RASR2_R_TEX_NC    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_R_TEX_WB_WRA    ((uint32_t) 0x00080000UL)
#define MPU_RASR2_R_TEX_WT_NWA    ((uint32_t) 0x00100000UL)
#define MPU_RASR2_R_TEX_WB_NWA    ((uint32_t) 0x00180000UL)

#define MPU_RASR2_TEX_MASK    ((uint32_t) 0x00000007UL)
#define MPU_RASR2_TEX_NC    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_TEX_WB_WRA    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_TEX_WT_NWA    ((uint32_t) 0x00000002UL)
#define MPU_RASR2_TEX_WB_NWA    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_AP_MASK    ((uint32_t) 0x07000000UL)
#define MPU_RASR2_R_AP_BIT    (24UL)
#define MPU_RASR2_R_AP_NANA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_R_AP_RWNA    ((uint32_t) 0x01000000UL)
#define MPU_RASR2_R_AP_RWRO    ((uint32_t) 0x02000000UL)
#define MPU_RASR2_R_AP_RWRW    ((uint32_t) 0x03000000UL)
#define MPU_RASR2_R_AP_RONA    ((uint32_t) 0x05000000UL)
#define MPU_RASR2_R_AP_RORO    ((uint32_t) 0x06000000UL)

#define MPU_RASR2_AP_MASK    ((uint32_t) 0x00000007UL)
#define MPU_RASR2_AP_NANA    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_AP_RWNA    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_AP_RWRO    ((uint32_t) 0x00000002UL)
#define MPU_RASR2_AP_RWRW    ((uint32_t) 0x00000003UL)
#define MPU_RASR2_AP_RONA    ((uint32_t) 0x00000005UL)
#define MPU_RASR2_AP_RORO    ((uint32_t) 0x00000006UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_XN_MASK    ((uint32_t) 0x10000000UL)
#define MPU_RASR2_R_XN_BIT    (28UL)
#define MPU_RASR2_R_XN_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_R_XN_ENA    ((uint32_t) 0x10000000UL)

#define MPU_RASR2_XN_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR2_XN_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR2_XN_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/**********************************************************************************************
**************************************10 RBAR3 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RBAR3_R_REGION_MASK    ((uint32_t) 0x0000000FUL)
#define MPU_RBAR3_R_REGION_BIT    (0UL)
#define MPU_RBAR3_R_REGION_REG0    ((uint32_t) 0x00000000UL)
#define MPU_RBAR3_R_REGION_REG1    ((uint32_t) 0x00000001UL)
#define MPU_RBAR3_R_REGION_REG2    ((uint32_t) 0x00000002UL)
#define MPU_RBAR3_R_REGION_REG3    ((uint32_t) 0x00000003UL)
#define MPU_RBAR3_R_REGION_REG4    ((uint32_t) 0x00000004UL)
#define MPU_RBAR3_R_REGION_REG5    ((uint32_t) 0x00000005UL)
#define MPU_RBAR3_R_REGION_REG6    ((uint32_t) 0x00000006UL)
#define MPU_RBAR3_R_REGION_REG7    ((uint32_t) 0x00000007UL)
#define MPU_RBAR3_R_REGION_REG8    ((uint32_t) 0x00000008UL)
#define MPU_RBAR3_R_REGION_REG9    ((uint32_t) 0x00000009UL)
#define MPU_RBAR3_R_REGION_REG10    ((uint32_t) 0x0000000AUL)
#define MPU_RBAR3_R_REGION_REG11    ((uint32_t) 0x0000000BUL)
#define MPU_RBAR3_R_REGION_REG12    ((uint32_t) 0x0000000CUL)
#define MPU_RBAR3_R_REGION_REG13    ((uint32_t) 0x0000000DUL)
#define MPU_RBAR3_R_REGION_REG14    ((uint32_t) 0x0000000EUL)
#define MPU_RBAR3_R_REGION_REG15    ((uint32_t) 0x0000000FUL)

#define MPU_RBAR3_REGION_MASK    ((uint32_t) 0x0000000FUL)
#define MPU_RBAR3_REGION_REG0    ((uint32_t) 0x00000000UL)
#define MPU_RBAR3_REGION_REG1    ((uint32_t) 0x00000001UL)
#define MPU_RBAR3_REGION_REG2    ((uint32_t) 0x00000002UL)
#define MPU_RBAR3_REGION_REG3    ((uint32_t) 0x00000003UL)
#define MPU_RBAR3_REGION_REG4    ((uint32_t) 0x00000004UL)
#define MPU_RBAR3_REGION_REG5    ((uint32_t) 0x00000005UL)
#define MPU_RBAR3_REGION_REG6    ((uint32_t) 0x00000006UL)
#define MPU_RBAR3_REGION_REG7    ((uint32_t) 0x00000007UL)
#define MPU_RBAR3_REGION_REG8    ((uint32_t) 0x00000008UL)
#define MPU_RBAR3_REGION_REG9    ((uint32_t) 0x00000009UL)
#define MPU_RBAR3_REGION_REG10    ((uint32_t) 0x0000000AUL)
#define MPU_RBAR3_REGION_REG11    ((uint32_t) 0x0000000BUL)
#define MPU_RBAR3_REGION_REG12    ((uint32_t) 0x0000000CUL)
#define MPU_RBAR3_REGION_REG13    ((uint32_t) 0x0000000DUL)
#define MPU_RBAR3_REGION_REG14    ((uint32_t) 0x0000000EUL)
#define MPU_RBAR3_REGION_REG15    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define MPU_RBAR3_R_VALID_MASK    ((uint32_t) 0x00000010UL)
#define MPU_RBAR3_R_VALID_BIT    (4UL)
#define MPU_RBAR3_R_VALID_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RBAR3_R_VALID_ENA    ((uint32_t) 0x00000010UL)

#define MPU_RBAR3_VALID_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RBAR3_VALID_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RBAR3_VALID_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RBAR3_R_ADDR_MASK    ((uint32_t) 0xFFFFFFE0UL)
#define MPU_RBAR3_R_ADDR_BIT    (5UL)

#define MPU_RBAR3_ADDR_MASK    ((uint32_t) 0x01FFFFFFUL)
/*--------*/

/**********************************************************************************************
**************************************11 RASR3 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RASR3_R_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_R_ENABLE_BIT    (0UL)
#define MPU_RASR3_R_ENABLE_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_R_ENABLE_ENA    ((uint32_t) 0x00000001UL)

#define MPU_RASR3_ENABLE_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_ENABLE_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_ENABLE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SIZE_MASK    ((uint32_t) 0x0000003EUL)
#define MPU_RASR3_R_SIZE_BIT    (1UL)
#define MPU_RASR3_R_SIZE_32B    ((uint32_t) 0x00000008UL)
#define MPU_RASR3_R_SIZE_1KB    ((uint32_t) 0x00000012UL)
#define MPU_RASR3_R_SIZE_1MB    ((uint32_t) 0x00000026UL)
#define MPU_RASR3_R_SIZE_1GB    ((uint32_t) 0x0000003AUL)
#define MPU_RASR3_R_SIZE_4GB    ((uint32_t) 0x0000003EUL)

#define MPU_RASR3_SIZE_MASK    ((uint32_t) 0x0000001FUL)
#define MPU_RASR3_SIZE_32B    ((uint32_t) 0x00000004UL)
#define MPU_RASR3_SIZE_1KB    ((uint32_t) 0x00000009UL)
#define MPU_RASR3_SIZE_1MB    ((uint32_t) 0x00000013UL)
#define MPU_RASR3_SIZE_1GB    ((uint32_t) 0x0000001DUL)
#define MPU_RASR3_SIZE_4GB    ((uint32_t) 0x0000001FUL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD0_MASK    ((uint32_t) 0x00000100UL)
#define MPU_RASR3_R_SRD0_BIT    (8UL)
#define MPU_RASR3_R_SRD0_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_R_SRD0_DIS    ((uint32_t) 0x00000100UL)

#define MPU_RASR3_SRD0_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_SRD0_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_SRD0_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD1_MASK    ((uint32_t) 0x00000200UL)
#define MPU_RASR3_R_SRD1_BIT    (9UL)
#define MPU_RASR3_R_SRD1_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_R_SRD1_DIS    ((uint32_t) 0x00000200UL)

#define MPU_RASR3_SRD1_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_SRD1_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_SRD1_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD2_MASK    ((uint32_t) 0x00000400UL)
#define MPU_RASR3_R_SRD2_BIT    (10UL)
#define MPU_RASR3_R_SRD2_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_R_SRD2_DIS    ((uint32_t) 0x00000400UL)

#define MPU_RASR3_SRD2_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_SRD2_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_SRD2_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD3_MASK    ((uint32_t) 0x00000800UL)
#define MPU_RASR3_R_SRD3_BIT    (11UL)
#define MPU_RASR3_R_SRD3_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_R_SRD3_DIS    ((uint32_t) 0x00000800UL)

#define MPU_RASR3_SRD3_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_SRD3_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_SRD3_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD4_MASK    ((uint32_t) 0x00001000UL)
#define MPU_RASR3_R_SRD4_BIT    (12UL)
#define MPU_RASR3_R_SRD4_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_R_SRD4_DIS    ((uint32_t) 0x00001000UL)

#define MPU_RASR3_SRD4_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_SRD4_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_SRD4_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD5_MASK    ((uint32_t) 0x00002000UL)
#define MPU_RASR3_R_SRD5_BIT    (13UL)
#define MPU_RASR3_R_SRD5_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_R_SRD5_DIS    ((uint32_t) 0x00002000UL)

#define MPU_RASR3_SRD5_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_SRD5_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_SRD5_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD6_MASK    ((uint32_t) 0x00004000UL)
#define MPU_RASR3_R_SRD6_BIT    (14UL)
#define MPU_RASR3_R_SRD6_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_R_SRD6_DIS    ((uint32_t) 0x00004000UL)

#define MPU_RASR3_SRD6_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_SRD6_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_SRD6_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD7_MASK    ((uint32_t) 0x00008000UL)
#define MPU_RASR3_R_SRD7_BIT    (15UL)
#define MPU_RASR3_R_SRD7_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_R_SRD7_DIS    ((uint32_t) 0x00008000UL)

#define MPU_RASR3_SRD7_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_SRD7_ENA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_SRD7_DIS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_B_MASK    ((uint32_t) 0x00010000UL)
#define MPU_RASR3_R_B_BIT    (16UL)
#define MPU_RASR3_R_B_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_R_B_ENA    ((uint32_t) 0x00010000UL)

#define MPU_RASR3_B_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_B_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_B_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_C_MASK    ((uint32_t) 0x00020000UL)
#define MPU_RASR3_R_C_BIT    (17UL)
#define MPU_RASR3_R_C_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_R_C_ENA    ((uint32_t) 0x00020000UL)

#define MPU_RASR3_C_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_C_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_C_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_S_MASK    ((uint32_t) 0x00040000UL)
#define MPU_RASR3_R_S_BIT    (18UL)
#define MPU_RASR3_R_S_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_R_S_ENA    ((uint32_t) 0x00040000UL)

#define MPU_RASR3_S_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_S_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_S_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_TEX_MASK    ((uint32_t) 0x00380000UL)
#define MPU_RASR3_R_TEX_BIT    (19UL)
#define MPU_RASR3_R_TEX_NC    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_R_TEX_WB_WRA    ((uint32_t) 0x00080000UL)
#define MPU_RASR3_R_TEX_WT_NWA    ((uint32_t) 0x00100000UL)
#define MPU_RASR3_R_TEX_WB_NWA    ((uint32_t) 0x00180000UL)

#define MPU_RASR3_TEX_MASK    ((uint32_t) 0x00000007UL)
#define MPU_RASR3_TEX_NC    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_TEX_WB_WRA    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_TEX_WT_NWA    ((uint32_t) 0x00000002UL)
#define MPU_RASR3_TEX_WB_NWA    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_AP_MASK    ((uint32_t) 0x07000000UL)
#define MPU_RASR3_R_AP_BIT    (24UL)
#define MPU_RASR3_R_AP_NANA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_R_AP_RWNA    ((uint32_t) 0x01000000UL)
#define MPU_RASR3_R_AP_RWRO    ((uint32_t) 0x02000000UL)
#define MPU_RASR3_R_AP_RWRW    ((uint32_t) 0x03000000UL)
#define MPU_RASR3_R_AP_RONA    ((uint32_t) 0x05000000UL)
#define MPU_RASR3_R_AP_RORO    ((uint32_t) 0x06000000UL)

#define MPU_RASR3_AP_MASK    ((uint32_t) 0x00000007UL)
#define MPU_RASR3_AP_NANA    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_AP_RWNA    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_AP_RWRO    ((uint32_t) 0x00000002UL)
#define MPU_RASR3_AP_RWRW    ((uint32_t) 0x00000003UL)
#define MPU_RASR3_AP_RONA    ((uint32_t) 0x00000005UL)
#define MPU_RASR3_AP_RORO    ((uint32_t) 0x00000006UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_XN_MASK    ((uint32_t) 0x10000000UL)
#define MPU_RASR3_R_XN_BIT    (28UL)
#define MPU_RASR3_R_XN_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_R_XN_ENA    ((uint32_t) 0x10000000UL)

#define MPU_RASR3_XN_MASK    ((uint32_t) 0x00000001UL)
#define MPU_RASR3_XN_DIS    ((uint32_t) 0x00000000UL)
#define MPU_RASR3_XN_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERDEFINES_H_ */

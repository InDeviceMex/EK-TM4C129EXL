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

#include <xDriver_MCU/Core/MPU/Peripheral/xHeader/MPU_Enum.h>

/**********************************************************************************************
************************************** 1 TYPER ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_TYPER_R_SEPARATE_MASK    ((UBase_t) 0x00000001UL)
#define MPU_TYPER_R_SEPARATE_BIT    (0UL)
#define MPU_TYPER_R_SEPARATE_UNIFIED    ((UBase_t) 0x00000000UL)
#define MPU_TYPER_R_SEPARATE_SEPARATE    ((UBase_t) 0x00000001UL)

#define MPU_TYPER_SEPARATE_MASK    ((UBase_t) 0x00000001UL)
#define MPU_TYPER_SEPARATE_UNIFIED    ((UBase_t) 0x00000000UL)
#define MPU_TYPER_SEPARATE_SEPARATE    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_TYPER_R_DREGION_MASK    ((UBase_t) 0x0000FF00UL)
#define MPU_TYPER_R_DREGION_BIT    (8UL)
#define MPU_TYPER_R_DREGION_D8    ((UBase_t) 0x00000800UL)
#define MPU_TYPER_R_DREGION_D16    ((UBase_t) 0x00000F00UL)

#define MPU_TYPER_DREGION_MASK    ((UBase_t) 0x000000FFUL)
#define MPU_TYPER_DREGION_D8    ((UBase_t) 0x00000008UL)
#define MPU_TYPER_DREGION_D16    ((UBase_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define MPU_TYPER_R_IREGION_MASK    ((UBase_t) 0x00FF0000UL)
#define MPU_TYPER_R_IREGION_BIT    (16UL)
#define MPU_TYPER_R_IREGION_I0    ((UBase_t) 0x00000000UL)

#define MPU_TYPER_IREGION_MASK    ((UBase_t) 0x000000FFUL)
#define MPU_TYPER_IREGION_I0    ((UBase_t) 0x00000000UL)
/*--------*/

/**********************************************************************************************
************************************** 2 CTRL ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_CTRL_R_ENABLE_MASK    ((UBase_t) 0x00000001UL)
#define MPU_CTRL_R_ENABLE_BIT    (0UL)
#define MPU_CTRL_R_ENABLE_DIS    ((UBase_t) 0x00000000UL)
#define MPU_CTRL_R_ENABLE_ENA    ((UBase_t) 0x00000001UL)

#define MPU_CTRL_ENABLE_MASK    ((UBase_t) 0x00000001UL)
#define MPU_CTRL_ENABLE_DIS    ((UBase_t) 0x00000000UL)
#define MPU_CTRL_ENABLE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_CTRL_R_HFNMIENA_MASK    ((UBase_t) 0x00000002UL)
#define MPU_CTRL_R_HFNMIENA_BIT    (1UL)
#define MPU_CTRL_R_HFNMIENA_DIS    ((UBase_t) 0x00000000UL)
#define MPU_CTRL_R_HFNMIENA_ENA    ((UBase_t) 0x00000002UL)

#define MPU_CTRL_HFNMIENA_MASK    ((UBase_t) 0x00000001UL)
#define MPU_CTRL_HFNMIENA_DIS    ((UBase_t) 0x00000000UL)
#define MPU_CTRL_HFNMIENA_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_CTRL_R_PRIVDEFENA_MASK    ((UBase_t) 0x00000004UL)
#define MPU_CTRL_R_PRIVDEFENA_BIT    (2UL)
#define MPU_CTRL_R_PRIVDEFENA_DIS    ((UBase_t) 0x00000000UL)
#define MPU_CTRL_R_PRIVDEFENA_ENA    ((UBase_t) 0x00000004UL)

#define MPU_CTRL_PRIVDEFENA_MASK    ((UBase_t) 0x00000001UL)
#define MPU_CTRL_PRIVDEFENA_DIS    ((UBase_t) 0x00000000UL)
#define MPU_CTRL_PRIVDEFENA_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/**********************************************************************************************
**************************************3 RNR ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RNR_R_REGION_MASK    ((UBase_t) 0x0000000FUL)
#define MPU_RNR_R_REGION_BIT    (0UL)
#define MPU_RNR_R_REGION_REG0    ((UBase_t) 0x00000000UL)
#define MPU_RNR_R_REGION_REG1    ((UBase_t) 0x00000001UL)
#define MPU_RNR_R_REGION_REG2    ((UBase_t) 0x00000002UL)
#define MPU_RNR_R_REGION_REG3    ((UBase_t) 0x00000003UL)
#define MPU_RNR_R_REGION_REG4    ((UBase_t) 0x00000004UL)
#define MPU_RNR_R_REGION_REG5    ((UBase_t) 0x00000005UL)
#define MPU_RNR_R_REGION_REG6    ((UBase_t) 0x00000006UL)
#define MPU_RNR_R_REGION_REG7    ((UBase_t) 0x00000007UL)
#define MPU_RNR_R_REGION_REG8    ((UBase_t) 0x00000008UL)
#define MPU_RNR_R_REGION_REG9    ((UBase_t) 0x00000009UL)
#define MPU_RNR_R_REGION_REG10    ((UBase_t) 0x0000000AUL)
#define MPU_RNR_R_REGION_REG11    ((UBase_t) 0x0000000BUL)
#define MPU_RNR_R_REGION_REG12    ((UBase_t) 0x0000000CUL)
#define MPU_RNR_R_REGION_REG13    ((UBase_t) 0x0000000DUL)
#define MPU_RNR_R_REGION_REG14    ((UBase_t) 0x0000000EUL)
#define MPU_RNR_R_REGION_REG15    ((UBase_t) 0x0000000FUL)

#define MPU_RNR_REGION_MASK    ((UBase_t) 0x0000000FUL)
#define MPU_RNR_REGION_REG0    ((UBase_t) 0x00000000UL)
#define MPU_RNR_REGION_REG1    ((UBase_t) 0x00000001UL)
#define MPU_RNR_REGION_REG2    ((UBase_t) 0x00000002UL)
#define MPU_RNR_REGION_REG3    ((UBase_t) 0x00000003UL)
#define MPU_RNR_REGION_REG4    ((UBase_t) 0x00000004UL)
#define MPU_RNR_REGION_REG5    ((UBase_t) 0x00000005UL)
#define MPU_RNR_REGION_REG6    ((UBase_t) 0x00000006UL)
#define MPU_RNR_REGION_REG7    ((UBase_t) 0x00000007UL)
#define MPU_RNR_REGION_REG8    ((UBase_t) 0x00000008UL)
#define MPU_RNR_REGION_REG9    ((UBase_t) 0x00000009UL)
#define MPU_RNR_REGION_REG10    ((UBase_t) 0x0000000AUL)
#define MPU_RNR_REGION_REG11    ((UBase_t) 0x0000000BUL)
#define MPU_RNR_REGION_REG12    ((UBase_t) 0x0000000CUL)
#define MPU_RNR_REGION_REG13    ((UBase_t) 0x0000000DUL)
#define MPU_RNR_REGION_REG14    ((UBase_t) 0x0000000EUL)
#define MPU_RNR_REGION_REG15    ((UBase_t) 0x0000000FUL)
/*--------*/

/**********************************************************************************************
**************************************4 RBAR ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RBAR_R_REGION_MASK    ((UBase_t) 0x0000000FUL)
#define MPU_RBAR_R_REGION_BIT    (0UL)
#define MPU_RBAR_R_REGION_REG0    ((UBase_t) 0x00000000UL)
#define MPU_RBAR_R_REGION_REG1    ((UBase_t) 0x00000001UL)
#define MPU_RBAR_R_REGION_REG2    ((UBase_t) 0x00000002UL)
#define MPU_RBAR_R_REGION_REG3    ((UBase_t) 0x00000003UL)
#define MPU_RBAR_R_REGION_REG4    ((UBase_t) 0x00000004UL)
#define MPU_RBAR_R_REGION_REG5    ((UBase_t) 0x00000005UL)
#define MPU_RBAR_R_REGION_REG6    ((UBase_t) 0x00000006UL)
#define MPU_RBAR_R_REGION_REG7    ((UBase_t) 0x00000007UL)
#define MPU_RBAR_R_REGION_REG8    ((UBase_t) 0x00000008UL)
#define MPU_RBAR_R_REGION_REG9    ((UBase_t) 0x00000009UL)
#define MPU_RBAR_R_REGION_REG10    ((UBase_t) 0x0000000AUL)
#define MPU_RBAR_R_REGION_REG11    ((UBase_t) 0x0000000BUL)
#define MPU_RBAR_R_REGION_REG12    ((UBase_t) 0x0000000CUL)
#define MPU_RBAR_R_REGION_REG13    ((UBase_t) 0x0000000DUL)
#define MPU_RBAR_R_REGION_REG14    ((UBase_t) 0x0000000EUL)
#define MPU_RBAR_R_REGION_REG15    ((UBase_t) 0x0000000FUL)

#define MPU_RBAR_REGION_MASK    ((UBase_t) 0x0000000FUL)
#define MPU_RBAR_REGION_REG0    ((UBase_t) 0x00000000UL)
#define MPU_RBAR_REGION_REG1    ((UBase_t) 0x00000001UL)
#define MPU_RBAR_REGION_REG2    ((UBase_t) 0x00000002UL)
#define MPU_RBAR_REGION_REG3    ((UBase_t) 0x00000003UL)
#define MPU_RBAR_REGION_REG4    ((UBase_t) 0x00000004UL)
#define MPU_RBAR_REGION_REG5    ((UBase_t) 0x00000005UL)
#define MPU_RBAR_REGION_REG6    ((UBase_t) 0x00000006UL)
#define MPU_RBAR_REGION_REG7    ((UBase_t) 0x00000007UL)
#define MPU_RBAR_REGION_REG8    ((UBase_t) 0x00000008UL)
#define MPU_RBAR_REGION_REG9    ((UBase_t) 0x00000009UL)
#define MPU_RBAR_REGION_REG10    ((UBase_t) 0x0000000AUL)
#define MPU_RBAR_REGION_REG11    ((UBase_t) 0x0000000BUL)
#define MPU_RBAR_REGION_REG12    ((UBase_t) 0x0000000CUL)
#define MPU_RBAR_REGION_REG13    ((UBase_t) 0x0000000DUL)
#define MPU_RBAR_REGION_REG14    ((UBase_t) 0x0000000EUL)
#define MPU_RBAR_REGION_REG15    ((UBase_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define MPU_RBAR_R_VALID_MASK    ((UBase_t) 0x00000010UL)
#define MPU_RBAR_R_VALID_BIT    (4UL)
#define MPU_RBAR_R_VALID_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RBAR_R_VALID_ENA    ((UBase_t) 0x00000010UL)

#define MPU_RBAR_VALID_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RBAR_VALID_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RBAR_VALID_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RBAR_R_ADDR_MASK    ((UBase_t) 0xFFFFFFE0UL)
#define MPU_RBAR_R_ADDR_BIT    (5UL)

#define MPU_RBAR_ADDR_MASK    ((UBase_t) 0x01FFFFFFUL)
/*--------*/

/**********************************************************************************************
**************************************5 RASR ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RASR_R_ENABLE_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR_R_ENABLE_BIT    (0UL)
#define MPU_RASR_R_ENABLE_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_ENABLE_ENA    ((UBase_t) 0x00000001UL)

#define MPU_RASR_ENABLE_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR_ENABLE_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR_ENABLE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/


/*--------*/
#define MPU_RASR_R_SIZE_MASK    ((UBase_t) 0x0000003EUL)
#define MPU_RASR_R_SIZE_BIT    (1UL)
#define MPU_RASR_R_SIZE_32B    ((UBase_t) 0x00000008UL)
#define MPU_RASR_R_SIZE_1KB    ((UBase_t) 0x00000012UL)
#define MPU_RASR_R_SIZE_1MB    ((UBase_t) 0x00000026UL)
#define MPU_RASR_R_SIZE_1GB    ((UBase_t) 0x0000003AUL)
#define MPU_RASR_R_SIZE_4GB    ((UBase_t) 0x0000003EUL)

#define MPU_RASR_SIZE_MASK    ((UBase_t) 0x0000001FUL)
#define MPU_RASR_SIZE_32B    ((UBase_t) 0x00000004UL)
#define MPU_RASR_SIZE_1KB    ((UBase_t) 0x00000009UL)
#define MPU_RASR_SIZE_1MB    ((UBase_t) 0x00000013UL)
#define MPU_RASR_SIZE_1GB    ((UBase_t) 0x0000001DUL)
#define MPU_RASR_SIZE_4GB    ((UBase_t) 0x0000001FUL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD_MASK    ((UBase_t) 0x0000FF00UL)
#define MPU_RASR_R_SRD_BIT    (8UL)
#define MPU_RASR_R_SRD_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_SRD_DIS    ((UBase_t) 0x0000FF00UL)

#define MPU_RASR_SRD_MASK    ((UBase_t) 0x000000FFUL)
#define MPU_RASR_SRD_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_SRD_DIS    ((UBase_t) 0x000000FFUL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD0_MASK    ((UBase_t) 0x00000100UL)
#define MPU_RASR_R_SRD0_BIT    (8UL)
#define MPU_RASR_R_SRD0_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_SRD0_DIS    ((UBase_t) 0x00000100UL)

#define MPU_RASR_SRD0_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR_SRD0_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_SRD0_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD1_MASK    ((UBase_t) 0x00000200UL)
#define MPU_RASR_R_SRD1_BIT    (9UL)
#define MPU_RASR_R_SRD1_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_SRD1_DIS    ((UBase_t) 0x00000200UL)

#define MPU_RASR_SRD1_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR_SRD1_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_SRD1_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD2_MASK    ((UBase_t) 0x00000400UL)
#define MPU_RASR_R_SRD2_BIT    (10UL)
#define MPU_RASR_R_SRD2_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_SRD2_DIS    ((UBase_t) 0x00000400UL)

#define MPU_RASR_SRD2_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR_SRD2_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_SRD2_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD3_MASK    ((UBase_t) 0x00000800UL)
#define MPU_RASR_R_SRD3_BIT    (11UL)
#define MPU_RASR_R_SRD3_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_SRD3_DIS    ((UBase_t) 0x00000800UL)

#define MPU_RASR_SRD3_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR_SRD3_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_SRD3_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD4_MASK    ((UBase_t) 0x00001000UL)
#define MPU_RASR_R_SRD4_BIT    (12UL)
#define MPU_RASR_R_SRD4_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_SRD4_DIS    ((UBase_t) 0x00001000UL)

#define MPU_RASR_SRD4_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR_SRD4_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_SRD4_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD5_MASK    ((UBase_t) 0x00002000UL)
#define MPU_RASR_R_SRD5_BIT    (13UL)
#define MPU_RASR_R_SRD5_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_SRD5_DIS    ((UBase_t) 0x00002000UL)

#define MPU_RASR_SRD5_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR_SRD5_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_SRD5_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD6_MASK    ((UBase_t) 0x00004000UL)
#define MPU_RASR_R_SRD6_BIT    (14UL)
#define MPU_RASR_R_SRD6_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_SRD6_DIS    ((UBase_t) 0x00004000UL)

#define MPU_RASR_SRD6_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR_SRD6_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_SRD6_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD7_MASK    ((UBase_t) 0x00008000UL)
#define MPU_RASR_R_SRD7_BIT    (15UL)
#define MPU_RASR_R_SRD7_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_SRD7_DIS    ((UBase_t) 0x00008000UL)

#define MPU_RASR_SRD7_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR_SRD7_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_SRD7_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_B_MASK    ((UBase_t) 0x00010000UL)
#define MPU_RASR_R_B_BIT    (16UL)
#define MPU_RASR_R_B_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_B_ENA    ((UBase_t) 0x00010000UL)

#define MPU_RASR_B_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR_B_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR_B_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_C_MASK    ((UBase_t) 0x00020000UL)
#define MPU_RASR_R_C_BIT    (17UL)
#define MPU_RASR_R_C_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_C_ENA    ((UBase_t) 0x00020000UL)

#define MPU_RASR_C_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR_C_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR_C_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_S_MASK    ((UBase_t) 0x00040000UL)
#define MPU_RASR_R_S_BIT    (18UL)
#define MPU_RASR_R_S_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_S_ENA    ((UBase_t) 0x00040000UL)

#define MPU_RASR_S_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR_S_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR_S_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_TEX_MASK    ((UBase_t) 0x00380000UL)
#define MPU_RASR_R_TEX_BIT    (19UL)
#define MPU_RASR_R_TEX_NC    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_TEX_WB_WRA    ((UBase_t) 0x00080000UL)
#define MPU_RASR_R_TEX_WT_NWA    ((UBase_t) 0x00100000UL)
#define MPU_RASR_R_TEX_WB_NWA    ((UBase_t) 0x00180000UL)

#define MPU_RASR_TEX_MASK    ((UBase_t) 0x00000007UL)
#define MPU_RASR_TEX_NC    ((UBase_t) 0x00000000UL)
#define MPU_RASR_TEX_WB_WRA    ((UBase_t) 0x00000001UL)
#define MPU_RASR_TEX_WT_NWA    ((UBase_t) 0x00000002UL)
#define MPU_RASR_TEX_WB_NWA    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_AP_MASK    ((UBase_t) 0x07000000UL)
#define MPU_RASR_R_AP_BIT    (24UL)
#define MPU_RASR_R_AP_NANA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_AP_RWNA    ((UBase_t) 0x01000000UL)
#define MPU_RASR_R_AP_RWRO    ((UBase_t) 0x02000000UL)
#define MPU_RASR_R_AP_RWRW    ((UBase_t) 0x03000000UL)
#define MPU_RASR_R_AP_RONA    ((UBase_t) 0x05000000UL)
#define MPU_RASR_R_AP_RORO    ((UBase_t) 0x06000000UL)

#define MPU_RASR_AP_MASK    ((UBase_t) 0x00000007UL)
#define MPU_RASR_AP_NANA    ((UBase_t) 0x00000000UL)
#define MPU_RASR_AP_RWNA    ((UBase_t) 0x00000001UL)
#define MPU_RASR_AP_RWRO    ((UBase_t) 0x00000002UL)
#define MPU_RASR_AP_RWRW    ((UBase_t) 0x00000003UL)
#define MPU_RASR_AP_RONA    ((UBase_t) 0x00000005UL)
#define MPU_RASR_AP_RORO    ((UBase_t) 0x00000006UL)
/*--------*/

/*--------*/
#define MPU_RASR_R_XN_MASK    ((UBase_t) 0x10000000UL)
#define MPU_RASR_R_XN_BIT    (28UL)
#define MPU_RASR_R_XN_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR_R_XN_ENA    ((UBase_t) 0x10000000UL)

#define MPU_RASR_XN_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR_XN_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR_XN_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/**********************************************************************************************
**************************************6 RBAR1 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RBAR1_R_REGION_MASK    ((UBase_t) 0x0000000FUL)
#define MPU_RBAR1_R_REGION_BIT    (0UL)
#define MPU_RBAR1_R_REGION_REG0    ((UBase_t) 0x00000000UL)
#define MPU_RBAR1_R_REGION_REG1    ((UBase_t) 0x00000001UL)
#define MPU_RBAR1_R_REGION_REG2    ((UBase_t) 0x00000002UL)
#define MPU_RBAR1_R_REGION_REG3    ((UBase_t) 0x00000003UL)
#define MPU_RBAR1_R_REGION_REG4    ((UBase_t) 0x00000004UL)
#define MPU_RBAR1_R_REGION_REG5    ((UBase_t) 0x00000005UL)
#define MPU_RBAR1_R_REGION_REG6    ((UBase_t) 0x00000006UL)
#define MPU_RBAR1_R_REGION_REG7    ((UBase_t) 0x00000007UL)
#define MPU_RBAR1_R_REGION_REG8    ((UBase_t) 0x00000008UL)
#define MPU_RBAR1_R_REGION_REG9    ((UBase_t) 0x00000009UL)
#define MPU_RBAR1_R_REGION_REG10    ((UBase_t) 0x0000000AUL)
#define MPU_RBAR1_R_REGION_REG11    ((UBase_t) 0x0000000BUL)
#define MPU_RBAR1_R_REGION_REG12    ((UBase_t) 0x0000000CUL)
#define MPU_RBAR1_R_REGION_REG13    ((UBase_t) 0x0000000DUL)
#define MPU_RBAR1_R_REGION_REG14    ((UBase_t) 0x0000000EUL)
#define MPU_RBAR1_R_REGION_REG15    ((UBase_t) 0x0000000FUL)

#define MPU_RBAR1_REGION_MASK    ((UBase_t) 0x0000000FUL)
#define MPU_RBAR1_REGION_REG0    ((UBase_t) 0x00000000UL)
#define MPU_RBAR1_REGION_REG1    ((UBase_t) 0x00000001UL)
#define MPU_RBAR1_REGION_REG2    ((UBase_t) 0x00000002UL)
#define MPU_RBAR1_REGION_REG3    ((UBase_t) 0x00000003UL)
#define MPU_RBAR1_REGION_REG4    ((UBase_t) 0x00000004UL)
#define MPU_RBAR1_REGION_REG5    ((UBase_t) 0x00000005UL)
#define MPU_RBAR1_REGION_REG6    ((UBase_t) 0x00000006UL)
#define MPU_RBAR1_REGION_REG7    ((UBase_t) 0x00000007UL)
#define MPU_RBAR1_REGION_REG8    ((UBase_t) 0x00000008UL)
#define MPU_RBAR1_REGION_REG9    ((UBase_t) 0x00000009UL)
#define MPU_RBAR1_REGION_REG10    ((UBase_t) 0x0000000AUL)
#define MPU_RBAR1_REGION_REG11    ((UBase_t) 0x0000000BUL)
#define MPU_RBAR1_REGION_REG12    ((UBase_t) 0x0000000CUL)
#define MPU_RBAR1_REGION_REG13    ((UBase_t) 0x0000000DUL)
#define MPU_RBAR1_REGION_REG14    ((UBase_t) 0x0000000EUL)
#define MPU_RBAR1_REGION_REG15    ((UBase_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define MPU_RBAR1_R_VALID_MASK    ((UBase_t) 0x00000010UL)
#define MPU_RBAR1_R_VALID_BIT    (4UL)
#define MPU_RBAR1_R_VALID_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RBAR1_R_VALID_ENA    ((UBase_t) 0x00000010UL)

#define MPU_RBAR1_VALID_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RBAR1_VALID_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RBAR1_VALID_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RBAR1_R_ADDR_MASK    ((UBase_t) 0xFFFFFFE0UL)
#define MPU_RBAR1_R_ADDR_BIT    (5UL)

#define MPU_RBAR1_ADDR_MASK    ((UBase_t) 0x01FFFFFFUL)
/*--------*/

/**********************************************************************************************
**************************************7 RASR1 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RASR1_R_ENABLE_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_R_ENABLE_BIT    (0UL)
#define MPU_RASR1_R_ENABLE_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_R_ENABLE_ENA    ((UBase_t) 0x00000001UL)

#define MPU_RASR1_ENABLE_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_ENABLE_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_ENABLE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SIZE_MASK    ((UBase_t) 0x0000003EUL)
#define MPU_RASR1_R_SIZE_BIT    (1UL)
#define MPU_RASR1_R_SIZE_32B    ((UBase_t) 0x00000008UL)
#define MPU_RASR1_R_SIZE_1KB    ((UBase_t) 0x00000012UL)
#define MPU_RASR1_R_SIZE_1MB    ((UBase_t) 0x00000026UL)
#define MPU_RASR1_R_SIZE_1GB    ((UBase_t) 0x0000003AUL)
#define MPU_RASR1_R_SIZE_4GB    ((UBase_t) 0x0000003EUL)

#define MPU_RASR1_SIZE_MASK    ((UBase_t) 0x0000001FUL)
#define MPU_RASR1_SIZE_32B    ((UBase_t) 0x00000004UL)
#define MPU_RASR1_SIZE_1KB    ((UBase_t) 0x00000009UL)
#define MPU_RASR1_SIZE_1MB    ((UBase_t) 0x00000013UL)
#define MPU_RASR1_SIZE_1GB    ((UBase_t) 0x0000001DUL)
#define MPU_RASR1_SIZE_4GB    ((UBase_t) 0x0000001FUL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD0_MASK    ((UBase_t) 0x00000100UL)
#define MPU_RASR1_R_SRD0_BIT    (8UL)
#define MPU_RASR1_R_SRD0_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_R_SRD0_DIS    ((UBase_t) 0x00000100UL)

#define MPU_RASR1_SRD0_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_SRD0_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_SRD0_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD1_MASK    ((UBase_t) 0x00000200UL)
#define MPU_RASR1_R_SRD1_BIT    (9UL)
#define MPU_RASR1_R_SRD1_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_R_SRD1_DIS    ((UBase_t) 0x00000200UL)

#define MPU_RASR1_SRD1_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_SRD1_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_SRD1_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD2_MASK    ((UBase_t) 0x00000400UL)
#define MPU_RASR1_R_SRD2_BIT    (10UL)
#define MPU_RASR1_R_SRD2_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_R_SRD2_DIS    ((UBase_t) 0x00000400UL)

#define MPU_RASR1_SRD2_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_SRD2_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_SRD2_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD3_MASK    ((UBase_t) 0x00000800UL)
#define MPU_RASR1_R_SRD3_BIT    (11UL)
#define MPU_RASR1_R_SRD3_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_R_SRD3_DIS    ((UBase_t) 0x00000800UL)

#define MPU_RASR1_SRD3_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_SRD3_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_SRD3_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD4_MASK    ((UBase_t) 0x00001000UL)
#define MPU_RASR1_R_SRD4_BIT    (12UL)
#define MPU_RASR1_R_SRD4_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_R_SRD4_DIS    ((UBase_t) 0x00001000UL)

#define MPU_RASR1_SRD4_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_SRD4_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_SRD4_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD5_MASK    ((UBase_t) 0x00002000UL)
#define MPU_RASR1_R_SRD5_BIT    (13UL)
#define MPU_RASR1_R_SRD5_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_R_SRD5_DIS    ((UBase_t) 0x00002000UL)

#define MPU_RASR1_SRD5_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_SRD5_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_SRD5_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD6_MASK    ((UBase_t) 0x00004000UL)
#define MPU_RASR1_R_SRD6_BIT    (14UL)
#define MPU_RASR1_R_SRD6_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_R_SRD6_DIS    ((UBase_t) 0x00004000UL)

#define MPU_RASR1_SRD6_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_SRD6_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_SRD6_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD7_MASK    ((UBase_t) 0x00008000UL)
#define MPU_RASR1_R_SRD7_BIT    (15UL)
#define MPU_RASR1_R_SRD7_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_R_SRD7_DIS    ((UBase_t) 0x00008000UL)

#define MPU_RASR1_SRD7_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_SRD7_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_SRD7_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_B_MASK    ((UBase_t) 0x00010000UL)
#define MPU_RASR1_R_B_BIT    (16UL)
#define MPU_RASR1_R_B_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_R_B_ENA    ((UBase_t) 0x00010000UL)

#define MPU_RASR1_B_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_B_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_B_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_C_MASK    ((UBase_t) 0x00020000UL)
#define MPU_RASR1_R_C_BIT    (17UL)
#define MPU_RASR1_R_C_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_R_C_ENA    ((UBase_t) 0x00020000UL)

#define MPU_RASR1_C_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_C_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_C_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_S_MASK    ((UBase_t) 0x00040000UL)
#define MPU_RASR1_R_S_BIT    (18UL)
#define MPU_RASR1_R_S_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_R_S_ENA    ((UBase_t) 0x00040000UL)

#define MPU_RASR1_S_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_S_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_S_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_TEX_MASK    ((UBase_t) 0x00380000UL)
#define MPU_RASR1_R_TEX_BIT    (19UL)
#define MPU_RASR1_R_TEX_NC    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_R_TEX_WB_WRA    ((UBase_t) 0x00080000UL)
#define MPU_RASR1_R_TEX_WT_NWA    ((UBase_t) 0x00100000UL)
#define MPU_RASR1_R_TEX_WB_NWA    ((UBase_t) 0x00180000UL)

#define MPU_RASR1_TEX_MASK    ((UBase_t) 0x00000007UL)
#define MPU_RASR1_TEX_NC    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_TEX_WB_WRA    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_TEX_WT_NWA    ((UBase_t) 0x00000002UL)
#define MPU_RASR1_TEX_WB_NWA    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_AP_MASK    ((UBase_t) 0x07000000UL)
#define MPU_RASR1_R_AP_BIT    (24UL)
#define MPU_RASR1_R_AP_NANA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_R_AP_RWNA    ((UBase_t) 0x01000000UL)
#define MPU_RASR1_R_AP_RWRO    ((UBase_t) 0x02000000UL)
#define MPU_RASR1_R_AP_RWRW    ((UBase_t) 0x03000000UL)
#define MPU_RASR1_R_AP_RONA    ((UBase_t) 0x05000000UL)
#define MPU_RASR1_R_AP_RORO    ((UBase_t) 0x06000000UL)

#define MPU_RASR1_AP_MASK    ((UBase_t) 0x00000007UL)
#define MPU_RASR1_AP_NANA    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_AP_RWNA    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_AP_RWRO    ((UBase_t) 0x00000002UL)
#define MPU_RASR1_AP_RWRW    ((UBase_t) 0x00000003UL)
#define MPU_RASR1_AP_RONA    ((UBase_t) 0x00000005UL)
#define MPU_RASR1_AP_RORO    ((UBase_t) 0x00000006UL)
/*--------*/

/*--------*/
#define MPU_RASR1_R_XN_MASK    ((UBase_t) 0x10000000UL)
#define MPU_RASR1_R_XN_BIT    (28UL)
#define MPU_RASR1_R_XN_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_R_XN_ENA    ((UBase_t) 0x10000000UL)

#define MPU_RASR1_XN_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR1_XN_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR1_XN_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/**********************************************************************************************
**************************************8 RBAR2 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RBAR2_R_REGION_MASK    ((UBase_t) 0x0000000FUL)
#define MPU_RBAR2_R_REGION_BIT    (0UL)
#define MPU_RBAR2_R_REGION_REG0    ((UBase_t) 0x00000000UL)
#define MPU_RBAR2_R_REGION_REG1    ((UBase_t) 0x00000001UL)
#define MPU_RBAR2_R_REGION_REG2    ((UBase_t) 0x00000002UL)
#define MPU_RBAR2_R_REGION_REG3    ((UBase_t) 0x00000003UL)
#define MPU_RBAR2_R_REGION_REG4    ((UBase_t) 0x00000004UL)
#define MPU_RBAR2_R_REGION_REG5    ((UBase_t) 0x00000005UL)
#define MPU_RBAR2_R_REGION_REG6    ((UBase_t) 0x00000006UL)
#define MPU_RBAR2_R_REGION_REG7    ((UBase_t) 0x00000007UL)
#define MPU_RBAR2_R_REGION_REG8    ((UBase_t) 0x00000008UL)
#define MPU_RBAR2_R_REGION_REG9    ((UBase_t) 0x00000009UL)
#define MPU_RBAR2_R_REGION_REG10    ((UBase_t) 0x0000000AUL)
#define MPU_RBAR2_R_REGION_REG11    ((UBase_t) 0x0000000BUL)
#define MPU_RBAR2_R_REGION_REG12    ((UBase_t) 0x0000000CUL)
#define MPU_RBAR2_R_REGION_REG13    ((UBase_t) 0x0000000DUL)
#define MPU_RBAR2_R_REGION_REG14    ((UBase_t) 0x0000000EUL)
#define MPU_RBAR2_R_REGION_REG15    ((UBase_t) 0x0000000FUL)

#define MPU_RBAR2_REGION_MASK    ((UBase_t) 0x0000000FUL)
#define MPU_RBAR2_REGION_REG0    ((UBase_t) 0x00000000UL)
#define MPU_RBAR2_REGION_REG1    ((UBase_t) 0x00000001UL)
#define MPU_RBAR2_REGION_REG2    ((UBase_t) 0x00000002UL)
#define MPU_RBAR2_REGION_REG3    ((UBase_t) 0x00000003UL)
#define MPU_RBAR2_REGION_REG4    ((UBase_t) 0x00000004UL)
#define MPU_RBAR2_REGION_REG5    ((UBase_t) 0x00000005UL)
#define MPU_RBAR2_REGION_REG6    ((UBase_t) 0x00000006UL)
#define MPU_RBAR2_REGION_REG7    ((UBase_t) 0x00000007UL)
#define MPU_RBAR2_REGION_REG8    ((UBase_t) 0x00000008UL)
#define MPU_RBAR2_REGION_REG9    ((UBase_t) 0x00000009UL)
#define MPU_RBAR2_REGION_REG10    ((UBase_t) 0x0000000AUL)
#define MPU_RBAR2_REGION_REG11    ((UBase_t) 0x0000000BUL)
#define MPU_RBAR2_REGION_REG12    ((UBase_t) 0x0000000CUL)
#define MPU_RBAR2_REGION_REG13    ((UBase_t) 0x0000000DUL)
#define MPU_RBAR2_REGION_REG14    ((UBase_t) 0x0000000EUL)
#define MPU_RBAR2_REGION_REG15    ((UBase_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define MPU_RBAR2_R_VALID_MASK    ((UBase_t) 0x00000010UL)
#define MPU_RBAR2_R_VALID_BIT    (4UL)
#define MPU_RBAR2_R_VALID_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RBAR2_R_VALID_ENA    ((UBase_t) 0x00000010UL)

#define MPU_RBAR2_VALID_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RBAR2_VALID_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RBAR2_VALID_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RBAR2_R_ADDR_MASK    ((UBase_t) 0xFFFFFFE0UL)
#define MPU_RBAR2_R_ADDR_BIT    (5UL)

#define MPU_RBAR2_ADDR_MASK    ((UBase_t) 0x01FFFFFFUL)
/*--------*/

/**********************************************************************************************
**************************************9 RASR2 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RASR2_R_ENABLE_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_R_ENABLE_BIT    (0UL)
#define MPU_RASR2_R_ENABLE_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_R_ENABLE_ENA    ((UBase_t) 0x00000001UL)

#define MPU_RASR2_ENABLE_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_ENABLE_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_ENABLE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SIZE_MASK    ((UBase_t) 0x0000003EUL)
#define MPU_RASR2_R_SIZE_BIT    (1UL)
#define MPU_RASR2_R_SIZE_32B    ((UBase_t) 0x00000008UL)
#define MPU_RASR2_R_SIZE_1KB    ((UBase_t) 0x00000012UL)
#define MPU_RASR2_R_SIZE_1MB    ((UBase_t) 0x00000026UL)
#define MPU_RASR2_R_SIZE_1GB    ((UBase_t) 0x0000003AUL)
#define MPU_RASR2_R_SIZE_4GB    ((UBase_t) 0x0000003EUL)

#define MPU_RASR2_SIZE_MASK    ((UBase_t) 0x0000001FUL)
#define MPU_RASR2_SIZE_32B    ((UBase_t) 0x00000004UL)
#define MPU_RASR2_SIZE_1KB    ((UBase_t) 0x00000009UL)
#define MPU_RASR2_SIZE_1MB    ((UBase_t) 0x00000013UL)
#define MPU_RASR2_SIZE_1GB    ((UBase_t) 0x0000001DUL)
#define MPU_RASR2_SIZE_4GB    ((UBase_t) 0x0000001FUL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD0_MASK    ((UBase_t) 0x00000100UL)
#define MPU_RASR2_R_SRD0_BIT    (8UL)
#define MPU_RASR2_R_SRD0_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_R_SRD0_DIS    ((UBase_t) 0x00000100UL)

#define MPU_RASR2_SRD0_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_SRD0_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_SRD0_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD1_MASK    ((UBase_t) 0x00000200UL)
#define MPU_RASR2_R_SRD1_BIT    (9UL)
#define MPU_RASR2_R_SRD1_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_R_SRD1_DIS    ((UBase_t) 0x00000200UL)

#define MPU_RASR2_SRD1_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_SRD1_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_SRD1_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD2_MASK    ((UBase_t) 0x00000400UL)
#define MPU_RASR2_R_SRD2_BIT    (10UL)
#define MPU_RASR2_R_SRD2_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_R_SRD2_DIS    ((UBase_t) 0x00000400UL)

#define MPU_RASR2_SRD2_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_SRD2_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_SRD2_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD3_MASK    ((UBase_t) 0x00000800UL)
#define MPU_RASR2_R_SRD3_BIT    (11UL)
#define MPU_RASR2_R_SRD3_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_R_SRD3_DIS    ((UBase_t) 0x00000800UL)

#define MPU_RASR2_SRD3_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_SRD3_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_SRD3_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD4_MASK    ((UBase_t) 0x00001000UL)
#define MPU_RASR2_R_SRD4_BIT    (12UL)
#define MPU_RASR2_R_SRD4_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_R_SRD4_DIS    ((UBase_t) 0x00001000UL)

#define MPU_RASR2_SRD4_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_SRD4_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_SRD4_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD5_MASK    ((UBase_t) 0x00002000UL)
#define MPU_RASR2_R_SRD5_BIT    (13UL)
#define MPU_RASR2_R_SRD5_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_R_SRD5_DIS    ((UBase_t) 0x00002000UL)

#define MPU_RASR2_SRD5_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_SRD5_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_SRD5_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD6_MASK    ((UBase_t) 0x00004000UL)
#define MPU_RASR2_R_SRD6_BIT    (14UL)
#define MPU_RASR2_R_SRD6_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_R_SRD6_DIS    ((UBase_t) 0x00004000UL)

#define MPU_RASR2_SRD6_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_SRD6_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_SRD6_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD7_MASK    ((UBase_t) 0x00008000UL)
#define MPU_RASR2_R_SRD7_BIT    (15UL)
#define MPU_RASR2_R_SRD7_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_R_SRD7_DIS    ((UBase_t) 0x00008000UL)

#define MPU_RASR2_SRD7_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_SRD7_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_SRD7_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_B_MASK    ((UBase_t) 0x00010000UL)
#define MPU_RASR2_R_B_BIT    (16UL)
#define MPU_RASR2_R_B_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_R_B_ENA    ((UBase_t) 0x00010000UL)

#define MPU_RASR2_B_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_B_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_B_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_C_MASK    ((UBase_t) 0x00020000UL)
#define MPU_RASR2_R_C_BIT    (17UL)
#define MPU_RASR2_R_C_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_R_C_ENA    ((UBase_t) 0x00020000UL)

#define MPU_RASR2_C_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_C_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_C_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_S_MASK    ((UBase_t) 0x00040000UL)
#define MPU_RASR2_R_S_BIT    (18UL)
#define MPU_RASR2_R_S_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_R_S_ENA    ((UBase_t) 0x00040000UL)

#define MPU_RASR2_S_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_S_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_S_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_TEX_MASK    ((UBase_t) 0x00380000UL)
#define MPU_RASR2_R_TEX_BIT    (19UL)
#define MPU_RASR2_R_TEX_NC    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_R_TEX_WB_WRA    ((UBase_t) 0x00080000UL)
#define MPU_RASR2_R_TEX_WT_NWA    ((UBase_t) 0x00100000UL)
#define MPU_RASR2_R_TEX_WB_NWA    ((UBase_t) 0x00180000UL)

#define MPU_RASR2_TEX_MASK    ((UBase_t) 0x00000007UL)
#define MPU_RASR2_TEX_NC    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_TEX_WB_WRA    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_TEX_WT_NWA    ((UBase_t) 0x00000002UL)
#define MPU_RASR2_TEX_WB_NWA    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_AP_MASK    ((UBase_t) 0x07000000UL)
#define MPU_RASR2_R_AP_BIT    (24UL)
#define MPU_RASR2_R_AP_NANA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_R_AP_RWNA    ((UBase_t) 0x01000000UL)
#define MPU_RASR2_R_AP_RWRO    ((UBase_t) 0x02000000UL)
#define MPU_RASR2_R_AP_RWRW    ((UBase_t) 0x03000000UL)
#define MPU_RASR2_R_AP_RONA    ((UBase_t) 0x05000000UL)
#define MPU_RASR2_R_AP_RORO    ((UBase_t) 0x06000000UL)

#define MPU_RASR2_AP_MASK    ((UBase_t) 0x00000007UL)
#define MPU_RASR2_AP_NANA    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_AP_RWNA    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_AP_RWRO    ((UBase_t) 0x00000002UL)
#define MPU_RASR2_AP_RWRW    ((UBase_t) 0x00000003UL)
#define MPU_RASR2_AP_RONA    ((UBase_t) 0x00000005UL)
#define MPU_RASR2_AP_RORO    ((UBase_t) 0x00000006UL)
/*--------*/

/*--------*/
#define MPU_RASR2_R_XN_MASK    ((UBase_t) 0x10000000UL)
#define MPU_RASR2_R_XN_BIT    (28UL)
#define MPU_RASR2_R_XN_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_R_XN_ENA    ((UBase_t) 0x10000000UL)

#define MPU_RASR2_XN_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR2_XN_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR2_XN_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/**********************************************************************************************
**************************************10 RBAR3 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RBAR3_R_REGION_MASK    ((UBase_t) 0x0000000FUL)
#define MPU_RBAR3_R_REGION_BIT    (0UL)
#define MPU_RBAR3_R_REGION_REG0    ((UBase_t) 0x00000000UL)
#define MPU_RBAR3_R_REGION_REG1    ((UBase_t) 0x00000001UL)
#define MPU_RBAR3_R_REGION_REG2    ((UBase_t) 0x00000002UL)
#define MPU_RBAR3_R_REGION_REG3    ((UBase_t) 0x00000003UL)
#define MPU_RBAR3_R_REGION_REG4    ((UBase_t) 0x00000004UL)
#define MPU_RBAR3_R_REGION_REG5    ((UBase_t) 0x00000005UL)
#define MPU_RBAR3_R_REGION_REG6    ((UBase_t) 0x00000006UL)
#define MPU_RBAR3_R_REGION_REG7    ((UBase_t) 0x00000007UL)
#define MPU_RBAR3_R_REGION_REG8    ((UBase_t) 0x00000008UL)
#define MPU_RBAR3_R_REGION_REG9    ((UBase_t) 0x00000009UL)
#define MPU_RBAR3_R_REGION_REG10    ((UBase_t) 0x0000000AUL)
#define MPU_RBAR3_R_REGION_REG11    ((UBase_t) 0x0000000BUL)
#define MPU_RBAR3_R_REGION_REG12    ((UBase_t) 0x0000000CUL)
#define MPU_RBAR3_R_REGION_REG13    ((UBase_t) 0x0000000DUL)
#define MPU_RBAR3_R_REGION_REG14    ((UBase_t) 0x0000000EUL)
#define MPU_RBAR3_R_REGION_REG15    ((UBase_t) 0x0000000FUL)

#define MPU_RBAR3_REGION_MASK    ((UBase_t) 0x0000000FUL)
#define MPU_RBAR3_REGION_REG0    ((UBase_t) 0x00000000UL)
#define MPU_RBAR3_REGION_REG1    ((UBase_t) 0x00000001UL)
#define MPU_RBAR3_REGION_REG2    ((UBase_t) 0x00000002UL)
#define MPU_RBAR3_REGION_REG3    ((UBase_t) 0x00000003UL)
#define MPU_RBAR3_REGION_REG4    ((UBase_t) 0x00000004UL)
#define MPU_RBAR3_REGION_REG5    ((UBase_t) 0x00000005UL)
#define MPU_RBAR3_REGION_REG6    ((UBase_t) 0x00000006UL)
#define MPU_RBAR3_REGION_REG7    ((UBase_t) 0x00000007UL)
#define MPU_RBAR3_REGION_REG8    ((UBase_t) 0x00000008UL)
#define MPU_RBAR3_REGION_REG9    ((UBase_t) 0x00000009UL)
#define MPU_RBAR3_REGION_REG10    ((UBase_t) 0x0000000AUL)
#define MPU_RBAR3_REGION_REG11    ((UBase_t) 0x0000000BUL)
#define MPU_RBAR3_REGION_REG12    ((UBase_t) 0x0000000CUL)
#define MPU_RBAR3_REGION_REG13    ((UBase_t) 0x0000000DUL)
#define MPU_RBAR3_REGION_REG14    ((UBase_t) 0x0000000EUL)
#define MPU_RBAR3_REGION_REG15    ((UBase_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define MPU_RBAR3_R_VALID_MASK    ((UBase_t) 0x00000010UL)
#define MPU_RBAR3_R_VALID_BIT    (4UL)
#define MPU_RBAR3_R_VALID_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RBAR3_R_VALID_ENA    ((UBase_t) 0x00000010UL)

#define MPU_RBAR3_VALID_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RBAR3_VALID_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RBAR3_VALID_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RBAR3_R_ADDR_MASK    ((UBase_t) 0xFFFFFFE0UL)
#define MPU_RBAR3_R_ADDR_BIT    (5UL)

#define MPU_RBAR3_ADDR_MASK    ((UBase_t) 0x01FFFFFFUL)
/*--------*/

/**********************************************************************************************
**************************************11 RASR3 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RASR3_R_ENABLE_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_R_ENABLE_BIT    (0UL)
#define MPU_RASR3_R_ENABLE_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_R_ENABLE_ENA    ((UBase_t) 0x00000001UL)

#define MPU_RASR3_ENABLE_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_ENABLE_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_ENABLE_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SIZE_MASK    ((UBase_t) 0x0000003EUL)
#define MPU_RASR3_R_SIZE_BIT    (1UL)
#define MPU_RASR3_R_SIZE_32B    ((UBase_t) 0x00000008UL)
#define MPU_RASR3_R_SIZE_1KB    ((UBase_t) 0x00000012UL)
#define MPU_RASR3_R_SIZE_1MB    ((UBase_t) 0x00000026UL)
#define MPU_RASR3_R_SIZE_1GB    ((UBase_t) 0x0000003AUL)
#define MPU_RASR3_R_SIZE_4GB    ((UBase_t) 0x0000003EUL)

#define MPU_RASR3_SIZE_MASK    ((UBase_t) 0x0000001FUL)
#define MPU_RASR3_SIZE_32B    ((UBase_t) 0x00000004UL)
#define MPU_RASR3_SIZE_1KB    ((UBase_t) 0x00000009UL)
#define MPU_RASR3_SIZE_1MB    ((UBase_t) 0x00000013UL)
#define MPU_RASR3_SIZE_1GB    ((UBase_t) 0x0000001DUL)
#define MPU_RASR3_SIZE_4GB    ((UBase_t) 0x0000001FUL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD0_MASK    ((UBase_t) 0x00000100UL)
#define MPU_RASR3_R_SRD0_BIT    (8UL)
#define MPU_RASR3_R_SRD0_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_R_SRD0_DIS    ((UBase_t) 0x00000100UL)

#define MPU_RASR3_SRD0_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_SRD0_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_SRD0_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD1_MASK    ((UBase_t) 0x00000200UL)
#define MPU_RASR3_R_SRD1_BIT    (9UL)
#define MPU_RASR3_R_SRD1_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_R_SRD1_DIS    ((UBase_t) 0x00000200UL)

#define MPU_RASR3_SRD1_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_SRD1_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_SRD1_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD2_MASK    ((UBase_t) 0x00000400UL)
#define MPU_RASR3_R_SRD2_BIT    (10UL)
#define MPU_RASR3_R_SRD2_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_R_SRD2_DIS    ((UBase_t) 0x00000400UL)

#define MPU_RASR3_SRD2_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_SRD2_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_SRD2_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD3_MASK    ((UBase_t) 0x00000800UL)
#define MPU_RASR3_R_SRD3_BIT    (11UL)
#define MPU_RASR3_R_SRD3_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_R_SRD3_DIS    ((UBase_t) 0x00000800UL)

#define MPU_RASR3_SRD3_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_SRD3_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_SRD3_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD4_MASK    ((UBase_t) 0x00001000UL)
#define MPU_RASR3_R_SRD4_BIT    (12UL)
#define MPU_RASR3_R_SRD4_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_R_SRD4_DIS    ((UBase_t) 0x00001000UL)

#define MPU_RASR3_SRD4_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_SRD4_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_SRD4_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD5_MASK    ((UBase_t) 0x00002000UL)
#define MPU_RASR3_R_SRD5_BIT    (13UL)
#define MPU_RASR3_R_SRD5_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_R_SRD5_DIS    ((UBase_t) 0x00002000UL)

#define MPU_RASR3_SRD5_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_SRD5_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_SRD5_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD6_MASK    ((UBase_t) 0x00004000UL)
#define MPU_RASR3_R_SRD6_BIT    (14UL)
#define MPU_RASR3_R_SRD6_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_R_SRD6_DIS    ((UBase_t) 0x00004000UL)

#define MPU_RASR3_SRD6_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_SRD6_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_SRD6_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD7_MASK    ((UBase_t) 0x00008000UL)
#define MPU_RASR3_R_SRD7_BIT    (15UL)
#define MPU_RASR3_R_SRD7_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_R_SRD7_DIS    ((UBase_t) 0x00008000UL)

#define MPU_RASR3_SRD7_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_SRD7_ENA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_SRD7_DIS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_B_MASK    ((UBase_t) 0x00010000UL)
#define MPU_RASR3_R_B_BIT    (16UL)
#define MPU_RASR3_R_B_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_R_B_ENA    ((UBase_t) 0x00010000UL)

#define MPU_RASR3_B_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_B_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_B_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_C_MASK    ((UBase_t) 0x00020000UL)
#define MPU_RASR3_R_C_BIT    (17UL)
#define MPU_RASR3_R_C_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_R_C_ENA    ((UBase_t) 0x00020000UL)

#define MPU_RASR3_C_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_C_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_C_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_S_MASK    ((UBase_t) 0x00040000UL)
#define MPU_RASR3_R_S_BIT    (18UL)
#define MPU_RASR3_R_S_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_R_S_ENA    ((UBase_t) 0x00040000UL)

#define MPU_RASR3_S_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_S_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_S_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_TEX_MASK    ((UBase_t) 0x00380000UL)
#define MPU_RASR3_R_TEX_BIT    (19UL)
#define MPU_RASR3_R_TEX_NC    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_R_TEX_WB_WRA    ((UBase_t) 0x00080000UL)
#define MPU_RASR3_R_TEX_WT_NWA    ((UBase_t) 0x00100000UL)
#define MPU_RASR3_R_TEX_WB_NWA    ((UBase_t) 0x00180000UL)

#define MPU_RASR3_TEX_MASK    ((UBase_t) 0x00000007UL)
#define MPU_RASR3_TEX_NC    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_TEX_WB_WRA    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_TEX_WT_NWA    ((UBase_t) 0x00000002UL)
#define MPU_RASR3_TEX_WB_NWA    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_AP_MASK    ((UBase_t) 0x07000000UL)
#define MPU_RASR3_R_AP_BIT    (24UL)
#define MPU_RASR3_R_AP_NANA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_R_AP_RWNA    ((UBase_t) 0x01000000UL)
#define MPU_RASR3_R_AP_RWRO    ((UBase_t) 0x02000000UL)
#define MPU_RASR3_R_AP_RWRW    ((UBase_t) 0x03000000UL)
#define MPU_RASR3_R_AP_RONA    ((UBase_t) 0x05000000UL)
#define MPU_RASR3_R_AP_RORO    ((UBase_t) 0x06000000UL)

#define MPU_RASR3_AP_MASK    ((UBase_t) 0x00000007UL)
#define MPU_RASR3_AP_NANA    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_AP_RWNA    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_AP_RWRO    ((UBase_t) 0x00000002UL)
#define MPU_RASR3_AP_RWRW    ((UBase_t) 0x00000003UL)
#define MPU_RASR3_AP_RONA    ((UBase_t) 0x00000005UL)
#define MPU_RASR3_AP_RORO    ((UBase_t) 0x00000006UL)
/*--------*/

/*--------*/
#define MPU_RASR3_R_XN_MASK    ((UBase_t) 0x10000000UL)
#define MPU_RASR3_R_XN_BIT    (28UL)
#define MPU_RASR3_R_XN_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_R_XN_ENA    ((UBase_t) 0x10000000UL)

#define MPU_RASR3_XN_MASK    ((UBase_t) 0x00000001UL)
#define MPU_RASR3_XN_DIS    ((UBase_t) 0x00000000UL)
#define MPU_RASR3_XN_ENA    ((UBase_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERDEFINES_H_ */

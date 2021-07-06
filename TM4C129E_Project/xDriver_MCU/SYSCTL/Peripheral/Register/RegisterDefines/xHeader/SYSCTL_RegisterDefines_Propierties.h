/**
 *
 * @file SYSCTL_RegisterDefines_Propierties.h
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PROPIERTIES_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PROPIERTIES_H_

#include <xUtils/Standard/Standard.h>

/*******************************************************************************************
************************************ 1 DID0 *********************************************
*******************************************************************************************/
/*--------*/
#define SYSCTL_DID0_R_MINOR_MASK    ((uint32_t) 0x000000FFUL)
#define SYSCTL_DID0_R_MINOR_BIT    (0UL)
#define SYSCTL_DID0_R_MINOR_INI    ((uint32_t) 0x00000000UL)
#define SYSCTL_DID0_R_MINOR_1METAL    ((uint32_t) 0x00000001UL)
#define SYSCTL_DID0_R_MINOR_2METAL    ((uint32_t) 0x00000002UL)
#define SYSCTL_DID0_R_MINOR_3METAL    ((uint32_t) 0x00000003UL)
#define SYSCTL_DID0_R_MINOR_4METAL    ((uint32_t) 0x00000004UL)

#define SYSCTL_DID0_MINOR_MASK    ((uint32_t) 0x000000FFUL)
#define SYSCTL_DID0_MINOR_INI    ((uint32_t) 0x00000000UL)
#define SYSCTL_DID0_MINOR_1METAL    ((uint32_t) 0x00000001UL)
#define SYSCTL_DID0_MINOR_2METAL    ((uint32_t) 0x00000002UL)
#define SYSCTL_DID0_MINOR_3METAL    ((uint32_t) 0x00000003UL)
#define SYSCTL_DID0_MINOR_4METAL    ((uint32_t) 0x00000004UL)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_MAJOR_MASK    ((uint32_t) 0x0000FF00UL)
#define SYSCTL_DID0_R_MAJOR_BIT    ((uint32_t) 8)
#define SYSCTL_DID0_R_MAJOR_REVA    ((uint32_t) 0x00000000UL)
#define SYSCTL_DID0_R_MAJOR_REVB    ((uint32_t) 0x00000100UL)
#define SYSCTL_DID0_R_MAJOR_REVC    ((uint32_t) 0x00000200UL)
#define SYSCTL_DID0_R_MAJOR_REVD    ((uint32_t) 0x00000300UL)
#define SYSCTL_DID0_R_MAJOR_REVE    ((uint32_t) 0x00000400UL)
#define SYSCTL_DID0_R_MAJOR_REVF    ((uint32_t) 0x00000500UL)

#define SYSCTL_DID0_MAJOR_MASK    ((uint32_t) 0x000000FFUL)
#define SYSCTL_DID0_MAJOR_REVA    ((uint32_t) 0x00000000UL)
#define SYSCTL_DID0_MAJOR_REVB    ((uint32_t) 0x00000001UL)
#define SYSCTL_DID0_MAJOR_REVC    ((uint32_t) 0x00000002UL)
#define SYSCTL_DID0_MAJOR_REVD    ((uint32_t) 0x00000003UL)
#define SYSCTL_DID0_MAJOR_REVE    ((uint32_t) 0x00000004UL)
#define SYSCTL_DID0_MAJOR_REVF    ((uint32_t) 0x00000005UL)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_CLASS_MASK    ((uint32_t) 0x00FF0000UL)
#define SYSCTL_DID0_R_CLASS_BIT    (16UL)
#define SYSCTL_DID0_R_CLASS_TIVAC    ((uint32_t) 0x00050000UL)

#define SYSCTL_DID0_CLASS_MASK    ((uint32_t) 0x000000FFUL)
#define SYSCTL_DID0_CLASS_TIVAC    ((uint32_t) 0x00000005UL)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_VER_MASK    ((uint32_t) 0x70000000UL)
#define SYSCTL_DID0_R_VER_BIT    (28UL)
#define SYSCTL_DID0_R_VER_DID0    ((uint32_t) 0x10000000UL)

#define SYSCTL_DID0_VER_MASK    ((uint32_t) 0x00000007UL)
#define SYSCTL_DID0_VER_DID0    ((uint32_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 2 DID1 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DID1_R_QUAL_MASK    ((uint32_t) 0x00000003UL)
#define SYSCTL_DID1_R_QUAL_BIT    (0UL)
#define SYSCTL_DID1_R_QUAL_ENG    ((uint32_t) 0x00000000UL)
#define SYSCTL_DID1_R_QUAL_PILOT    ((uint32_t) 0x00000001UL)
#define SYSCTL_DID1_R_QUAL_FULLY    ((uint32_t) 0x00000002UL)

#define SYSCTL_DID1_QUAL_MASK    ((uint32_t) 0x00000003UL)
#define SYSCTL_DID1_QUAL_ENG    ((uint32_t) 0x00000000UL)
#define SYSCTL_DID1_QUAL_PILOT    ((uint32_t) 0x00000001UL)
#define SYSCTL_DID1_QUAL_FULLY    ((uint32_t) 0x00000002UL)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_ROHS_MASK    ((uint32_t) 0x00000004UL)
#define SYSCTL_DID1_R_ROHS_BIT    (2UL)
#define SYSCTL_DID1_R_ROHS_NOROHS    ((uint32_t) 0x00000000UL)
#define SYSCTL_DID1_R_ROHS_ROHS    ((uint32_t) 0x00000004UL)

#define SYSCTL_DID1_ROHS_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_DID1_ROHS_NOROHS    ((uint32_t) 0x00000000UL)
#define SYSCTL_DID1_ROHS_ROHS    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PKG_MASK    ((uint32_t) 0x00000018UL)
#define SYSCTL_DID1_R_PKG_BIT    (3UL)
#define SYSCTL_DID1_R_PKG_LQFP    ((uint32_t) 0x00000008UL)
#define SYSCTL_DID1_R_PKG_BGA    ((uint32_t) 0x00000010UL)

#define SYSCTL_DID1_PKG_MASK    ((uint32_t) 0x00000003UL)
#define SYSCTL_DID1_PKG_LQFP    ((uint32_t) 0x00000001UL)
#define SYSCTL_DID1_PKG_BGA    ((uint32_t) 0x00000002UL)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_TEMP_MASK    ((uint32_t) 0x000000E0UL)
#define SYSCTL_DID1_R_TEMP_BIT    (5UL)
#define SYSCTL_DID1_R_TEMP_IND    ((uint32_t) 0x00000020UL)
#define SYSCTL_DID1_R_TEMP_EXT    ((uint32_t) 0x00000040UL)
#define SYSCTL_DID1_R_TEMP_BOTH    ((uint32_t) 0x00000060UL)

#define SYSCTL_DID1_TEMP_MASK    ((uint32_t) 0x00000007UL)
#define SYSCTL_DID1_TEMP_IND    ((uint32_t) 0x00000001UL)
#define SYSCTL_DID1_TEMP_EXT    ((uint32_t) 0x00000002UL)
#define SYSCTL_DID1_TEMP_BOTH    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PINCOUNT_MASK ((uint32_t) 0x0000E000UL)
#define SYSCTL_DID1_R_PINCOUNT_BIT    (13UL)
#define SYSCTL_DID1_R_PINCOUNT_100    ((uint32_t) 0x00004000UL)
#define SYSCTL_DID1_R_PINCOUNT_64    ((uint32_t) 0x00006000UL)
#define SYSCTL_DID1_R_PINCOUNT_144    ((uint32_t) 0x00008000UL)
#define SYSCTL_DID1_R_PINCOUNT_157    ((uint32_t) 0x0000A000UL)
#define SYSCTL_DID1_R_PINCOUNT_168    ((uint32_t) 0x0000C000UL)

#define SYSCTL_DID1_PINCOUNT_MASK    ((uint32_t) 0x00000007UL)
#define SYSCTL_DID1_PINCOUNT_100    ((uint32_t) 0x00000002UL)
#define SYSCTL_DID1_PINCOUNT_64    ((uint32_t) 0x00000003UL)
#define SYSCTL_DID1_PINCOUNT_144    ((uint32_t) 0x00000004UL)
#define SYSCTL_DID1_PINCOUNT_157    ((uint32_t) 0x00000005UL)
#define SYSCTL_DID1_PINCOUNT_168    ((uint32_t) 0x00000006UL)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PARTNO_MASK    ((uint32_t) 0x00FF0000UL)
#define SYSCTL_DID1_R_PARTNO_BIT    (16UL)
#define SYSCTL_DID1_R_PARTNO_TM4C123    ((uint32_t) 0x00A10000UL)

#define SYSCTL_DID1_PARTNO_MASK    ((uint32_t) 0x000000FFUL)
#define SYSCTL_DID1_PARTNO_TM4C123    ((uint32_t) 0x000000A1UL)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_FAM_MASK    ((uint32_t) 0x0F000000UL)
#define SYSCTL_DID1_R_FAM_BIT    (24UL)
#define SYSCTL_DID1_R_FAM_TIVAC    ((uint32_t) 0x00000000UL)

#define SYSCTL_DID1_FAM_MASK    ((uint32_t) 0x0000000FUL)
#define SYSCTL_DID1_FAM_TIVAC    ((uint32_t) 0x00000000UL)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_VER_MASK    ((uint32_t) 0xF0000000UL)
#define SYSCTL_DID1_R_VER_BIT    (28UL)
#define SYSCTL_DID1_R_VER_INI    ((uint32_t) 0x00000000UL)
#define SYSCTL_DID1_R_VER_SECOND    ((uint32_t) 0x10000000UL)

#define SYSCTL_DID1_VER_MASK    ((uint32_t) 0x0000000FUL)
#define SYSCTL_DID1_VER_INI    ((uint32_t) 0x00000000UL)
#define SYSCTL_DID1_VER_SECOND    ((uint32_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************13 SYSPROP *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SYSPROP_R_FPU_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_SYSPROP_R_FPU_BIT    (0UL)
#define SYSCTL_SYSPROP_R_FPU_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_FPU_PRESENT    ((uint32_t) 0x00000001UL)

#define SYSCTL_SYSPROP_FPU_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_SYSPROP_FPU_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_FPU_PRESENT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_FLASHLPM_MASK    ((uint32_t) 0x00000100UL)
#define SYSCTL_SYSPROP_R_FLASHLPM_BIT    (8UL)
#define SYSCTL_SYSPROP_R_FLASHLPM_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_FLASHLPM_PRESENT    ((uint32_t) 0x00000100UL)

#define SYSCTL_SYSPROP_FLASHLPM_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_SYSPROP_FLASHLPM_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_FLASHLPM_PRESENT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_SRAMLPM_MASK    ((uint32_t) 0x00000400UL)
#define SYSCTL_SYSPROP_R_SRAMLPM_BIT    (10UL)
#define SYSCTL_SYSPROP_R_SRAMLPM_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_SRAMLPM_PRESENT    ((uint32_t) 0x00000400UL)

#define SYSCTL_SYSPROP_SRAMLPM_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_SYSPROP_SRAMLPM_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_SRAMLPM_PRESENT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_SRAMSM_MASK    ((uint32_t) 0x00000800UL)
#define SYSCTL_SYSPROP_R_SRAMSM_BIT    (11UL)
#define SYSCTL_SYSPROP_R_SRAMSM_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_SRAMSM_PRESENT    ((uint32_t) 0x00000800UL)

#define SYSCTL_SYSPROP_SRAMSM_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_SYSPROP_SRAMSM_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_SRAMSM_PRESENT    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_PIOSCPDE_MASK    ((uint32_t) 0x00001000UL)
#define SYSCTL_SYSPROP_R_PIOSCPDE_BIT    (12UL)
#define SYSCTL_SYSPROP_R_PIOSCPDE_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_PIOSCPDE_PRESENT    ((uint32_t) 0x00001000UL)

#define SYSCTL_SYSPROP_PIOSCPDE_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_SYSPROP_PIOSCPDE_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_SYSPROP_PIOSCPDE_PRESENT    ((uint32_t) 0x00000001UL)
/*--------*/

/**********************************************************************************
************************************144 NVMSTAT *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_NVMSTAT_R_FWB_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_NVMSTAT_R_FWB_BIT    (0UL)
#define SYSCTL_NVMSTAT_R_FWB_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_NVMSTAT_R_FWB_PRESENT    ((uint32_t) 0x00000001UL)

#define SYSCTL_NVMSTAT_FWB_MASK    ((uint32_t) 0x00000001UL)
#define SYSCTL_NVMSTAT_FWB_NOPRESENT    ((uint32_t) 0x00000000UL)
#define SYSCTL_NVMSTAT_FWB_PRESENT    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PROPIERTIES_H_ */

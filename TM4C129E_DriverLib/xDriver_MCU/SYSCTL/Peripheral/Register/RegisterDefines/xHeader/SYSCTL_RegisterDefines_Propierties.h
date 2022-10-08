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

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

/*******************************************************************************************
************************************ 1 DID0 *********************************************
*******************************************************************************************/
/*--------*/
#define SYSCTL_DID0_R_MINOR_MASK    ((UBase_t) 0x000000FFUL)
#define SYSCTL_DID0_R_MINOR_BIT    (0UL)
#define SYSCTL_DID0_R_MINOR_INI    ((UBase_t) 0x00000000UL)
#define SYSCTL_DID0_R_MINOR_1METAL    ((UBase_t) 0x00000001UL)
#define SYSCTL_DID0_R_MINOR_2METAL    ((UBase_t) 0x00000002UL)
#define SYSCTL_DID0_R_MINOR_3METAL    ((UBase_t) 0x00000003UL)
#define SYSCTL_DID0_R_MINOR_4METAL    ((UBase_t) 0x00000004UL)

#define SYSCTL_DID0_MINOR_MASK    ((UBase_t) 0x000000FFUL)
#define SYSCTL_DID0_MINOR_INI    ((UBase_t) 0x00000000UL)
#define SYSCTL_DID0_MINOR_1METAL    ((UBase_t) 0x00000001UL)
#define SYSCTL_DID0_MINOR_2METAL    ((UBase_t) 0x00000002UL)
#define SYSCTL_DID0_MINOR_3METAL    ((UBase_t) 0x00000003UL)
#define SYSCTL_DID0_MINOR_4METAL    ((UBase_t) 0x00000004UL)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_MAJOR_MASK    ((UBase_t) 0x0000FF00UL)
#define SYSCTL_DID0_R_MAJOR_BIT    ((UBase_t) 8)
#define SYSCTL_DID0_R_MAJOR_REVA    ((UBase_t) 0x00000000UL)
#define SYSCTL_DID0_R_MAJOR_REVB    ((UBase_t) 0x00000100UL)
#define SYSCTL_DID0_R_MAJOR_REVC    ((UBase_t) 0x00000200UL)
#define SYSCTL_DID0_R_MAJOR_REVD    ((UBase_t) 0x00000300UL)
#define SYSCTL_DID0_R_MAJOR_REVE    ((UBase_t) 0x00000400UL)
#define SYSCTL_DID0_R_MAJOR_REVF    ((UBase_t) 0x00000500UL)

#define SYSCTL_DID0_MAJOR_MASK    ((UBase_t) 0x000000FFUL)
#define SYSCTL_DID0_MAJOR_REVA    ((UBase_t) 0x00000000UL)
#define SYSCTL_DID0_MAJOR_REVB    ((UBase_t) 0x00000001UL)
#define SYSCTL_DID0_MAJOR_REVC    ((UBase_t) 0x00000002UL)
#define SYSCTL_DID0_MAJOR_REVD    ((UBase_t) 0x00000003UL)
#define SYSCTL_DID0_MAJOR_REVE    ((UBase_t) 0x00000004UL)
#define SYSCTL_DID0_MAJOR_REVF    ((UBase_t) 0x00000005UL)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_CLASS_MASK    ((UBase_t) 0x00FF0000UL)
#define SYSCTL_DID0_R_CLASS_BIT    (16UL)
#define SYSCTL_DID0_R_CLASS_TIVAC    ((UBase_t) 0x00050000UL)

#define SYSCTL_DID0_CLASS_MASK    ((UBase_t) 0x000000FFUL)
#define SYSCTL_DID0_CLASS_TIVAC    ((UBase_t) 0x00000005UL)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_VER_MASK    ((UBase_t) 0x70000000UL)
#define SYSCTL_DID0_R_VER_BIT    (28UL)
#define SYSCTL_DID0_R_VER_DID0    ((UBase_t) 0x10000000UL)

#define SYSCTL_DID0_VER_MASK    ((UBase_t) 0x00000007UL)
#define SYSCTL_DID0_VER_DID0    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************ 2 DID1 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DID1_R_QUAL_MASK    ((UBase_t) 0x00000003UL)
#define SYSCTL_DID1_R_QUAL_BIT    (0UL)
#define SYSCTL_DID1_R_QUAL_ENG    ((UBase_t) 0x00000000UL)
#define SYSCTL_DID1_R_QUAL_PILOT    ((UBase_t) 0x00000001UL)
#define SYSCTL_DID1_R_QUAL_FULLY    ((UBase_t) 0x00000002UL)

#define SYSCTL_DID1_QUAL_MASK    ((UBase_t) 0x00000003UL)
#define SYSCTL_DID1_QUAL_ENG    ((UBase_t) 0x00000000UL)
#define SYSCTL_DID1_QUAL_PILOT    ((UBase_t) 0x00000001UL)
#define SYSCTL_DID1_QUAL_FULLY    ((UBase_t) 0x00000002UL)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_ROHS_MASK    ((UBase_t) 0x00000004UL)
#define SYSCTL_DID1_R_ROHS_BIT    (2UL)
#define SYSCTL_DID1_R_ROHS_NOROHS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DID1_R_ROHS_ROHS    ((UBase_t) 0x00000004UL)

#define SYSCTL_DID1_ROHS_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_DID1_ROHS_NOROHS    ((UBase_t) 0x00000000UL)
#define SYSCTL_DID1_ROHS_ROHS    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PKG_MASK    ((UBase_t) 0x00000018UL)
#define SYSCTL_DID1_R_PKG_BIT    (3UL)
#define SYSCTL_DID1_R_PKG_LQFP    ((UBase_t) 0x00000008UL)
#define SYSCTL_DID1_R_PKG_BGA    ((UBase_t) 0x00000010UL)

#define SYSCTL_DID1_PKG_MASK    ((UBase_t) 0x00000003UL)
#define SYSCTL_DID1_PKG_LQFP    ((UBase_t) 0x00000001UL)
#define SYSCTL_DID1_PKG_BGA    ((UBase_t) 0x00000002UL)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_TEMP_MASK    ((UBase_t) 0x000000E0UL)
#define SYSCTL_DID1_R_TEMP_BIT    (5UL)
#define SYSCTL_DID1_R_TEMP_IND    ((UBase_t) 0x00000020UL)
#define SYSCTL_DID1_R_TEMP_EXT    ((UBase_t) 0x00000040UL)
#define SYSCTL_DID1_R_TEMP_BOTH    ((UBase_t) 0x00000060UL)

#define SYSCTL_DID1_TEMP_MASK    ((UBase_t) 0x00000007UL)
#define SYSCTL_DID1_TEMP_IND    ((UBase_t) 0x00000001UL)
#define SYSCTL_DID1_TEMP_EXT    ((UBase_t) 0x00000002UL)
#define SYSCTL_DID1_TEMP_BOTH    ((UBase_t) 0x00000003UL)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PINCOUNT_MASK ((UBase_t) 0x0000E000UL)
#define SYSCTL_DID1_R_PINCOUNT_BIT    (13UL)
#define SYSCTL_DID1_R_PINCOUNT_100    ((UBase_t) 0x00004000UL)
#define SYSCTL_DID1_R_PINCOUNT_64    ((UBase_t) 0x00006000UL)
#define SYSCTL_DID1_R_PINCOUNT_144    ((UBase_t) 0x00008000UL)
#define SYSCTL_DID1_R_PINCOUNT_157    ((UBase_t) 0x0000A000UL)
#define SYSCTL_DID1_R_PINCOUNT_168    ((UBase_t) 0x0000C000UL)

#define SYSCTL_DID1_PINCOUNT_MASK    ((UBase_t) 0x00000007UL)
#define SYSCTL_DID1_PINCOUNT_100    ((UBase_t) 0x00000002UL)
#define SYSCTL_DID1_PINCOUNT_64    ((UBase_t) 0x00000003UL)
#define SYSCTL_DID1_PINCOUNT_144    ((UBase_t) 0x00000004UL)
#define SYSCTL_DID1_PINCOUNT_157    ((UBase_t) 0x00000005UL)
#define SYSCTL_DID1_PINCOUNT_168    ((UBase_t) 0x00000006UL)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PARTNO_MASK    ((UBase_t) 0x00FF0000UL)
#define SYSCTL_DID1_R_PARTNO_BIT    (16UL)
#define SYSCTL_DID1_R_PARTNO_TM4C123    ((UBase_t) 0x00A10000UL)

#define SYSCTL_DID1_PARTNO_MASK    ((UBase_t) 0x000000FFUL)
#define SYSCTL_DID1_PARTNO_TM4C123    ((UBase_t) 0x000000A1UL)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_FAM_MASK    ((UBase_t) 0x0F000000UL)
#define SYSCTL_DID1_R_FAM_BIT    (24UL)
#define SYSCTL_DID1_R_FAM_TIVAC    ((UBase_t) 0x00000000UL)

#define SYSCTL_DID1_FAM_MASK    ((UBase_t) 0x0000000FUL)
#define SYSCTL_DID1_FAM_TIVAC    ((UBase_t) 0x00000000UL)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_VER_MASK    ((UBase_t) 0xF0000000UL)
#define SYSCTL_DID1_R_VER_BIT    (28UL)
#define SYSCTL_DID1_R_VER_INI    ((UBase_t) 0x00000000UL)
#define SYSCTL_DID1_R_VER_SECOND    ((UBase_t) 0x10000000UL)

#define SYSCTL_DID1_VER_MASK    ((UBase_t) 0x0000000FUL)
#define SYSCTL_DID1_VER_INI    ((UBase_t) 0x00000000UL)
#define SYSCTL_DID1_VER_SECOND    ((UBase_t) 0x00000001UL)
/*--------*/

/******************************************************************************************
************************************13 SYSPROP *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SYSPROP_R_FPU_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SYSPROP_R_FPU_BIT    (0UL)
#define SYSCTL_SYSPROP_R_FPU_NOPRESENT    ((UBase_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_FPU_PRESENT    ((UBase_t) 0x00000001UL)

#define SYSCTL_SYSPROP_FPU_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SYSPROP_FPU_NOPRESENT    ((UBase_t) 0x00000000UL)
#define SYSCTL_SYSPROP_FPU_PRESENT    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_FLASHLPM_MASK    ((UBase_t) 0x00000100UL)
#define SYSCTL_SYSPROP_R_FLASHLPM_BIT    (8UL)
#define SYSCTL_SYSPROP_R_FLASHLPM_NOPRESENT    ((UBase_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_FLASHLPM_PRESENT    ((UBase_t) 0x00000100UL)

#define SYSCTL_SYSPROP_FLASHLPM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SYSPROP_FLASHLPM_NOPRESENT    ((UBase_t) 0x00000000UL)
#define SYSCTL_SYSPROP_FLASHLPM_PRESENT    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_SRAMLPM_MASK    ((UBase_t) 0x00000400UL)
#define SYSCTL_SYSPROP_R_SRAMLPM_BIT    (10UL)
#define SYSCTL_SYSPROP_R_SRAMLPM_NOPRESENT    ((UBase_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_SRAMLPM_PRESENT    ((UBase_t) 0x00000400UL)

#define SYSCTL_SYSPROP_SRAMLPM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SYSPROP_SRAMLPM_NOPRESENT    ((UBase_t) 0x00000000UL)
#define SYSCTL_SYSPROP_SRAMLPM_PRESENT    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_SRAMSM_MASK    ((UBase_t) 0x00000800UL)
#define SYSCTL_SYSPROP_R_SRAMSM_BIT    (11UL)
#define SYSCTL_SYSPROP_R_SRAMSM_NOPRESENT    ((UBase_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_SRAMSM_PRESENT    ((UBase_t) 0x00000800UL)

#define SYSCTL_SYSPROP_SRAMSM_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SYSPROP_SRAMSM_NOPRESENT    ((UBase_t) 0x00000000UL)
#define SYSCTL_SYSPROP_SRAMSM_PRESENT    ((UBase_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_PIOSCPDE_MASK    ((UBase_t) 0x00001000UL)
#define SYSCTL_SYSPROP_R_PIOSCPDE_BIT    (12UL)
#define SYSCTL_SYSPROP_R_PIOSCPDE_NOPRESENT    ((UBase_t) 0x00000000UL)
#define SYSCTL_SYSPROP_R_PIOSCPDE_PRESENT    ((UBase_t) 0x00001000UL)

#define SYSCTL_SYSPROP_PIOSCPDE_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_SYSPROP_PIOSCPDE_NOPRESENT    ((UBase_t) 0x00000000UL)
#define SYSCTL_SYSPROP_PIOSCPDE_PRESENT    ((UBase_t) 0x00000001UL)
/*--------*/

/**********************************************************************************
************************************144 NVMSTAT *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_NVMSTAT_R_FWB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_NVMSTAT_R_FWB_BIT    (0UL)
#define SYSCTL_NVMSTAT_R_FWB_NOPRESENT    ((UBase_t) 0x00000000UL)
#define SYSCTL_NVMSTAT_R_FWB_PRESENT    ((UBase_t) 0x00000001UL)

#define SYSCTL_NVMSTAT_FWB_MASK    ((UBase_t) 0x00000001UL)
#define SYSCTL_NVMSTAT_FWB_NOPRESENT    ((UBase_t) 0x00000000UL)
#define SYSCTL_NVMSTAT_FWB_PRESENT    ((UBase_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PROPIERTIES_H_ */

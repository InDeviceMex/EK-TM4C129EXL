/**
 *
 * @file FPU_RegisterDefines.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERDEFINES_H_

#include <xDriver_MCU/Core/FPU/Peripheral/xHeader/FPU_Enum.h>

/*********************************************************************************************/
/************************************* 1 CPACR ***********************************************/
/*********************************************************************************************/

/*----------*/
#define FPU_CPACR_R_CP10_MASK    ((UBase_t) 0x00300000UL)
#define FPU_CPACR_R_CP10_BIT    (20UL)
#define FPU_CPACR_R_CP10_DENIED    ((UBase_t) 0x00000000UL)
#define FPU_CPACR_R_CP10_PRIVILEGE    ((UBase_t) 0x00100000UL)
#define FPU_CPACR_R_CP10_FULL    ((UBase_t) 0x00300000UL)

#define FPU_CPACR_CP10_MASK    ((UBase_t) 0x00000003UL)
#define FPU_CPACR_CP10_DENIED    ((UBase_t) 0x00000000UL)
#define FPU_CPACR_CP10_PRIVILEGE    ((UBase_t) 0x00000001UL)
#define FPU_CPACR_CP10_FULL    ((UBase_t) 0x00000003UL)
/*----------*/

/*----------*/
#define FPU_CPACR_R_CP11_MASK    ((UBase_t) 0x00C00000UL)
#define FPU_CPACR_R_CP11_BIT    (22UL)
#define FPU_CPACR_R_CP11_DENIED    ((UBase_t) 0x00000000UL)
#define FPU_CPACR_R_CP11_PRIVILEGE    ((UBase_t) 0x00400000UL)
#define FPU_CPACR_R_CP11_FULL    ((UBase_t) 0x00C00000UL)

#define FPU_CPACR_CP11_MASK    ((UBase_t) 0x00000003UL)
#define FPU_CPACR_CP11_DENIED    ((UBase_t) 0x00000000UL)
#define FPU_CPACR_CP11_PRIVILEGE    ((UBase_t) 0x00000001UL)
#define FPU_CPACR_CP11_FULL    ((UBase_t) 0x00000003UL)
/*----------*/

/*********************************************************************************************/
/************************************* 2 CCR ***********************************************/
/*********************************************************************************************/

/*----------*/
#define FPU_CCR_R_LSPACT_MASK    ((UBase_t) 0x00000001UL)
#define FPU_CCR_R_LSPACT_BIT    (0UL)
#define FPU_CCR_R_LSPACT_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_R_LSPACT_SET    ((UBase_t) 0x00000001UL)

#define FPU_CCR_LSPACT_MASK    ((UBase_t) 0x00000001UL)
#define FPU_CCR_LSPACT_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_LSPACT_SET    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FPU_CCR_R_USER_MASK    ((UBase_t) 0x00000002UL)
#define FPU_CCR_R_USER_BIT    (1UL)
#define FPU_CCR_R_USER_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_R_USER_SET    ((UBase_t) 0x00000002UL)

#define FPU_CCR_USER_MASK    ((UBase_t) 0x00000001UL)
#define FPU_CCR_USER_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_USER_SET    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FPU_CCR_R_THREAD_MASK    ((UBase_t) 0x00000008UL)
#define FPU_CCR_R_THREAD_BIT    (3UL)
#define FPU_CCR_R_THREAD_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_R_THREAD_SET    ((UBase_t) 0x00000008UL)

#define FPU_CCR_THREAD_MASK    ((UBase_t) 0x00000001UL)
#define FPU_CCR_THREAD_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_THREAD_SET    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FPU_CCR_R_HFRDY_MASK    ((UBase_t) 0x00000010UL)
#define FPU_CCR_R_HFRDY_BIT    (4UL)
#define FPU_CCR_R_HFRDY_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_R_HFRDY_SET    ((UBase_t) 0x00000010UL)

#define FPU_CCR_HFRDY_MASK    ((UBase_t) 0x00000001UL)
#define FPU_CCR_HFRDY_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_HFRDY_SET    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FPU_CCR_R_MMRDY_MASK    ((UBase_t) 0x00000020UL)
#define FPU_CCR_R_MMRDY_BIT    (5UL)
#define FPU_CCR_R_MMRDY_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_R_MMRDY_SET    ((UBase_t) 0x00000020UL)

#define FPU_CCR_MMRDY_MASK    ((UBase_t) 0x00000001UL)
#define FPU_CCR_MMRDY_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_MMRDY_SET    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FPU_CCR_R_BFRDY_MASK    ((UBase_t) 0x00000040UL)
#define FPU_CCR_R_BFRDY_BIT    (6UL)
#define FPU_CCR_R_BFRDY_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_R_BFRDY_SET    ((UBase_t) 0x00000040UL)

#define FPU_CCR_BFRDY_MASK    ((UBase_t) 0x00000001UL)
#define FPU_CCR_BFRDY_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_BFRDY_SET    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FPU_CCR_R_MONRDY_MASK    ((UBase_t) 0x00000100UL)
#define FPU_CCR_R_MONRDY_BIT    (8UL)
#define FPU_CCR_R_MONRDY_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_R_MONRDY_SET    ((UBase_t) 0x00000100UL)

#define FPU_CCR_MONRDY_MASK    ((UBase_t) 0x00000001UL)
#define FPU_CCR_MONRDY_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_MONRDY_SET    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FPU_CCR_R_LSPEN_MASK    ((UBase_t) 0x40000000UL)
#define FPU_CCR_R_LSPEN_BIT    (30UL)
#define FPU_CCR_R_LSPEN_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_R_LSPEN_SET    ((UBase_t) 0x40000000UL)

#define FPU_CCR_LSPEN_MASK    ((UBase_t) 0x00000001UL)
#define FPU_CCR_LSPEN_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_LSPEN_SET    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FPU_CCR_R_ASPEN_MASK    ((UBase_t) 0x80000000UL)
#define FPU_CCR_R_ASPEN_BIT    (31UL)
#define FPU_CCR_R_ASPEN_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_R_ASPEN_SET    ((UBase_t) 0x80000000UL)

#define FPU_CCR_ASPEN_MASK    ((UBase_t) 0x00000001UL)
#define FPU_CCR_ASPEN_NOSET    ((UBase_t) 0x00000000UL)
#define FPU_CCR_ASPEN_SET    ((UBase_t) 0x00000001UL)
/*----------*/

/*********************************************************************************************/
/************************************* 3 CAR ***********************************************/
/*********************************************************************************************/

/*----------*/
#define FPU_CAR_R_ADDRESS_MASK    ((UBase_t) 0xFFFFFFF8UL)
#define FPU_CAR_R_ADDRESS_BIT    (3UL)

#define FPU_CAR_ADDRESS_MASK    ((UBase_t) 0x1FFFFFFFUL)
/*----------*/

/*********************************************************************************************/
/************************************* 4 DSCR ***********************************************/
/*********************************************************************************************/

/*----------*/
#define FPU_DSCR_R_RMODE_MASK    ((UBase_t) 0x00C00000UL)
#define FPU_DSCR_R_RMODE_BIT    (22UL)
#define FPU_DSCR_R_RMODE_RN    ((UBase_t) 0x00000000UL)
#define FPU_DSCR_R_RMODE_RP    ((UBase_t) 0x00400000UL)
#define FPU_DSCR_R_RMODE_RM    ((UBase_t) 0x00800000UL)
#define FPU_DSCR_R_RMODE_RZ    ((UBase_t) 0x00C00000UL)

#define FPU_DSCR_RMODE_MASK    ((UBase_t) 0x00000003UL)
#define FPU_DSCR_RMODE_RN    ((UBase_t) 0x00000000UL)
#define FPU_DSCR_RMODE_RP    ((UBase_t) 0x00000001UL)
#define FPU_DSCR_RMODE_RM    ((UBase_t) 0x00000002UL)
#define FPU_DSCR_RMODE_RZ    ((UBase_t) 0x00000003UL)
/*----------*/

/*----------*/
#define FPU_DSCR_R_FZ_MASK    ((UBase_t) 0x01000000UL)
#define FPU_DSCR_R_FZ_BIT    (24UL)
#define FPU_DSCR_R_FZ_0    ((UBase_t) 0x00000000UL)
#define FPU_DSCR_R_FZ_1    ((UBase_t) 0x01000000UL)

#define FPU_DSCR_FZ_MASK    ((UBase_t) 0x00000001UL)
#define FPU_DSCR_FZ_0    ((UBase_t) 0x00000000UL)
#define FPU_DSCR_FZ_1    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FPU_DSCR_R_DN_MASK    ((UBase_t) 0x02000000UL)
#define FPU_DSCR_R_DN_BIT    (25UL)
#define FPU_DSCR_R_DN_0    ((UBase_t) 0x00000000UL)
#define FPU_DSCR_R_DN_1    ((UBase_t) 0x02000000UL)

#define FPU_DSCR_DN_MASK    ((UBase_t) 0x00000001UL)
#define FPU_DSCR_DN_0    ((UBase_t) 0x00000000UL)
#define FPU_DSCR_DN_1    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define FPU_DSCR_R_AHP_MASK    ((UBase_t) 0x04000000UL)
#define FPU_DSCR_R_AHP_BIT    (26UL)
#define FPU_DSCR_R_AHP_0    ((UBase_t) 0x00000000UL)
#define FPU_DSCR_R_AHP_1    ((UBase_t) 0x04000000UL)

#define FPU_DSCR_AHP_MASK    ((UBase_t) 0x00000001UL)
#define FPU_DSCR_AHP_0    ((UBase_t) 0x00000000UL)
#define FPU_DSCR_AHP_1    ((UBase_t) 0x00000001UL)
/*----------*/

/*********************************************************************************************/
/************************************* 6 MVFR0 ***********************************************/
/*********************************************************************************************/

/*----------*/
#define FPU_MVFR0_R_A_SIMD_registers_MASK    ((UBase_t) 0x0000000FUL)
#define FPU_MVFR0_R_A_SIMD_registers_BIT    (0UL)

#define FPU_MVFR0_A_SIMD_registers_MASK    ((UBase_t) 0x0000000FUL)
/*----------*/

/*----------*/
#define FPU_MVFR0_R_Single_precision_MASK    ((UBase_t) 0x000000F0UL)
#define FPU_MVFR0_R_Single_precision_BIT    (4UL)
#define FPU_MVFR0_R_Single_precision_PRESENT    ((UBase_t) 0x00000020UL)
#define FPU_MVFR0_R_Single_precision_NOPRESENT    ((UBase_t) 0x00000000UL)

#define FPU_MVFR0_Single_precision_MASK    ((UBase_t) 0x0000000FUL)
#define FPU_MVFR0_Single_precision_PRESENT    ((UBase_t) 0x00000002UL)
#define FPU_MVFR0_Single_precision_NOPRESENT    ((UBase_t) 0x00000000UL)
/*----------*/

/*----------*/
#define FPU_MVFR0_R_Double_precision_MASK    ((UBase_t) 0x00000F00UL)
#define FPU_MVFR0_R_Double_precision_BIT    (8UL)
#define FPU_MVFR0_R_Double_precision_PRESENT    ((UBase_t) 0x00000200UL)
#define FPU_MVFR0_R_Double_precision_NOPRESENT    ((UBase_t) 0x00000000UL)

#define FPU_MVFR0_Double_precision_MASK    ((UBase_t) 0x0000000FUL)
#define FPU_MVFR0_Double_precision_PRESENT    ((UBase_t) 0x00000002UL)
#define FPU_MVFR0_Double_precision_NOPRESENT    ((UBase_t) 0x00000000UL)
/*----------*/

/*----------*/
#define FPU_MVFR0_R_FP_excep_trapping_MASK    ((UBase_t) 0x0000F000UL)
#define FPU_MVFR0_R_FP_excep_trapping_BIT    (12UL)

#define FPU_MVFR0_FP_excep_trapping_MASK    ((UBase_t) 0x0000000FUL)
/*----------*/

/*----------*/
#define FPU_MVFR0_R_Divide_MASK    ((UBase_t) 0x000F0000UL)
#define FPU_MVFR0_R_Divide_BIT    (16UL)

#define FPU_MVFR0_Divide_MASK    ((UBase_t) 0x0000000FUL)
/*----------*/

/*----------*/
#define FPU_MVFR0_R_Square_root_MASK    ((UBase_t) 0x00F00000UL)
#define FPU_MVFR0_R_Square_root_BIT    (20UL)

#define FPU_MVFR0_Square_root_MASK    ((UBase_t) 0x0000000FUL)
/*----------*/

/*----------*/
#define FPU_MVFR0_R_Short_vectors_MASK    ((UBase_t) 0x0F000000UL)
#define FPU_MVFR0_R_Short_vectors_BIT    (24UL)

#define FPU_MVFR0_Short_vectors_MASK    ((UBase_t) 0x0000000FUL)
/*----------*/

/*----------*/
#define FPU_MVFR0_R_FP_rounding_modes_MASK    ((UBase_t) 0xF0000000UL)
#define FPU_MVFR0_R_FP_rounding_modes_BIT    (28UL)

#define FPU_MVFR0_FP_rounding_modes_MASK    ((UBase_t) 0x0000000FUL)
/*----------*/

/*********************************************************************************************/
/************************************* 7 MVFR1 ***********************************************/
/*********************************************************************************************/

/*----------*/
#define FPU_MVFR1_R_FtZ_mode_MASK    ((UBase_t) 0x0000000FUL)
#define FPU_MVFR1_R_FtZ_mode_BIT    (0UL)

#define FPU_MVFR1_FtZ_mode_MASK    ((UBase_t) 0x0000000FUL)
/*----------*/

/*----------*/
#define FPU_MVFR1_R_D_NaN_mode_MASK    ((UBase_t) 0x000000F0UL)
#define FPU_MVFR1_R_D_NaN_mode_BIT    (4UL)

#define FPU_MVFR1_D_NaN_mode_MASK    ((UBase_t) 0x0000000FUL)
/*----------*/

/*----------*/
#define FPU_MVFR1_R_FP_HPFP_MASK    ((UBase_t) 0x0F000000UL)
#define FPU_MVFR1_R_FP_HPFP_BIT    (24UL)

#define FPU_MVFR1_FP_HPFP_MASK    ((UBase_t) 0x0000000FUL)
/*----------*/

/*----------*/
#define FPU_MVFR1_R_FP_fused_MAC_MASK    ((UBase_t) 0xF0000000UL)
#define FPU_MVFR1_R_FP_fused_MAC_BIT    (28UL)

#define FPU_MVFR1_FP_fused_MAC_MASK    ((UBase_t) 0x0000000FUL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERDEFINES_H_ */

/**
 *
 * @file EEPROM_RegisterDefines.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERDEFINES_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

/******************************************************************************************
************************************ 1 SIZE *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_SIZE_R_WORDCNT_MASK    ((UBase_t) 0x0000FFFFUL)
#define EEPROM_SIZE_R_WORDCNT_BIT    (0UL)
#define EEPROM_SIZE_R_WORDCNT_NUMBER    ((UBase_t) 0x00000200UL)

#define EEPROM_SIZE_WORDCNT_MASK    ((UBase_t) 0x0000FFFFUL)
#define EEPROM_SIZE_WORDCNT_NUMBER    ((UBase_t) 0x00000200UL)
/*----------*/

/*----------*/
#define EEPROM_SIZE_R_BLKCNT_MASK    ((UBase_t) 0x07FF0000UL)
#define EEPROM_SIZE_R_BLKCNT_BIT    (16UL)
#define EEPROM_SIZE_R_BLKCNT_NUMBER    ((UBase_t) 0x00200000UL)

#define EEPROM_SIZE_BLKCNT_MASK    ((UBase_t) 0x000007FFUL)
#define EEPROM_SIZE_BLKCNT_NUMBER    ((UBase_t) 0x00000020UL)
/*----------*/

/******************************************************************************************
************************************ 2 BLOCK *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_BLOCK_R_BLOCK_MASK    ((UBase_t) 0x0000FFFFUL)
#define EEPROM_BLOCK_R_BLOCK_BIT    (0UL)

#define EEPROM_BLOCK_BLOCK_MASK    ((UBase_t) 0x0000FFFFUL)
/*----------*/

/******************************************************************************************
************************************ 3 OFFSET *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_OFFSET_R_OFFSET_MASK    ((UBase_t) 0x0000000FUL)
#define EEPROM_OFFSET_R_OFFSET_BIT    (0UL)

#define EEPROM_OFFSET_OFFSET_MASK    ((UBase_t) 0x0000000FUL)
/*----------*/

/******************************************************************************************
************************************ 4 RDWR *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_RDWR_R_VALUE_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define EEPROM_RDWR_R_VALUE_BIT    (0UL)

#define EEPROM_RDWR_VALUE_MASK    ((UBase_t) 0xFFFFFFFFUL)
/*----------*/

/******************************************************************************************
************************************ 5 RDWRINC *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_RDWRINC_R_VALUE_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define EEPROM_RDWRINC_R_VALUE_BIT    (0UL)

#define EEPROM_RDWRINC_VALUE_MASK    ((UBase_t) 0xFFFFFFFFUL)
/*----------*/

/******************************************************************************************
************************************ 6 DONE *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_DONE_R_WORKING_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_DONE_R_WORKING_BIT    (0UL)
#define EEPROM_DONE_R_WORKING_DIS    ((UBase_t) 0x00000000UL)
#define EEPROM_DONE_R_WORKING_ENA    ((UBase_t) 0x00000001UL)

#define EEPROM_DONE_WORKING_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_DONE_WORKING_DIS    ((UBase_t) 0x00000000UL)
#define EEPROM_DONE_WORKING_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_DONE_R_WKERASE_MASK    ((UBase_t) 0x00000004UL)
#define EEPROM_DONE_R_WKERASE_BIT    (2UL)
#define EEPROM_DONE_R_WKERASE_DIS    ((UBase_t) 0x00000000UL)
#define EEPROM_DONE_R_WKERASE_ENA    ((UBase_t) 0x00000004UL)

#define EEPROM_DONE_WKERASE_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_DONE_WKERASE_DIS    ((UBase_t) 0x00000000UL)
#define EEPROM_DONE_WKERASE_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_DONE_R_WKCOPY_MASK    ((UBase_t) 0x00000008UL)
#define EEPROM_DONE_R_WKCOPY_BIT    (3UL)
#define EEPROM_DONE_R_WKCOPY_DIS    ((UBase_t) 0x00000000UL)
#define EEPROM_DONE_R_WKCOPY_ENA    ((UBase_t) 0x00000008UL)

#define EEPROM_DONE_WKCOPY_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_DONE_WKCOPY_DIS    ((UBase_t) 0x00000000UL)
#define EEPROM_DONE_WKCOPY_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_DONE_R_NOPERM_MASK    ((UBase_t) 0x00000010UL)
#define EEPROM_DONE_R_NOPERM_BIT    (4UL)
#define EEPROM_DONE_R_NOPERM_NOERROR    ((UBase_t) 0x00000000UL)
#define EEPROM_DONE_R_NOPERM_ERROR    ((UBase_t) 0x00000010UL)

#define EEPROM_DONE_NOPERM_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_DONE_NOPERM_NOERROR    ((UBase_t) 0x00000000UL)
#define EEPROM_DONE_NOPERM_ERROR    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_DONE_R_WRBUSY_MASK    ((UBase_t) 0x00000020UL)
#define EEPROM_DONE_R_WRBUSY_BIT    (5UL)
#define EEPROM_DONE_R_WRBUSY_NOERROR    ((UBase_t) 0x00000000UL)
#define EEPROM_DONE_R_WRBUSY_ERROR    ((UBase_t) 0x00000020UL)

#define EEPROM_DONE_WRBUSY_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_DONE_WRBUSY_NOERROR    ((UBase_t) 0x00000000UL)
#define EEPROM_DONE_WRBUSY_ERROR    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************7 SUPP *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_SUPP_R_START_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_SUPP_R_START_BIT    (0UL)
#define EEPROM_SUPP_R_START_DIS    ((UBase_t) 0x00000000UL)
#define EEPROM_SUPP_R_START_ENA    ((UBase_t) 0x00000001UL)

#define EEPROM_SUPP_START_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_SUPP_START_DIS    ((UBase_t) 0x00000000UL)
#define EEPROM_SUPP_START_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_SUPP_R_EREQ_MASK    ((UBase_t) 0x00000002UL)
#define EEPROM_SUPP_R_EREQ_BIT    (1UL)
#define EEPROM_SUPP_R_EREQ_DIS    ((UBase_t) 0x00000000UL)
#define EEPROM_SUPP_R_EREQ_ENA    ((UBase_t) 0x00000002UL)

#define EEPROM_SUPP_EREQ_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_SUPP_EREQ_DIS    ((UBase_t) 0x00000000UL)
#define EEPROM_SUPP_EREQ_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_SUPP_R_ERETRY_MASK    ((UBase_t) 0x00000004UL)
#define EEPROM_SUPP_R_ERETRY_BIT    (2UL)
#define EEPROM_SUPP_R_ERETRY_DIS    ((UBase_t) 0x00000000UL)
#define EEPROM_SUPP_R_ERETRY_ENA    ((UBase_t) 0x00000004UL)

#define EEPROM_SUPP_ERETRY_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_SUPP_ERETRY_DIS    ((UBase_t) 0x00000000UL)
#define EEPROM_SUPP_ERETRY_ENA    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_SUPP_R_PRETRY_MASK    ((UBase_t) 0x00000008UL)
#define EEPROM_SUPP_R_PRETRY_BIT    (3UL)
#define EEPROM_SUPP_R_PRETRY_NOERROR    ((UBase_t) 0x00000000UL)
#define EEPROM_SUPP_R_PRETRY_ERROR    ((UBase_t) 0x00000008UL)

#define EEPROM_SUPP_PRETRY_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_SUPP_PRETRY_NOERROR    ((UBase_t) 0x00000000UL)
#define EEPROM_SUPP_PRETRY_ERROR    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************8 UNLOCK *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_UNLOCK_R_UNLOCK_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define EEPROM_UNLOCK_R_UNLOCK_BIT    (0UL)

#define EEPROM_UNLOCK_UNLOCK_MASK    ((UBase_t) 0xFFFFFFFFUL)
/*----------*/

/******************************************************************************************
************************************ 9 PROT *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_PROT_R_PROT_MASK    ((UBase_t) 0x00000007UL)
#define EEPROM_PROT_R_PROT_BIT    (0UL)
#define EEPROM_PROT_R_PROT_NOPASS_RDWR    ((UBase_t) 0x00000000UL)
#define EEPROM_PROT_R_PROT_PASS_RDWR    ((UBase_t) 0x00000001UL)
#define EEPROM_PROT_R_PROT_NOPASS_RD    ((UBase_t) 0x00000002UL)

#define EEPROM_PROT_PROT_MASK    ((UBase_t) 0x00000007UL)
#define EEPROM_PROT_PROT_NOPASS_RDWR    ((UBase_t) 0x00000000UL)
#define EEPROM_PROT_PROT_PASS_RDWR    ((UBase_t) 0x00000001UL)
#define EEPROM_PROT_PROT_NOPASS_RD    ((UBase_t) 0x00000002UL)
/*----------*/

/*----------*/
#define EEPROM_PROT_R_ACC_MASK    ((UBase_t) 0x00000008UL)
#define EEPROM_PROT_R_ACC_BIT    (3UL)
#define EEPROM_PROT_R_ACC_BOTH    ((UBase_t) 0x00000000UL)
#define EEPROM_PROT_R_ACC_SUPERVISOR    ((UBase_t) 0x00000008UL)

#define EEPROM_PROT_ACC_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_PROT_ACC_BOTH    ((UBase_t) 0x00000000UL)
#define EEPROM_PROT_ACC_SUPERVISOR    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************ 10 PASS0 *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_PASS0_R_PASS_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define EEPROM_PASS0_R_PASS_BIT    (0UL)
#define EEPROM_PASS0_R_PASS_NOSET    ((UBase_t) 0x00000000UL)
#define EEPROM_PASS0_R_PASS_SET    ((UBase_t) 0x00000001UL)

#define EEPROM_PASS0_PASS_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define EEPROM_PASS0_PASS_NOSET    ((UBase_t) 0x00000000UL)
#define EEPROM_PASS0_PASS_SET    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************11 PASS1 *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_PASS1_R_PASS_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define EEPROM_PASS1_R_PASS_BIT    (0UL)
#define EEPROM_PASS1_R_PASS_NOSET    ((UBase_t) 0x00000000UL)
#define EEPROM_PASS1_R_PASS_SET    ((UBase_t) 0x00000001UL)

#define EEPROM_PASS1_PASS_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define EEPROM_PASS1_PASS_NOSET    ((UBase_t) 0x00000000UL)
#define EEPROM_PASS1_PASS_SET    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************12 PASS2 *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_PASS2_R_PASS_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define EEPROM_PASS2_R_PASS_BIT    (0UL)
#define EEPROM_PASS2_R_PASS_NOSET    ((UBase_t) 0x00000000UL)
#define EEPROM_PASS2_R_PASS_SET    ((UBase_t) 0x00000001UL)

#define EEPROM_PASS2_PASS_MASK    ((UBase_t) 0xFFFFFFFFUL)
#define EEPROM_PASS2_PASS_NOSET    ((UBase_t) 0x00000000UL)
#define EEPROM_PASS2_PASS_SET    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************13 INT *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_INT_R_INT_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_INT_R_INT_BIT    (0UL)
#define EEPROM_INT_R_INT_INACTIVE    ((UBase_t) 0x00000000UL)
#define EEPROM_INT_R_INT_ACTIVE    ((UBase_t) 0x00000001UL)

#define EEPROM_INT_INT_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_INT_INT_INACTIVE    ((UBase_t) 0x00000000UL)
#define EEPROM_INT_INT_ACTIVE    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************14 HIDE *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_HIDE_R_H1_MASK    ((UBase_t) 0x00000002UL)
#define EEPROM_HIDE_R_H1_BIT    (1UL)
#define EEPROM_HIDE_R_H1_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H1_HIDE    ((UBase_t) 0x00000002UL)

#define EEPROM_HIDE_H1_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H1_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H1_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H2_MASK    ((UBase_t) 0x00000004UL)
#define EEPROM_HIDE_R_H2_BIT    (2UL)
#define EEPROM_HIDE_R_H2_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H2_HIDE    ((UBase_t) 0x00000004UL)

#define EEPROM_HIDE_H2_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H2_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H2_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H3_MASK    ((UBase_t) 0x00000008UL)
#define EEPROM_HIDE_R_H3_BIT    (3UL)
#define EEPROM_HIDE_R_H3_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H3_HIDE    ((UBase_t) 0x00000008UL)

#define EEPROM_HIDE_H3_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H3_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H3_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H4_MASK    ((UBase_t) 0x00000010UL)
#define EEPROM_HIDE_R_H4_BIT    (4UL)
#define EEPROM_HIDE_R_H4_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H4_HIDE    ((UBase_t) 0x000000010UL)

#define EEPROM_HIDE_H4_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H4_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H4_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H5_MASK    ((UBase_t) 0x00000020UL)
#define EEPROM_HIDE_R_H5_BIT    (5UL)
#define EEPROM_HIDE_R_H5_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H5_HIDE    ((UBase_t) 0x00000020UL)

#define EEPROM_HIDE_H5_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H5_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H5_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H6_MASK    ((UBase_t) 0x00000040UL)
#define EEPROM_HIDE_R_H6_BIT    (6UL)
#define EEPROM_HIDE_R_H6_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H6_HIDE    ((UBase_t) 0x00000040UL)

#define EEPROM_HIDE_H6_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H6_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H6_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H7_MASK    ((UBase_t) 0x00000080UL)
#define EEPROM_HIDE_R_H7_BIT    (7UL)
#define EEPROM_HIDE_R_H7_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H7_HIDE    ((UBase_t) 0x00000080UL)

#define EEPROM_HIDE_H7_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H7_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H7_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H8_MASK    ((UBase_t) 0x00000100UL)
#define EEPROM_HIDE_R_H8_BIT    (8UL)
#define EEPROM_HIDE_R_H8_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H8_HIDE    ((UBase_t) 0x00000100UL)

#define EEPROM_HIDE_H8_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H8_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H8_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H9_MASK    ((UBase_t) 0x00000200UL)
#define EEPROM_HIDE_R_H9_BIT    (9UL)
#define EEPROM_HIDE_R_H9_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H9_HIDE    ((UBase_t) 0x00000200UL)

#define EEPROM_HIDE_H9_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H9_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H9_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H10_MASK    ((UBase_t) 0x00000400UL)
#define EEPROM_HIDE_R_H10_BIT    (10UL)
#define EEPROM_HIDE_R_H10_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H10_HIDE    ((UBase_t) 0x00000400UL)

#define EEPROM_HIDE_H10_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H10_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H10_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H11_MASK    ((UBase_t) 0x00000800UL)
#define EEPROM_HIDE_R_H11_BIT    (11UL)
#define EEPROM_HIDE_R_H11_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H11_HIDE    ((UBase_t) 0x00000800UL)

#define EEPROM_HIDE_H11_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H11_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H11_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H12_MASK    ((UBase_t) 0x00001000UL)
#define EEPROM_HIDE_R_H12_BIT    (12UL)
#define EEPROM_HIDE_R_H12_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H12_HIDE    ((UBase_t) 0x00001000UL)

#define EEPROM_HIDE_H12_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H12_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H12_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H13_MASK    ((UBase_t) 0x00002000UL)
#define EEPROM_HIDE_R_H13_BIT    (13UL)
#define EEPROM_HIDE_R_H13_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H13_HIDE    ((UBase_t) 0x00002000UL)

#define EEPROM_HIDE_H13_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H13_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H13_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H14_MASK    ((UBase_t) 0x00004000UL)
#define EEPROM_HIDE_R_H14_BIT    (14UL)
#define EEPROM_HIDE_R_H14_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H14_HIDE    ((UBase_t) 0x00004000UL)

#define EEPROM_HIDE_H14_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H14_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H14_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H15_MASK    ((UBase_t) 0x00008000UL)
#define EEPROM_HIDE_R_H15_BIT    (15UL)
#define EEPROM_HIDE_R_H15_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H15_HIDE    ((UBase_t) 0x00008000UL)

#define EEPROM_HIDE_H15_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H15_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H15_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H16_MASK    ((UBase_t) 0x00010000UL)
#define EEPROM_HIDE_R_H16_BIT    (16UL)
#define EEPROM_HIDE_R_H16_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H16_HIDE    ((UBase_t) 0x00010000UL)

#define EEPROM_HIDE_H16_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H16_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H16_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H17_MASK    ((UBase_t) 0x00020000UL)
#define EEPROM_HIDE_R_H17_BIT    (17UL)
#define EEPROM_HIDE_R_H17_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H17_HIDE    ((UBase_t) 0x00020000UL)

#define EEPROM_HIDE_H17_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H17_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H17_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H18_MASK    ((UBase_t) 0x00040000UL)
#define EEPROM_HIDE_R_H18_BIT    (18UL)
#define EEPROM_HIDE_R_H18_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H18_HIDE    ((UBase_t) 0x00040000UL)

#define EEPROM_HIDE_H18_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H18_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H18_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H19_MASK    ((UBase_t) 0x00080000UL)
#define EEPROM_HIDE_R_H19_BIT    (19UL)
#define EEPROM_HIDE_R_H19_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H19_HIDE    ((UBase_t) 0x00080000UL)

#define EEPROM_HIDE_H19_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H19_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H19_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H20_MASK    ((UBase_t) 0x00100000UL)
#define EEPROM_HIDE_R_H20_BIT    (20UL)
#define EEPROM_HIDE_R_H20_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H20_HIDE    ((UBase_t) 0x00100000UL)

#define EEPROM_HIDE_H20_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H20_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H20_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H21_MASK    ((UBase_t) 0x00200000UL)
#define EEPROM_HIDE_R_H21_BIT    (21UL)
#define EEPROM_HIDE_R_H21_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H21_HIDE    ((UBase_t) 0x00200000UL)

#define EEPROM_HIDE_H21_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H21_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H21_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H22_MASK    ((UBase_t) 0x00400000UL)
#define EEPROM_HIDE_R_H22_BIT    (22UL)
#define EEPROM_HIDE_R_H22_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H22_HIDE    ((UBase_t) 0x00400000UL)

#define EEPROM_HIDE_H22_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H22_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H22_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H23_MASK    ((UBase_t) 0x00800000UL)
#define EEPROM_HIDE_R_H23_BIT    (23UL)
#define EEPROM_HIDE_R_H23_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H23_HIDE    ((UBase_t) 0x00800000UL)

#define EEPROM_HIDE_H23_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H23_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H23_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H24_MASK    ((UBase_t) 0x01000000UL)
#define EEPROM_HIDE_R_H24_BIT    (24UL)
#define EEPROM_HIDE_R_H24_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H24_HIDE    ((UBase_t) 0x01000000UL)

#define EEPROM_HIDE_H24_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H24_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H24_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H25_MASK    ((UBase_t) 0x02000000UL)
#define EEPROM_HIDE_R_H25_BIT    (25UL)
#define EEPROM_HIDE_R_H25_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H25_HIDE    ((UBase_t) 0x02000000UL)

#define EEPROM_HIDE_H25_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H25_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H25_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H26_MASK    ((UBase_t) 0x04000000UL)
#define EEPROM_HIDE_R_H26_BIT    (26UL)
#define EEPROM_HIDE_R_H26_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H26_HIDE    ((UBase_t) 0x04000000UL)

#define EEPROM_HIDE_H26_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H26_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H26_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H27_MASK    ((UBase_t) 0x08000000UL)
#define EEPROM_HIDE_R_H27_BIT    (27UL)
#define EEPROM_HIDE_R_H27_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H27_HIDE    ((UBase_t) 0x08000000UL)

#define EEPROM_HIDE_H27_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H27_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H27_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H28_MASK    ((UBase_t) 0x10000000UL)
#define EEPROM_HIDE_R_H28_BIT    (28UL)
#define EEPROM_HIDE_R_H28_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H28_HIDE    ((UBase_t) 0x10000000UL)

#define EEPROM_HIDE_H28_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H28_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H28_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H29_MASK    ((UBase_t) 0x20000000UL)
#define EEPROM_HIDE_R_H29_BIT    (29UL)
#define EEPROM_HIDE_R_H29_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H29_HIDE    ((UBase_t) 0x20000000UL)

#define EEPROM_HIDE_H29_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H29_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H29_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H30_MASK    ((UBase_t) 0x40000000UL)
#define EEPROM_HIDE_R_H30_BIT    (30UL)
#define EEPROM_HIDE_R_H30_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H30_HIDE    ((UBase_t) 0x40000000UL)

#define EEPROM_HIDE_H30_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H30_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H30_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_HIDE_R_H31_MASK    ((UBase_t) 0x80000000UL)
#define EEPROM_HIDE_R_H31_BIT    (31UL)
#define EEPROM_HIDE_R_H31_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_R_H31_HIDE    ((UBase_t) 0x80000000UL)

#define EEPROM_HIDE_H31_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_HIDE_H31_NOHIDE    ((UBase_t) 0x00000000UL)
#define EEPROM_HIDE_H31_HIDE    ((UBase_t) 0x00000001UL)
/*----------*/

/******************************************************************************************
************************************15 DBGME *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_DBGME_R_ME_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_DBGME_R_ME_BIT    (0UL)
#define EEPROM_DBGME_R_ME_NA    ((UBase_t) 0x00000000UL)
#define EEPROM_DBGME_R_ME_ERASE    ((UBase_t) 0x00000001UL)

#define EEPROM_DBGME_ME_MASK    ((UBase_t) 0x00000001UL)
#define EEPROM_DBGME_ME_NA    ((UBase_t) 0x00000000UL)
#define EEPROM_DBGME_ME_ERASE    ((UBase_t) 0x00000001UL)
/*----------*/

/*----------*/
#define EEPROM_DBGME_R_KEY_MASK    ((UBase_t) 0xFFFF0000UL)
#define EEPROM_DBGME_R_KEY_BIT    (0UL)
#define EEPROM_DBGME_R_KEY_ERASE    ((UBase_t) 0xE37B0000UL)

#define EEPROM_DBGME_KEY_MASK    ((UBase_t) 0x0000FFFFUL)
#define EEPROM_DBGME_KEY_ERASE    ((UBase_t) 0x0000E37BUL)
/*----------*/

/******************************************************************************************
************************************16 PP *********************************************
******************************************************************************************/

/*----------*/
#define EEPROM_PP_R_SIZE_MASK    ((UBase_t) 0x0000001FUL)
#define EEPROM_PP_R_SIZE_BIT    (0UL)
#define EEPROM_PP_R_SIZE_2KB    ((UBase_t) 0x0000001FUL)

#define EEPROM_PP_SIZE_MASK    ((UBase_t) 0x0000001FUL)
#define EEPROM_PP_SIZE_2KB    ((UBase_t) 0x0000001FUL)
/*----------*/



#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERDEFINES_H_ */

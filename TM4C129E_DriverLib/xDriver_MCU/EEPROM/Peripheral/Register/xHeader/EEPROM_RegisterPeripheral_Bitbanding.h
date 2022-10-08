/**
 *
 * @file EEPROM_RegisterPeripheral_Bitbanding.h
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
 * Date           Author     Version     Description * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/EEPROM/Peripheral/Register/xHeader/EEPROM_RegisterAddress.h>
#include <xDriver_MCU/EEPROM/Peripheral/Register/xHeader/EEPROM_RegisterDefines.h>
#include <xDriver_MCU/EEPROM/Peripheral/Struct/xHeader/EEPROM_StructPeripheral_Bitbanding.h>

#define EEPROM_BITBANDING    (((EEPROM_BITBANDING_t*) (EEPROM_BITBANDING_BASE + (EEPROM_OFFSET * 32UL))))

/******************************************************************************************
*********************************** * 1 SIZE *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_SIZE    ((EEPROM_BITBANDING_SIZE_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_SIZE_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 2 BLOCK *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_BLOCK    ((EEPROM_BITBANDING_BLOCK_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_BLOCK_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 3 OFFSET *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_OFFSET    ((EEPROM_BITBANDING_OFFSET_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_OFFSET_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 4 RDWR *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_RDWR    ((EEPROM_BITBANDING_RDWR_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_RDWR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 5 RDWRINC *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_RDWRINC    ((EEPROM_BITBANDING_RDWRINC_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_RDWRINC_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 6 DONE *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_DONE    ((EEPROM_BITBANDING_DONE_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_DONE_OFFSET) * 32UL)))

#define EEPROM_BITBANDING_DONE_WORKING    (*((volatile const UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_DONE_OFFSET) * 32UL) + (EEPROM_DONE_R_WORKING_BIT * 4UL))))
#define EEPROM_BITBANDING_DONE_WKERASE    (*((volatile const UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_DONE_OFFSET) * 32UL) + (EEPROM_DONE_R_WKERASE_BIT * 4UL))))
#define EEPROM_BITBANDING_DONE_WKCOPY    (*((volatile const UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_DONE_OFFSET) * 32UL) + (EEPROM_DONE_R_WKCOPY_BIT * 4UL))))
#define EEPROM_BITBANDING_DONE_NOPERM    (*((volatile const UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_DONE_OFFSET) * 32UL) + (EEPROM_DONE_R_NOPERM_BIT * 4UL))))
#define EEPROM_BITBANDING_DONE_WRBUSY    (*((volatile const UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_DONE_OFFSET) * 32UL) + (EEPROM_DONE_R_WRBUSY_BIT * 4UL))))

/******************************************************************************************
*********************************** * 7 SUPP *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_SUPP    ((EEPROM_BITBANDING_SUPP_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_SUPP_OFFSET) * 32UL)))

#define EEPROM_BITBANDING_SUPP_START    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_SUPP_OFFSET) * 32UL) + (EEPROM_SUPP_R_START_BIT * 4UL))))
#define EEPROM_BITBANDING_SUPP_EREQ    (*((volatile const UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_SUPP_OFFSET) * 32UL) + (EEPROM_SUPP_R_EREQ_BIT * 4UL))))
#define EEPROM_BITBANDING_SUPP_ERETRY    (*((volatile const UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_SUPP_OFFSET) * 32UL) + (EEPROM_SUPP_R_ERETRY_BIT * 4UL))))
#define EEPROM_BITBANDING_SUPP_PRETRY    (*((volatile const UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_SUPP_OFFSET) * 32UL) + (EEPROM_SUPP_R_PRETRY_BIT * 4UL))))

/******************************************************************************************
*********************************** * 8 UNLOCK *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_UNLOCK    ((EEPROM_BITBANDING_UNLOCK_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_UNLOCK_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 9 PROT *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_PROT    ((EEPROM_BITBANDING_PROT_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_PROT_OFFSET) * 32UL)))

#define EEPROM_BITBANDING_PROT_ACC    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_PROT_OFFSET) * 32UL) + (EEPROM_PROT_R_ACC_BIT * 4UL))))

/******************************************************************************************
*********************************** * 10 PASS0 *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_PASS0    ((EEPROM_BITBANDING_PASS_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_PASS0_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 11 PASS1 *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_PASS1    ((EEPROM_BITBANDING_PASS_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_PASS1_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 12 PASS2 *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_PASS2    ((EEPROM_BITBANDING_PASS_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_PASS2_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 13 INT *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_INT    ((EEPROM_BITBANDING_INT_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_INT_OFFSET) * 32UL)))

#define EEPROM_BITBANDING_INT_INT    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_INT_OFFSET) * 32UL) + (EEPROM_INT_R_INT_BIT * 4UL))))

/******************************************************************************************
*********************************** * 14 HIDE *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_HIDE    ((EEPROM_BITBANDING_HIDE_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL)))

#define EEPROM_BITBANDING_HIDE_H1    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H1_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H2    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H2_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H3    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H3_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H4    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H4_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H5    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H5_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H6    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H6_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H7    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H7_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H8    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H8_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H9    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H9_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H10    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H10_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H11    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H11_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H12    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H12_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H13    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H13_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H14    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H14_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H15    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H15_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H16    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H16_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H17    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H17_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H18    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H18_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H19    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H19_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H20    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H20_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H21    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H21_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H22    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H22_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H23    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H23_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H24    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H24_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H25    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H25_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H26    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H26_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H27    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H27_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H28    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H28_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H29    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H29_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H30    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H30_BIT * 4UL))))
#define EEPROM_BITBANDING_HIDE_H31    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_HIDE_OFFSET) * 32UL) + (EEPROM_HIDE_R_H31_BIT * 4UL))))

/******************************************************************************************
*********************************** * 15 DBGME *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_DBGME    ((EEPROM_BITBANDING_DBGME_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_DBGME_OFFSET) * 32UL)))

#define EEPROM_BITBANDING_DBGME_ME    (*((volatile UBase_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_DBGME_OFFSET) * 32UL) + (EEPROM_DBGME_R_ME_BIT * 4UL))))
/******************************************************************************************
*********************************** * 16 PP *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_PP    ((EEPROM_BITBANDING_PP_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_PP_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERPERIPHERAL_BITBANDING_H_ */

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

#define EEPROM_BITBANDING    (((EEPROM_BITBANDING_TypeDef*) (EEPROM_BITBANDING_BASE + (EEPROM_OFFSET * 32UL))))

/******************************************************************************************
*********************************** * 1 EESIZE *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EESIZE    ((BITBANDING_EESIZE_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EESIZE_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 2 EEBLOCK *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EEBLOCK    ((BITBANDING_EEBLOCK_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEBLOCK_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 3 EEOFFSET *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EEOFFSET    ((BITBANDING_EEOFFSET_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEOFFSET_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 4 EERDWR *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EERDWR    ((BITBANDING_EERDWR_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EERDWR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 5 EERDWRINC *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EERDWRINC    ((BITBANDING_EERDWRINC_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EERDWRINC_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 6 EEDONE *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EEDONE    ((BITBANDING_EEDONE_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEDONE_OFFSET) * 32UL)))

#define EEPROM_BITBANDING_EEDONE_WORKING    (*((volatile const uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEDONE_OFFSET) * 32UL) + (EEPROM_EEDONE_R_WORKING_BIT * 4UL))))
#define EEPROM_BITBANDING_EEDONE_WKERASE    (*((volatile const uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEDONE_OFFSET) * 32UL) + (EEPROM_EEDONE_R_WKERASE_BIT * 4UL))))
#define EEPROM_BITBANDING_EEDONE_WKCOPY    (*((volatile const uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEDONE_OFFSET) * 32UL) + (EEPROM_EEDONE_R_WKCOPY_BIT * 4UL))))
#define EEPROM_BITBANDING_EEDONE_NOPERM    (*((volatile const uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEDONE_OFFSET) * 32UL) + (EEPROM_EEDONE_R_NOPERM_BIT * 4UL))))
#define EEPROM_BITBANDING_EEDONE_WRBUSY    (*((volatile const uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEDONE_OFFSET) * 32UL) + (EEPROM_EEDONE_R_WRBUSY_BIT * 4UL))))

/******************************************************************************************
*********************************** * 7 EESUPP *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EESUPP    ((BITBANDING_EESUPP_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EESUPP_OFFSET) * 32UL)))

#define EEPROM_BITBANDING_EESUPP_START    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EESUPP_OFFSET) * 32UL) + (EEPROM_EESUPP_R_START_BIT * 4UL))))
#define EEPROM_BITBANDING_EESUPP_EREQ    (*((volatile const uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EESUPP_OFFSET) * 32UL) + (EEPROM_EESUPP_R_EREQ_BIT * 4UL))))
#define EEPROM_BITBANDING_EESUPP_ERETRY    (*((volatile const uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EESUPP_OFFSET) * 32UL) + (EEPROM_EESUPP_R_ERETRY_BIT * 4UL))))
#define EEPROM_BITBANDING_EESUPP_PRETRY    (*((volatile const uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EESUPP_OFFSET) * 32UL) + (EEPROM_EESUPP_R_PRETRY_BIT * 4UL))))

/******************************************************************************************
*********************************** * 8 EEUNLOCK *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EEUNLOCK    ((BITBANDING_EEUNLOCK_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEUNLOCK_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 9 EEPROT *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EEPROT    ((BITBANDING_EEPROT_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEPROT_OFFSET) * 32UL)))

#define EEPROM_BITBANDING_EEPROT_ACC    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEPROT_OFFSET) * 32UL) + (EEPROM_EEPROT_R_ACC_BIT * 4UL))))

/******************************************************************************************
*********************************** * 10 EEPASS0 *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EEPASS0    ((BITBANDING_EEPASS_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEPASS0_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 11 EEPASS1 *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EEPASS1    ((BITBANDING_EEPASS_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEPASS1_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 12 EEPASS2 *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EEPASS2    ((BITBANDING_EEPASS_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEPASS2_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 13 EEINT *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EEINT    ((BITBANDING_EEINT_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEINT_OFFSET) * 32UL)))

#define EEPROM_BITBANDING_EEINT_INT    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEINT_OFFSET) * 32UL) + (EEPROM_EEINT_R_INT_BIT * 4UL))))

/******************************************************************************************
*********************************** * 14 EEHIDE *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EEHIDE    ((BITBANDING_EEHIDE_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL)))

#define EEPROM_BITBANDING_EEHIDE_H1    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H1_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H2    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H2_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H3    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H3_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H4    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H4_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H5    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H5_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H6    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H6_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H7    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H7_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H8    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H8_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H9    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H9_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H10    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H10_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H11    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H11_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H12    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H12_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H13    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H13_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H14    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H14_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H15    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H15_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H16    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H16_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H17    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H17_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H18    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H18_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H19    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H19_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H20    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H20_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H21    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H21_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H22    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H22_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H23    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H23_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H24    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H24_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H25    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H25_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H26    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H26_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H27    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H27_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H28    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H28_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H29    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H29_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H30    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H30_BIT * 4UL))))
#define EEPROM_BITBANDING_EEHIDE_H31    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEHIDE_OFFSET) * 32UL) + (EEPROM_EEHIDE_R_H31_BIT * 4UL))))

/******************************************************************************************
*********************************** * 15 EEDBGME *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EEDBGME    ((BITBANDING_EEDBGME_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEDBGME_OFFSET) * 32UL)))

#define EEPROM_BITBANDING_EEDBGME_ME    (*((volatile uint32_t*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEDBGME_OFFSET) * 32UL) + (EEPROM_EEDBGME_R_ME_BIT * 4UL))))
/******************************************************************************************
*********************************** * 16 EEPROMPP *********************************************
******************************************************************************************/
#define EEPROM_BITBANDING_EEPROMPP    ((BITBANDING_EEPROMPP_TypeDef*) (EEPROM_BITBANDING_BASE + ((EEPROM_OFFSET + EEPROM_EEPROMPP_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERPERIPHERAL_BITBANDING_H_ */

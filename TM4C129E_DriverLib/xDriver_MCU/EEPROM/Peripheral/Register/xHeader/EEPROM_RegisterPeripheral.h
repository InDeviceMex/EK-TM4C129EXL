/**
 *
 * @file EEPROM_RegisterPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/EEPROM/Peripheral/Register/xHeader/EEPROM_RegisterAddress.h>
#include <xDriver_MCU/EEPROM/Peripheral/Struct/xHeader/EEPROM_StructPeripheral.h>

#define EEPROM    ((EEPROM_TypeDef*) (EEPPROM_BASE))

/******************************************************************************************
************************************ 1 EESIZE *********************************************
******************************************************************************************/
#define EEPROM_EESIZE    ((EESIZE_TypeDef*) (EEPROM_BASE + EEPROM_EESIZE_OFFSET))
#define EEPROM_EESIZE_R    (*((volatile const uint32_t*) (EEPROM_BASE + EEPROM_EESIZE_OFFSET)))

/******************************************************************************************
************************************ 2 EEBLOCK *********************************************
******************************************************************************************/
#define EEPROM_EEBLOCK    ((EEBLOCK_TypeDef*) (EEPROM_BASE + EEPROM_EEBLOCK_OFFSET))
#define EEPROM_EEBLOCK_R    (*((volatile uint32_t*) (EEPROM_BASE + EEPROM_EEBLOCK_OFFSET)))

/******************************************************************************************
************************************ 3 EEOFFSET *********************************************
******************************************************************************************/
#define EEPROM_EEOFFSET    ((EEOFFSET_TypeDef*) (EEPROM_BASE + EEPROM_EEOFFSET_OFFSET))
#define EEPROM_EEOFFSET_R    (*((volatile uint32_t*) (EEPROM_BASE + EEPROM_EEOFFSET_OFFSET)))

/******************************************************************************************
************************************ 4 EERDWR *********************************************
******************************************************************************************/
#define EEPROM_EERDWR    ((EERDWR_TypeDef*) (EEPROM_BASE + EEPROM_EERDWR_OFFSET))
#define EEPROM_EERDWR_R    (*((volatile uint32_t*) (EEPROM_BASE + EEPROM_EERDWR_OFFSET)))

/******************************************************************************************
************************************ 5 EERDWRINC *********************************************
******************************************************************************************/
#define EEPROM_EERDWRINC    ((EERDWRINC_TypeDef*) (EEPROM_BASE + EEPROM_EERDWRINC_OFFSET))
#define EEPROM_EERDWRINC_R    (*((volatile uint32_t*) (EEPROM_BASE + EEPROM_EERDWRINC_OFFSET)))

/******************************************************************************************
************************************ 6 EEDONE *********************************************
******************************************************************************************/
#define EEPROM_EEDONE    ((EEDONE_TypeDef*) (EEPROM_BASE + EEPROM_EEDONE_OFFSET))
#define EEPROM_EEDONE_R    (*((volatile const uint32_t*) (EEPROM_BASE + EEPROM_EEDONE_OFFSET)))

/******************************************************************************************
************************************7 EESUPP *********************************************
******************************************************************************************/
#define EEPROM_EESUPP    ((EESUPP_TypeDef*) (EEPROM_BASE + EEPROM_EESUPP_OFFSET))
#define EEPROM_EESUPP_R    (*((volatile uint32_t*) (EEPROM_BASE + EEPROM_EESUPP_OFFSET)))

/******************************************************************************************
************************************8 EEUNLOCK *********************************************
******************************************************************************************/
#define EEPROM_EEUNLOCK    ((EEUNLOCK_TypeDef*) (EEPROM_BASE + EEPROM_EEUNLOCK_OFFSET))
#define EEPROM_EEUNLOCK_R    (*((volatile uint32_t*) (EEPROM_BASE + EEPROM_EEUNLOCK_OFFSET)))

/******************************************************************************************
************************************ 9 EEPROT *********************************************
******************************************************************************************/
#define EEPROM_EEPROT    ((EEPROT_TypeDef*) (EEPROM_BASE + EEPROM_EEPROT_OFFSET))
#define EEPROM_EEPROT_R    (*((volatile uint32_t*) (EEPROM_BASE + EEPROM_EEPROT_OFFSET)))

/******************************************************************************************
************************************ 10 EEPASS0 *********************************************
******************************************************************************************/
#define EEPROM_EEPASS0    ((EEPASS_TypeDef*) (EEPROM_BASE + EEPROM_EEPASS0_OFFSET))
#define EEPROM_EEPASS0_R    (*((volatile uint32_t*) (EEPROM_BASE + EEPROM_EEPASS0_OFFSET)))

/******************************************************************************************
************************************11 EEPASS1 *********************************************
******************************************************************************************/
#define EEPROM_EEPASS1    ((EEPASS_TypeDef*) (EEPROM_BASE + EEPROM_EEPASS1_OFFSET))
#define EEPROM_EEPASS1_R    (*((volatile uint32_t*) (EEPROM_BASE + EEPROM_EEPASS1_OFFSET)))

/******************************************************************************************
************************************12 EEPASS2 *********************************************
******************************************************************************************/
#define EEPROM_EEPASS2    ((EEPASS_TypeDef*) (EEPROM_BASE + EEPROM_EEPASS2_OFFSET))
#define EEPROM_EEPASS2_R    (*((volatile uint32_t*) (EEPROM_BASE + EEPROM_EEPASS2_OFFSET)))

/******************************************************************************************
************************************13 EEINT *********************************************
******************************************************************************************/
#define EEPROM_EEINT    ((EEINT_TypeDef*) (EEPROM_BASE + EEPROM_EEINT_OFFSET))
#define EEPROM_EEINT_R    (*((volatile uint32_t*) (EEPROM_BASE + EEPROM_EEINT_OFFSET)))

/******************************************************************************************
************************************14 EEHIDE *********************************************
******************************************************************************************/
#define EEPROM_EEHIDE    ((EEHIDE_TypeDef*) (EEPROM_BASE + EEPROM_EEHIDE_OFFSET))
#define EEPROM_EEHIDE_R    (*((volatile uint32_t*) (EEPROM_BASE + EEPROM_EEHIDE_OFFSET)))

/******************************************************************************************
************************************15 EEDBGME *********************************************
******************************************************************************************/
#define EEPROM_EEDBGME    ((EEDBGME_TypeDef*) (EEPROM_BASE + EEPROM_EEDBGME_OFFSET))
#define EEPROM_EEDBGME_R    (*((volatile uint32_t*) (EEPROM_BASE + EEPROM_EEDBGME_OFFSET)))

/******************************************************************************************
************************************16 EEPROMPP *********************************************
******************************************************************************************/
#define EEPROM_EEPROMPP    ((EEPROMPP_TypeDef*) (EEPROM_BASE + EEPROM_EEPROMPP_OFFSET))
#define EEPROM_EEPROMPP_R    (*((volatile const uint32_t*) (EEPROM_BASE + EEPROM_EEPROMPP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERPERIPHERAL_H_ */

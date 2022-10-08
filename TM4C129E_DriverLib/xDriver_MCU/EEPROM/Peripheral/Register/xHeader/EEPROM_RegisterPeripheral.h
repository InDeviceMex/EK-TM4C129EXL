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

#define EEPROM    ((EEPROM_t*) (EEPPROM_BASE))

/******************************************************************************************
************************************ 1 SIZE *********************************************
******************************************************************************************/
#define EEPROM_SIZE    ((EEPROM_SIZE_t*) (EEPROM_BASE + EEPROM_SIZE_OFFSET))
#define EEPROM_SIZE_R    (*((volatile const UBase_t*) (EEPROM_BASE + EEPROM_SIZE_OFFSET)))

/******************************************************************************************
************************************ 2 BLOCK *********************************************
******************************************************************************************/
#define EEPROM_BLOCK    ((EEPROM_BLOCK_t*) (EEPROM_BASE + EEPROM_BLOCK_OFFSET))
#define EEPROM_BLOCK_R    (*((volatile UBase_t*) (EEPROM_BASE + EEPROM_BLOCK_OFFSET)))

/******************************************************************************************
************************************ 3 OFFSET *********************************************
******************************************************************************************/
#define EEPROM_OFFSET_    ((EEPROM_OFFSET_t*) (EEPROM_BASE + EEPROM_OFFSET_OFFSET))
#define EEPROM_OFFSET_R    (*((volatile UBase_t*) (EEPROM_BASE + EEPROM_OFFSET_OFFSET)))

/******************************************************************************************
************************************ 4 RDWR *********************************************
******************************************************************************************/
#define EEPROM_RDWR    ((EEPROM_RDWR_t*) (EEPROM_BASE + EEPROM_RDWR_OFFSET))
#define EEPROM_RDWR_R    (*((volatile UBase_t*) (EEPROM_BASE + EEPROM_RDWR_OFFSET)))

/******************************************************************************************
************************************ 5 RDWRINC *********************************************
******************************************************************************************/
#define EEPROM_RDWRINC    ((EEPROM_RDWRINC_t*) (EEPROM_BASE + EEPROM_RDWRINC_OFFSET))
#define EEPROM_RDWRINC_R    (*((volatile UBase_t*) (EEPROM_BASE + EEPROM_RDWRINC_OFFSET)))

/******************************************************************************************
************************************ 6 DONE *********************************************
******************************************************************************************/
#define EEPROM_DONE    ((EEPROM_DONE_t*) (EEPROM_BASE + EEPROM_DONE_OFFSET))
#define EEPROM_DONE_R    (*((volatile const UBase_t*) (EEPROM_BASE + EEPROM_DONE_OFFSET)))

/******************************************************************************************
************************************7 SUPP *********************************************
******************************************************************************************/
#define EEPROM_SUPP    ((EEPROM_SUPP_t*) (EEPROM_BASE + EEPROM_SUPP_OFFSET))
#define EEPROM_SUPP_R    (*((volatile UBase_t*) (EEPROM_BASE + EEPROM_SUPP_OFFSET)))

/******************************************************************************************
************************************8 UNLOCK *********************************************
******************************************************************************************/
#define EEPROM_UNLOCK    ((EEPROM_UNLOCK_t*) (EEPROM_BASE + EEPROM_UNLOCK_OFFSET))
#define EEPROM_UNLOCK_R    (*((volatile UBase_t*) (EEPROM_BASE + EEPROM_UNLOCK_OFFSET)))

/******************************************************************************************
************************************ 9 PROT *********************************************
******************************************************************************************/
#define EEPROM_PROT    ((EEPROM_PROT_t*) (EEPROM_BASE + EEPROM_PROT_OFFSET))
#define EEPROM_PROT_R    (*((volatile UBase_t*) (EEPROM_BASE + EEPROM_PROT_OFFSET)))

/******************************************************************************************
************************************ 10 PASS0 *********************************************
******************************************************************************************/
#define EEPROM_PASS0    ((EEPROM_PASS_t*) (EEPROM_BASE + EEPROM_PASS0_OFFSET))
#define EEPROM_PASS0_R    (*((volatile UBase_t*) (EEPROM_BASE + EEPROM_PASS0_OFFSET)))

/******************************************************************************************
************************************11 PASS1 *********************************************
******************************************************************************************/
#define EEPROM_PASS1    ((EEPROM_PASS_t*) (EEPROM_BASE + EEPROM_PASS1_OFFSET))
#define EEPROM_PASS1_R    (*((volatile UBase_t*) (EEPROM_BASE + EEPROM_PASS1_OFFSET)))

/******************************************************************************************
************************************12 PASS2 *********************************************
******************************************************************************************/
#define EEPROM_PASS2    ((EEPROM_PASS_t*) (EEPROM_BASE + EEPROM_PASS2_OFFSET))
#define EEPROM_PASS2_R    (*((volatile UBase_t*) (EEPROM_BASE + EEPROM_PASS2_OFFSET)))

/******************************************************************************************
************************************13 INT *********************************************
******************************************************************************************/
#define EEPROM_INT    ((EEPROM_INT_t*) (EEPROM_BASE + EEPROM_INT_OFFSET))
#define EEPROM_INT_R    (*((volatile UBase_t*) (EEPROM_BASE + EEPROM_INT_OFFSET)))

/******************************************************************************************
************************************14 HIDE *********************************************
******************************************************************************************/
#define EEPROM_HIDE    ((EEPROM_HIDE_t*) (EEPROM_BASE + EEPROM_HIDE_OFFSET))
#define EEPROM_HIDE_R    (*((volatile UBase_t*) (EEPROM_BASE + EEPROM_HIDE_OFFSET)))

/******************************************************************************************
************************************15 DBGME *********************************************
******************************************************************************************/
#define EEPROM_DBGME    ((EEPROM_DBGME_t*) (EEPROM_BASE + EEPROM_DBGME_OFFSET))
#define EEPROM_DBGME_R    (*((volatile UBase_t*) (EEPROM_BASE + EEPROM_DBGME_OFFSET)))

/******************************************************************************************
************************************16 PP *********************************************
******************************************************************************************/
#define EEPROM_PP    ((EEPROM_PP_t*) (EEPROM_BASE + EEPROM_PP_OFFSET))
#define EEPROM_PP_R    (*((volatile const UBase_t*) (EEPROM_BASE + EEPROM_PP_OFFSET)))

uintptr_t EEPROM__uptrBlockBaseAddress(EEPROM_nMODULE enModuleArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_PERIPHERAL_EEPROM_REGISTER_EEPROM_REGISTERPERIPHERAL_H_ */

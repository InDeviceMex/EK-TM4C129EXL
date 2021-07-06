/**
 *
 * @file EEPROM_WorldCount.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

/**
 * Include Files
 */
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/xHeader/EEPROM_WorldCount.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

/**
 * Max Number of World (32bits) inside the EEPROM peripheral
 */
static uint32_t EEPROM_u32WorldCount = 0UL;

/**
 *  Global Functions
 */

uint32_t EEPROM__u32GetWorldCount (void)
{
    return EEPROM_u32WorldCount;
}

void EEPROM__vInitWorldCount (void)
{
    EEPROM_u32WorldCount = MCU__u32ReadRegister(EEPROM_BASE, EEPROM_EESIZE_OFFSET, EEPROM_EESIZE_WORDCNT_MASK, EEPROM_EESIZE_R_WORDCNT_BIT);
}

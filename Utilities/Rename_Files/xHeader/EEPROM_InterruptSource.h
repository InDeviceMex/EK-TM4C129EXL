/**
 *
 * @file EEPROM_InterruptSource.h
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
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_EEPROM_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_EEPROM_INTERRUPTSOURCE_H_

#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Enum.h>

EEPROM_nERROR EEPROM__enSetInterruptSourceStateByMask(EEPROM_nMODULE enModuleArg, EEPROM_nCOMPMASK enCompMaskArg, EEPROM_nSTATE enStateArg);
EEPROM_nERROR EEPROM__enSetInterruptSourceStateByNumber(EEPROM_nMODULE enModuleArg, EEPROM_nCOMP enCompArg, EEPROM_nSTATE enStateArg);

EEPROM_nERROR EEPROM__enGetInterruptSourceStateByMask(EEPROM_nMODULE enModuleArg, EEPROM_nCOMPMASK enCompMaskArg, EEPROM_nCOMPMASK* penCompGetArg);
EEPROM_nERROR EEPROM__enGetInterruptSourceStateByNumber(EEPROM_nMODULE enModuleArg, EEPROM_nCOMP enCompArg, EEPROM_nSTATE* penStateArg);

EEPROM_nERROR EEPROM__enEnableInterruptSourceByMask(EEPROM_nMODULE enModuleArg, EEPROM_nCOMPMASK enCompMaskArg);
EEPROM_nERROR EEPROM__enEnableInterruptSourceByNumber(EEPROM_nMODULE enModuleArg, EEPROM_nCOMP enCompArg);

EEPROM_nERROR EEPROM__enDisableInterruptSourceByMask(EEPROM_nMODULE enModuleArg, EEPROM_nCOMPMASK enCompMaskArg);
EEPROM_nERROR EEPROM__enDisableInterruptSourceByNumber(EEPROM_nMODULE enModuleArg, EEPROM_nCOMP enCompArg);

EEPROM_nERROR EEPROM__enClearInterruptSourceByMask(EEPROM_nMODULE enModuleArg, EEPROM_nCOMPMASK enCompMaskArg);
EEPROM_nERROR EEPROM__enClearInterruptSourceByNumber(EEPROM_nMODULE enModuleArg, EEPROM_nCOMP enCompArg);

EEPROM_nERROR EEPROM__enStatusInterruptSourceByMask(EEPROM_nMODULE enModuleArg, EEPROM_nCOMPMASK enCompMaskArg, EEPROM_nCOMPMASK* penCompStatusArg);
EEPROM_nERROR EEPROM__enStatusInterruptSourceByNumber(EEPROM_nMODULE enModuleArg, EEPROM_nCOMP enCompArg, EEPROM_nSTATUS* penStatusArg);

EEPROM_nERROR EEPROM__enStatusMaskedInterruptSourceByMask(EEPROM_nMODULE enModuleArg, EEPROM_nCOMPMASK enCompMaskArg, EEPROM_nCOMPMASK* penCompStatusArg);
EEPROM_nERROR EEPROM__enStatusMaskedInterruptSourceByNumber(EEPROM_nMODULE enModuleArg, EEPROM_nCOMP enCompArg, EEPROM_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_EEPROM_DRIVER_INTRINSICS_INTERRUPT_XHEADER_EEPROM_INTERRUPTSOURCE_H_ */

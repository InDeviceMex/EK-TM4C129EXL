/**
 *
 * @file ACMP_InterruptSource.h
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
#ifndef XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ACMP_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ACMP_INTERRUPTSOURCE_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

ACMP_nERROR ACMP__enSetInterruptSourceStateByMask(ACMP_nMODULE enModuleArg, ACMP_nCOMPMASK enCompMaskArg, ACMP_nSTATE enStateArg);
ACMP_nERROR ACMP__enSetInterruptSourceStateByNumber(ACMP_nMODULE enModuleArg, ACMP_nCOMP enCompArg, ACMP_nSTATE enStateArg);

ACMP_nERROR ACMP__enGetInterruptSourceStateByMask(ACMP_nMODULE enModuleArg, ACMP_nCOMPMASK enCompMaskArg, ACMP_nCOMPMASK* penCompGetArg);
ACMP_nERROR ACMP__enGetInterruptSourceStateByNumber(ACMP_nMODULE enModuleArg, ACMP_nCOMP enCompArg, ACMP_nSTATE* penStateArg);

ACMP_nERROR ACMP__enEnableInterruptSourceByMask(ACMP_nMODULE enModuleArg, ACMP_nCOMPMASK enCompMaskArg);
ACMP_nERROR ACMP__enEnableInterruptSourceByNumber(ACMP_nMODULE enModuleArg, ACMP_nCOMP enCompArg);

ACMP_nERROR ACMP__enDisableInterruptSourceByMask(ACMP_nMODULE enModuleArg, ACMP_nCOMPMASK enCompMaskArg);
ACMP_nERROR ACMP__enDisableInterruptSourceByNumber(ACMP_nMODULE enModuleArg, ACMP_nCOMP enCompArg);

ACMP_nERROR ACMP__enClearInterruptSourceByMask(ACMP_nMODULE enModuleArg, ACMP_nCOMPMASK enCompMaskArg);
ACMP_nERROR ACMP__enClearInterruptSourceByNumber(ACMP_nMODULE enModuleArg, ACMP_nCOMP enCompArg);

ACMP_nERROR ACMP__enStatusInterruptSourceByMask(ACMP_nMODULE enModuleArg, ACMP_nCOMPMASK enCompMaskArg, ACMP_nCOMPMASK* penCompStatusArg);
ACMP_nERROR ACMP__enStatusInterruptSourceByNumber(ACMP_nMODULE enModuleArg, ACMP_nCOMP enCompArg, ACMP_nSTATUS* penStatusArg);

ACMP_nERROR ACMP__enStatusMaskedInterruptSourceByMask(ACMP_nMODULE enModuleArg, ACMP_nCOMPMASK enCompMaskArg, ACMP_nCOMPMASK* penCompStatusArg);
ACMP_nERROR ACMP__enStatusMaskedInterruptSourceByNumber(ACMP_nMODULE enModuleArg, ACMP_nCOMP enCompArg, ACMP_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ACMP_INTERRUPTSOURCE_H_ */

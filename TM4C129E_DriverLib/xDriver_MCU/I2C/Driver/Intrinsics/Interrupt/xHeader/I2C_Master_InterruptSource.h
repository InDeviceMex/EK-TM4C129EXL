/**
 *
 * @file I2C_Master_InterruptSource.h
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
 * @verbatim Mar 24, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 24, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_XHEADER_I2C_MASTER_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_XHEADER_I2C_MASTER_INTERRUPTSOURCE_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

I2C_nERROR I2C_Master__enSetInterruptSourceStateByMask(I2C_nMODULE enModuleArg, I2C_nMASTER_INTMASK enInterruptMaskArg, I2C_nSTATE enStateArg);
I2C_nERROR I2C_Master__enSetInterruptSourceStateByNumber(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg, I2C_nSTATE enStateArg);

I2C_nERROR I2C_Master__enGetInterruptSourceStateByMask(I2C_nMODULE enModuleArg, I2C_nMASTER_INTMASK enInterruptMaskArg, I2C_nMASTER_INTMASK* penInterruptGetArg);
I2C_nERROR I2C_Master__enGetInterruptSourceStateByNumber(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg, I2C_nSTATE* penStateArg);

I2C_nERROR I2C_Master__enEnableInterruptSourceByMask(I2C_nMODULE enModuleArg, I2C_nMASTER_INTMASK enInterruptMaskArg);
I2C_nERROR I2C_Master__enEnableInterruptSourceByNumber(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg);

I2C_nERROR I2C_Master__enDisableInterruptSourceByMask(I2C_nMODULE enModuleArg, I2C_nMASTER_INTMASK enInterruptMaskArg);
I2C_nERROR I2C_Master__enDisableInterruptSourceByNumber(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg);

I2C_nERROR I2C_Master__enClearInterruptSourceByMask(I2C_nMODULE enModuleArg, I2C_nMASTER_INTMASK enInterruptMaskArg);
I2C_nERROR I2C_Master__enClearInterruptSourceByNumber(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg);

I2C_nERROR I2C_Master__enStatusInterruptSourceByMask(I2C_nMODULE enModuleArg, I2C_nMASTER_INTMASK enInterruptMaskArg, I2C_nMASTER_INTMASK* penInterruptStatusArg);
I2C_nERROR I2C_Master__enStatusInterruptSourceByNumber(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg, I2C_nSTATUS* penStatusArg);

I2C_nERROR I2C_Master__enStatusMaskedInterruptSourceByMask(I2C_nMODULE enModuleArg, I2C_nMASTER_INTMASK enInterruptMaskArg, I2C_nMASTER_INTMASK* penInterruptStatusArg);
I2C_nERROR I2C_Master__enStatusMaskedInterruptSourceByNumber(I2C_nMODULE enModuleArg, I2C_nMASTER_INT enInterruptArg, I2C_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_XHEADER_I2C_MASTER_INTERRUPTSOURCE_H_ */

/**
 *
 * @file I2C_Slave_InterruptSource.h
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

#ifndef XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_XHEADER_I2C_SLAVE_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_XHEADER_I2C_SLAVE_INTERRUPTSOURCE_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

I2C_nERROR I2C_Slave__enSetInterruptSourceStateByMask(I2C_nMODULE enModuleArg, I2C_nSLAVE_INTMASK enInterruptMaskArg, I2C_nSTATE enStateArg);
I2C_nERROR I2C_Slave__enSetInterruptSourceStateByNumber(I2C_nMODULE enModuleArg, I2C_nSLAVE_INT enInterruptArg, I2C_nSTATE enStateArg);

I2C_nERROR I2C_Slave__enGetInterruptSourceStateByMask(I2C_nMODULE enModuleArg, I2C_nSLAVE_INTMASK enInterruptMaskArg, I2C_nSLAVE_INTMASK* penInterruptGetArg);
I2C_nERROR I2C_Slave__enGetInterruptSourceStateByNumber(I2C_nMODULE enModuleArg, I2C_nSLAVE_INT enInterruptArg, I2C_nSTATE* penStateArg);

I2C_nERROR I2C_Slave__enEnableInterruptSourceByMask(I2C_nMODULE enModuleArg, I2C_nSLAVE_INTMASK enInterruptMaskArg);
I2C_nERROR I2C_Slave__enEnableInterruptSourceByNumber(I2C_nMODULE enModuleArg, I2C_nSLAVE_INT enInterruptArg);

I2C_nERROR I2C_Slave__enDisableInterruptSourceByMask(I2C_nMODULE enModuleArg, I2C_nSLAVE_INTMASK enInterruptMaskArg);
I2C_nERROR I2C_Slave__enDisableInterruptSourceByNumber(I2C_nMODULE enModuleArg, I2C_nSLAVE_INT enInterruptArg);

I2C_nERROR I2C_Slave__enClearInterruptSourceByMask(I2C_nMODULE enModuleArg, I2C_nSLAVE_INTMASK enInterruptMaskArg);
I2C_nERROR I2C_Slave__enClearInterruptSourceByNumber(I2C_nMODULE enModuleArg, I2C_nSLAVE_INT enInterruptArg);

I2C_nERROR I2C_Slave__enStatusInterruptSourceByMask(I2C_nMODULE enModuleArg, I2C_nSLAVE_INTMASK enInterruptMaskArg, I2C_nSLAVE_INTMASK* penInterruptStatusArg);
I2C_nERROR I2C_Slave__enStatusInterruptSourceByNumber(I2C_nMODULE enModuleArg, I2C_nSLAVE_INT enInterruptArg, I2C_nSTATUS* penStatusArg);

I2C_nERROR I2C_Slave__enStatusMaskedInterruptSourceByMask(I2C_nMODULE enModuleArg, I2C_nSLAVE_INTMASK enInterruptMaskArg, I2C_nSLAVE_INTMASK* penInterruptStatusArg);
I2C_nERROR I2C_Slave__enStatusMaskedInterruptSourceByNumber(I2C_nMODULE enModuleArg, I2C_nSLAVE_INT enInterruptArg, I2C_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_XHEADER_I2C_SLAVE_INTERRUPTSOURCE_H_ */

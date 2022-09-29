/**
 *
 * @file I2C_InterruptVector.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_MCU_I2C_INTERRUPT_XHEADER_I2C_INTERRUPTVECTOR_H_
#define XAPPLICATION_MCU_I2C_INTERRUPT_XHEADER_I2C_INTERRUPTVECTOR_H_

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Defines.h>

I2C_nERROR I2C__enSetInterruptVectorState(I2C_nMODULE enModuleArg, I2C_nSTATE enStateArg);
I2C_nERROR I2C__enSetInterruptVectorStateWithPriority(I2C_nMODULE enModuleArg, I2C_nSTATE enStateArg, I2C_nPRIORITY enPriorityArg);

I2C_nERROR I2C__enGetInterruptVectorState(I2C_nMODULE enModuleArg, I2C_nSTATE* penStateArg);
I2C_nERROR I2C__enGetInterruptVectorStateWithPriority(I2C_nMODULE enModuleArg, I2C_nSTATE* penStateArg, I2C_nPRIORITY* penPriorityArg);

I2C_nERROR I2C__enEnableInterruptVector(I2C_nMODULE enModuleArg);
I2C_nERROR I2C__enEnableInterruptVectorWithPriority(I2C_nMODULE enModuleArg, I2C_nPRIORITY enPriorityArg);

I2C_nERROR I2C__enDisableInterruptVector(I2C_nMODULE enModuleArg);
I2C_nERROR I2C__enDisableInterruptVectorWithPriority(I2C_nMODULE enModuleArg, I2C_nPRIORITY enPriorityArg);

#endif /* XAPPLICATION_MCU_I2C_INTERRUPT_XHEADER_I2C_INTERRUPTVECTOR_H_ */

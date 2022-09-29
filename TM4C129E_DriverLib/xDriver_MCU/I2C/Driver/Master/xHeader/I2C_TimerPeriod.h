/**
 *
 * @file I2C_TimerPeriod.h
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
 * @verbatim Mar 28, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 28, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_TIMERPERIOD_H_
#define XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_TIMERPERIOD_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

I2C_nERROR I2C_Master__enSetTimerPeriod(I2C_nMODULE enModuleArg, uint32_t u32TimerPeriodArg);
I2C_nERROR I2C_Master__enGetTimerPeriod(I2C_nMODULE enModuleArg, uint32_t* pu32TimerPeriodArg);

I2C_nERROR I2C_Master__enSetHighSpeedState(I2C_nMODULE enModuleArg, I2C_nSTATE enHighSpeedArg);

#endif /* XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_TIMERPERIOD_H_ */

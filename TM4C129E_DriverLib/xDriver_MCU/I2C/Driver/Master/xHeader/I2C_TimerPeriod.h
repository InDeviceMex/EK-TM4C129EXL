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

void I2C_Master__vSetTimerPeriod(I2C_nMODULE enModule, uint32_t u32TimerPeriodArg);
uint32_t I2C_Master__u32GetTimerPeriod(I2C_nMODULE enModule);
void I2C_Master__vSetHighSpeedPeriod(I2C_nMODULE enModule, I2C_nHIGHSPEED enHighSpeedArg);
I2C_nHIGHSPEED I2C_Master__enGetHighSpeedPeriod(I2C_nMODULE enModule);

#endif /* XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_TIMERPERIOD_H_ */

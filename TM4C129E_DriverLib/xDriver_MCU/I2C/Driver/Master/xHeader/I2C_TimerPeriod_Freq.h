/**
 *
 * @file I2C_TimerPeriod_Freq.h
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
 * @verbatim Mar 29, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 29, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_TIMERPERIOD_FREQ_H_
#define XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_TIMERPERIOD_FREQ_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

I2C_nSTATUS I2C_Master__enSetFrequency(I2C_nMODULE enModule, uint32_t u32FrequencyArg);
uint32_t I2C_Master__u32GetFrequency(I2C_nMODULE enModule);

#endif /* XDRIVER_MCU_I2C_DRIVER_MASTER_XHEADER_I2C_TIMERPERIOD_FREQ_H_ */

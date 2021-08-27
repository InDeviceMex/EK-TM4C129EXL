/**
 *
 * @file I2C_Config.c
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
#include <xDriver_MCU/I2C/App/xHeader/I2C_Config.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/I2C_Driver.h>
#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Dependencies.h>

#define SCL_LINE (0UL)
#define SDA_LINE (1UL)

void I2C__vSetConfig(I2C_nMODULE enModule, I2C_nMODE enModeArg, uint32_t u32FreqArg)
{
    I2C_nMODULE enModuleFilter = I2C_enMODULE_0;
    GPIO_nDIGITAL_FUNCTION I2C_enGpioInput[(uint32_t) I2C_enMODULE_MAX][(uint32_t) 2UL] =
    {
            {GPIO_enI2C0SCL, GPIO_enI2C0SDA},
            {GPIO_enI2C1SCL, GPIO_enI2C1SDA},
            {GPIO_enI2C2SCL, GPIO_enI2C2SDA},
            {GPIO_enI2C3SCL, GPIO_enI2C3SDA},
     };
    enModuleFilter = (I2C_nMODULE) MCU__u32CheckParams((uint32_t) enModule, (uint32_t) I2C_enMODULE_MAX);
    GPIO__enSetDigitalConfig(I2C_enGpioInput[(uint32_t) enModuleFilter][SCL_LINE], GPIO_enCONFIG_INPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(I2C_enGpioInput[(uint32_t) enModuleFilter][SDA_LINE], GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);

    I2C__vSetMode(enModuleFilter, enModeArg);
    I2C_Master__enSetFrequency(enModuleFilter, u32FreqArg);
}


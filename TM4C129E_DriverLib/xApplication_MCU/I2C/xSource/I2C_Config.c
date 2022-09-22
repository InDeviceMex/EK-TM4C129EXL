/**
 *
 * @file I2C_Config.c
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
 * @verbatim 31 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 31 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/I2C/xHeader/I2C_Config.h>
#include <xApplication_MCU/I2C/xHeader/I2C_TimerPeriod_Freq.h>

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Dependencies.h>

#define SCL_LINE (0UL)
#define SDA_LINE (1UL)

void I2C__vSetConfig(I2C_nMODULE enModule, I2C_nMODE enModeArg, uint32_t u32FreqArg)
{
    I2C_nMODULE enModuleFilter = I2C_enMODULE_0;
    GPIO_nDIGITAL_FUNCTION I2C_enGpioInput[(uint32_t) I2C_enMODULE_MAX][(uint32_t) 2UL] =
    {
            {GPIO_enI2C0SCL_B2, GPIO_enI2C0SDA_B3},
            {GPIO_enI2C1SCL_G0, GPIO_enI2C1SDA_G1},
            {GPIO_enI2C2SCL_L1, GPIO_enI2C2SDA_L0},
            {GPIO_enI2C3SCL_K4, GPIO_enI2C3SDA_K5},
            {GPIO_enI2C4SCL_K6, GPIO_enI2C4SDA_K7},
            {GPIO_enI2C5SCL_B0, GPIO_enI2C5SDA_B1},
            {GPIO_enI2C6SCL_A6, GPIO_enI2C6SDA_A7},
            {GPIO_enI2C7SCL_A4, GPIO_enI2C7SDA_A5},
            {GPIO_enI2C8SCL_A2, GPIO_enI2C8SDA_A3},
            {GPIO_enI2C9SCL_A0, GPIO_enI2C9SDA_A1},
     };
    enModuleFilter = (I2C_nMODULE) MCU__u32CheckParams((uint32_t) enModule, (uint32_t) I2C_enMODULE_MAX);
    GPIO__enSetDigitalConfig(I2C_enGpioInput[(uint32_t) enModuleFilter][SCL_LINE], GPIO_enCONFIG_INPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(I2C_enGpioInput[(uint32_t) enModuleFilter][SDA_LINE], GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);

    I2C__vSetMode(enModuleFilter, enModeArg);
    I2C_Master__enSetFrequency(enModuleFilter, u32FreqArg);
}

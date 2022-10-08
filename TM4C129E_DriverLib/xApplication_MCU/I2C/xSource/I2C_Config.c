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

I2C_nERROR I2C__enSetConfig(I2C_nMODULE enModuleArg, I2C_nMODE enModeArg, UBase_t uxFreqArg)
{
    I2C_nERROR enErrorReg;
    enErrorReg = (I2C_nERROR) MCU__uxCheckParams((UBase_t) enModuleArg, (UBase_t) I2C_enMODULE_MAX);
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C__enSetMode(enModuleArg, enModeArg);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enSetFrequency(enModuleArg, uxFreqArg);
    }
    return (enErrorReg);
}


I2C_nERROR I2C__enSetConfigGpio(I2C_nMODULE enModuleArg, I2C_nMODE enModeArg, UBase_t uxFreqArg)
{
    I2C_nERROR enErrorReg;
    GPIO_nDIGITAL_FUNCTION I2C_enGpioInput[(UBase_t) I2C_enMODULE_MAX][(UBase_t) 2UL] =
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
    enErrorReg = (I2C_nERROR) MCU__uxCheckParams((UBase_t) enModuleArg, (UBase_t) I2C_enMODULE_MAX);
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = (I2C_nERROR) GPIO__enSetDigitalConfig(I2C_enGpioInput[(UBase_t) enModuleArg][SCL_LINE], GPIO_enCONFIG_INPUT_2MA_PUSHPULL);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = (I2C_nERROR) GPIO__enSetDigitalConfig(I2C_enGpioInput[(UBase_t) enModuleArg][SDA_LINE], GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C__enSetConfig(enModuleArg, enModeArg, uxFreqArg);
    }
    return (enErrorReg);

}

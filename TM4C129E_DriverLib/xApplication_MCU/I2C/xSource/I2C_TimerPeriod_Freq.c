/**
 *
 * @file I2C_TimerPeriod_Freq.c
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
#include <xApplication_MCU/I2C/xHeader/I2C_TimerPeriod_Freq.h>

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Dependencies.h>

#define SCL_LP (6UL)
#define SCL_HP (4UL)

#define SCL_LP_HS (2UL)
#define SCL_HP_HS (1UL)

I2C_nERROR I2C_Master__enSetFrequency(I2C_nMODULE enModule, uint32_t u32FrequencyArg)
{
    MCU_nSTATUS enFPUActive;
    enFPUActive = MCU__enGetFPUContextActive();
    I2C_nERROR enErrorReg;
    uint32_t u32SysFrec;

    u32SysFrec = 0UL;
    enErrorReg = I2C_enERROR_OK;
    if((0UL == u32FrequencyArg) || (3333333UL < u32FrequencyArg))
    {
        enErrorReg = I2C_enERROR_VALUE;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        float32_t f32SysFrec;

        u32SysFrec = SYSCTL__u32GetSystemClock();
        f32SysFrec = (float32_t) u32SysFrec;
        f32SysFrec /= 2.0f;
        /*High Speed*/
        if(1000000UL < u32FrequencyArg)
        {
            f32SysFrec /= (float32_t) (SCL_LP_HS + SCL_HP_HS);
        }
        /*other speed*/
        else
        {
            f32SysFrec /= (float32_t) (SCL_LP + SCL_HP);

        }
        f32SysFrec /= (float32_t) u32FrequencyArg;
        f32SysFrec += 0.5f;
        u32SysFrec = (uint32_t) f32SysFrec;
        if((0UL == u32SysFrec) || ( (I2C_MASTER_TPR_TPR_MASK + 1UL) < u32SysFrec))
        {
            enErrorReg = I2C_enERROR_VALUE;
        }
        else
        {
            u32SysFrec -= 1UL;
        }
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(1000000UL < u32FrequencyArg)
        {
            enErrorReg = I2C__enSetHighSpeedState(enModule, I2C_enSTATE_ENA);
        }
        else
        {
            enErrorReg = I2C__enSetHighSpeedState(enModule, I2C_enSTATE_DIS);
        }
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enSetTimerPeriod(enModule, u32SysFrec);
    }

    MCU__vSetFPUContextActive(enFPUActive);
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetFrequency(I2C_nMODULE enModule, uint32_t* pu32FrequencyArg)
{
    MCU_nSTATUS enFPUActive;
    enFPUActive = MCU__enGetFPUContextActive();


    I2C_nERROR enErrorReg;
    I2C_nSTATE enHighSpeed;
    uint32_t u32SysFrec;
    uint32_t u32Period;

    enHighSpeed = I2C_enSTATE_DIS;
    u32Period = 0UL;
    u32SysFrec = 0UL;
    enErrorReg = I2C__enGetHighSpeedState(enModule, &enHighSpeed);
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetTimerPeriod(enModule, &u32Period);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        float32_t f32SysFrec;

        u32Period += 1UL;
        u32SysFrec = SYSCTL__u32GetSystemClock();
        f32SysFrec = (float32_t) u32SysFrec;
        f32SysFrec /= 2.0f;
        if(I2C_enSTATE_DIS != enHighSpeed)
        {
            f32SysFrec /= (float32_t) (SCL_LP_HS + SCL_HP_HS);
        }
        else
        {
            f32SysFrec /= (float32_t) (SCL_LP + SCL_HP);
        }
        f32SysFrec /= (float32_t) u32Period;
        u32SysFrec = (uint32_t) f32SysFrec;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *pu32FrequencyArg = u32SysFrec;
    }

    MCU__vSetFPUContextActive(enFPUActive);
    return (enErrorReg);
}

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

I2C_nERROR I2C_Master__enSetFrequency(I2C_nMODULE enModule, UBase_t uxFrequencyArg)
{
    MCU_nSTATUS enFPUActive;
    enFPUActive = MCU__enGetFPUContextActive();
    I2C_nERROR enErrorReg;
    UBase_t uxSysFrec;

    uxSysFrec = 0UL;
    enErrorReg = I2C_enERROR_OK;
    if((0UL == uxFrequencyArg) || (3333333UL < uxFrequencyArg))
    {
        enErrorReg = I2C_enERROR_VALUE;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        float32_t f32SysFrec;

        uxSysFrec = SYSCTL__uxGetSystemClock();
        f32SysFrec = (float32_t) uxSysFrec;
        f32SysFrec /= 2.0f;
        /*High Speed*/
        if(1000000UL < uxFrequencyArg)
        {
            f32SysFrec /= (float32_t) (SCL_LP_HS + SCL_HP_HS);
        }
        /*other speed*/
        else
        {
            f32SysFrec /= (float32_t) (SCL_LP + SCL_HP);

        }
        f32SysFrec /= (float32_t) uxFrequencyArg;
        f32SysFrec += 0.5f;
        uxSysFrec = (UBase_t) f32SysFrec;
        if((0UL == uxSysFrec) || ( (I2C_MASTER_TPR_TPR_MASK + 1UL) < uxSysFrec))
        {
            enErrorReg = I2C_enERROR_VALUE;
        }
        else
        {
            uxSysFrec -= 1UL;
        }
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        if(1000000UL < uxFrequencyArg)
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
        enErrorReg = I2C_Master__enSetTimerPeriod(enModule, uxSysFrec);
    }

    MCU__vSetFPUContextActive(enFPUActive);
    return (enErrorReg);
}

I2C_nERROR I2C_Master__enGetFrequency(I2C_nMODULE enModule, UBase_t* puxFrequencyArg)
{
    MCU_nSTATUS enFPUActive;
    enFPUActive = MCU__enGetFPUContextActive();


    I2C_nERROR enErrorReg;
    I2C_nSTATE enHighSpeed;
    UBase_t uxSysFrec;
    UBase_t uxPeriod;

    enHighSpeed = I2C_enSTATE_DIS;
    uxPeriod = 0UL;
    uxSysFrec = 0UL;
    enErrorReg = I2C__enGetHighSpeedState(enModule, &enHighSpeed);
    if(I2C_enERROR_OK == enErrorReg)
    {
        enErrorReg = I2C_Master__enGetTimerPeriod(enModule, &uxPeriod);
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        float32_t f32SysFrec;

        uxPeriod += 1UL;
        uxSysFrec = SYSCTL__uxGetSystemClock();
        f32SysFrec = (float32_t) uxSysFrec;
        f32SysFrec /= 2.0f;
        if(I2C_enSTATE_DIS != enHighSpeed)
        {
            f32SysFrec /= (float32_t) (SCL_LP_HS + SCL_HP_HS);
        }
        else
        {
            f32SysFrec /= (float32_t) (SCL_LP + SCL_HP);
        }
        f32SysFrec /= (float32_t) uxPeriod;
        uxSysFrec = (UBase_t) f32SysFrec;
    }
    if(I2C_enERROR_OK == enErrorReg)
    {
        *puxFrequencyArg = uxSysFrec;
    }

    MCU__vSetFPUContextActive(enFPUActive);
    return (enErrorReg);
}

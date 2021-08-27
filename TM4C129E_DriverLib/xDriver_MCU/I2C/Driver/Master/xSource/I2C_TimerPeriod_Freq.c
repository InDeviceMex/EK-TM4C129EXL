/**
 *
 * @file I2C_TimerPeriod_Freq.c
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
#include <xDriver_MCU/I2C/Driver/Master/xHeader/I2C_TimerPeriod_Freq.h>

#include <xDriver_MCU/I2C/Driver/Master/xHeader/I2C_TimerPeriod.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>
#define SCL_LP (6UL)
#define SCL_HP (4UL)

#define SCL_LP_HS (2UL)
#define SCL_HP_HS (1UL)

I2C_nSTATUS I2C_Master__enSetFrequency(I2C_nMODULE enModule, uint32_t u32FrequencyArg)
{
    I2C_nSTATUS enStatus = I2C_enSTATUS_ERROR;
    uint32_t u32SysFrec = 0UL;
    float32_t f32SysFrec = 0.0f;
    if((0UL < u32FrequencyArg) && (3333333UL >= u32FrequencyArg))
    {
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
        if((0UL < u32SysFrec) && ( (I2C_MTPR_TPR_MASK + 1UL) >= u32SysFrec))
        {
            enStatus = I2C_enSTATUS_OK;
            u32SysFrec -= 1UL;
            if(1000000UL < u32FrequencyArg)
            {
                I2C_Master__vSetHighSpeedPeriod(enModule, I2C_enHIGHSPEED_ENA);
            }
            else
            {
                I2C_Master__vSetHighSpeedPeriod(enModule, I2C_enHIGHSPEED_DIS);
            }
            I2C_Master__vSetTimerPeriod(enModule, u32SysFrec);
        }
        else
        {
            /*Invalid value*/
        }
    }
    return enStatus;
}

uint32_t I2C_Master__u32GetFrequency(I2C_nMODULE enModule)
{
    I2C_nHIGHSPEED enHighSpeed = I2C_enHIGHSPEED_UNDEF;
    uint32_t u32SysFrec = 0UL;
    uint32_t u32Period = 0UL;
    float32_t f32SysFrec = 0.0f;

    enHighSpeed = I2C_Master__enGetHighSpeedPeriod(enModule);
    if(I2C_enHIGHSPEED_UNDEF != enHighSpeed)
    {
        u32SysFrec = SYSCTL__u32GetSystemClock();
        u32Period = I2C_Master__u32GetTimerPeriod(enModule);
        u32Period += 1UL;
        f32SysFrec = (float32_t) u32SysFrec;
        f32SysFrec /= 2.0f;
        if(I2C_enHIGHSPEED_DIS != enHighSpeed)
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

    return u32SysFrec;
}


/**
 *
 * @file ACMP_VoltageReference.c
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
 * @verbatim 21 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/ACMP/xHeader/ACMP_VoltageReference.h>

#include <xApplication_MCU/ACMP/Intrinsics/xHeader/ACMP_Dependencies.h>

#define ACMP_MAX_PORCENTAGE (74.82f)

ACMP_nERROR ACMP__enSetVoltageReference(ACMP_nMODULE enModuleArg, float32_t* pf32VoltageRefArg)
{
    MCU_nSTATUS enFPUActive = MCU__enGetFPUContextActive();

    UBase_t uxVoltageStep;
    UBase_t uxLowRangeInteger;

    float32_t f32LowRange;
    float32_t f32LowRangeError;
    float32_t f32VoltageRefReg;
    float32_t f32TempReg;
    ACMP_nERROR enErrorReg;
    ACMP_nSTATE enStateReg;
    ACMP_nREFERENCE_RANGE enVoltageRange;


    uxVoltageStep = 0UL;
    enStateReg = ACMP_enSTATE_ENA;
    enErrorReg = ACMP_enERROR_OK;
    if(0UL == (uintptr_t) pf32VoltageRefArg)
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }

    if(ACMP_enERROR_OK == enErrorReg)
    {
        f32VoltageRefReg = *pf32VoltageRefArg;
        if(ACMP_MAX_PORCENTAGE < f32VoltageRefReg)
        {
            f32VoltageRefReg = ACMP_MAX_PORCENTAGE;
        }

        if(0.0f > f32VoltageRefReg)
        {
            f32VoltageRefReg = 0.0f;
        }

        /*Low Range formula*/
        f32LowRange = f32VoltageRefReg;
        f32LowRange *= 22.12f;
        f32LowRange /= 100.0f;

        uxLowRangeInteger = (UBase_t) f32LowRange;
        f32LowRangeError = f32LowRange;
        f32LowRangeError -= (float32_t) uxLowRangeInteger;

        if(0.5f < f32LowRangeError)
        {
            if(ACMP_REFCTL_VREF_MASK > uxLowRangeInteger)
            {
                uxLowRangeInteger += 1UL;
                f32TempReg = 1.0f;
                f32TempReg -= f32LowRangeError;
                f32LowRangeError = f32TempReg;
            }
        }

        uxVoltageStep = uxLowRangeInteger;
        enVoltageRange = ACMP_enREFERENCE_RANGE_LOW;

        if(f32VoltageRefReg >= 23.81f)
        {
            float32_t f32HighRange;
            float32_t f32HighRangeError;
            UBase_t  uxHighRangeInteger;

            /*High range formula*/
            f32HighRange = f32VoltageRefReg;
            f32HighRange *= 4.2f;
            f32HighRange -= 100.0f;
            f32HighRange /= 4.2f;
            f32HighRange *= 29.4f;
            f32HighRange /= 100.0f; /*13.58*/

            uxHighRangeInteger = (UBase_t) f32HighRange;
            f32HighRangeError = f32HighRange;
            f32HighRangeError -= (float32_t) uxHighRangeInteger;

            if(0.5f < f32HighRangeError)
            {
                if(ACMP_REFCTL_VREF_MASK > uxHighRangeInteger)
                {
                    uxHighRangeInteger += 1UL;
                    f32TempReg = 1.0f;
                    f32TempReg -= f32HighRangeError;
                    f32HighRangeError = f32TempReg;
                }
            }

            if(f32LowRangeError > f32HighRangeError)
            {
                if(ACMP_REFCTL_VREF_MASK < uxHighRangeInteger)
                {
                    uxVoltageStep = uxLowRangeInteger;
                    enVoltageRange = ACMP_enREFERENCE_RANGE_LOW;
                }
                else
                {
                    uxVoltageStep = uxHighRangeInteger;
                    enVoltageRange = ACMP_enREFERENCE_RANGE_HIGH;
                }
            }
            else
            {
                if(ACMP_REFCTL_VREF_MASK < uxLowRangeInteger)
                {
                    uxVoltageStep = uxHighRangeInteger;
                    enVoltageRange = ACMP_enREFERENCE_RANGE_HIGH;
                }
                else
                {
                    uxVoltageStep = uxLowRangeInteger;
                    enVoltageRange = ACMP_enREFERENCE_RANGE_LOW;
                }
            }
        }


        if(ACMP_REFCTL_VREF_MASK < uxVoltageStep)
        {
            enVoltageRange = ACMP_enREFERENCE_RANGE_HIGH;
            uxVoltageStep = 0UL;
            enStateReg = ACMP_enSTATE_DIS;
        }
    }

    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = ACMP__enSetReferenceRange(enModuleArg, enVoltageRange);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = ACMP__enSetReferenceEncoder(enModuleArg, uxVoltageStep);
    }
    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = ACMP__enSetReferenceState(enModuleArg, enStateReg);
    }

    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg =  ACMP__enGetVoltageReference(enModuleArg, pf32VoltageRefArg);
    }

    MCU__vSetFPUContextActive(enFPUActive);

    return (enErrorReg);
}

ACMP_nERROR ACMP__enGetVoltageReference(ACMP_nMODULE enModuleArg, float32_t* pf32VoltageRefArg)
{
    MCU_nSTATUS enFPUActive = MCU__enGetFPUContextActive();


    UBase_t uxEncoderValueReg;
    ACMP_nREFERENCE_RANGE enVoltageRange;
    ACMP_nSTATE enVoltageEnable;
    ACMP_nERROR enErrorReg;
    float32_t f32VoltagePorcentage;
    float32_t f32VoltagePorcentageInit;

    enVoltageRange = ACMP_enREFERENCE_RANGE_HIGH;
    uxEncoderValueReg = 0UL;
    enVoltageEnable = ACMP_enSTATE_DIS;
    enErrorReg = ACMP_enERROR_OK;
    f32VoltagePorcentage = 0.0f;
    if(0UL == (uintptr_t) pf32VoltageRefArg)
    {
        enErrorReg = ACMP_enERROR_POINTER;
    }

    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = ACMP__enGetReferenceState(enModuleArg, &enVoltageEnable);
    }

    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = ACMP__enGetReferenceEncoder(enModuleArg, &uxEncoderValueReg);
    }

    if(ACMP_enERROR_OK == enErrorReg)
    {
        enErrorReg = ACMP__enGetReferenceRange(enModuleArg, &enVoltageRange);
    }

    if(ACMP_enERROR_OK == enErrorReg)
    {
        if(ACMP_enSTATE_ENA == enVoltageEnable)
        {
            f32VoltagePorcentage = (float32_t) uxEncoderValueReg;
            f32VoltagePorcentage *= 100.0f;
            if(ACMP_enREFERENCE_RANGE_LOW == enVoltageRange)
            {
                f32VoltagePorcentage /= 22.12f;
            }
            else
            {
                f32VoltagePorcentageInit = 100.0f;
                f32VoltagePorcentageInit /= 4.2f;

                f32VoltagePorcentage /= 29.4f;
                f32VoltagePorcentage += f32VoltagePorcentageInit;
            }
        }
    }

    if(ACMP_enERROR_OK == enErrorReg)
    {
        *pf32VoltageRefArg = (float32_t) f32VoltagePorcentage;
    }

    MCU__vSetFPUContextActive(enFPUActive);
    return (enErrorReg);
}

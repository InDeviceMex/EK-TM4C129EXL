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

float32_t ACMP__f32SetVoltageReference(ACMP_nMODULE enModule,
                                   float32_t f32VoltageReferencePorcentage)
{
    float32_t f32VoltageProcentage1 = 0.0f;
    float32_t f32VoltageProcentage2 = 0.0f;
    float32_t f32VoltageProcentageDecimal1 = 0.0f;
    float32_t f32VoltageProcentageDecimal1Temp = 0.0f;
    float32_t f32VoltageProcentageDecimal2 = 0.0f;
    float32_t f32VoltageProcentageDecimal2Temp = 0.0f;
    float32_t f32VoltageCurrent = 0.0f;
    uint32_t u32VoltageProcentageInteger1 = 0UL;
    uint32_t u32VoltageProcentageInteger2 = 0UL;
    uint32_t u32VoltageStep = 0UL;
    ACMP_nREFERENCE_RANGE enVoltageRange = ACMP_enREFERENCE_RANGE_HIGH;
    MCU_nFPU_STATE enFPUActive = MCU_enFPU_STATE_INACTIVE;

    enFPUActive = MCU__enGetFPUContextActive();

    if(74.82f < f32VoltageReferencePorcentage)
    {
        f32VoltageReferencePorcentage = 74.82f;
    }

    if(f32VoltageReferencePorcentage >= 23.81f)
    {
        /*Low range formula*/
        f32VoltageProcentage1 = f32VoltageReferencePorcentage;
        f32VoltageProcentage1 -= 100.0f/4.2f;
        f32VoltageProcentage1 *= 29.4f;
        f32VoltageProcentage1 /= 100.0f;

        u32VoltageProcentageInteger1 = (uint32_t) f32VoltageProcentage1;
        f32VoltageProcentageDecimal1 = f32VoltageProcentage1;
        f32VoltageProcentageDecimal1 -= (float32_t) u32VoltageProcentageInteger1;
        if(0.5f < f32VoltageProcentageDecimal1)
        {
            f32VoltageProcentage1 += 0.5f;

            u32VoltageProcentageInteger1 = (uint32_t) f32VoltageProcentage1;
            f32VoltageProcentageDecimal1Temp = 1.0f;
            f32VoltageProcentageDecimal1Temp -= f32VoltageProcentageDecimal1;
            f32VoltageProcentageDecimal1 = f32VoltageProcentageDecimal1Temp;
        }

        /*High Range formula*/
        f32VoltageProcentage2 = f32VoltageReferencePorcentage;
        f32VoltageProcentage2 *= 22.12f;
        f32VoltageProcentage2 /= 100.0f;

        u32VoltageProcentageInteger2 = (uint32_t) f32VoltageProcentage2;
        f32VoltageProcentageDecimal2 = f32VoltageProcentage2;
        f32VoltageProcentageDecimal2 -= (float32_t) u32VoltageProcentageInteger2;
        if(0.5f < f32VoltageProcentageDecimal2)
        {
            f32VoltageProcentage2 += 0.5f;

            u32VoltageProcentageInteger2 = (uint32_t) f32VoltageProcentage2;
            f32VoltageProcentageDecimal2Temp = 1.0f;
            f32VoltageProcentageDecimal2Temp -= f32VoltageProcentageDecimal2;
            f32VoltageProcentageDecimal2 = f32VoltageProcentageDecimal2Temp;
        }


        if(f32VoltageProcentageDecimal2 > f32VoltageProcentageDecimal1)
        {
            u32VoltageStep = u32VoltageProcentageInteger1;
            enVoltageRange = ACMP_enREFERENCE_RANGE_HIGH;
        }
        else
        {
            u32VoltageStep = u32VoltageProcentageInteger2;
            enVoltageRange = ACMP_enREFERENCE_RANGE_LOW;
        }
    }
    else if(f32VoltageReferencePorcentage > 0.0f)
    {
        /*High Range formula*/
        f32VoltageProcentage2 = f32VoltageReferencePorcentage;
        f32VoltageProcentage2 *= 22.12f;
        f32VoltageProcentage2 /= 100.0f;
        f32VoltageProcentage2 += 0.5f;

        u32VoltageProcentageInteger2 = (uint32_t) f32VoltageProcentage2;

        u32VoltageStep = u32VoltageProcentageInteger2;
        enVoltageRange = ACMP_enREFERENCE_RANGE_LOW;
    }
    else
    {
        u32VoltageStep = 0UL;
        enVoltageRange = ACMP_enREFERENCE_RANGE_LOW;
    }

    if(ACMP_REFCTL_VREF_MASK >=  u32VoltageStep)
    {
        ACMP__vSetReferenceRange(enModule, enVoltageRange);
        ACMP__vSetReferenceEncoder(enModule, u32VoltageStep);
        ACMP__vSetReferenceEnable(enModule, ACMP_enREFERENCE_ENA);
    }
    else
    {
        ACMP__vSetReferenceRange(enModule, ACMP_enREFERENCE_RANGE_HIGH);
        ACMP__vSetReferenceEncoder(enModule, 0UL);
        ACMP__vSetReferenceEnable(enModule, ACMP_enREFERENCE_DIS);
    }
    f32VoltageCurrent =  ACMP__f32GetVoltageReference(enModule);
    MCU__vSetFPUContextActive(enFPUActive);
    return (f32VoltageCurrent);
}

float32_t ACMP__f32GetVoltageReference(ACMP_nMODULE enModule)
{
    float32_t f32VoltagePorcentage = 0.0f;
    float32_t f32VoltagePorcentageInit = 0.0f;
    uint32_t u32EncoderValueReg = 0UL;
    ACMP_nREFERENCE_RANGE enVoltageRange = ACMP_enREFERENCE_RANGE_HIGH;
    ACMP_nREFERENCE enVoltageEnable = ACMP_enREFERENCE_DIS;
    MCU_nFPU_STATE enFPUActive = MCU_enFPU_STATE_INACTIVE;

    enFPUActive = MCU__enGetFPUContextActive();

    enVoltageEnable = ACMP__enGetReferenceEnable(enModule);
    if(ACMP_enREFERENCE_ENA == enVoltageEnable)
    {
        u32EncoderValueReg = ACMP__u32GetReferenceEncoder(enModule);
        enVoltageRange = ACMP__enGetReferenceRange(enModule);
        f32VoltagePorcentage = (float32_t) u32EncoderValueReg;
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

    MCU__vSetFPUContextActive(enFPUActive);
    return (f32VoltagePorcentage);
}

/**
 *
 * @file I2C_InterruptVector.c
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
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/I2C/Interrupt/xHeader/I2C_InterruptVector.h>

#include <xApplication_MCU/I2C/Intrinsics/xHeader/I2C_Dependencies.h>

static NVIC_nSTIR I2C__enGetInterruptVector(I2C_nMODULE enModule);

static NVIC_nSTIR I2C__enGetInterruptVector(I2C_nMODULE enModule)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_I2C0;
    uint32_t u32Module = 0UL;
    NVIC_nSTIR NVIC_VECTOR_I2C[(uint32_t) I2C_enMODULE_MAX] =
    {
        NVIC_enSTIR_I2C0, NVIC_enSTIR_I2C1, NVIC_enSTIR_I2C2, NVIC_enSTIR_I2C3, NVIC_enSTIR_I2C4,
        NVIC_enSTIR_I2C5, NVIC_enSTIR_I2C6, NVIC_enSTIR_I2C7, NVIC_enSTIR_I2C8, NVIC_enSTIR_I2C9
    };

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) I2C_enMODULE_MAX);
    enVector = NVIC_VECTOR_I2C[u32Module];
    return (enVector);
}

void I2C__vEnInterruptVector(I2C_nMODULE enModule, I2C_nPRIORITY enI2CPriority)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_I2C0;
    enVector = I2C__enGetInterruptVector(enModule);
    NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enI2CPriority);
}

void I2C__vDisInterruptVector(I2C_nMODULE enModule)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_I2C0;
    enVector = I2C__enGetInterruptVector(enModule);
    NVIC__vClearEnableIRQ(enVector);
}

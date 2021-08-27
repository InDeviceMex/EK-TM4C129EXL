/**
 *
 * @file I2C_Ready.c
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
 * @verbatim 7 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/xHeader/I2C_Ready.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Dependencies.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

#if !defined(Opt_Check)
static SYSCTL_nPERIPHERAL SYSCTL_VECTOR_I2C[(uint32_t) I2C_enMODULE_MAX] =
{SYSCTL_enI2C0, SYSCTL_enI2C1, SYSCTL_enI2C2, SYSCTL_enI2C3};
#endif

void I2C__vSetReady(I2C_nMODULE enModule)
{
#if !defined(Opt_Check)
    I2C_nREADY enReady = I2C_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enI2C0;
    uint32_t u32Module = 0UL;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) I2C_enMODULE_MAX);

    enPeripheral = SYSCTL_VECTOR_I2C[u32Module];
    enReady = I2C__enIsReady((I2C_nMODULE)u32Module);
    if(I2C_enNOREADY == enReady)
    {
        SYSCTL__vSetReady(enPeripheral);
        SYSCTL__vReset(enPeripheral);
        SYSCTL__vSetReady(enPeripheral);
    }
#endif
}

void I2C__vClearReady(I2C_nMODULE enModule)
{
#if defined(Opt_Check)
    SYSCTL_nPERIPHERAL SYSCTL_VECTOR_I2C[(uint32_t) I2C_enMODULE_MAX] =
    {SYSCTL_enI2C0, SYSCTL_enI2C1, SYSCTL_enI2C2, SYSCTL_enI2C3};
#endif
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enI2C0;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) I2C_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_I2C[u32Module];
    SYSCTL__vClearReady(enPeripheral);
}

I2C_nREADY I2C__enIsReady(I2C_nMODULE enModule)
{
#if !defined(Opt_Check)
    I2C_nREADY enReady = I2C_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enI2C0;
    uint32_t u32Module =0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) I2C_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_I2C[u32Module];
    enReady = (I2C_nREADY) SYSCTL__enIsReady(enPeripheral);
#else
    I2C_nREADY enReady = I2C_enREADY;
#endif
    return enReady;
}

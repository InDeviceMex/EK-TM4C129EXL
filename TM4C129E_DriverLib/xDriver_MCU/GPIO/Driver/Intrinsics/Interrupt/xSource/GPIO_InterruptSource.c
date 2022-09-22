/**
 *
 * @file GPIO_InterruptSource.c
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
 * @verbatim 2 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>

GPIO_nERROR GPIO__enSetInterruptSourceStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg, GPIO_nSTATE enStateArg)
{
    GPIO_Register_t stRegister;
    uint32_t u32ValueReg;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinMaskArg, (uint32_t) GPIO_enPINMASK_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(GPIO_enSTATE_DIS == enStateArg)
        {
            u32ValueReg = 0U;
        }
        else
        {
            u32ValueReg = (uint32_t) enPinMaskArg;
        }
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enPinMaskArg;
        stRegister.uptrAddress = GPIO_IM_OFFSET;
        stRegister.u32Value = u32ValueReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetInterruptSourceStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nSTATE enStateArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enPinArg;
        stRegister.u32Mask = GPIO_IM_PIN0_MASK;
        stRegister.uptrAddress = GPIO_IM_OFFSET;
        stRegister.u32Value = (uint32_t) enStateArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetInterruptSourceStateByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg, GPIO_nPINMASK* penPinGetArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penPinGetArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinMaskArg, (uint32_t) GPIO_enPINMASK_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enPinMaskArg;
        stRegister.uptrAddress = GPIO_IM_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penPinGetArg = (GPIO_nPINMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetInterruptSourceStateByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nSTATE* penStateArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enPinArg;
        stRegister.u32Mask = GPIO_IM_PIN0_MASK;
        stRegister.uptrAddress = GPIO_IM_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penStateArg = (GPIO_nSTATE) stRegister.u32Value;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enEnableInterruptSourceByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg)
{
    GPIO_nERROR enReturnReg;

    enReturnReg = GPIO__enSetInterruptSourceStateByMask(enPortArg, enPinMaskArg, GPIO_enSTATE_ENA);

    return (enReturnReg);
}

GPIO_nERROR GPIO__enEnableInterruptSourceByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg)
{
    GPIO_nERROR enReturnReg;

    enReturnReg = GPIO__enSetInterruptSourceStateByNumber(enPortArg, enPinArg, GPIO_enSTATE_ENA);

    return (enReturnReg);
}

GPIO_nERROR GPIO__enDisableInterruptSourceByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg)
{
    GPIO_nERROR enReturnReg;

    enReturnReg = GPIO__enSetInterruptSourceStateByMask(enPortArg, enPinMaskArg, GPIO_enSTATE_DIS);

    return (enReturnReg);
}

GPIO_nERROR GPIO__enDisableInterruptSourceByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg)
{
    GPIO_nERROR enReturnReg;

    enReturnReg = GPIO__enSetInterruptSourceStateByNumber(enPortArg, enPinArg, GPIO_enSTATE_DIS);

    return (enReturnReg);
}

GPIO_nERROR GPIO__enClearInterruptSourceByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinMaskArg, (uint32_t) GPIO_enPINMASK_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = GPIO_ICR_OFFSET;
        stRegister.u32Value = enPinMaskArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enClearInterruptSourceByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg)
{
    GPIO_Register_t stRegister;
    uint32_t u32ValueReg;
    GPIO_nERROR enErrorReg;

    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        u32ValueReg = 1UL;
        u32ValueReg <<= (uint32_t) enPinArg;
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = GPIO_ICR_OFFSET;
        stRegister.u32Value = (uint32_t) u32ValueReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enStatusInterruptSourceByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg, GPIO_nPINMASK* penPinStatusArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penPinStatusArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinMaskArg, (uint32_t) GPIO_enPINMASK_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enPinMaskArg;
        stRegister.uptrAddress = GPIO_RIS_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penPinStatusArg = (GPIO_nPINMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enStatusInterruptSourceByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nSTATUS* penStatusArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enPinArg;
        stRegister.u32Mask = GPIO_RIS_PIN0_MASK;
        stRegister.uptrAddress = GPIO_RIS_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (GPIO_nSTATUS) stRegister.u32Value;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enStatusMaskedInterruptSourceByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg, GPIO_nPINMASK* penPinStatusArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penPinStatusArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinMaskArg, (uint32_t) GPIO_enPINMASK_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = 0U;
        stRegister.u32Mask = enPinMaskArg;
        stRegister.uptrAddress = GPIO_MIS_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penPinStatusArg = (GPIO_nPINMASK) stRegister.u32Value;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enStatusMaskedInterruptSourceByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg, GPIO_nSTATUS* penStatusArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((uint32_t) enPinArg, (uint32_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = (uint32_t) enPinArg;
        stRegister.u32Mask = GPIO_MIS_PIN0_MASK;
        stRegister.uptrAddress = GPIO_MIS_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (GPIO_nSTATUS) stRegister.u32Value;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO_DMA__enSetInterruptSourceState(GPIO_nPORT enPortArg, GPIO_nSTATE enStateArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    stRegister.u32Shift = GPIO_IM_R_DMAIME_BIT;
    stRegister.u32Mask = GPIO_IM_DMAIME_MASK;
    stRegister.uptrAddress = GPIO_IM_OFFSET;
    stRegister.u32Value = (uint32_t) enStateArg;
    enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);

    return (enErrorReg);
}

GPIO_nERROR GPIO_DMA__enGetInterruptSourceState(GPIO_nPORT enPortArg, GPIO_nSTATE* penStateArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = GPIO_IM_R_DMAIME_BIT;
        stRegister.u32Mask = GPIO_IM_DMAIME_MASK;
        stRegister.uptrAddress = GPIO_IM_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penStateArg = (GPIO_nSTATE) stRegister.u32Value;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO_DMA__enEnableInterruptSource(GPIO_nPORT enPortArg)
{
    GPIO_nERROR enReturnReg;

    enReturnReg = GPIO_DMA__enSetInterruptSourceState(enPortArg, GPIO_enSTATE_ENA);

    return (enReturnReg);
}

GPIO_nERROR GPIO_DMA__enDisableInterruptSource(GPIO_nPORT enPortArg)
{
    GPIO_nERROR enReturnReg;

    enReturnReg = GPIO_DMA__enSetInterruptSourceState(enPortArg, GPIO_enSTATE_DIS);

    return (enReturnReg);
}

GPIO_nERROR GPIO_DMA__enClearInterruptSource(GPIO_nPORT enPortArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    stRegister.u32Shift = 0U;
    stRegister.u32Mask = MCU_MASK_32;
    stRegister.uptrAddress = GPIO_ICR_OFFSET;
    stRegister.u32Value = GPIO_ICR_R_DMAIC_CLEAR;
    enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    return (enErrorReg);
}

GPIO_nERROR GPIO_DMA__enStatusInterruptSource(GPIO_nPORT enPortArg, GPIO_nSTATUS* penStatusArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = GPIO_RIS_R_DMARIS_BIT;
        stRegister.u32Mask = GPIO_RIS_DMARIS_MASK;
        stRegister.uptrAddress = GPIO_RIS_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (GPIO_nSTATUS) stRegister.u32Value;
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO_DMA__enStatusMaskedInterruptSource(GPIO_nPORT enPortArg, GPIO_nSTATUS* penStatusArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = GPIO_MIS_R_DMAMIS_BIT;
        stRegister.u32Mask = GPIO_MIS_DMAMIS_MASK;
        stRegister.uptrAddress = GPIO_MIS_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (GPIO_nSTATUS) stRegister.u32Value;
    }
    return (enErrorReg);
}

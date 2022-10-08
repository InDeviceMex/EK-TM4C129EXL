/**
 *
 * @file GPIO_InterruptEdge.c
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
 * @verbatim Apr 6, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 6, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptEdge.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptSense.h>
#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetInterruptEdgeByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                           GPIO_nEDGE enEdgeArg)
{
    GPIO_Register_t stRegister;
    UBase_t uxValueBothReg;
    UBase_t uxValueEdgeReg;
    GPIO_nERROR enErrorReg;

    uxValueBothReg = 0UL;
    uxValueEdgeReg = 0UL;
    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinMaskArg, (UBase_t) GPIO_enPINMASK_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetInterruptSenseByMask(enPortArg, enPinMaskArg, GPIO_enSENSE_EDGE);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(GPIO_enEDGE_BOTH == enEdgeArg)
        {
            uxValueBothReg = (UBase_t) enPinMaskArg;
            uxValueEdgeReg = 0UL;
        }
        else
        {
            uxValueBothReg = 0UL;
            if(GPIO_enEDGE_FALLING == enEdgeArg)
            {
                uxValueEdgeReg = 0UL;
            }
            else
            {
                uxValueEdgeReg = (UBase_t) enPinMaskArg;
            }
        }
        stRegister.uxShift = GPIO_IBE_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_IBE_OFFSET;
        stRegister.uxValue = uxValueBothReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = GPIO_IEV_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_IEV_OFFSET;
        stRegister.uxValue = uxValueEdgeReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetInterruptEdgeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                              GPIO_nEDGE enEdgeArg)
{
    GPIO_Register_t stRegister;
    UBase_t uxValueBothReg;
    UBase_t uxValueEdgeReg;
    GPIO_nERROR enErrorReg;

    uxValueBothReg = 0UL;
    uxValueEdgeReg = 0UL;
    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enSetInterruptSenseByNumber(enPortArg, enPinArg, GPIO_enSENSE_EDGE);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(GPIO_enEDGE_BOTH == enEdgeArg)
        {
            uxValueBothReg = GPIO_IBE_PIN0_BOTH;
            uxValueEdgeReg = GPIO_IEV_PIN0_FALLING;
        }
        else
        {
            uxValueBothReg = GPIO_IBE_PIN0_SINGLE;
            uxValueEdgeReg = (UBase_t) enEdgeArg;
        }
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxShift += GPIO_IBE_R_PIN0_BIT;
        stRegister.uxMask = GPIO_IBE_PIN0_MASK;
        stRegister.uptrAddress = GPIO_IBE_OFFSET;
        stRegister.uxValue = uxValueBothReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxShift += GPIO_IEV_R_PIN0_BIT;
        stRegister.uxMask = GPIO_IEV_PIN0_MASK;
        stRegister.uptrAddress = GPIO_IEV_OFFSET;
        stRegister.uxValue = uxValueEdgeReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetInterruptEdgeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                              GPIO_nEDGE* penEdgeArg)
{
    GPIO_Register_t stRegister;
    GPIO_nSENSE enSenseReg;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penEdgeArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enSenseReg = GPIO_enSENSE_UNDEF;
        enErrorReg = GPIO__enGetInterruptSenseByNumber(enPortArg, enPinArg, &enSenseReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(GPIO_enSENSE_EDGE != enSenseReg)
        {
            *penEdgeArg = GPIO_enEDGE_UNDEF;
        }
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxShift += GPIO_IBE_R_PIN0_BIT;
        stRegister.uxMask = GPIO_IBE_PIN0_MASK;
        stRegister.uptrAddress = GPIO_IBE_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(GPIO_IBE_PIN0_SINGLE == stRegister.uxValue)
        {
            stRegister.uxShift = (UBase_t) enPinArg;
            stRegister.uxShift += GPIO_IEV_R_PIN0_BIT;
            stRegister.uxMask = GPIO_IEV_PIN0_MASK;
            stRegister.uptrAddress = GPIO_IEV_OFFSET;
            enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
            if(GPIO_enERROR_OK == enErrorReg)
            {
                *penEdgeArg = (GPIO_nEDGE) stRegister.uxValue;
            }
        }
        else
        {
            *penEdgeArg = GPIO_enEDGE_BOTH;
        }
    }
    return (enErrorReg);
}

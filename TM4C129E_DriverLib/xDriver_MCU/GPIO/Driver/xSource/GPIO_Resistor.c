/**
 *
 * @file GPIO_Resistor.c
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_Resistor.h>
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_PullUp.h>
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_PullDown.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetResistorModeByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                          GPIO_nRESMODE enModeArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinMaskArg, (UBase_t) GPIO_enPINMASK_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        switch(enModeArg)
        {
            case GPIO_enRESMODE_INACTIVE:
                enErrorReg = GPIO__enDisablePullUpResistorByMask(enPortArg, enPinMaskArg);
                if(GPIO_enERROR_OK == enErrorReg)
                {
                    enErrorReg = GPIO__enDisablePullDownResistorByMask(enPortArg, enPinMaskArg);
                }
                break;
            case GPIO_enRESMODE_PULLUP:
                enErrorReg = GPIO__enEnablePullUpResistorByMask(enPortArg, enPinMaskArg);
                break;
            case GPIO_enRESMODE_PULLDOWN:
                enErrorReg = GPIO__enEnablePullDownResistorByMask(enPortArg, enPinMaskArg);
                break;
            default:
                enErrorReg = GPIO_enERROR_VALUE;
                break;
        }
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetResistorModeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nRESMODE enModeArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        switch(enModeArg)
        {
            case GPIO_enRESMODE_INACTIVE:
                enErrorReg = GPIO__enDisablePullUpResistorByNumber(enPortArg, enPinArg);
                if(GPIO_enERROR_OK == enErrorReg)
                {
                    enErrorReg = GPIO__enDisablePullDownResistorByNumber(enPortArg, enPinArg);
                }
                break;
            case GPIO_enRESMODE_PULLUP:
                enErrorReg = GPIO__enEnablePullUpResistorByNumber(enPortArg, enPinArg);
                break;
            case GPIO_enRESMODE_PULLDOWN:
                enErrorReg = GPIO__enEnablePullDownResistorByNumber(enPortArg, enPinArg);
                break;
            default:
                enErrorReg = GPIO_enERROR_VALUE;
                break;
        }
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetResistorModeByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                            GPIO_nRESMODE* penModeArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penModeArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    }

    GPIO_nSTATE enStateReg;
    enStateReg = GPIO_enSTATE_DIS;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = GPIO__enGetPullUpResistorByNumber(enPortArg, enPinArg, &enStateReg);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if(GPIO_enSTATE_ENA == enStateReg)
        {
            *penModeArg = GPIO_enRESMODE_PULLUP;
        }
        else
        {
            enErrorReg = GPIO__enGetPullDownResistorByNumber(enPortArg, enPinArg, &enStateReg);
            if(GPIO_enERROR_OK == enErrorReg)
            {
                if(GPIO_enSTATE_ENA == enStateReg)
                {
                    *penModeArg = GPIO_enRESMODE_PULLDOWN;
                }
                else
                {
                    *penModeArg = GPIO_enRESMODE_INACTIVE;
                }
            }
        }
    }
    return (enErrorReg);
}

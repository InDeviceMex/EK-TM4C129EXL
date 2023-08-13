/**
 *
 * @file GPIO_InterruptConfig.c
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
#include <xDriver_MCU/GPIO/App/xHeader/GPIO_InterruptConfig.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptEdge.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptLevel.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptSense.h>

GPIO_nERROR GPIO__enSetInterruptConfigByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                               GPIO_nINT_CONFIG enIntConfigArg)
{
    GPIO_nERROR enErrorReg;
    UBase_t uxEventReg;
    UBase_t uxSenseReg;
    uxEventReg = (UBase_t) enIntConfigArg;
    uxEventReg &= 0xFFUL;

    uxSenseReg = (UBase_t) enIntConfigArg;
    uxSenseReg >>= 8UL;
    uxSenseReg &= 0xFFUL;

    enErrorReg = ((UBase_t) GPIO_enSENSE_EDGE == uxSenseReg) ?
            GPIO__enSetInterruptEdgeByNumber(enPortArg, enPinArg, (GPIO_nEDGE) uxEventReg) :
            GPIO__enSetInterruptLevelByNumber(enPortArg, enPinArg, (GPIO_nLEVEL) uxEventReg);
    return(enErrorReg);
}

GPIO_nERROR GPIO__enSetInterruptConfigByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                               GPIO_nINT_CONFIG enIntConfigArg)
{
    UBase_t uxSenseReg;
    UBase_t uxEventReg;
    GPIO_nERROR enErrorReg;

    uxEventReg = (UBase_t) enIntConfigArg;
    uxEventReg &= 0xFFUL;

    uxSenseReg = (UBase_t) enIntConfigArg;
    uxSenseReg >>= 8UL;
    uxSenseReg &= 0xFFUL;

    enErrorReg = ((UBase_t) GPIO_enSENSE_EDGE == uxSenseReg) ?
            GPIO__enSetInterruptEdgeByMask(enPortArg, enPinMaskArg, (GPIO_nEDGE) uxEventReg) :
            GPIO__enSetInterruptLevelByMask(enPortArg, enPinMaskArg, (GPIO_nLEVEL) uxEventReg);
    return(enErrorReg);
}

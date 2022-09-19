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
    uint32_t u32SenseReg;
    uint32_t u32EventReg;
    GPIO_nERROR enErrorReg;

    u32EventReg = (uint32_t) enIntConfigArg;
    u32EventReg &= 0xFFUL;

    u32SenseReg = (uint32_t) enIntConfigArg;
    u32SenseReg >>= 8UL;
    u32SenseReg &= 0xFFUL;

    if((uint32_t) GPIO_enSENSE_EDGE == u32SenseReg)
    {
        enErrorReg = GPIO__enSetInterruptEdgeByNumber(enPortArg, enPinArg, (GPIO_nEDGE) u32EventReg);
    }
    else
    {
        enErrorReg = GPIO__enSetInterruptLevelByNumber(enPortArg, enPinArg, (GPIO_nLEVEL) u32EventReg);
    }

    return(enErrorReg);
}

GPIO_nERROR GPIO__enSetInterruptConfigByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                               GPIO_nINT_CONFIG enIntConfigArg)
{
    uint32_t u32SenseReg;
    uint32_t u32EventReg;
    GPIO_nERROR enErrorReg;

    u32EventReg = (uint32_t) enIntConfigArg;
    u32EventReg &= 0xFFUL;

    u32SenseReg = (uint32_t) enIntConfigArg;
    u32SenseReg >>= 8UL;
    u32SenseReg &= 0xFFUL;

    if((uint32_t) GPIO_enSENSE_EDGE == u32SenseReg)
    {
        enErrorReg = GPIO__enSetInterruptEdgeByMask(enPortArg, enPinMaskArg, (GPIO_nEDGE) u32EventReg);
    }
    else
    {
        enErrorReg = GPIO__enSetInterruptLevelByMask(enPortArg, enPinMaskArg, (GPIO_nLEVEL) u32EventReg);
    }

    return(enErrorReg);
}

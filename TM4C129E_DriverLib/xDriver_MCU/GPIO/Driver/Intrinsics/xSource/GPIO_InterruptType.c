/**
 *
 * @file GPIO_InterruptType.c
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
 * @verbatim 9 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptType.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetInterruptType(GPIO_nPORT enPortArg,
                                     GPIO_nINTTYPE enTypeArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if((GPIO_enPORT_P != enPortArg) && (GPIO_enPORT_Q != enPortArg))
    {
        enErrorReg = GPIO_enERROR_RANGE;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = GPIO_SI_R_SUM_BIT;
        stRegister.uxMask = GPIO_SI_SUM_MASK;
        stRegister.uptrAddress = GPIO_SI_OFFSET;
        stRegister.uxValue = (UBase_t) enTypeArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }

    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetInterruptType(GPIO_nPORT enPortArg,
                                     GPIO_nINTTYPE* penTypeArg)
{
    GPIO_Register_t stRegister;
    GPIO_nERROR enErrorReg;

    enErrorReg = GPIO_enERROR_OK;
    if(0UL == (uintptr_t) penTypeArg)
    {
        enErrorReg = GPIO_enERROR_POINTER;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        if((GPIO_enPORT_P != enPortArg) && (GPIO_enPORT_Q != enPortArg))
        {
            enErrorReg = GPIO_enERROR_RANGE;
        }
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
            stRegister.uxShift = GPIO_SI_R_SUM_BIT;
            stRegister.uxMask = GPIO_SI_SUM_MASK;
            stRegister.uptrAddress = GPIO_SI_OFFSET;
            enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        *penTypeArg = (GPIO_nINTTYPE) stRegister.uxValue;
    }

    return (enErrorReg);
}


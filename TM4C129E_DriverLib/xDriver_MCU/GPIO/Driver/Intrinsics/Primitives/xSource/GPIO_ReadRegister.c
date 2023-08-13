/**
 *
 * @file GPIO_ReadRegister.c
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
 * @verbatim 30 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/xHeader/GPIO_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enReadRegister(GPIO_nPORT enPortArg, GPIO_Register_t* pstRegisterDataArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) pstRegisterDataArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;

    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPortArg, (UBase_t) GPIO_enPORT_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        uintptr_t uptrModuleBase;
        uptrModuleBase = GPIO__uptrBlockBaseAddress(enPortArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (GPIO_nERROR) MCU__enReadRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}

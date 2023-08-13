/**
 *
 * @file GPIO_Data.c
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
 * @verbatim 3 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_Data.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetDataByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                  GPIO_nLEVEL enLevelArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinMaskArg, (UBase_t) GPIO_enPINMASK_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = (GPIO_enLEVEL_LOW == enLevelArg) ? 0UL : (UBase_t) enPinMaskArg;

        GPIO_Register_t stRegister;
        stRegister.uxShift = GPIO_DATA_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_DATA_OFFSET;
        stRegister.uxValue = uxValueReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetDataByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                     GPIO_nLEVEL enLevelArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    if(GPIO_enERROR_OK == enErrorReg)
    {
        GPIO_Register_t stRegister;
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxShift += GPIO_DATA_R_PIN0_BIT;
        stRegister.uxMask = GPIO_DATA_PIN0_MASK;
        stRegister.uptrAddress = GPIO_DATA_OFFSET;
        stRegister.uxValue = (UBase_t) enLevelArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetDataByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                  GPIO_nPINMASK* penPinMaskReqArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penPinMaskReqArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinMaskArg, (UBase_t) GPIO_enPINMASK_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        GPIO_Register_t stRegister;
        stRegister.uxShift = GPIO_DATA_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_DATA_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
        if(GPIO_enERROR_OK == enErrorReg)
        {
            *penPinMaskReqArg = (GPIO_nPINMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetDataByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                    GPIO_nLEVEL* penLevelArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penLevelArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;
    if(GPIO_enERROR_OK == enErrorReg)
    {
        enErrorReg = (GPIO_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) GPIO_enPIN_MAX);
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        GPIO_Register_t stRegister;
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxShift += GPIO_DATA_R_PIN0_BIT;
        stRegister.uxMask = GPIO_DATA_PIN0_MASK;
        stRegister.uptrAddress = GPIO_DATA_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
        if(GPIO_enERROR_OK == enErrorReg)
        {
            *penLevelArg = (GPIO_nLEVEL) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

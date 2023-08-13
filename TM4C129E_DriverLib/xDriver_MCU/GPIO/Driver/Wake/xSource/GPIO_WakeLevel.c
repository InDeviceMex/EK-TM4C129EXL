/**
 *
 * @file GPIO_WakeLevel.c
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
 * @verbatim 10 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Wake/xHeader/GPIO_WakeLevel.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/GPIO_Intrinsics.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nERROR GPIO__enSetWakeUpLevelByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                        GPIO_nLEVEL enLevelArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO_enERROR_OK;
    if((GPIO_enPORT_K != enPortArg) || (0UL == (0xF0UL & (UBase_t) enPinMaskArg)))
    {
        enErrorReg = GPIO_enERROR_RANGE;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        UBase_t uxValueReg = (GPIO_enLEVEL_LOW == enLevelArg) ? 0UL : (UBase_t) enPinMaskArg;
        uxValueReg &= 0xF0UL;

        GPIO_Register_t stRegister;
        stRegister.uxShift = 0UL;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = GPIO_WAKELVL_OFFSET;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enSetWakeUpLevelByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                           GPIO_nLEVEL enLevelArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = GPIO_enERROR_OK;
    if((GPIO_enPORT_K != enPortArg) || ((UBase_t) GPIO_enPIN_3 >= (UBase_t) enPinArg))
    {
        enErrorReg = GPIO_enERROR_RANGE;
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        GPIO_Register_t stRegister;
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxMask = GPIO_WAKELVL_PIN4_MASK;
        stRegister.uptrAddress = GPIO_WAKELVL_OFFSET;
        stRegister.uxValue = (UBase_t) enLevelArg;
        enErrorReg = GPIO__enWriteRegister(enPortArg, &stRegister);
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetWakeUpLevelByMask(GPIO_nPORT enPortArg, GPIO_nPINMASK enPinMaskArg,
                                         GPIO_nPINMASK* penPinMaskReqArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penPinMaskReqArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;

    if(GPIO_enERROR_OK == enErrorReg)
    {
        if((GPIO_enPORT_K != enPortArg) || (0UL == (0xF0UL & (UBase_t) enPinMaskArg)))
        {
            enErrorReg = GPIO_enERROR_RANGE;
        }
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        GPIO_Register_t stRegister;
        stRegister.uxShift = 0UL;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uxMask &= 0xF0UL;
        stRegister.uptrAddress = GPIO_WAKELVL_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
        if(GPIO_enERROR_OK == enErrorReg)
        {
            *penPinMaskReqArg = (GPIO_nPINMASK) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

GPIO_nERROR GPIO__enGetWakeUpLevelByNumber(GPIO_nPORT enPortArg, GPIO_nPIN enPinArg,
                                             GPIO_nLEVEL* penLevelArg)
{
    GPIO_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penLevelArg) ? GPIO_enERROR_POINTER : GPIO_enERROR_OK;

    if(GPIO_enERROR_OK == enErrorReg)
    {
        if((GPIO_enPORT_K != enPortArg) || ((UBase_t) GPIO_enPIN_3 >= (UBase_t) enPinArg))
        {
            enErrorReg = GPIO_enERROR_RANGE;
        }
    }
    if(GPIO_enERROR_OK == enErrorReg)
    {
        GPIO_Register_t stRegister;
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxMask = GPIO_WAKELVL_PIN4_MASK;
        stRegister.uptrAddress = GPIO_WAKELVL_OFFSET;
        enErrorReg = GPIO__enReadRegister(enPortArg, &stRegister);
        if(GPIO_enERROR_OK == enErrorReg)
        {
            *penLevelArg = (GPIO_nLEVEL) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

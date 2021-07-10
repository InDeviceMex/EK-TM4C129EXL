/**
 *
 * @file GPIO_Propierties.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Propierties.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

GPIO_nEXTENDED_DRIVE GPIO__enGetExtendedDrive(GPIO_nPORT enPort)
{
    GPIO_nEXTENDED_DRIVE enReg = GPIO_enEXTENDED_DRIVE_NORMAL;
    GPIO__enReadRegister(enPort, GPIO_PP_OFFSET, (uint32_t*) &enReg, GPIO_PP_EDE_MASK, GPIO_PP_R_EDE_BIT);
    return (enReg);
}

/**
 *
 * @file I2C_InterruptRoutine.c
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
 * @verbatim 8 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/InterruptRoutine/I2C_InterruptRoutine.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

void (*I2C__pvIRQVectorHandler[(uint32_t) I2C_enMODULE_MAX]) (void)=
{
    &I2C0__vIRQVectorHandler,&I2C1__vIRQVectorHandler,&I2C2__vIRQVectorHandler,&I2C3__vIRQVectorHandler,
};

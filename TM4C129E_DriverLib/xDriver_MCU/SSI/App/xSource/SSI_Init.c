/**
 *
 * @file SSI_Init.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
 #include <xDriver_MCU/SSI/App/xHeader/SSI_Init.h>

#include <xDriver_MCU/SSI/Driver/SSI_Driver.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vInit(void)
{
    SSI__vRegisterIRQVectorHandler( &SSI0__vIRQVectorHandler, SSI_enMODULE_0);
    SSI__vRegisterIRQVectorHandler( &SSI1__vIRQVectorHandler, SSI_enMODULE_1);
    SSI__vRegisterIRQVectorHandler( &SSI2__vIRQVectorHandler, SSI_enMODULE_2);
    SSI__vRegisterIRQVectorHandler( &SSI3__vIRQVectorHandler, SSI_enMODULE_3);
}




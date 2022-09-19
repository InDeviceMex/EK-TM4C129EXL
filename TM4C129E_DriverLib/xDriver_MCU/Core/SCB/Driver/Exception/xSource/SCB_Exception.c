/**
 *
 * @file SCB_Exception.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SCB/Driver/Exception/SCB_Exception.h>

SCB_nERROR SCB__enEnableAllExceptions(SCB_nMODULE enModuleArg)
{
    SCB_nERROR enErrorReg;
    enErrorReg = SCB_UsageFault__enEnable(enModuleArg);
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB_BusFault__enEnable(enModuleArg);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB_MemoryFault__enEnable(enModuleArg);
    }
    return (enErrorReg);
}

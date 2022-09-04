/**
 *
 * @file NVIC_DeInitInterrupts.c
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
 * @verbatim 24 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_DeInitInterrupts.h>

#include <xDriver_MCU/Core/NVIC/Driver/xHeader/NVIC_Enable.h>

NVIC_nERROR NVIC__enDisableAllInterrupts(NVIC_nMODULE enModuleArg)
{

    NVIC_nERROR enErrorReg;
    uint32_t u32VectorNum;

    for(u32VectorNum = 0U; u32VectorNum < (uint32_t) NVIC_enVECTOR_MAX; u32VectorNum++)
    {
        enErrorReg = NVIC__enDisableVector(enModuleArg, (NVIC_nVECTOR) u32VectorNum);
        if(NVIC_enERROR_OK != enErrorReg)
        {
            break;
        }
    }

    return (enErrorReg);
}

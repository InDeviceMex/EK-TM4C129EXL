/**
 *
 * @file TIMER_Configuration.c
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
 * @verbatim 15 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/Driver/xHeader/TIMER_Configuration.h>

#include <xDriver_MCU/TIMER/Driver/Intrinsics/Primitives/TIMER_Primitives.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void TIMER__vSetConfiguration(TIMER_nMODULE enModule, TIMER_nCONFIG enConf)
{
    uint32_t u32TimerEnable = 0xFFFFFFFFUL;
    uint32_t u32ModuleSize = 0UL;
    uint32_t u32ModuleNumber = 0UL;
    TIMER__vGetSubParams(enModule, &u32ModuleSize, (uint32_t*) 0UL, &u32ModuleNumber);
    TIMER__enReadRegister( (TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, GPTM_CTL_OFFSET, &u32TimerEnable, GPTM_CTL_R_TBEN_MASK | GPTM_CTL_R_TAEN_MASK, 0UL);
    if(0xFFFFFFFFUL != u32TimerEnable)
    {
        TIMER__vWriteRegister( (TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, GPTM_CTL_OFFSET, 0UL, GPTM_CTL_R_TBEN_MASK | GPTM_CTL_R_TAEN_MASK, 0UL);
    }

    TIMER__vWriteRegister( (TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, GPTM_CFG_OFFSET, (uint32_t) enConf, GPTM_CFG_CFG_MASK, GPTM_CFG_R_CFG_BIT);

    if(0xFFFFFFFFUL != u32TimerEnable)
    {
        TIMER__vWriteRegister( (TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, GPTM_CTL_OFFSET, u32TimerEnable, GPTM_CTL_R_TBEN_MASK | GPTM_CTL_R_TAEN_MASK, 0UL);
    }
}

TIMER_nCONFIG TIMER__enGetConfiguration(TIMER_nMODULE enModule)
{
    uint32_t u32FeatureValue = 0xFFFFFFFFUL;
    uint32_t u32ModuleSize = 0UL;
    uint32_t u32ModuleNumber = 0UL;
    TIMER__vGetSubParams(enModule, &u32ModuleSize, (uint32_t*) 0UL, &u32ModuleNumber);
    TIMER__enReadRegister( (TIMER_nSIZE) u32ModuleSize, (TIMER_nMODULE_NUM) u32ModuleNumber, GPTM_CFG_OFFSET, &u32FeatureValue, GPTM_CFG_CFG_MASK, GPTM_CFG_R_CFG_BIT);
    return  (TIMER_nCONFIG) u32FeatureValue;
}

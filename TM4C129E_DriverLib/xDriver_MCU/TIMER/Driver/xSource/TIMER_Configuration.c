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
    UBase_t uxTimerEnable = 0UL;
    UBase_t uxModuleNumber = 0UL;
    TIMER__vGetSubParams(enModule, (UBase_t*) 0UL, &uxModuleNumber);
    uxTimerEnable = TIMER__uxReadRegister((TIMER_nMODULE_NUM) uxModuleNumber,
                        GPTM_CTL_OFFSET, GPTM_CTL_R_TBEN_MASK | GPTM_CTL_R_TAEN_MASK, 0UL);
    if(0UL != uxTimerEnable)
    {
        TIMER__vWriteRegister( (TIMER_nMODULE_NUM) uxModuleNumber, GPTM_CTL_OFFSET,
                               0UL, GPTM_CTL_R_TBEN_MASK | GPTM_CTL_R_TAEN_MASK, 0UL);
    }

    TIMER__vWriteRegister((TIMER_nMODULE_NUM) uxModuleNumber, GPTM_CFG_OFFSET,
                          (UBase_t) enConf, GPTM_CFG_CFG_MASK, GPTM_CFG_R_CFG_BIT);

    if(0UL != uxTimerEnable)
    {
        TIMER__vWriteRegister((TIMER_nMODULE_NUM) uxModuleNumber, GPTM_CTL_OFFSET,
                          uxTimerEnable, GPTM_CTL_R_TBEN_MASK | GPTM_CTL_R_TAEN_MASK, 0UL);
    }
}


TIMER_nCONFIG TIMER__enGetConfiguration(TIMER_nMODULE enModule)
{
    TIMER_nCONFIG enConfigReg = TIMER_enCONFIG_WIDE;
    UBase_t uxModuleNumber = 0UL;
    TIMER__vGetSubParams(enModule, (UBase_t*) 0UL, &uxModuleNumber);
    enConfigReg = (TIMER_nCONFIG) TIMER__uxReadRegister((TIMER_nMODULE_NUM) uxModuleNumber,
                                     GPTM_CFG_OFFSET, GPTM_CFG_CFG_MASK, GPTM_CFG_R_CFG_BIT);
    return (enConfigReg);
}

/**
 *
 * @file PWM_Propierties.c
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
 * @verbatim 3 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/General/xHeader/PWM_Propierties.h>

#include <xDriver_MCU/PWM/Driver/General/xHeader/PWM_GeneralGeneric.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

uint32_t PWM__u32GetMaxGeneratorNumber(PWM_nMODULE enModule)
{
    uint32_t u32Generator = 0UL;
    u32Generator = PWM__u32GetGeneralGeneric((uint32_t) enModule, PWM_PP_OFFSET,
                                                     PWM_PP_GCNT_MASK, PWM_PP_R_GCNT_BIT);
    return (u32Generator);

}

uint32_t PWM__u32GetMaxFaultNumber(PWM_nMODULE enModule)
{
    uint32_t u32Fault = 0UL;
    u32Fault = PWM__u32GetGeneralGeneric((uint32_t) enModule, PWM_PP_OFFSET,
                                                     PWM_PP_FCNT_MASK, PWM_PP_R_FCNT_BIT);
    return (u32Fault);

}

PWM_nSTATE PWM__enIsFaultExtended(PWM_nMODULE enModule)
{
    PWM_nSTATE enFault = PWM_enSTATE_FALSE;
    enFault = (PWM_nSTATE) PWM__u32GetGeneralGeneric((uint32_t) enModule, PWM_PP_OFFSET,
                                                     PWM_PP_EFAULT_MASK, PWM_PP_R_EFAULT_BIT);
    return (enFault);
}

PWM_nSTATE PWM__enIsSyncExtended(PWM_nMODULE enModule)
{
    PWM_nSTATE enFault = PWM_enSTATE_FALSE;
    enFault = (PWM_nSTATE) PWM__u32GetGeneralGeneric((uint32_t) enModule, PWM_PP_OFFSET,
                                                     PWM_PP_ESYNC_MASK, PWM_PP_R_ESYNC_BIT);
    return (enFault);
}

PWM_nSTATE PWM__enIsOneShotAvailable(PWM_nMODULE enModule)
{
    PWM_nSTATE enFault = PWM_enSTATE_FALSE;
    enFault = (PWM_nSTATE) PWM__u32GetGeneralGeneric((uint32_t) enModule, PWM_PP_OFFSET,
                                                     PWM_PP_ONE_MASK, PWM_PP_R_ONE_BIT);
    return (enFault);
}

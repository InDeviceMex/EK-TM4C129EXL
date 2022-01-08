/**
 *
 * @file PWM_Output_Update.c
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
 * @verbatim 6 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PWM/Driver/Output/xHeader/PWM_Output_Update.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/PWM/Driver/Output/xHeader/PWM_Output_Generic.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>

void PWM_Output__vSetEnableUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                            PWM_nOUTPUT enOutputArg, PWM_nOUTPUT_UPDATE enOutputUpdateArg)
{
    uint32_t enOutputUpdateReg = 0UL;
    switch(enOutputArg)
    {
        case PWM_enOUTPUT_NONE:
            break;
        case PWM_enOUTPUT_A:
            PWM_Output__vSetGenericBit((uint32_t) enModule, PWM_ENUPD_OFFSET, (uint32_t) enGenerator,
                                     (uint32_t) enOutputUpdateArg, PWM_ENUPD_R_ENUPD0_MASK,
                                     (PWM_ENUPD_R_ENUPD2_BIT - PWM_ENUPD_R_ENUPD0_BIT),
                                     PWM_ENUPD_R_ENUPD0_BIT);
            break;
        case PWM_enOUTPUT_B:
            PWM_Output__vSetGenericBit((uint32_t) enModule, PWM_ENUPD_OFFSET, (uint32_t) enGenerator,
                                     (uint32_t) enOutputUpdateArg, PWM_ENUPD_R_ENUPD0_MASK,
                                     (PWM_ENUPD_R_ENUPD2_BIT - PWM_ENUPD_R_ENUPD0_BIT),
                                     PWM_ENUPD_R_ENUPD1_BIT);
            break;
        case PWM_enOUTPUT_BOTH:
            enOutputUpdateReg = (uint32_t) enOutputUpdateArg;
            enOutputUpdateReg <<= PWM_ENUPD_R_ENUPD1_BIT;
            enOutputUpdateReg |= (uint32_t) enOutputUpdateArg;
            PWM_Output__vSetGenericBit((uint32_t) enModule, PWM_ENUPD_OFFSET, (uint32_t) enGenerator,
                                     (uint32_t) enOutputUpdateReg, PWM_ENUPD_R_ENUPD1_MASK | PWM_ENUPD_R_ENUPD0_MASK,
                                     (PWM_ENUPD_R_ENUPD2_BIT - PWM_ENUPD_R_ENUPD0_BIT),
                                     PWM_ENUPD_R_ENUPD0_BIT);
            break;
        default:
            break;
    }
}

PWM_nOUTPUT_UPDATE PWM_Output__enGetEnableUpdate(PWM_nMODULE enModule, PWM_nGENERATOR enGenerator,
                                           PWM_nOUTPUT enOutputArg)
{
    PWM_nOUTPUT_UPDATE enOutputReg = PWM_enOUTPUT_UPDATE_IMMEDIATE;

    switch(enOutputArg)
    {
        case PWM_enOUTPUT_NONE:
            break;
        case PWM_enOUTPUT_A:
            enOutputReg = (PWM_nOUTPUT_UPDATE) PWM_Output__u32GetGenericBit((uint32_t) enModule,
                         PWM_ENUPD_OFFSET, (uint32_t) enGenerator,
                         (uint32_t) enOutputArg,
                         (PWM_ENUPD_R_ENUPD2_BIT - PWM_ENUPD_R_ENUPD0_BIT),
                         PWM_ENUPD_R_ENUPD0_BIT);
            break;
        case PWM_enOUTPUT_B:
            enOutputReg = (PWM_nOUTPUT_UPDATE) PWM_Output__u32GetGenericBit((uint32_t) enModule,
                         PWM_ENUPD_OFFSET, (uint32_t) enGenerator,
                         (uint32_t) enOutputArg,
                         (PWM_ENUPD_R_ENUPD2_BIT - PWM_ENUPD_R_ENUPD0_BIT),
                         PWM_ENUPD_R_ENUPD1_BIT);
            break;
        case PWM_enOUTPUT_BOTH:
            break;
        default:
            break;
    }
    return (enOutputReg);
}





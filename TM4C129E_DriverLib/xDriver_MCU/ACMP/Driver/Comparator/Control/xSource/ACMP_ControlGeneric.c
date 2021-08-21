/**
 *
 * @file ACMP_ControlGeneric.c
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
 * @verbatim Apr 2, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 2, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_ControlGeneric.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/xHeader/ACMP_Generic.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

void ACMP__vSetCompGenericControl(uint32_t u32Module, uint32_t  u32Comparator,
                                  uint32_t u32Feature, uint32_t u32FeatureMask,
                                  uint32_t u32FeatureBit)
{
    ACMP__vSetCompGeneric(u32Module , u32Comparator, ACMP_CTL_OFFSET,
                          u32Feature, u32FeatureMask, u32FeatureBit);
}

uint32_t ACMP__u32GetCompGenericControl(uint32_t u32Module, uint32_t  u32Comparator,
                                        uint32_t u32FeatureMask, uint32_t u32FeatureBit)
{
    uint32_t u32Reg = 0UL;
    u32Reg = ACMP__u32GetCompGeneric(u32Module, u32Comparator, ACMP_CTL_OFFSET,
                                     u32FeatureMask, u32FeatureBit);
    return (u32Reg);
}





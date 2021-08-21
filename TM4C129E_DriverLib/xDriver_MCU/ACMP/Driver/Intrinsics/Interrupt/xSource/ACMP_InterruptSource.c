/**
 *
 * @file ACMP_InterruptSource.c
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
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/xHeader/ACMP_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/ACMP_Primitives.h>

void ACMP__vEnInterruptSource(ACMP_nMODULE enModule, ACMP_nCOMPMASK enCompMask)
{
    uint32_t u32CompMask = 0UL;
    u32CompMask = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ACMP_enCOMPMASK_ALL);

    ACMP__vWriteRegister(enModule, ACMP_INTEN_OFFSET,
                         u32CompMask, u32CompMask, 0UL);
}

void ACMP__vDisInterruptSource(ACMP_nMODULE enModule, ACMP_nCOMPMASK enCompMask)
{
    uint32_t u32CompMask = 0UL;
    u32CompMask = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ACMP_enCOMPMASK_ALL);

    ACMP__vWriteRegister(enModule, ACMP_INTEN_OFFSET,
                         0UL, u32CompMask, 0UL);
}

void ACMP__vClearInterruptSource(ACMP_nMODULE enModule, ACMP_nCOMPMASK enCompMask)
{
    uint32_t u32CompMask = 0UL;
    u32CompMask = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ACMP_enCOMPMASK_ALL);

    ACMP__vWriteRegister(enModule, ACMP_MIS_OFFSET,
                         u32CompMask, 0xFFFFFFFFUL, 0UL);
}

ACMP_nINT_STATUS ACMP__enStatusInterruptSource(ACMP_nMODULE enModule, ACMP_nCOMPMASK enCompMask)
{
    ACMP_nINT_STATUS enInterruptReg = ACMP_enINT_NOOCCUR;
    uint32_t u32CompMask = 0UL;
    uint32_t u32Register= 0UL;

    u32CompMask = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ACMP_enCOMPMASK_ALL);
    u32Register = ACMP__u32ReadRegister(enModule , ACMP_RIS_OFFSET, u32CompMask, 0UL);

    if(0UL != u32Register)
    {
        enInterruptReg = ACMP_enINT_OCCUR;
    }
    else
    {
        enInterruptReg = ACMP_enINT_NOOCCUR;
    }
    return (enInterruptReg);
}

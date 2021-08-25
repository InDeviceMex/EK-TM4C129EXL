/**
 *
 * @file QEI_Ready.c
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
 * @verbatim 24 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/QEI/Intrinsics/xHeader/QEI_Ready.h>

#include <xApplication_MCU/QEI/Intrinsics/xHeader/QEI_Dependencies.h>

#if !defined(Opt_Check)
static SYSCTL_nPERIPHERAL SYSCTL_VECTOR_QEI[(uint32_t) QEI_enMODULE_MAX] = {SYSCTL_enQEI0};
#endif

void QEI__vSetReady(QEI_nMODULE enModule)
{
#if !defined(Opt_Check)
    QEI_nREADY enReady = QEI_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enQEI0;
    uint32_t u32Module = 0UL;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) QEI_enMODULE_MAX);

    enPeripheral = SYSCTL_VECTOR_QEI[u32Module];
    enReady = QEI__enIsReady((QEI_nMODULE) u32Module);
    if(QEI_enNOREADY == enReady)
    {
        SYSCTL__vSetReady(enPeripheral);
        SYSCTL__vReset(enPeripheral);
        SYSCTL__vSetReady(enPeripheral);
    }
#endif
}

void QEI__vClearReady(QEI_nMODULE enModule)
{
#if defined(Opt_Check)
    SYSCTL_nPERIPHERAL SYSCTL_VECTOR_QEI[(uint32_t) QEI_enMODULE_MAX] = {SYSCTL_enQEI0};
#endif
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enQEI0;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) QEI_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_QEI[u32Module];
    SYSCTL__vClearReady(enPeripheral);
}

QEI_nREADY QEI__enIsReady(QEI_nMODULE enModule)
{
#if !defined(Opt_Check)
    QEI_nREADY enReady = QEI_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enQEI0;
    uint32_t u32Module =0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) QEI_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_QEI[u32Module];
    enReady = (QEI_nREADY) SYSCTL__enIsReady(enPeripheral);
#else
    QEI_nREADY enReady = QEI_enREADY;
#endif
    return (enReady);
}

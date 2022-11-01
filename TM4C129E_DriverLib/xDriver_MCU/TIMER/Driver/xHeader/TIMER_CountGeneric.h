/**
 *
 * @file TIMER_CountGeneric.h
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
 * @verbatim 3 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_TIMER_DRIVER_XHEADER_TIMER_COUNTGENERIC_H_
#define XDRIVER_MCU_TIMER_DRIVER_XHEADER_TIMER_COUNTGENERIC_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

typedef struct
{
    UBase_t* puxCountValue;
    UBase_t uxCountHighRegister;
    UBase_t uxCountHighMask;
    UBase_t uxCountHighShiftRight;
    UBase_t uxCountHighShiftLeft;

    UBase_t uxCountLowRegister;
    UBase_t uxCountLowMask;
    UBase_t uxCountLowShiftRight;
    UBase_t uxCountLowShiftLeft;

}TIMER_Count32_Preescale_t;

typedef struct
{
    UBase_t* puxCountValue;
    UBase_t uxCountRegister;
    UBase_t uxCountMask;
    UBase_t uxCountShiftRight;
}TIMER_Count32_t;

TIMER_nSTATUS TIMER_enGet1Count32Generic(TIMER_nMODULE_NUM enModuleNumber,
                                         const TIMER_Count32_t* pstCount);
void TIMER_vSet1Count32Generic(TIMER_nMODULE_NUM enModuleNumber,
                               const TIMER_Count32_t* pstCount);
TIMER_nSTATUS TIMER_enGet2Count32Generic(TIMER_nMODULE_NUM enModuleNumber,
                                         const TIMER_Count32_Preescale_t* pstCount);
void TIMER_vSet2Count32Generic(TIMER_nMODULE_NUM enModuleNumber,
                               const TIMER_Count32_Preescale_t* pstCount);

#endif /* XDRIVER_MCU_TIMER_DRIVER_XHEADER_TIMER_COUNTGENERIC_H_ */

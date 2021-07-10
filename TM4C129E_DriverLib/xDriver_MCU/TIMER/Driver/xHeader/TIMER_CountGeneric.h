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

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

typedef struct
{
        uint32_t u32CountHighRegister;
        uint32_t u32CountHighMask;
        uint32_t u32CountHighShiftRight;
        uint32_t u32CountHighShiftLeft;
        uint32_t u32CountLowRegister;
        uint32_t u32CountLowMask;
        uint32_t u32CountLowShiftRight;
        uint32_t u32CountLowShiftLeft;
        uint64_t* pu64CountValue;
}TIMER_Count64_TypeDef;

typedef struct
{
        uint32_t u32CountRegister;
        uint32_t u32CountMask;
        uint32_t u32CountShiftRight;
        uint32_t* pu32CountValue;
}TIMER_Count32_TypeDef;

TIMER_nSTATUS TIMER_enGet1Count32Generic(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber, const TIMER_Count32_TypeDef* pstCount);
void TIMER_vSet1Count32Generic(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber, const TIMER_Count32_TypeDef* pstCount);
TIMER_nSTATUS TIMER_enGet2Count32Generic(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber, const TIMER_Count64_TypeDef* pstCount);
void TIMER_vSet2Count32Generic(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber, const TIMER_Count64_TypeDef* pstCount);
TIMER_nSTATUS TIMER_enGetCount64Generic(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber, const TIMER_Count64_TypeDef* pstCount);
uint64_t  TIMER_u64GetCount_RTC(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber);
uint64_t  TIMER_u64GetFreeCount_RTC(TIMER_nSIZE enModuleSize, TIMER_nMODULE_NUM enModuleNumber);

#endif /* XDRIVER_MCU_TIMER_DRIVER_XHEADER_TIMER_COUNTGENERIC_H_ */

/**
 *
 * @file MCU_Basics.h
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
 * @verbatim 19 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_BASICS_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_BASICS_H_

#if defined (__TI_ARM__ )
    #pragma CHECK_MISRA("-8.5")
#endif

inline void MCU__vNoOperation(void);
inline void MCU__vDataSyncBarrier(void);
inline void MCU__vInstructionSyncBarrier(void);
inline void MCU__vDataMemoryBarrier(void);
inline void MCU__vBlocking(void);

inline void MCU__vNoOperation(void)
{
  {__asm(" NOP");}
}

inline void MCU__vDataSyncBarrier(void)
{
  {__asm(" DSB");}
}

inline void MCU__vInstructionSyncBarrier(void)
{
  {__asm(" ISB");}
}

inline void MCU__vDataMemoryBarrier(void)
{
  {__asm(" DMB");}
}
inline void MCU__vBlocking(void)
{
    MCU__vDataSyncBarrier();
    MCU__vInstructionSyncBarrier();
}

#if defined (__TI_ARM__ )
    #pragma RESET_MISRA("8.5")
#endif

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_BASICS_H_ */

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

__attribute__((naked))
void MCU__vNoOperation(void);
__attribute__((naked))
void MCU__vDataSyncBarrier(void);
__attribute__((naked))
void MCU__vInstructionSyncBarrier(void);
__attribute__((naked))
void MCU__vDataMemoryBarrier(void);

void MCU__vBlocking(void);

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_BASICS_H_ */

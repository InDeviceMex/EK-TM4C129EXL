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

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma CHECK_MISRA("-19.7")
#endif

#define MCU__vNoOperation() {__asm volatile(" NOP \n");}
#define MCU__vDataSyncBarrier() {__asm volatile(" DSB \n");}
#define MCU__vInstructionSyncBarrier() {__asm volatile(" ISB \n");}
#define MCU__vDataMemoryBarrier() {__asm volatile(" DMB \n");}

#define MCU__vBlocking() { MCU__vDataSyncBarrier(); MCU__vInstructionSyncBarrier();}


#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma RESET_MISRA("19.7")
#endif

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_BASICS_H_ */

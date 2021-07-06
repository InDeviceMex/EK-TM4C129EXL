/**
 *
 * @file SCB_Traps.h
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_TRAPS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_TRAPS_H_

void SCB__vEnableTraps(void);

void SCB__vEnDIV0Trap(void);
void SCB__vDisDIV0Trap(void);

void SCB__vEnUnAlignTrap(void);
void SCB__vDisUnAlignTrap(void);

void SCB__vEnUnprivilegedSWTRIGGER(void);
void SCB__vDisUnprivilegedSWTRIGGER(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_TRAPS_H_ */

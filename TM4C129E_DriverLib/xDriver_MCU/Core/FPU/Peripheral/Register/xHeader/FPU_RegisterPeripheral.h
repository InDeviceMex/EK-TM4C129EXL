/**
 *
 * @file FPU_RegisterPeripheral.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/Core/FPU/Peripheral/xHeader/FPU_Enum.h>
#include <xDriver_MCU/Core/FPU/Peripheral/Struct/xHeader/FPU_StructPeripheral.h>
#include <xDriver_MCU/Core/FPU/Peripheral/Register/xHeader/FPU_RegisterAddress.h>

#define FPU    (((FPU_t*) (FPU_BASE + FPU_OFFSET)))

/*********************************************************************************************/
/************************************* 1 CPACR ***********************************************/
/*********************************************************************************************/
#define FPU_CPACR    (((FPU_CPACR_t*) (FPU_BASE + FPU_CPACR_OFFSET)))
#define FPU_CPACR_R    (*((volatile UBase_t*) (FPU_BASE + FPU_CPACR_OFFSET)))

/*********************************************************************************************/
/************************************* 2 CCR ***********************************************/
/*********************************************************************************************/
#define FPU_CCR    (((FPU_CCR_t*) (FPU_BASE + FPU_CCR_OFFSET)))
#define FPU_CCR_R    (*((volatile UBase_t*) (FPU_BASE + FPU_CCR_OFFSET)))

/*********************************************************************************************/
/************************************* 3 CAR ***********************************************/
/*********************************************************************************************/
#define FPU_CAR    (((FPU_CAR_t*) (FPU_BASE + FPU_CAR_OFFSET)))
#define FPU_CAR_R    (*((volatile UBase_t*) (FPU_BASE + FPU_CAR_OFFSET)))

/*********************************************************************************************/
/************************************* 4 DSCR ***********************************************/
/*********************************************************************************************/
#define FPU_DSCR    (((FPU_DSCR_t*) (FPU_BASE + FPU_DSCR_OFFSET)))
#define FPU_DSCR_R    (*((volatile UBase_t*) (FPU_BASE + FPU_DSCR_OFFSET)))

/*********************************************************************************************/
/************************************* 6 MVFR0 ***********************************************/
/*********************************************************************************************/
#define FPU_MVFR0    (((FPU_MVFR0_t*) (FPU_BASE + FPU_MVFR0_OFFSET)))
#define FPU_MVFR0_R    (*((const UBase_t*) (FPU_BASE + FPU_MVFR0_OFFSET)))

/*********************************************************************************************/
/************************************* 7 MVFR1 ***********************************************/
/*********************************************************************************************/
#define FPU_MVFR1    (((FPU_MVFR1_t*) (FPU_BASE + FPU_MVFR1_OFFSET)))
#define FPU_MVFR1_R    (*((const UBase_t*) (FPU_BASE + FPU_MVFR1_OFFSET)))

/*********************************************************************************************/
/************************************* 8 MVFR2 ***********************************************/
/*********************************************************************************************/
#define FPU_MVFR2_R    (*((const UBase_t*) (FPU_BASE + FPU_MVFR2_OFFSET)))

uintptr_t FPU__uptrBlockBaseAddress(FPU_nMODULE enModuleArg);


#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERPERIPHERAL_H_ */

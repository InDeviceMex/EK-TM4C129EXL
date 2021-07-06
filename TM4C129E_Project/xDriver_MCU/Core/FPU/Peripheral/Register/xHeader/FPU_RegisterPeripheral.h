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

#include <xDriver_MCU/Core/FPU/Peripheral/Struct/xHeader/FPU_StructPeripheral.h>
#include <xDriver_MCU/Core/FPU/Peripheral/Register/xHeader/FPU_RegisterAddress.h>

#define FPU    (((FPU_TypeDef*) (FPU_BASE + FPU_OFFSET)))

/*********************************************************************************************/
/************************************* 1 CPACR ***********************************************/
/*********************************************************************************************/
#define FPU_CPACR    (((CPACR_TypeDef*) (FPU_BASE + FPU_CPACR_OFFSET)))
#define FPU_CPACR_R    (*((volatile uint32_t*) (FPU_BASE + FPU_CPACR_OFFSET)))

/*********************************************************************************************/
/************************************* 2 FPCCR ***********************************************/
/*********************************************************************************************/
#define FPU_FPCCR    (((FPCCR_TypeDef*) (FPU_BASE + FPU_FPCCR_OFFSET)))
#define FPU_FPCCR_R    (*((volatile uint32_t*) (FPU_BASE + FPU_FPCCR_OFFSET)))

/*********************************************************************************************/
/************************************* 3 FPCAR ***********************************************/
/*********************************************************************************************/
#define FPU_FPCAR    (((FPCAR_TypeDef*) (FPU_BASE + FPU_FPCAR_OFFSET)))
#define FPU_FPCAR_R    (*((volatile uint32_t*) (FPU_BASE + FPU_FPCAR_OFFSET)))

/*********************************************************************************************/
/************************************* 4 FPDSCR ***********************************************/
/*********************************************************************************************/
#define FPU_FPDSCR    (((FPDSCR_TypeDef*) (FPU_BASE + FPU_FPDSCR_OFFSET)))
#define FPU_FPDSCR_R    (*((volatile uint32_t*) (FPU_BASE + FPU_FPDSCR_OFFSET)))

/*********************************************************************************************/
/************************************* 6 MVFR0 ***********************************************/
/*********************************************************************************************/
#define FPU_MVFR0    (((MVFR0_TypeDef*) (FPU_BASE + FPU_MVFR0_OFFSET)))
#define FPU_MVFR0_R    (*((const uint32_t*) (FPU_BASE + FPU_MVFR0_OFFSET)))

/*********************************************************************************************/
/************************************* 7 MVFR1 ***********************************************/
/*********************************************************************************************/
#define FPU_MVFR1    (((MVFR1_TypeDef*) (FPU_BASE + FPU_MVFR1_OFFSET)))
#define FPU_MVFR1_R    (*((const uint32_t*) (FPU_BASE + FPU_MVFR1_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERPERIPHERAL_H_ */

/**
 *
 * @file MPU_RegisterPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/Core/MPU/Peripheral/Register/xHeader/MPU_RegisterAddress.h>
#include <xDriver_MCU/Core/MPU/Peripheral/Struct/xHeader/MPU_StructPeripheral.h>

#if defined (__TI_ARM__ )
    #pragma CHECK_MISRA("-19.7")
#endif

#define MPU    (((MPU_TypeDef*) (MPU_BASE + MPU_OFFSET)))
#define MPU_R(offset)    (*((volatile uint32_t*) (MPU_BASE + offset)))

#if defined (__TI_ARM__ )
    #pragma RESET_MISRA("19.7")
#endif
/**********************************************************************************************
************************************** 1 TYPER ***********************************************
**********************************************************************************************/
#define MPU_TYPER    (((MPU_TYPER_TypeDef*) (MPU_BASE + MPU_TYPER_OFFSET)))
#define MPU_TYPER_R    (*((volatile uint32_t*) (MPU_BASE + MPU_TYPER_OFFSET)))

/**********************************************************************************************
************************************** 2 CTRL ***********************************************
**********************************************************************************************/
#define MPU_CTRL    (((MPU_CTRL_TypeDef*) (MPU_BASE + MPU_CTRL_OFFSET)))
#define MPU_CTRL_R    (*((volatile uint32_t*) (MPU_BASE + MPU_CTRL_OFFSET)))

/**********************************************************************************************
**************************************3 RNR ***********************************************
**********************************************************************************************/
#define MPU_RNR    (((MPU_RNR_TypeDef*) (MPU_BASE + MPU_RNR_OFFSET)))
#define MPU_RNR_R    (*((volatile uint32_t*) (MPU_BASE + MPU_RNR_OFFSET)))

/**********************************************************************************************
**************************************4 RBAR ***********************************************
**********************************************************************************************/
#define MPU_RBAR    (((MPU_RBAR_TypeDef*) (MPU_BASE + MPU_RBAR_OFFSET)))
#define MPU_RBAR_R    (*((volatile uint32_t*) (MPU_BASE + MPU_RBAR_OFFSET)))

/**********************************************************************************************
**************************************5 RASR ***********************************************
**********************************************************************************************/
#define MPU_RASR    (((MPU_RASR_TypeDef*) (MPU_BASE + MPU_RASR_OFFSET)))
#define MPU_RASR_R    (*((volatile uint32_t*) (MPU_BASE + MPU_RASR_OFFSET)))

/**********************************************************************************************
**************************************6 RBAR1 ***********************************************
**********************************************************************************************/
#define MPU_RBAR1    (((MPU_RBAR_TypeDef*) (MPU_BASE + MPU_RBAR1_OFFSET)))
#define MPU_RBAR1_R    (*((volatile uint32_t*) (MPU_BASE + MPU_RBAR1_OFFSET)))

/**********************************************************************************************
**************************************7 RASR1 ***********************************************
**********************************************************************************************/
#define MPU_RASR1    (((MPU_RASR_TypeDef*) (MPU_BASE + MPU_RASR1_OFFSET)))
#define MPU_RASR1_R    (*((volatile uint32_t*) (MPU_BASE + MPU_RASR1_OFFSET)))


/**********************************************************************************************
**************************************8 RBAR2 ***********************************************
**********************************************************************************************/
#define MPU_RBAR2    (((MPU_RBAR_TypeDef*) (MPU_BASE + MPU_RBAR2_OFFSET)))
#define MPU_RBAR2_R    (*((volatile uint32_t*) (MPU_BASE + MPU_RBAR2_OFFSET)))

/**********************************************************************************************
**************************************9 RASR2 ***********************************************
**********************************************************************************************/
#define MPU_RASR2    (((MPU_RASR_TypeDef*) (MPU_BASE + MPU_RASR2_OFFSET)))
#define MPU_RASR2_R    (*((volatile uint32_t*) (MPU_BASE + MPU_RASR2_OFFSET)))

/**********************************************************************************************
**************************************10 RBAR3 ***********************************************
**********************************************************************************************/
#define MPU_RBAR3    (((MPU_RBAR_TypeDef*) (MPU_BASE + MPU_RBAR3_OFFSET)))
#define MPU_RBAR3_R    (*((volatile uint32_t*) (MPU_BASE + MPU_RBAR3_OFFSET)))

/**********************************************************************************************
**************************************11 RASR3 ***********************************************
**********************************************************************************************/
#define MPU_RASR3    (((MPU_RASR_TypeDef*) (MPU_BASE + MPU_RASR3_OFFSET)))
#define MPU_RASR3_R    (*((volatile uint32_t*) (MPU_BASE + MPU_RASR3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERPERIPHERAL_H_ */

/**
 *
 * @file GPIO_RegisterPeripheral_ModuleE.h
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
 * @verbatim 9 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEE_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEE_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOE    ((GPIO_t*) (GPIOE_BASE))
#define GPIOE_AUX    ((GPIO_AUX_t*) (GPIOE_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOE DATA*/
#define GPIOE_DATA_MASK    ((GPIOEATA_MASK_t*) (GPIOE_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOE_DATA_PINMASK0_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA_PINMASK0_OFFSET )))
#define GPIOE_DATA_PINMASK1_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA_PINMASK1_OFFSET )))
#define GPIOE_DATA_PINMASK2_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA_PINMASK2_OFFSET )))
#define GPIOE_DATA_PINMASK3_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA_PINMASK3_OFFSET )))
#define GPIOE_DATA_PINMASK4_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA_PINMASK4_OFFSET )))
#define GPIOE_DATA_PINMASK5_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA_PINMASK5_OFFSET )))
#define GPIOE_DATA_PINMASK6_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA_PINMASK6_OFFSET )))
#define GPIOE_DATA_PINMASK7_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA_PINMASK7_OFFSET )))

#define GPIOE_DATA    ((GPIOEATA_t*) (GPIOE_BASE + GPIO_DATA_OFFSET))
#define GPIOE_DATA_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOE DIR*/
#define GPIOE_DIR    ((GPIOEIR_t*) (GPIOE_BASE + GPIO_DIR_OFFSET))
#define GPIOE_DIR_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOE IS*/
#define GPIOE_IS    ((GPIO_IS_t*) (GPIOE_BASE + GPIO_IS_OFFSET))
#define GPIOE_IS_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOE IBE*/
#define GPIOE_IBE    ((GPIO_IBE_t*) (GPIOE_BASE + GPIO_IBE_OFFSET))
#define GPIOE_IBE_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOE IEV*/
#define GPIOE_IEV    ((GPIO_IEV_t*) (GPIOE_BASE + GPIO_IEV_OFFSET))
#define GPIOE_IEV_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOE IME*/
#define GPIOE_IM    ((GPIO_IM_t*) (GPIOE_BASE + GPIO_IM_OFFSET))
#define GPIOE_IM_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOE RIS*/
#define GPIOE_RIS    ((GPIO_RIS_t*) (GPIOE_BASE + GPIO_RIS_OFFSET))
#define GPIOE_RIS_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOE MIS*/
#define GPIOE_MIS    ((GPIO_MIS_t*) (GPIOE_BASE + GPIO_MIS_OFFSET))
#define GPIOE_MIS_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOE IC*/
#define GPIOE_ICR    ((GPIO_ICR_t*) (GPIOE_BASE + GPIO_ICR_OFFSET))
#define GPIOE_ICR_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOE AFSEL*/
#define GPIOE_AFSEL    ((GPIOEFSEL_t*) (GPIOE_BASE + GPIO_AFSEL_OFFSET))
#define GPIOE_AFSEL_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOE DRV2*/
#define GPIOE_DRR    ((GPIOERR_ARRAY_t*) (GPIOE_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOE DRV2*/
#define GPIOE_DR2R    ((GPIOER2R_t*) (GPIOE_BASE + GPIO_DR2R_OFFSET))
#define GPIOE_DR2R_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOE DRV4*/
#define GPIOE_DR4R    ((GPIOER4R_t*) (GPIOE_BASE + GPIO_DR4R_OFFSET))
#define GPIOE_DR4R_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOE DRV8*/
#define GPIOE_DR8R    ((GPIOER8R_t*) (GPIOE_BASE + GPIO_DR8R_OFFSET))
#define GPIOE_DR8R_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOE ODE*/
#define GPIOE_ODR    ((GPIO_ODR_t*) (GPIOE_BASE + GPIO_ODR_OFFSET))
#define GPIOE_ODR_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOE PUE*/
#define GPIOE_PUR    ((GPI0_PUR_t*) (GPIOE_BASE + GPIO_PUR_OFFSET))
#define GPIOE_PUR_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOE PDE*/
#define GPIOE_PDR    ((GPIO_PDR_t*) (GPIOE_BASE + GPIO_PDR_OFFSET))
#define GPIOE_PDR_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOE SLR*/
#define GPIOE_SLR    ((GPIO_SLR_t*) (GPIOE_BASE + GPIO_SLR_OFFSET))
#define GPIOE_SLR_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOE DEN*/
#define GPIOE_DEN    ((GPIOEEN_t*) (GPIOE_BASE + GPIO_DEN_OFFSET))
#define GPIOE_DEN_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOE LOCK*/
#define GPIOE_LOCK    ((GPIO_LOCK_t*) (GPIOE_BASE + GPIO_LOCK_OFFSET))
#define GPIOE_LOCK_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOE CR*/
#define GPIOE_CR    ((GPIOER_t*) (GPIOE_BASE + GPIO_CR_OFFSET))
#define GPIOE_CR_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOE AMSEL*/
#define GPIOE_AMSEL    ((GPIOEMSEL_t*) (GPIOE_BASE + GPIO_AMSEL_OFFSET))
#define GPIOE_AMSEL_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOE PCTL*/
#define GPIOE_PCTL    ((GPIO_PCTL_t*) (GPIOE_BASE + GPIO_PCTL_OFFSET))
#define GPIOE_PCTL_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOE ADCCTL*/
#define GPIOE_ADCCTL    ((GPIOEDCCTL_t*) (GPIOE_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOE_ADCCTL_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOE DMACTL*/
#define GPIOE_DMACTL    ((GPIOEMACTL_t*) (GPIOE_BASE + GPIO_DMACTL_OFFSET))
#define GPIOE_DMACTL_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOE SI*/
#define GPIOE_SI    ((GPIO_SI_t*) (GPIOE_BASE + GPIO_SI_OFFSET))
#define GPIOE_SI_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOE DR12R*/
#define GPIOE_DR12R    ((GPIOER12R_t*) (GPIOE_BASE + GPIO_DR12R_OFFSET))
#define GPIOE_DR12R_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOE WAKEPEN*/
#define GPIOE_WAKEPEN    ((GPIO_WAKEPEN_t*) (GPIOE_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOE_WAKEPEN_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOE WAKELVL*/
#define GPIOE_WAKELVL    ((GPIO_WAKELVL_t*) (GPIOE_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOE_WAKELVL_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOE WAKESTAT*/
#define GPIOE_WAKESTAT    ((GPIO_WAKESTAT_t*) (GPIOE_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOE_WAKESTAT_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOE PP*/
#define GPIOE_PP    ((GPIO_PP_t*) (GPIOE_BASE + GPIO_PP_OFFSET))
#define GPIOE_PP_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOE PC*/
#define GPIOE_PC    ((GPIO_PC_t*) (GPIOE_BASE + GPIO_PC_OFFSET))
#define GPIOE_PC_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOE PID4*/
#define GPIOE_PeriphID4    ((GPIO_PeriphID4_t*) (GPIOE_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOE_PeriphID4_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOE PID5*/
#define GPIOE_PeriphID5    ((GPIO_PeriphID5_t*) (GPIOE_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOE_PeriphID5_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOE PID6*/
#define GPIOE_PeriphID6    ((GPIO_PeriphID6_t*) (GPIOE_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOE_PeriphID6_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOE PID7*/
#define GPIOE_PeriphID7    ((GPIO_PeriphID7_t*) (GPIOE_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOE_PeriphID7_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOE PID0*/
#define GPIOE_PeriphID0    ((GPIO_PeriphID0_t*) (GPIOE_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOE_PeriphID0_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOE PID1*/
#define GPIOE_PeriphID1    ((GPIO_PeriphID1_t*) (GPIOE_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOE_PeriphID1_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOE PID2*/
#define GPIOE_PeriphID2    ((GPIO_PeriphID2_t*) (GPIOE_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOE_PeriphID2_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOE PID3*/
#define GPIOE_PeriphID3    ((GPIO_PeriphID3_t*) (GPIOE_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOE_PeriphID3_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOE CID0*/
#define GPIOE_PCellID0    ((GPIO_PCellID0_t*) (GPIOE_BASE + GPIO_PCellID0_OFFSET))
#define GPIOE_PCellID0_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOE CID1*/
#define GPIOE_PCellID1    ((GPIO_PCellID1_t*) (GPIOE_BASE + GPIO_PCellID1_OFFSET))
#define GPIOE_PCellID1_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOE CID2*/
#define GPIOE_PCellID2    ((GPIO_PCellID2_t*) (GPIOE_BASE + GPIO_PCellID2_OFFSET))
#define GPIOE_PCellID2_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOE CID3*/
#define GPIOE_PCellID3    ((GPIO_PCellID3_t*) (GPIOE_BASE + GPIO_PCellID3_OFFSET))
#define GPIOE_PCellID3_R    (*((volatile uint32_t *) (GPIOE_BASE + GPIO_PCellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEE_H_ */

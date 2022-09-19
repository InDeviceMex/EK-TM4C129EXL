/**
 *
 * @file GPIO_RegisterPeripheral_ModuleB.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEB_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEB_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOB    ((GPIO_t*) (GPIOB_BASE))
#define GPIOB_AUX    ((GPIO_AUX_t*) (GPIOB_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOB DATA*/
#define GPIOB_DATA_MASK    ((GPIO_DATA_MASK_t*) (GPIOB_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOB_DATA_PINMASK0_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA_PINMASK0_OFFSET )))
#define GPIOB_DATA_PINMASK1_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA_PINMASK1_OFFSET )))
#define GPIOB_DATA_PINMASK2_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA_PINMASK2_OFFSET )))
#define GPIOB_DATA_PINMASK3_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA_PINMASK3_OFFSET )))
#define GPIOB_DATA_PINMASK4_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA_PINMASK4_OFFSET )))
#define GPIOB_DATA_PINMASK5_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA_PINMASK5_OFFSET )))
#define GPIOB_DATA_PINMASK6_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA_PINMASK6_OFFSET )))
#define GPIOB_DATA_PINMASK7_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA_PINMASK7_OFFSET )))

#define GPIOB_DATA    ((GPIO_DATA_t*) (GPIOB_BASE + GPIO_DATA_OFFSET))
#define GPIOB_DATA_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOB DIR*/
#define GPIOB_DIR    ((GPIO_DIR_t*) (GPIOB_BASE + GPIO_DIR_OFFSET))
#define GPIOB_DIR_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOB IS*/
#define GPIOB_IS    ((GPIO_IS_t*) (GPIOB_BASE + GPIO_IS_OFFSET))
#define GPIOB_IS_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOB IBE*/
#define GPIOB_IBE    ((GPIO_IBE_t*) (GPIOB_BASE + GPIO_IBE_OFFSET))
#define GPIOB_IBE_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOB IEV*/
#define GPIOB_IEV    ((GPIO_IEV_t*) (GPIOB_BASE + GPIO_IEV_OFFSET))
#define GPIOB_IEV_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOB IME*/
#define GPIOB_IM    ((GPIO_IM_t*) (GPIOB_BASE + GPIO_IM_OFFSET))
#define GPIOB_IM_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOB RIS*/
#define GPIOB_RIS    ((GPIO_RIS_t*) (GPIOB_BASE + GPIO_RIS_OFFSET))
#define GPIOB_RIS_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOB MIS*/
#define GPIOB_MIS    ((GPIO_MIS_t*) (GPIOB_BASE + GPIO_MIS_OFFSET))
#define GPIOB_MIS_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOB IC*/
#define GPIOB_ICR    ((GPIO_ICR_t*) (GPIOB_BASE + GPIO_ICR_OFFSET))
#define GPIOB_ICR_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOB AFSEL*/
#define GPIOB_AFSEL    ((GPIO_AFSEL_t*) (GPIOB_BASE + GPIO_AFSEL_OFFSET))
#define GPIOB_AFSEL_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOB DRV2*/
#define GPIOB_DRR    ((GPIO_DRR_ARRAY_t*) (GPIOB_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOB DRV2*/
#define GPIOB_DR2R    ((GPIO_DR2R_t*) (GPIOB_BASE + GPIO_DR2R_OFFSET))
#define GPIOB_DR2R_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOB DRV4*/
#define GPIOB_DR4R    ((GPIO_DR4R_t*) (GPIOB_BASE + GPIO_DR4R_OFFSET))
#define GPIOB_DR4R_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOB DRV8*/
#define GPIOB_DR8R    ((GPIO_DR8R_t*) (GPIOB_BASE + GPIO_DR8R_OFFSET))
#define GPIOB_DR8R_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOB ODE*/
#define GPIOB_ODR    ((GPIO_ODR_t*) (GPIOB_BASE + GPIO_ODR_OFFSET))
#define GPIOB_ODR_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOB PUE*/
#define GPIOB_PUR    ((GPIO_PUR_t*) (GPIOB_BASE + GPIO_PUR_OFFSET))
#define GPIOB_PUR_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOB PDE*/
#define GPIOB_PDR    ((GPIO_PDR_t*) (GPIOB_BASE + GPIO_PDR_OFFSET))
#define GPIOB_PDR_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOB SLR*/
#define GPIOB_SLR    ((GPIO_SLR_t*) (GPIOB_BASE + GPIO_SLR_OFFSET))
#define GPIOB_SLR_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOB DEN*/
#define GPIOB_DEN    ((GPIO_DEN_t*) (GPIOB_BASE + GPIO_DEN_OFFSET))
#define GPIOB_DEN_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOB LOCK*/
#define GPIOB_LOCK    ((GPIO_LOCK_t*) (GPIOB_BASE + GPIO_LOCK_OFFSET))
#define GPIOB_LOCK_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOB CR*/
#define GPIOB_CR    ((GPIO_CR_t*) (GPIOB_BASE + GPIO_CR_OFFSET))
#define GPIOB_CR_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOB AMSEL*/
#define GPIOB_AMSEL    ((GPIO_AMSEL_t*) (GPIOB_BASE + GPIO_AMSEL_OFFSET))
#define GPIOB_AMSEL_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOB PCTL*/
#define GPIOB_PCTL    ((GPIO_PCTL_t*) (GPIOB_BASE + GPIO_PCTL_OFFSET))
#define GPIOB_PCTL_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOB ADCCTL*/
#define GPIOB_ADCCTL    ((GPIO_ADCCTL_t*) (GPIOB_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOB_ADCCTL_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOB DMACTL*/
#define GPIOB_DMACTL    ((GPIO_DMACTL_t*) (GPIOB_BASE + GPIO_DMACTL_OFFSET))
#define GPIOB_DMACTL_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOB SI*/
#define GPIOB_SI    ((GPIO_SI_t*) (GPIOB_BASE + GPIO_SI_OFFSET))
#define GPIOB_SI_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOB DR12R*/
#define GPIOB_DR12R    ((GPIO_DR12R_t*) (GPIOB_BASE + GPIO_DR12R_OFFSET))
#define GPIOB_DR12R_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOB WAKEPEN*/
#define GPIOB_WAKEPEN    ((GPIO_WAKEPEN_t*) (GPIOB_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOB_WAKEPEN_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOB WAKELVL*/
#define GPIOB_WAKELVL    ((GPIO_WAKELVL_t*) (GPIOB_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOB_WAKELVL_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOB WAKESTAT*/
#define GPIOB_WAKESTAT    ((GPIO_WAKESTAT_t*) (GPIOB_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOB_WAKESTAT_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOB PP*/
#define GPIOB_PP    ((GPIO_PP_t*) (GPIOB_BASE + GPIO_PP_OFFSET))
#define GPIOB_PP_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOB PC*/
#define GPIOB_PC    ((GPIO_PC_t*) (GPIOB_BASE + GPIO_PC_OFFSET))
#define GPIOB_PC_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOB PID4*/
#define GPIOB_PeriphID4    ((GPIO_PeriphID4_t*) (GPIOB_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOB_PeriphID4_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOB PID5*/
#define GPIOB_PeriphID5    ((GPIO_PeriphID5_t*) (GPIOB_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOB_PeriphID5_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOB PID6*/
#define GPIOB_PeriphID6    ((GPIO_PeriphID6_t*) (GPIOB_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOB_PeriphID6_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOB PID7*/
#define GPIOB_PeriphID7    ((GPIO_PeriphID7_t*) (GPIOB_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOB_PeriphID7_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOB PID0*/
#define GPIOB_PeriphID0    ((GPIO_PeriphID0_t*) (GPIOB_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOB_PeriphID0_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOB PID1*/
#define GPIOB_PeriphID1    ((GPIO_PeriphID1_t*) (GPIOB_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOB_PeriphID1_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOB PID2*/
#define GPIOB_PeriphID2    ((GPIO_PeriphID2_t*) (GPIOB_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOB_PeriphID2_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOB PID3*/
#define GPIOB_PeriphID3    ((GPIO_PeriphID3_t*) (GPIOB_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOB_PeriphID3_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOB CID0*/
#define GPIOB_PCellID0    ((GPIO_PCellID0_t*) (GPIOB_BASE + GPIO_PCellID0_OFFSET))
#define GPIOB_PCellID0_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOB CID1*/
#define GPIOB_PCellID1    ((GPIO_PCellID1_t*) (GPIOB_BASE + GPIO_PCellID1_OFFSET))
#define GPIOB_PCellID1_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOB CID2*/
#define GPIOB_PCellID2    ((GPIO_PCellID2_t*) (GPIOB_BASE + GPIO_PCellID2_OFFSET))
#define GPIOB_PCellID2_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOB CID3*/
#define GPIOB_PCellID3    ((GPIO_PCellID3_t*) (GPIOB_BASE + GPIO_PCellID3_OFFSET))
#define GPIOB_PCellID3_R    (*((volatile uint32_t *) (GPIOB_BASE + GPIO_PCellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEB_H_ */

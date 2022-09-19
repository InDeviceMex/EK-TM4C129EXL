/**
 *
 * @file GPIO_RegisterPeripheral_ModuleH.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEH_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEH_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOH    ((GPIO_t*) (GPIOH_BASE))
#define GPIOH_AUX    ((GPIO_AUX_t*) (GPIOH_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOH DATA*/
#define GPIOH_DATA_MASK    ((GPIO_DATA_MASK_t*) (GPIOH_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOH_DATA_PINMASK0_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA_PINMASK0_OFFSET )))
#define GPIOH_DATA_PINMASK1_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA_PINMASK1_OFFSET )))
#define GPIOH_DATA_PINMASK2_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA_PINMASK2_OFFSET )))
#define GPIOH_DATA_PINMASK3_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA_PINMASK3_OFFSET )))
#define GPIOH_DATA_PINMASK4_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA_PINMASK4_OFFSET )))
#define GPIOH_DATA_PINMASK5_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA_PINMASK5_OFFSET )))
#define GPIOH_DATA_PINMASK6_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA_PINMASK6_OFFSET )))
#define GPIOH_DATA_PINMASK7_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA_PINMASK7_OFFSET )))

#define GPIOH_DATA    ((GPIO_DATA_t*) (GPIOH_BASE + GPIO_DATA_OFFSET))
#define GPIOH_DATA_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOH DIR*/
#define GPIOH_DIR    ((GPIO_DIR_t*) (GPIOH_BASE + GPIO_DIR_OFFSET))
#define GPIOH_DIR_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOH IS*/
#define GPIOH_IS    ((GPIO_IS_t*) (GPIOH_BASE + GPIO_IS_OFFSET))
#define GPIOH_IS_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOH IBE*/
#define GPIOH_IBE    ((GPIO_IBE_t*) (GPIOH_BASE + GPIO_IBE_OFFSET))
#define GPIOH_IBE_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOH IEV*/
#define GPIOH_IEV    ((GPIO_IEV_t*) (GPIOH_BASE + GPIO_IEV_OFFSET))
#define GPIOH_IEV_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOH IME*/
#define GPIOH_IM    ((GPIO_IM_t*) (GPIOH_BASE + GPIO_IM_OFFSET))
#define GPIOH_IM_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOH RIS*/
#define GPIOH_RIS    ((GPIO_RIS_t*) (GPIOH_BASE + GPIO_RIS_OFFSET))
#define GPIOH_RIS_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOH MIS*/
#define GPIOH_MIS    ((GPIO_MIS_t*) (GPIOH_BASE + GPIO_MIS_OFFSET))
#define GPIOH_MIS_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOH IC*/
#define GPIOH_ICR    ((GPIO_ICR_t*) (GPIOH_BASE + GPIO_ICR_OFFSET))
#define GPIOH_ICR_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOH AFSEL*/
#define GPIOH_AFSEL    ((GPIO_AFSEL_t*) (GPIOH_BASE + GPIO_AFSEL_OFFSET))
#define GPIOH_AFSEL_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOH DRV2*/
#define GPIOH_DRR    ((GPIO_DRR_ARRAY_t*) (GPIOH_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOH DRV2*/
#define GPIOH_DR2R    ((GPIO_DR2R_t*) (GPIOH_BASE + GPIO_DR2R_OFFSET))
#define GPIOH_DR2R_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOH DRV4*/
#define GPIOH_DR4R    ((GPIO_DR4R_t*) (GPIOH_BASE + GPIO_DR4R_OFFSET))
#define GPIOH_DR4R_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOH DRV8*/
#define GPIOH_DR8R    ((GPIO_DR8R_t*) (GPIOH_BASE + GPIO_DR8R_OFFSET))
#define GPIOH_DR8R_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOH ODE*/
#define GPIOH_ODR    ((GPIO_ODR_t*) (GPIOH_BASE + GPIO_ODR_OFFSET))
#define GPIOH_ODR_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOH PUE*/
#define GPIOH_PUR    ((GPIO_PUR_t*) (GPIOH_BASE + GPIO_PUR_OFFSET))
#define GPIOH_PUR_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOH PDE*/
#define GPIOH_PDR    ((GPIO_PDR_t*) (GPIOH_BASE + GPIO_PDR_OFFSET))
#define GPIOH_PDR_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOH SLR*/
#define GPIOH_SLR    ((GPIO_SLR_t*) (GPIOH_BASE + GPIO_SLR_OFFSET))
#define GPIOH_SLR_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOH DEN*/
#define GPIOH_DEN    ((GPIO_DEN_t*) (GPIOH_BASE + GPIO_DEN_OFFSET))
#define GPIOH_DEN_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOH LOCK*/
#define GPIOH_LOCK    ((GPIO_LOCK_t*) (GPIOH_BASE + GPIO_LOCK_OFFSET))
#define GPIOH_LOCK_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOH CR*/
#define GPIOH_CR    ((GPIO_CR_t*) (GPIOH_BASE + GPIO_CR_OFFSET))
#define GPIOH_CR_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOH AMSEL*/
#define GPIOH_AMSEL    ((GPIO_AMSEL_t*) (GPIOH_BASE + GPIO_AMSEL_OFFSET))
#define GPIOH_AMSEL_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOH PCTL*/
#define GPIOH_PCTL    ((GPIO_PCTL_t*) (GPIOH_BASE + GPIO_PCTL_OFFSET))
#define GPIOH_PCTL_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOH ADCCTL*/
#define GPIOH_ADCCTL    ((GPIO_ADCCTL_t*) (GPIOH_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOH_ADCCTL_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOH DMACTL*/
#define GPIOH_DMACTL    ((GPIO_DMACTL_t*) (GPIOH_BASE + GPIO_DMACTL_OFFSET))
#define GPIOH_DMACTL_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOH SI*/
#define GPIOH_SI    ((GPIO_SI_t*) (GPIOH_BASE + GPIO_SI_OFFSET))
#define GPIOH_SI_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOH DR12R*/
#define GPIOH_DR12R    ((GPIO_DR12R_t*) (GPIOH_BASE + GPIO_DR12R_OFFSET))
#define GPIOH_DR12R_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOH WAKEPEN*/
#define GPIOH_WAKEPEN    ((GPIO_WAKEPEN_t*) (GPIOH_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOH_WAKEPEN_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOH WAKELVL*/
#define GPIOH_WAKELVL    ((GPIO_WAKELVL_t*) (GPIOH_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOH_WAKELVL_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOH WAKESTAT*/
#define GPIOH_WAKESTAT    ((GPIO_WAKESTAT_t*) (GPIOH_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOH_WAKESTAT_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOH PP*/
#define GPIOH_PP    ((GPIO_PP_t*) (GPIOH_BASE + GPIO_PP_OFFSET))
#define GPIOH_PP_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOH PC*/
#define GPIOH_PC    ((GPIO_PC_t*) (GPIOH_BASE + GPIO_PC_OFFSET))
#define GPIOH_PC_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOH PID4*/
#define GPIOH_PeriphID4    ((GPIO_PeriphID4_t*) (GPIOH_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOH_PeriphID4_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOH PID5*/
#define GPIOH_PeriphID5    ((GPIO_PeriphID5_t*) (GPIOH_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOH_PeriphID5_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOH PID6*/
#define GPIOH_PeriphID6    ((GPIO_PeriphID6_t*) (GPIOH_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOH_PeriphID6_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOH PID7*/
#define GPIOH_PeriphID7    ((GPIO_PeriphID7_t*) (GPIOH_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOH_PeriphID7_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOH PID0*/
#define GPIOH_PeriphID0    ((GPIO_PeriphID0_t*) (GPIOH_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOH_PeriphID0_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOH PID1*/
#define GPIOH_PeriphID1    ((GPIO_PeriphID1_t*) (GPIOH_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOH_PeriphID1_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOH PID2*/
#define GPIOH_PeriphID2    ((GPIO_PeriphID2_t*) (GPIOH_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOH_PeriphID2_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOH PID3*/
#define GPIOH_PeriphID3    ((GPIO_PeriphID3_t*) (GPIOH_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOH_PeriphID3_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOH CID0*/
#define GPIOH_PCellID0    ((GPIO_PCellID0_t*) (GPIOH_BASE + GPIO_PCellID0_OFFSET))
#define GPIOH_PCellID0_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOH CID1*/
#define GPIOH_PCellID1    ((GPIO_PCellID1_t*) (GPIOH_BASE + GPIO_PCellID1_OFFSET))
#define GPIOH_PCellID1_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOH CID2*/
#define GPIOH_PCellID2    ((GPIO_PCellID2_t*) (GPIOH_BASE + GPIO_PCellID2_OFFSET))
#define GPIOH_PCellID2_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOH CID3*/
#define GPIOH_PCellID3    ((GPIO_PCellID3_t*) (GPIOH_BASE + GPIO_PCellID3_OFFSET))
#define GPIOH_PCellID3_R    (*((volatile uint32_t *) (GPIOH_BASE + GPIO_PCellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEH_H_ */

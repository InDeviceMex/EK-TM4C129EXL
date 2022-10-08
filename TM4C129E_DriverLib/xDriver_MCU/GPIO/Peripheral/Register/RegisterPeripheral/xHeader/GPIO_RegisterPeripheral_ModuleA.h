/**
 *
 * @file GPIO_RegisterPeripheral_ModuleA.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEA_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEA_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOA    ((GPIO_t*) (GPIOA_BASE))
#define GPIOA_AUX    ((GPIO_AUX_t*) (GPIOA_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOA DATA*/
#define GPIOA_DATA_MASK    ((GPIO_DATA_MASK_t*) (GPIOA_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOA_DATA_PINMASK0_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DATA_PINMASK0_OFFSET )))
#define GPIOA_DATA_PINMASK1_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DATA_PINMASK1_OFFSET )))
#define GPIOA_DATA_PINMASK2_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DATA_PINMASK2_OFFSET )))
#define GPIOA_DATA_PINMASK3_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DATA_PINMASK3_OFFSET )))
#define GPIOA_DATA_PINMASK4_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DATA_PINMASK4_OFFSET )))
#define GPIOA_DATA_PINMASK5_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DATA_PINMASK5_OFFSET )))
#define GPIOA_DATA_PINMASK6_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DATA_PINMASK6_OFFSET )))
#define GPIOA_DATA_PINMASK7_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DATA_PINMASK7_OFFSET )))

#define GPIOA_DATA    ((GPIO_DATA_t*) (GPIOA_BASE + GPIO_DATA_OFFSET))
#define GPIOA_DATA_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOA DIR*/
#define GPIOA_DIR    ((GPIO_DIR_t*) (GPIOA_BASE + GPIO_DIR_OFFSET))
#define GPIOA_DIR_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOA IS*/
#define GPIOA_IS    ((GPIO_IS_t*) (GPIOA_BASE + GPIO_IS_OFFSET))
#define GPIOA_IS_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOA IBE*/
#define GPIOA_IBE    ((GPIO_IBE_t*) (GPIOA_BASE + GPIO_IBE_OFFSET))
#define GPIOA_IBE_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOA IEV*/
#define GPIOA_IEV    ((GPIO_IEV_t*) (GPIOA_BASE + GPIO_IEV_OFFSET))
#define GPIOA_IEV_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOA IME*/
#define GPIOA_IM    ((GPIO_IM_t*) (GPIOA_BASE + GPIO_IM_OFFSET))
#define GPIOA_IM_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOA RIS*/
#define GPIOA_RIS    ((GPIO_RIS_t*) (GPIOA_BASE + GPIO_RIS_OFFSET))
#define GPIOA_RIS_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOA MIS*/
#define GPIOA_MIS    ((GPIO_MIS_t*) (GPIOA_BASE + GPIO_MIS_OFFSET))
#define GPIOA_MIS_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOA IC*/
#define GPIOA_ICR    ((GPIO_ICR_t*) (GPIOA_BASE + GPIO_ICR_OFFSET))
#define GPIOA_ICR_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOA AFSEL*/
#define GPIOA_AFSEL    ((GPIO_AFSEL_t*) (GPIOA_BASE + GPIO_AFSEL_OFFSET))
#define GPIOA_AFSEL_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOA DRV2*/
#define GPIOA_DRR    ((GPIO_DRR_ARRAY_t*) (GPIOA_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOA DRV2*/
#define GPIOA_DR2R    ((GPIO_DR2R_t*) (GPIOA_BASE + GPIO_DR2R_OFFSET))
#define GPIOA_DR2R_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOA DRV4*/
#define GPIOA_DR4R    ((GPIO_DR4R_t*) (GPIOA_BASE + GPIO_DR4R_OFFSET))
#define GPIOA_DR4R_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOA DRV8*/
#define GPIOA_DR8R    ((GPIO_DR8R_t*) (GPIOA_BASE + GPIO_DR8R_OFFSET))
#define GPIOA_DR8R_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOA ODE*/
#define GPIOA_ODR    ((GPIO_ODR_t*) (GPIOA_BASE + GPIO_ODR_OFFSET))
#define GPIOA_ODR_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOA PUE*/
#define GPIOA_PUR    ((GPIO_PUR_t*) (GPIOA_BASE + GPIO_PUR_OFFSET))
#define GPIOA_PUR_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOA PDE*/
#define GPIOA_PDR    ((GPIO_PDR_t*) (GPIOA_BASE + GPIO_PDR_OFFSET))
#define GPIOA_PDR_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOA SLR*/
#define GPIOA_SLR    ((GPIO_SLR_t*) (GPIOA_BASE + GPIO_SLR_OFFSET))
#define GPIOA_SLR_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOA DEN*/
#define GPIOA_DEN    ((GPIO_DEN_t*) (GPIOA_BASE + GPIO_DEN_OFFSET))
#define GPIOA_DEN_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOA LOCK*/
#define GPIOA_LOCK    ((GPIO_LOCK_t*) (GPIOA_BASE + GPIO_LOCK_OFFSET))
#define GPIOA_LOCK_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOA CR*/
#define GPIOA_CR    ((GPIO_CR_t*) (GPIOA_BASE + GPIO_CR_OFFSET))
#define GPIOA_CR_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOA AMSEL*/
#define GPIOA_AMSEL    ((GPIO_AMSEL_t*) (GPIOA_BASE + GPIO_AMSEL_OFFSET))
#define GPIOA_AMSEL_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOA PCTL*/
#define GPIOA_PCTL    ((GPIO_PCTL_t*) (GPIOA_BASE + GPIO_PCTL_OFFSET))
#define GPIOA_PCTL_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOA ADCCTL*/
#define GPIOA_ADCCTL    ((GPIO_ADCCTL_t*) (GPIOA_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOA_ADCCTL_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOA DMACTL*/
#define GPIOA_DMACTL    ((GPIO_DMACTL_t*) (GPIOA_BASE + GPIO_DMACTL_OFFSET))
#define GPIOA_DMACTL_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOA SI*/
#define GPIOA_SI    ((GPIO_SI_t*) (GPIOA_BASE + GPIO_SI_OFFSET))
#define GPIOA_SI_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOA DR12R*/
#define GPIOA_DR12R    ((GPIO_DR12R_t*) (GPIOA_BASE + GPIO_DR12R_OFFSET))
#define GPIOA_DR12R_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOA WAKEPEN*/
#define GPIOA_WAKEPEN    ((GPIO_WAKEPEN_t*) (GPIOA_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOA_WAKEPEN_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOA WAKELVL*/
#define GPIOA_WAKELVL    ((GPIO_WAKELVL_t*) (GPIOA_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOA_WAKELVL_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOA WAKESTAT*/
#define GPIOA_WAKESTAT    ((GPIO_WAKESTAT_t*) (GPIOA_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOA_WAKESTAT_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOA PP*/
#define GPIOA_PP    ((GPIO_PP_t*) (GPIOA_BASE + GPIO_PP_OFFSET))
#define GPIOA_PP_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOA PC*/
#define GPIOA_PC    ((GPIO_PC_t*) (GPIOA_BASE + GPIO_PC_OFFSET))
#define GPIOA_PC_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOA PID4*/
#define GPIOA_PeriphID4    ((GPIO_PeriphID4_t*) (GPIOA_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOA_PeriphID4_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOA PID5*/
#define GPIOA_PeriphID5    ((GPIO_PeriphID5_t*) (GPIOA_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOA_PeriphID5_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOA PID6*/
#define GPIOA_PeriphID6    ((GPIO_PeriphID6_t*) (GPIOA_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOA_PeriphID6_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOA PID7*/
#define GPIOA_PeriphID7    ((GPIO_PeriphID7_t*) (GPIOA_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOA_PeriphID7_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOA PID0*/
#define GPIOA_PeriphID0    ((GPIO_PeriphID0_t*) (GPIOA_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOA_PeriphID0_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOA PID1*/
#define GPIOA_PeriphID1    ((GPIO_PeriphID1_t*) (GPIOA_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOA_PeriphID1_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOA PID2*/
#define GPIOA_PeriphID2    ((GPIO_PeriphID2_t*) (GPIOA_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOA_PeriphID2_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOA PID3*/
#define GPIOA_PeriphID3    ((GPIO_PeriphID3_t*) (GPIOA_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOA_PeriphID3_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOA CID0*/
#define GPIOA_PCellID0    ((GPIO_PCellID0_t*) (GPIOA_BASE + GPIO_PCellID0_OFFSET))
#define GPIOA_PCellID0_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOA CID1*/
#define GPIOA_PCellID1    ((GPIO_PCellID1_t*) (GPIOA_BASE + GPIO_PCellID1_OFFSET))
#define GPIOA_PCellID1_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOA CID2*/
#define GPIOA_PCellID2    ((GPIO_PCellID2_t*) (GPIOA_BASE + GPIO_PCellID2_OFFSET))
#define GPIOA_PCellID2_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOA CID3*/
#define GPIOA_PCellID3    ((GPIO_PCellID3_t*) (GPIOA_BASE + GPIO_PCellID3_OFFSET))
#define GPIOA_PCellID3_R    (*((volatile UBase_t *) (GPIOA_BASE + GPIO_PCellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEA_H_ */

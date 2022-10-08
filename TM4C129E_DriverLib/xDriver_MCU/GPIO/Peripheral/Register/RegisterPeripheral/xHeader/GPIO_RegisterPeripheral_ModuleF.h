/**
 *
 * @file GPIO_RegisterPeripheral_ModuleF.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEF_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEF_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOF    ((GPIO_t*) (GPIOF_BASE))
#define GPIOF_AUX    ((GPIO_AUX_t*) (GPIOF_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOF DATA*/
#define GPIOF_DATA_MASK    ((GPIO_DATA_MASK_t*) (GPIOF_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOF_DATA_PINMASK0_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DATA_PINMASK0_OFFSET )))
#define GPIOF_DATA_PINMASK1_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DATA_PINMASK1_OFFSET )))
#define GPIOF_DATA_PINMASK2_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DATA_PINMASK2_OFFSET )))
#define GPIOF_DATA_PINMASK3_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DATA_PINMASK3_OFFSET )))
#define GPIOF_DATA_PINMASK4_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DATA_PINMASK4_OFFSET )))
#define GPIOF_DATA_PINMASK5_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DATA_PINMASK5_OFFSET )))
#define GPIOF_DATA_PINMASK6_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DATA_PINMASK6_OFFSET )))
#define GPIOF_DATA_PINMASK7_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DATA_PINMASK7_OFFSET )))

#define GPIOF_DATA    ((GPIO_DATA_t*) (GPIOF_BASE + GPIO_DATA_OFFSET))
#define GPIOF_DATA_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOF DIR*/
#define GPIOF_DIR    ((GPIO_DIR_t*) (GPIOF_BASE + GPIO_DIR_OFFSET))
#define GPIOF_DIR_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOF IS*/
#define GPIOF_IS    ((GPIO_IS_t*) (GPIOF_BASE + GPIO_IS_OFFSET))
#define GPIOF_IS_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOF IBE*/
#define GPIOF_IBE    ((GPIO_IBE_t*) (GPIOF_BASE + GPIO_IBE_OFFSET))
#define GPIOF_IBE_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOF IEV*/
#define GPIOF_IEV    ((GPIO_IEV_t*) (GPIOF_BASE + GPIO_IEV_OFFSET))
#define GPIOF_IEV_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOF IME*/
#define GPIOF_IM    ((GPIO_IM_t*) (GPIOF_BASE + GPIO_IM_OFFSET))
#define GPIOF_IM_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOF RIS*/
#define GPIOF_RIS    ((GPIO_RIS_t*) (GPIOF_BASE + GPIO_RIS_OFFSET))
#define GPIOF_RIS_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOF MIS*/
#define GPIOF_MIS    ((GPIO_MIS_t*) (GPIOF_BASE + GPIO_MIS_OFFSET))
#define GPIOF_MIS_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOF IC*/
#define GPIOF_ICR    ((GPIO_ICR_t*) (GPIOF_BASE + GPIO_ICR_OFFSET))
#define GPIOF_ICR_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOF AFSEL*/
#define GPIOF_AFSEL    ((GPIO_AFSEL_t*) (GPIOF_BASE + GPIO_AFSEL_OFFSET))
#define GPIOF_AFSEL_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOF DRV2*/
#define GPIOF_DRR    ((GPIO_DRR_ARRAY_t*) (GPIOF_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOF DRV2*/
#define GPIOF_DR2R    ((GPIO_DR2R_t*) (GPIOF_BASE + GPIO_DR2R_OFFSET))
#define GPIOF_DR2R_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOF DRV4*/
#define GPIOF_DR4R    ((GPIO_DR4R_t*) (GPIOF_BASE + GPIO_DR4R_OFFSET))
#define GPIOF_DR4R_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOF DRV8*/
#define GPIOF_DR8R    ((GPIO_DR8R_t*) (GPIOF_BASE + GPIO_DR8R_OFFSET))
#define GPIOF_DR8R_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOF ODE*/
#define GPIOF_ODR    ((GPIO_ODR_t*) (GPIOF_BASE + GPIO_ODR_OFFSET))
#define GPIOF_ODR_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOF PUE*/
#define GPIOF_PUR    ((GPIO_PUR_t*) (GPIOF_BASE + GPIO_PUR_OFFSET))
#define GPIOF_PUR_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOF PDE*/
#define GPIOF_PDR    ((GPIO_PDR_t*) (GPIOF_BASE + GPIO_PDR_OFFSET))
#define GPIOF_PDR_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOF SLR*/
#define GPIOF_SLR    ((GPIO_SLR_t*) (GPIOF_BASE + GPIO_SLR_OFFSET))
#define GPIOF_SLR_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOF DEN*/
#define GPIOF_DEN    ((GPIO_DEN_t*) (GPIOF_BASE + GPIO_DEN_OFFSET))
#define GPIOF_DEN_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOF LOCK*/
#define GPIOF_LOCK    ((GPIO_LOCK_t*) (GPIOF_BASE + GPIO_LOCK_OFFSET))
#define GPIOF_LOCK_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOF CR*/
#define GPIOF_CR    ((GPIO_CR_t*) (GPIOF_BASE + GPIO_CR_OFFSET))
#define GPIOF_CR_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOF AMSEL*/
#define GPIOF_AMSEL    ((GPIO_AMSEL_t*) (GPIOF_BASE + GPIO_AMSEL_OFFSET))
#define GPIOF_AMSEL_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOF PCTL*/
#define GPIOF_PCTL    ((GPIO_PCTL_t*) (GPIOF_BASE + GPIO_PCTL_OFFSET))
#define GPIOF_PCTL_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOF ADCCTL*/
#define GPIOF_ADCCTL    ((GPIO_ADCCTL_t*) (GPIOF_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOF_ADCCTL_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOF DMACTL*/
#define GPIOF_DMACTL    ((GPIO_DMACTL_t*) (GPIOF_BASE + GPIO_DMACTL_OFFSET))
#define GPIOF_DMACTL_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOF SI*/
#define GPIOF_SI    ((GPIO_SI_t*) (GPIOF_BASE + GPIO_SI_OFFSET))
#define GPIOF_SI_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOF DR12R*/
#define GPIOF_DR12R    ((GPIO_DR12R_t*) (GPIOF_BASE + GPIO_DR12R_OFFSET))
#define GPIOF_DR12R_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOF WAKEPEN*/
#define GPIOF_WAKEPEN    ((GPIO_WAKEPEN_t*) (GPIOF_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOF_WAKEPEN_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOF WAKELVL*/
#define GPIOF_WAKELVL    ((GPIO_WAKELVL_t*) (GPIOF_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOF_WAKELVL_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOF WAKESTAT*/
#define GPIOF_WAKESTAT    ((GPIO_WAKESTAT_t*) (GPIOF_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOF_WAKESTAT_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOF PP*/
#define GPIOF_PP    ((GPIO_PP_t*) (GPIOF_BASE + GPIO_PP_OFFSET))
#define GPIOF_PP_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOF PC*/
#define GPIOF_PC    ((GPIO_PC_t*) (GPIOF_BASE + GPIO_PC_OFFSET))
#define GPIOF_PC_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOF PID4*/
#define GPIOF_PeriphID4    ((GPIO_PeriphID4_t*) (GPIOF_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOF_PeriphID4_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOF PID5*/
#define GPIOF_PeriphID5    ((GPIO_PeriphID5_t*) (GPIOF_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOF_PeriphID5_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOF PID6*/
#define GPIOF_PeriphID6    ((GPIO_PeriphID6_t*) (GPIOF_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOF_PeriphID6_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOF PID7*/
#define GPIOF_PeriphID7    ((GPIO_PeriphID7_t*) (GPIOF_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOF_PeriphID7_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOF PID0*/
#define GPIOF_PeriphID0    ((GPIO_PeriphID0_t*) (GPIOF_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOF_PeriphID0_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOF PID1*/
#define GPIOF_PeriphID1    ((GPIO_PeriphID1_t*) (GPIOF_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOF_PeriphID1_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOF PID2*/
#define GPIOF_PeriphID2    ((GPIO_PeriphID2_t*) (GPIOF_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOF_PeriphID2_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOF PID3*/
#define GPIOF_PeriphID3    ((GPIO_PeriphID3_t*) (GPIOF_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOF_PeriphID3_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOF CID0*/
#define GPIOF_PCellID0    ((GPIO_PCellID0_t*) (GPIOF_BASE + GPIO_PCellID0_OFFSET))
#define GPIOF_PCellID0_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOF CID1*/
#define GPIOF_PCellID1    ((GPIO_PCellID1_t*) (GPIOF_BASE + GPIO_PCellID1_OFFSET))
#define GPIOF_PCellID1_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOF CID2*/
#define GPIOF_PCellID2    ((GPIO_PCellID2_t*) (GPIOF_BASE + GPIO_PCellID2_OFFSET))
#define GPIOF_PCellID2_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOF CID3*/
#define GPIOF_PCellID3    ((GPIO_PCellID3_t*) (GPIOF_BASE + GPIO_PCellID3_OFFSET))
#define GPIOF_PCellID3_R    (*((volatile UBase_t *) (GPIOF_BASE + GPIO_PCellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEF_H_ */

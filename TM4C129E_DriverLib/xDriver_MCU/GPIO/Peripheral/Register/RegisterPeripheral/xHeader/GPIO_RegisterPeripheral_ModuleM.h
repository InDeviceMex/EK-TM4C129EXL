/**
 *
 * @file GPIO_RegisterPeripheral_ModuleM.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEM_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEM_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOM    ((GPIO_t*) (GPIOM_BASE))
#define GPIOM_AUX    ((GPIO_AUX_t*) (GPIOM_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOM DATA*/
#define GPIOM_DATA_MASK    ((GPIO_DATA_MASK_t*) (GPIOM_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOM_DATA_PINMASK0_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DATA_PINMASK0_OFFSET )))
#define GPIOM_DATA_PINMASK1_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DATA_PINMASK1_OFFSET )))
#define GPIOM_DATA_PINMASK2_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DATA_PINMASK2_OFFSET )))
#define GPIOM_DATA_PINMASK3_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DATA_PINMASK3_OFFSET )))
#define GPIOM_DATA_PINMASK4_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DATA_PINMASK4_OFFSET )))
#define GPIOM_DATA_PINMASK5_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DATA_PINMASK5_OFFSET )))
#define GPIOM_DATA_PINMASK6_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DATA_PINMASK6_OFFSET )))
#define GPIOM_DATA_PINMASK7_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DATA_PINMASK7_OFFSET )))

#define GPIOM_DATA    ((GPIO_DATA_t*) (GPIOM_BASE + GPIO_DATA_OFFSET))
#define GPIOM_DATA_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOM DIR*/
#define GPIOM_DIR    ((GPIO_DIR_t*) (GPIOM_BASE + GPIO_DIR_OFFSET))
#define GPIOM_DIR_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOM IS*/
#define GPIOM_IS    ((GPIO_IS_t*) (GPIOM_BASE + GPIO_IS_OFFSET))
#define GPIOM_IS_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOM IBE*/
#define GPIOM_IBE    ((GPIO_IBE_t*) (GPIOM_BASE + GPIO_IBE_OFFSET))
#define GPIOM_IBE_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOM IEV*/
#define GPIOM_IEV    ((GPIO_IEV_t*) (GPIOM_BASE + GPIO_IEV_OFFSET))
#define GPIOM_IEV_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOM IME*/
#define GPIOM_IM    ((GPIO_IM_t*) (GPIOM_BASE + GPIO_IM_OFFSET))
#define GPIOM_IM_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOM RIS*/
#define GPIOM_RIS    ((GPIO_RIS_t*) (GPIOM_BASE + GPIO_RIS_OFFSET))
#define GPIOM_RIS_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOM MIS*/
#define GPIOM_MIS    ((GPIO_MIS_t*) (GPIOM_BASE + GPIO_MIS_OFFSET))
#define GPIOM_MIS_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOM IC*/
#define GPIOM_ICR    ((GPIO_ICR_t*) (GPIOM_BASE + GPIO_ICR_OFFSET))
#define GPIOM_ICR_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOM AFSEL*/
#define GPIOM_AFSEL    ((GPIO_AFSEL_t*) (GPIOM_BASE + GPIO_AFSEL_OFFSET))
#define GPIOM_AFSEL_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOM DRV2*/
#define GPIOM_DRR    ((GPIO_DRR_ARRAY_t*) (GPIOM_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOM DRV2*/
#define GPIOM_DR2R    ((GPIO_DR2R_t*) (GPIOM_BASE + GPIO_DR2R_OFFSET))
#define GPIOM_DR2R_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOM DRV4*/
#define GPIOM_DR4R    ((GPIO_DR4R_t*) (GPIOM_BASE + GPIO_DR4R_OFFSET))
#define GPIOM_DR4R_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOM DRV8*/
#define GPIOM_DR8R    ((GPIO_DR8R_t*) (GPIOM_BASE + GPIO_DR8R_OFFSET))
#define GPIOM_DR8R_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOM ODE*/
#define GPIOM_ODR    ((GPIO_ODR_t*) (GPIOM_BASE + GPIO_ODR_OFFSET))
#define GPIOM_ODR_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOM PUE*/
#define GPIOM_PUR    ((GPIO_PUR_t*) (GPIOM_BASE + GPIO_PUR_OFFSET))
#define GPIOM_PUR_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOM PDE*/
#define GPIOM_PDR    ((GPIO_PDR_t*) (GPIOM_BASE + GPIO_PDR_OFFSET))
#define GPIOM_PDR_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOM SLR*/
#define GPIOM_SLR    ((GPIO_SLR_t*) (GPIOM_BASE + GPIO_SLR_OFFSET))
#define GPIOM_SLR_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOM DEN*/
#define GPIOM_DEN    ((GPIO_DEN_t*) (GPIOM_BASE + GPIO_DEN_OFFSET))
#define GPIOM_DEN_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOM LOCK*/
#define GPIOM_LOCK    ((GPIO_LOCK_t*) (GPIOM_BASE + GPIO_LOCK_OFFSET))
#define GPIOM_LOCK_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOM CR*/
#define GPIOM_CR    ((GPIO_CR_t*) (GPIOM_BASE + GPIO_CR_OFFSET))
#define GPIOM_CR_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOM AMSEL*/
#define GPIOM_AMSEL    ((GPIO_AMSEL_t*) (GPIOM_BASE + GPIO_AMSEL_OFFSET))
#define GPIOM_AMSEL_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOM PCTL*/
#define GPIOM_PCTL    ((GPIO_PCTL_t*) (GPIOM_BASE + GPIO_PCTL_OFFSET))
#define GPIOM_PCTL_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOM ADCCTL*/
#define GPIOM_ADCCTL    ((GPIO_ADCCTL_t*) (GPIOM_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOM_ADCCTL_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOM DMACTL*/
#define GPIOM_DMACTL    ((GPIO_DMACTL_t*) (GPIOM_BASE + GPIO_DMACTL_OFFSET))
#define GPIOM_DMACTL_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOM SI*/
#define GPIOM_SI    ((GPIO_SI_t*) (GPIOM_BASE + GPIO_SI_OFFSET))
#define GPIOM_SI_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOM DR12R*/
#define GPIOM_DR12R    ((GPIO_DR12R_t*) (GPIOM_BASE + GPIO_DR12R_OFFSET))
#define GPIOM_DR12R_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOM WAKEPEN*/
#define GPIOM_WAKEPEN    ((GPIO_WAKEPEN_t*) (GPIOM_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOM_WAKEPEN_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOM WAKELVL*/
#define GPIOM_WAKELVL    ((GPIO_WAKELVL_t*) (GPIOM_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOM_WAKELVL_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOM WAKESTAT*/
#define GPIOM_WAKESTAT    ((GPIO_WAKESTAT_t*) (GPIOM_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOM_WAKESTAT_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOM PP*/
#define GPIOM_PP    ((GPIO_PP_t*) (GPIOM_BASE + GPIO_PP_OFFSET))
#define GPIOM_PP_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOM PC*/
#define GPIOM_PC    ((GPIO_PC_t*) (GPIOM_BASE + GPIO_PC_OFFSET))
#define GPIOM_PC_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOM PID4*/
#define GPIOM_PeriphID4    ((GPIO_PeriphID4_t*) (GPIOM_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOM_PeriphID4_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOM PID5*/
#define GPIOM_PeriphID5    ((GPIO_PeriphID5_t*) (GPIOM_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOM_PeriphID5_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOM PID6*/
#define GPIOM_PeriphID6    ((GPIO_PeriphID6_t*) (GPIOM_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOM_PeriphID6_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOM PID7*/
#define GPIOM_PeriphID7    ((GPIO_PeriphID7_t*) (GPIOM_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOM_PeriphID7_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOM PID0*/
#define GPIOM_PeriphID0    ((GPIO_PeriphID0_t*) (GPIOM_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOM_PeriphID0_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOM PID1*/
#define GPIOM_PeriphID1    ((GPIO_PeriphID1_t*) (GPIOM_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOM_PeriphID1_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOM PID2*/
#define GPIOM_PeriphID2    ((GPIO_PeriphID2_t*) (GPIOM_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOM_PeriphID2_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOM PID3*/
#define GPIOM_PeriphID3    ((GPIO_PeriphID3_t*) (GPIOM_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOM_PeriphID3_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOM CID0*/
#define GPIOM_PCellID0    ((GPIO_PCellID0_t*) (GPIOM_BASE + GPIO_PCellID0_OFFSET))
#define GPIOM_PCellID0_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOM CID1*/
#define GPIOM_PCellID1    ((GPIO_PCellID1_t*) (GPIOM_BASE + GPIO_PCellID1_OFFSET))
#define GPIOM_PCellID1_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOM CID2*/
#define GPIOM_PCellID2    ((GPIO_PCellID2_t*) (GPIOM_BASE + GPIO_PCellID2_OFFSET))
#define GPIOM_PCellID2_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOM CID3*/
#define GPIOM_PCellID3    ((GPIO_PCellID3_t*) (GPIOM_BASE + GPIO_PCellID3_OFFSET))
#define GPIOM_PCellID3_R    (*((volatile UBase_t *) (GPIOM_BASE + GPIO_PCellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEM_H_ */

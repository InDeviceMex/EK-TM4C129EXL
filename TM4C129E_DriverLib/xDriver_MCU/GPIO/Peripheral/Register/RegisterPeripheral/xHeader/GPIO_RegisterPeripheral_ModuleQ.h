/**
 *
 * @file GPIO_RegisterPeripheral_ModuleQ.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEQ_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEQ_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOQ    ((GPIO_t*) (GPIOQ_BASE))
#define GPIOQ_AUX    ((GPIO_AUX_t*) (GPIOQ_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOQ DATA*/
#define GPIOQ_DATA_MASK    ((GPIO_DATA_MASK_t*) (GPIOQ_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOQ_DATA_PINMASK0_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DATA_PINMASK0_OFFSET )))
#define GPIOQ_DATA_PINMASK1_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DATA_PINMASK1_OFFSET )))
#define GPIOQ_DATA_PINMASK2_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DATA_PINMASK2_OFFSET )))
#define GPIOQ_DATA_PINMASK3_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DATA_PINMASK3_OFFSET )))
#define GPIOQ_DATA_PINMASK4_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DATA_PINMASK4_OFFSET )))
#define GPIOQ_DATA_PINMASK5_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DATA_PINMASK5_OFFSET )))
#define GPIOQ_DATA_PINMASK6_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DATA_PINMASK6_OFFSET )))
#define GPIOQ_DATA_PINMASK7_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DATA_PINMASK7_OFFSET )))

#define GPIOQ_DATA    ((GPIO_DATA_t*) (GPIOQ_BASE + GPIO_DATA_OFFSET))
#define GPIOQ_DATA_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOQ DIR*/
#define GPIOQ_DIR    ((GPIO_DIR_t*) (GPIOQ_BASE + GPIO_DIR_OFFSET))
#define GPIOQ_DIR_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOQ IS*/
#define GPIOQ_IS    ((GPIO_IS_t*) (GPIOQ_BASE + GPIO_IS_OFFSET))
#define GPIOQ_IS_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOQ IBE*/
#define GPIOQ_IBE    ((GPIO_IBE_t*) (GPIOQ_BASE + GPIO_IBE_OFFSET))
#define GPIOQ_IBE_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOQ IEV*/
#define GPIOQ_IEV    ((GPIO_IEV_t*) (GPIOQ_BASE + GPIO_IEV_OFFSET))
#define GPIOQ_IEV_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOQ IME*/
#define GPIOQ_IM    ((GPIO_IM_t*) (GPIOQ_BASE + GPIO_IM_OFFSET))
#define GPIOQ_IM_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOQ RIS*/
#define GPIOQ_RIS    ((GPIO_RIS_t*) (GPIOQ_BASE + GPIO_RIS_OFFSET))
#define GPIOQ_RIS_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOQ MIS*/
#define GPIOQ_MIS    ((GPIO_MIS_t*) (GPIOQ_BASE + GPIO_MIS_OFFSET))
#define GPIOQ_MIS_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOQ IC*/
#define GPIOQ_ICR    ((GPIO_ICR_t*) (GPIOQ_BASE + GPIO_ICR_OFFSET))
#define GPIOQ_ICR_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOQ AFSEL*/
#define GPIOQ_AFSEL    ((GPIO_AFSEL_t*) (GPIOQ_BASE + GPIO_AFSEL_OFFSET))
#define GPIOQ_AFSEL_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOQ DRV2*/
#define GPIOQ_DRR    ((GPIO_DRR_ARRAY_t*) (GPIOQ_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOQ DRV2*/
#define GPIOQ_DR2R    ((GPIO_DR2R_t*) (GPIOQ_BASE + GPIO_DR2R_OFFSET))
#define GPIOQ_DR2R_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOQ DRV4*/
#define GPIOQ_DR4R    ((GPIO_DR4R_t*) (GPIOQ_BASE + GPIO_DR4R_OFFSET))
#define GPIOQ_DR4R_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOQ DRV8*/
#define GPIOQ_DR8R    ((GPIO_DR8R_t*) (GPIOQ_BASE + GPIO_DR8R_OFFSET))
#define GPIOQ_DR8R_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOQ ODE*/
#define GPIOQ_ODR    ((GPIO_ODR_t*) (GPIOQ_BASE + GPIO_ODR_OFFSET))
#define GPIOQ_ODR_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOQ PUE*/
#define GPIOQ_PUR    ((GPIO_PUR_t*) (GPIOQ_BASE + GPIO_PUR_OFFSET))
#define GPIOQ_PUR_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOQ PDE*/
#define GPIOQ_PDR    ((GPIO_PDR_t*) (GPIOQ_BASE + GPIO_PDR_OFFSET))
#define GPIOQ_PDR_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOQ SLR*/
#define GPIOQ_SLR    ((GPIO_SLR_t*) (GPIOQ_BASE + GPIO_SLR_OFFSET))
#define GPIOQ_SLR_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOQ DEN*/
#define GPIOQ_DEN    ((GPIO_DEN_t*) (GPIOQ_BASE + GPIO_DEN_OFFSET))
#define GPIOQ_DEN_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOQ LOCK*/
#define GPIOQ_LOCK    ((GPIO_LOCK_t*) (GPIOQ_BASE + GPIO_LOCK_OFFSET))
#define GPIOQ_LOCK_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOQ CR*/
#define GPIOQ_CR    ((GPIO_CR_t*) (GPIOQ_BASE + GPIO_CR_OFFSET))
#define GPIOQ_CR_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOQ AMSEL*/
#define GPIOQ_AMSEL    ((GPIO_AMSEL_t*) (GPIOQ_BASE + GPIO_AMSEL_OFFSET))
#define GPIOQ_AMSEL_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOQ PCTL*/
#define GPIOQ_PCTL    ((GPIO_PCTL_t*) (GPIOQ_BASE + GPIO_PCTL_OFFSET))
#define GPIOQ_PCTL_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOQ ADCCTL*/
#define GPIOQ_ADCCTL    ((GPIO_ADCCTL_t*) (GPIOQ_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOQ_ADCCTL_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOQ DMACTL*/
#define GPIOQ_DMACTL    ((GPIO_DMACTL_t*) (GPIOQ_BASE + GPIO_DMACTL_OFFSET))
#define GPIOQ_DMACTL_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOQ SI*/
#define GPIOQ_SI    ((GPIO_SI_t*) (GPIOQ_BASE + GPIO_SI_OFFSET))
#define GPIOQ_SI_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOQ DR12R*/
#define GPIOQ_DR12R    ((GPIO_DR12R_t*) (GPIOQ_BASE + GPIO_DR12R_OFFSET))
#define GPIOQ_DR12R_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOQ WAKEPEN*/
#define GPIOQ_WAKEPEN    ((GPIO_WAKEPEN_t*) (GPIOQ_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOQ_WAKEPEN_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOQ WAKELVL*/
#define GPIOQ_WAKELVL    ((GPIO_WAKELVL_t*) (GPIOQ_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOQ_WAKELVL_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOQ WAKESTAT*/
#define GPIOQ_WAKESTAT    ((GPIO_WAKESTAT_t*) (GPIOQ_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOQ_WAKESTAT_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOQ PP*/
#define GPIOQ_PP    ((GPIO_PP_t*) (GPIOQ_BASE + GPIO_PP_OFFSET))
#define GPIOQ_PP_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOQ PC*/
#define GPIOQ_PC    ((GPIO_PC_t*) (GPIOQ_BASE + GPIO_PC_OFFSET))
#define GPIOQ_PC_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOQ PID4*/
#define GPIOQ_PeriphID4    ((GPIO_PeriphID4_t*) (GPIOQ_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOQ_PeriphID4_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOQ PID5*/
#define GPIOQ_PeriphID5    ((GPIO_PeriphID5_t*) (GPIOQ_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOQ_PeriphID5_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOQ PID6*/
#define GPIOQ_PeriphID6    ((GPIO_PeriphID6_t*) (GPIOQ_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOQ_PeriphID6_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOQ PID7*/
#define GPIOQ_PeriphID7    ((GPIO_PeriphID7_t*) (GPIOQ_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOQ_PeriphID7_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOQ PID0*/
#define GPIOQ_PeriphID0    ((GPIO_PeriphID0_t*) (GPIOQ_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOQ_PeriphID0_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOQ PID1*/
#define GPIOQ_PeriphID1    ((GPIO_PeriphID1_t*) (GPIOQ_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOQ_PeriphID1_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOQ PID2*/
#define GPIOQ_PeriphID2    ((GPIO_PeriphID2_t*) (GPIOQ_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOQ_PeriphID2_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOQ PID3*/
#define GPIOQ_PeriphID3    ((GPIO_PeriphID3_t*) (GPIOQ_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOQ_PeriphID3_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOQ CID0*/
#define GPIOQ_PCellID0    ((GPIO_PCellID0_t*) (GPIOQ_BASE + GPIO_PCellID0_OFFSET))
#define GPIOQ_PCellID0_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PCellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOQ CID1*/
#define GPIOQ_PCellID1    ((GPIO_PCellID1_t*) (GPIOQ_BASE + GPIO_PCellID1_OFFSET))
#define GPIOQ_PCellID1_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PCellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOQ CID2*/
#define GPIOQ_PCellID2    ((GPIO_PCellID2_t*) (GPIOQ_BASE + GPIO_PCellID2_OFFSET))
#define GPIOQ_PCellID2_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PCellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOQ CID3*/
#define GPIOQ_PCellID3    ((GPIO_PCellID3_t*) (GPIOQ_BASE + GPIO_PCellID3_OFFSET))
#define GPIOQ_PCellID3_R    (*((volatile UBase_t *) (GPIOQ_BASE + GPIO_PCellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEQ_H_ */

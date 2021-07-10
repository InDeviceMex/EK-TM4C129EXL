/**
 *
 * @file GPIO_RegisterPeripheral_ModuleG.h
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

#ifndef XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEG_H_
#define XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEG_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOG    ((GPIO_TypeDef*) (GPIOG_BASE))
#define GPIOG_AUX    ((GPIO_AUX_TypeDef*) (GPIOG_BASE))

/******************************************************************************************
 ************************************ 1 DATA *********************************************
 ******************************************************************************************/
/* GPIOG DATA*/
#define GPIOG_DATA_MASK    ((GPIOGATA_MASK_TypeDef*) (GPIOG_BASE + GPIO_DATA_MASK_OFFSET))
#define GPIOG_DATA0_MASK_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DATA0_MASK_OFFSET )))
#define GPIOG_DATA1_MASK_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DATA1_MASK_OFFSET )))
#define GPIOG_DATA2_MASK_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DATA2_MASK_OFFSET )))
#define GPIOG_DATA3_MASK_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DATA3_MASK_OFFSET )))
#define GPIOG_DATA4_MASK_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DATA4_MASK_OFFSET )))
#define GPIOG_DATA5_MASK_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DATA5_MASK_OFFSET )))
#define GPIOG_DATA6_MASK_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DATA6_MASK_OFFSET )))
#define GPIOG_DATA7_MASK_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DATA7_MASK_OFFSET )))

#define GPIOG_DATA    ((GPIOGATA_TypeDef*) (GPIOG_BASE + GPIO_DATA_OFFSET))
#define GPIOG_DATA_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DATA_OFFSET)))

/******************************************************************************************
 ************************************ 2 DIR *********************************************
 ******************************************************************************************/
/* GPIOG DIR*/
#define GPIOG_DIR    ((GPIOGIR_TypeDef*) (GPIOG_BASE + GPIO_DIR_OFFSET))
#define GPIOG_DIR_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DIR_OFFSET)))

/******************************************************************************************
 ************************************ 3 IS *********************************************
 ******************************************************************************************/
/* GPIOG IS*/
#define GPIOG_IS    ((GPIOIS_TypeDef*) (GPIOG_BASE + GPIO_IS_OFFSET))
#define GPIOG_IS_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_IS_OFFSET)))

/******************************************************************************************
 ************************************ 4 IBE *********************************************
 ******************************************************************************************/
/* GPIOG IBE*/
#define GPIOG_IBE    ((GPIOIBE_TypeDef*) (GPIOG_BASE + GPIO_IBE_OFFSET))
#define GPIOG_IBE_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_IBE_OFFSET)))

/******************************************************************************************
 ************************************ 5 IEV *********************************************
 ******************************************************************************************/
/* GPIOG IEV*/
#define GPIOG_IEV    ((GPIOIEV_TypeDef*) (GPIOG_BASE + GPIO_IEV_OFFSET))
#define GPIOG_IEV_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_IEV_OFFSET)))

/******************************************************************************************
 ************************************ 6 IM *********************************************
 ******************************************************************************************/
/* GPIOG IME*/
#define GPIOG_IM    ((GPIOIM_TypeDef*) (GPIOG_BASE + GPIO_IM_OFFSET))
#define GPIOG_IM_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_IM_OFFSET)))

/******************************************************************************************
 ************************************ 7 RIS *********************************************
 ******************************************************************************************/
/* GPIOG RIS*/
#define GPIOG_RIS    ((GPIORIS_TypeDef*) (GPIOG_BASE + GPIO_RIS_OFFSET))
#define GPIOG_RIS_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_RIS_OFFSET)))

/******************************************************************************************
 ************************************ 8 MIS *********************************************
 ******************************************************************************************/
/* GPIOG MIS*/
#define GPIOG_MIS    ((GPIOMIS_TypeDef*) (GPIOG_BASE + GPIO_MIS_OFFSET))
#define GPIOG_MIS_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_MIS_OFFSET)))

/******************************************************************************************
 ************************************ 9 ICR *********************************************
 ******************************************************************************************/
/* GPIOG IC*/
#define GPIOG_ICR    ((GPIOICR_TypeDef*) (GPIOG_BASE + GPIO_ICR_OFFSET))
#define GPIOG_ICR_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_ICR_OFFSET)))

/******************************************************************************************
 ************************************ 10 AFSEL *********************************************
 ******************************************************************************************/
/* GPIOG AFSEL*/
#define GPIOG_AFSEL    ((GPIOGFSEL_TypeDef*) (GPIOG_BASE + GPIO_AFSEL_OFFSET))
#define GPIOG_AFSEL_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_AFSEL_OFFSET)))

/******************************************************************************************
 ************************************ 11 DRR ARRAY *********************************************
 ******************************************************************************************/
/* GPIOG DRV2*/
#define GPIOG_DRR    ((GPIOGRR_ARRAY_TypeDef*) (GPIOG_BASE + GPIO_DR2R_OFFSET))

/******************************************************************************************
 ************************************ 11 DR2R *********************************************
 ******************************************************************************************/
/* GPIOG DRV2*/
#define GPIOG_DR2R    ((GPIOGR2R_TypeDef*) (GPIOG_BASE + GPIO_DR2R_OFFSET))
#define GPIOG_DR2R_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DR2R_OFFSET)))

/******************************************************************************************
 ************************************ 12 DR4R *********************************************
 ******************************************************************************************/
/* GPIOG DRV4*/
#define GPIOG_DR4R    ((GPIOGR4R_TypeDef*) (GPIOG_BASE + GPIO_DR4R_OFFSET))
#define GPIOG_DR4R_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DR4R_OFFSET)))

/******************************************************************************************
 ************************************ 13 DR8R *********************************************
 ******************************************************************************************/
/* GPIOG DRV8*/
#define GPIOG_DR8R    ((GPIOGR8R_TypeDef*) (GPIOG_BASE + GPIO_DR8R_OFFSET))
#define GPIOG_DR8R_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DR8R_OFFSET)))

/******************************************************************************************
 ************************************ 14 ODR *********************************************
 ******************************************************************************************/
/* GPIOG ODE*/
#define GPIOG_ODR    ((GPIOODR_TypeDef*) (GPIOG_BASE + GPIO_ODR_OFFSET))
#define GPIOG_ODR_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_ODR_OFFSET)))

/******************************************************************************************
 ************************************ 15 PUR *********************************************
 ******************************************************************************************/
/* GPIOG PUE*/
#define GPIOG_PUR    ((GPIOPUR_TypeDef*) (GPIOG_BASE + GPIO_PUR_OFFSET))
#define GPIOG_PUR_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_PUR_OFFSET)))

/******************************************************************************************
 ************************************ 16 PDR *********************************************
 ******************************************************************************************/
/* GPIOG PDE*/
#define GPIOG_PDR    ((GPIOPDR_TypeDef*) (GPIOG_BASE + GPIO_PDR_OFFSET))
#define GPIOG_PDR_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_PDR_OFFSET)))

/******************************************************************************************
 ************************************ 17 SLR *********************************************
 ******************************************************************************************/
/* GPIOG SLR*/
#define GPIOG_SLR    ((GPIOSLR_TypeDef*) (GPIOG_BASE + GPIO_SLR_OFFSET))
#define GPIOG_SLR_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_SLR_OFFSET)))

/******************************************************************************************
 ************************************ 18 DEN *********************************************
 ******************************************************************************************/
/* GPIOG DEN*/
#define GPIOG_DEN    ((GPIOGEN_TypeDef*) (GPIOG_BASE + GPIO_DEN_OFFSET))
#define GPIOG_DEN_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DEN_OFFSET)))

/******************************************************************************************
 ************************************ 19 LOCK *********************************************
 ******************************************************************************************/
/* GPIOG LOCK*/
#define GPIOG_LOCK    ((GPIOLOCK_TypeDef*) (GPIOG_BASE + GPIO_LOCK_OFFSET))
#define GPIOG_LOCK_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_LOCK_OFFSET)))

/******************************************************************************************
 ************************************ 20 CR *********************************************
 ******************************************************************************************/
/* GPIOG CR*/
#define GPIOG_CR    ((GPIOGR_TypeDef*) (GPIOG_BASE + GPIO_CR_OFFSET))
#define GPIOG_CR_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_CR_OFFSET)))

/******************************************************************************************
 ************************************ 21 AMSEL *********************************************
 ******************************************************************************************/
/* GPIOG AMSEL*/
#define GPIOG_AMSEL    ((GPIOGMSEL_TypeDef*) (GPIOG_BASE + GPIO_AMSEL_OFFSET))
#define GPIOG_AMSEL_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_AMSEL_OFFSET)))

/******************************************************************************************
 ************************************ 22 PCTL *********************************************
 ******************************************************************************************/
/* GPIOG PCTL*/
#define GPIOG_PCTL    ((GPIOPCTL_TypeDef*) (GPIOG_BASE + GPIO_PCTL_OFFSET))
#define GPIOG_PCTL_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_PCTL_OFFSET)))

/******************************************************************************************
 ************************************ 23 ADCCTL *********************************************
 ******************************************************************************************/
/* GPIOG ADCCTL*/
#define GPIOG_ADCCTL    ((GPIOGDCCTL_TypeDef*) (GPIOG_BASE + GPIO_ADCCTL_OFFSET))
#define GPIOG_ADCCTL_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_ADCCTL_OFFSET)))

/******************************************************************************************
 ************************************ 24 DMACTL *********************************************
 ******************************************************************************************/
/* GPIOG DMACTL*/
#define GPIOG_DMACTL    ((GPIOGMACTL_TypeDef*) (GPIOG_BASE + GPIO_DMACTL_OFFSET))
#define GPIOG_DMACTL_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DMACTL_OFFSET)))

/******************************************************************************************
 ************************************ 25 SI *********************************************
 ******************************************************************************************/
/* GPIOG SI*/
#define GPIOG_SI    ((GPIOSI_TypeDef*) (GPIOG_BASE + GPIO_SI_OFFSET))
#define GPIOG_SI_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_SI_OFFSET)))

/******************************************************************************************
 ************************************ 26 DR12R *********************************************
 ******************************************************************************************/
/* GPIOG DR12R*/
#define GPIOG_DR12R    ((GPIOGR12R_TypeDef*) (GPIOG_BASE + GPIO_DR12R_OFFSET))
#define GPIOG_DR12R_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_DR12R_OFFSET)))

/******************************************************************************************
 ************************************ 27 WAKEPEN *********************************************
 ******************************************************************************************/
/* GPIOG WAKEPEN*/
#define GPIOG_WAKEPEN    ((GPIOWAKEPEN_TypeDef*) (GPIOG_BASE + GPIO_WAKEPEN_OFFSET))
#define GPIOG_WAKEPEN_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_WAKEPEN_OFFSET)))

/******************************************************************************************
 ************************************ 28 WAKELVL *********************************************
 ******************************************************************************************/
/* GPIOG WAKELVL*/
#define GPIOG_WAKELVL    ((GPIOWAKELVL_TypeDef*) (GPIOG_BASE + GPIO_WAKELVL_OFFSET))
#define GPIOG_WAKELVL_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_WAKELVL_OFFSET)))

/******************************************************************************************
 ************************************ 29 WAKESTAT *********************************************
 ******************************************************************************************/
/* GPIOG WAKESTAT*/
#define GPIOG_WAKESTAT    ((GPIOWAKESTAT_TypeDef*) (GPIOG_BASE + GPIO_WAKESTAT_OFFSET))
#define GPIOG_WAKESTAT_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_WAKESTAT_OFFSET)))

/******************************************************************************************
 ************************************ 30 PP *********************************************
 ******************************************************************************************/
/* GPIOG PP*/
#define GPIOG_PP    ((GPIOPP_TypeDef*) (GPIOG_BASE + GPIO_PP_OFFSET))
#define GPIOG_PP_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_PP_OFFSET)))

/******************************************************************************************
 ************************************ 31 PC *********************************************
 ******************************************************************************************/
/* GPIOG PC*/
#define GPIOG_PC    ((GPIOPC_TypeDef*) (GPIOG_BASE + GPIO_PC_OFFSET))
#define GPIOG_PC_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_PC_OFFSET)))

/******************************************************************************************
 ************************************ 32 PeriphID4 *********************************************
 ******************************************************************************************/
/* GPIOG PID4*/
#define GPIOG_PeriphID4    ((GPIOPeriphID4_TypeDef*) (GPIOG_BASE + GPIO_PeriphID4_OFFSET))
#define GPIOG_PeriphID4_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 33 PeriphID5 *********************************************
 ******************************************************************************************/
/* GPIOG PID5*/
#define GPIOG_PeriphID5    ((GPIOPeriphID5_TypeDef*) (GPIOG_BASE + GPIO_PeriphID5_OFFSET))
#define GPIOG_PeriphID5_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 34 PeriphID6 *********************************************
 ******************************************************************************************/
/* GPIOG PID6*/
#define GPIOG_PeriphID6    ((GPIOPeriphID6_TypeDef*) (GPIOG_BASE + GPIO_PeriphID6_OFFSET))
#define GPIOG_PeriphID6_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 35 PeriphID7 *********************************************
 ******************************************************************************************/
/* GPIOG PID7*/
#define GPIOG_PeriphID7    ((GPIOPeriphID7_TypeDef*) (GPIOG_BASE + GPIO_PeriphID7_OFFSET))
#define GPIOG_PeriphID7_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 36 PeriphID0 *********************************************
 ******************************************************************************************/
/* GPIOG PID0*/
#define GPIOG_PeriphID0    ((GPIOPeriphID0_TypeDef*) (GPIOG_BASE + GPIO_PeriphID0_OFFSET))
#define GPIOG_PeriphID0_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 37 PeriphID1 *********************************************
 ******************************************************************************************/
/* GPIOG PID1*/
#define GPIOG_PeriphID1    ((GPIOPeriphID1_TypeDef*) (GPIOG_BASE + GPIO_PeriphID1_OFFSET))
#define GPIOG_PeriphID1_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 38 PeriphID2 *********************************************
 ******************************************************************************************/
/* GPIOG PID2*/
#define GPIOG_PeriphID2    ((GPIOPeriphID2_TypeDef*) (GPIOG_BASE + GPIO_PeriphID2_OFFSET))
#define GPIOG_PeriphID2_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 39 PeriphID3 *********************************************
 ******************************************************************************************/
/* GPIOG PID3*/
#define GPIOG_PeriphID3    ((GPIOPeriphID3_TypeDef*) (GPIOG_BASE + GPIO_PeriphID3_OFFSET))
#define GPIOG_PeriphID3_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 40 CellID0 *********************************************
 ******************************************************************************************/
/* GPIOG CID0*/
#define GPIOG_CellID0    ((GPIOGellID0_TypeDef*) (GPIOG_BASE + GPIO_CellID0_OFFSET))
#define GPIOG_CellID0_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 41 CellID1 *********************************************
 ******************************************************************************************/
/* GPIOG CID1*/
#define GPIOG_CellID1    ((GPIOGellID1_TypeDef*) (GPIOG_BASE + GPIO_CellID1_OFFSET))
#define GPIOG_CellID1_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 42 CellID2 *********************************************
 ******************************************************************************************/
/* GPIOG CID2*/
#define GPIOG_CellID2    ((GPIOGellID2_TypeDef*) (GPIOG_BASE + GPIO_CellID2_OFFSET))
#define GPIOG_CellID2_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 43 CellID3 *********************************************
 ******************************************************************************************/
/* GPIOG CID3*/
#define GPIOG_CellID3    ((GPIOGellID3_TypeDef*) (GPIOG_BASE + GPIO_CellID3_OFFSET))
#define GPIOG_CellID3_R    (*((volatile uint32_t *) (GPIOG_BASE + GPIO_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_GPIO_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_GPIO_REGISTERPERIPHERAL_MODULEG_H_ */

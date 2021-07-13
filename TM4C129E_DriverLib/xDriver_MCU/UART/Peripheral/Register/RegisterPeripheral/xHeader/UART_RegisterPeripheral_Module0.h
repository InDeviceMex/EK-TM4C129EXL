/**
 *
 * @file UART_RegisterPeripheral_Module0.h
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
 * @verbatim 22 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_UART_REGISTERPERIPHERAL_MODULE0_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_UART_REGISTERPERIPHERAL_MODULE0_H_

#include <xDriver_MCU/UART/Peripheral/Register/xHeader/UART_RegisterAddress.h>
#include <xDriver_MCU/UART/Peripheral/Register/RegisterDefines/UART_RegisterDefines.h>
#include <xDriver_MCU/UART/Peripheral/Struct/xHeader/UART_StructPeripheral.h>

/******************************************************************************************
************************************ UART0 *********************************************
******************************************************************************************/

#define UART0    ((UART_TypeDef*) (UART0_BASE))

/******************************************************************************************
************************************ 1 DR *********************************************
******************************************************************************************/
#define UART0_DR    ((UARTDR_TypeDef*) (UART0_BASE + UART_DR_OFFSET ))
#define UART0_DR_R    (*((volatile uint32_t*) (UART0_BASE + UART_DR_OFFSET)))

/******************************************************************************************
************************************ 2 RSR *********************************************
************************************ 2 ECR *********************************************
******************************************************************************************/
#define UART0_RSR    ((UARTRSR_TypeDef*) (UART0_BASE + UART_RSR_OFFSET ))
#define UART0_RSR_R    (*((volatile const uint32_t*) (UART0_BASE + UART_RSR_OFFSET)))
#define UART0_ECR    ((UARTECR_TypeDef*) (UART0_BASE + UART_ECR_OFFSET ))
#define UART0_ECR_R    (*((volatile uint32_t*) (UART0_BASE + UART_ECR_OFFSET)))

/******************************************************************************************
************************************ 3 FR *********************************************
******************************************************************************************/
#define UART0_FR    ((UARTFR_TypeDef*) (UART0_BASE + UART_FR_OFFSET ))
#define UART0_FR_R    (*((volatile const uint32_t*) (UART0_BASE + UART_FR_OFFSET)))

/******************************************************************************************
************************************ 4 ILPR *********************************************
******************************************************************************************/
#define UART0_ILPR    ((UARTILPR_TypeDef*) (UART0_BASE + UART_ILPR_OFFSET ))
#define UART0_ILPR_R    (*((volatile uint32_t*) (UART0_BASE + UART_ILPR_OFFSET)))

/******************************************************************************************
************************************ 5 IBRD *********************************************
******************************************************************************************/
#define UART0_IBRD    ((UARTIBRD_TypeDef*) (UART0_BASE + UART_IBRD_OFFSET ))
#define UART0_IBRD_R    (*((volatile uint32_t*) (UART0_BASE + UART_IBRD_OFFSET)))

/******************************************************************************************
************************************ 6 FBRD *********************************************
******************************************************************************************/
#define UART0_FBRD    ((UARTFBRD_TypeDef*) (UART0_BASE + UART_FBRD_OFFSET ))
#define UART0_FBRD_R    (*((volatile uint32_t*) (UART0_BASE + UART_FBRD_OFFSET)))

/******************************************************************************************
************************************ 7 LCRH *********************************************
******************************************************************************************/
#define UART0_LCRH    ((UARTLCRH_TypeDef*) (UART0_BASE + UART_LCRH_OFFSET ))
#define UART0_LCRH_R    (*((volatile uint32_t*) (UART0_BASE + UART_LCRH_OFFSET)))

/******************************************************************************************
************************************ 8 DMACTL *********************************************
******************************************************************************************/
#define UART0_DMACTL    ((UARTDMACTL_TypeDef*) (UART0_BASE + UART_DMACTL_OFFSET ))
#define UART0_DMACTL_R    (*((volatile uint32_t*) (UART0_BASE + UART_DMACTL_OFFSET)))

/******************************************************************************************
************************************ 9 IFLS *********************************************
******************************************************************************************/
#define UART0_IFLS    ((UARTIFLS_TypeDef*) (UART0_BASE + UART_IFLS_OFFSET ))
#define UART0_IFLS_R    (*((volatile uint32_t*) (UART0_BASE + UART_IFLS_OFFSET)))

/******************************************************************************************
************************************ 10 IM *********************************************
******************************************************************************************/
#define UART0_IM    ((UARTIM_TypeDef*) (UART0_BASE + UART_IM_OFFSET ))
#define UART0_IM_R    (*((volatile uint32_t*) (UART0_BASE + UART_IM_OFFSET)))

/******************************************************************************************
************************************ 11 RIS *********************************************
******************************************************************************************/
#define UART0_RIS    ((UARTRIS_TypeDef*) (UART0_BASE + UART_RIS_OFFSET ))
#define UART0_RIS_R    (*((volatile const uint32_t*) (UART0_BASE + UART_RIS_OFFSET)))

/******************************************************************************************
************************************ 12 MIS *********************************************
******************************************************************************************/
#define UART0_MIS    ((UARTMIS_TypeDef*) (UART0_BASE + UART_MIS_OFFSET ))
#define UART0_MIS_R    (*((volatile const uint32_t*) (UART0_BASE + UART_MIS_OFFSET)))

/******************************************************************************************
************************************ 13 ICR *********************************************
******************************************************************************************/
#define UART0_ICR    ((UARTICR_TypeDef*) (UART0_BASE + UART_ICR_OFFSET ))
#define UART0_ICR_R    (*((volatile uint32_t*) (UART0_BASE + UART_ICR_OFFSET)))

/******************************************************************************************
************************************ 14 DMACTL *********************************************
******************************************************************************************/
#define UART0_DMACTL    ((UARTDMACTL_TypeDef*) (UART0_BASE + UART_DMACTL_OFFSET ))
#define UART0_DMACTL_R    (*((volatile uint32_t*) (UART0_BASE + UART_DMACTL_OFFSET)))

/******************************************************************************************
************************************ 15 9BITADDR *********************************************
******************************************************************************************/
#define UART0_9BITADDR    ((UART9BITADDR8_TypeDef*) (UART0_BASE + UART_9BITADDR_OFFSET ))
#define UART0_9BITADDR_R    (*((volatile uint32_t*) (UART0_BASE + UART_9BITADDR_OFFSET)))

/******************************************************************************************
************************************ 16 9BITAMASK *********************************************
******************************************************************************************/
#define UART0_9BITAMASK    ((UART9BITAMASK8_TypeDef*) (UART0_BASE + UART_9BITAMASK_OFFSET ))
#define UART0_9BITAMASK_R    (*((volatile uint32_t*) (UART0_BASE + UART_9BITAMASK_OFFSET)))

/******************************************************************************************
************************************ 17 PP *********************************************
******************************************************************************************/
#define UART0_PP    ((UARTPP_TypeDef*) (UART0_BASE + UART_PP_OFFSET ))
#define UART0_PP_R    (*((volatile const uint32_t*) (UART0_BASE + UART_PP_OFFSET)))

/******************************************************************************************
************************************ 18 CC *********************************************
******************************************************************************************/
#define UART0_CC    ((UARTCC_TypeDef*) (UART0_BASE + UART_CC_OFFSET ))
#define UART0_CC_R    (*((volatile uint32_t*) (UART0_BASE + UART_CC_OFFSET)))


/******************************************************************************************
 ************************************ 19 PeriphID4 *********************************************
 ******************************************************************************************/
/* UART0 PID4*/
#define UART0_PeriphID4    ((UARTPeriphID4_TypeDef*) (UART0_BASE + UART_PeriphID4_OFFSET))
#define UART0_PeriphID4_R    (*((volatile const uint32_t*) (UART0_BASE + UART_PeriphID4_OFFSET)))

/******************************************************************************************
 ************************************ 20 PeriphID5 *********************************************
 ******************************************************************************************/
/* UART0 PID5*/
#define UART0_PeriphID5    ((UARTPeriphID5_TypeDef*) (UART0_BASE + UART_PeriphID5_OFFSET))
#define UART0_PeriphID5_R    (*((volatile const uint32_t*) (UART0_BASE + UART_PeriphID5_OFFSET)))

/******************************************************************************************
 ************************************ 21 PeriphID6 *********************************************
 ******************************************************************************************/
/* UART0 PID6*/
#define UART0_PeriphID6    ((UARTPeriphID6_TypeDef*) (UART0_BASE + UART_PeriphID6_OFFSET))
#define UART0_PeriphID6_R    (*((volatile const uint32_t*) (UART0_BASE + UART_PeriphID6_OFFSET)))

/******************************************************************************************
 ************************************ 22 PeriphID7 *********************************************
 ******************************************************************************************/
/* UART0 PID7*/
#define UART0_PeriphID7    ((UARTPeriphID7_TypeDef*) (UART0_BASE + UART_PeriphID7_OFFSET))
#define UART0_PeriphID7_R    (*((volatile const uint32_t*) (UART0_BASE + UART_PeriphID7_OFFSET)))

/******************************************************************************************
 ************************************ 23 PeriphID0 *********************************************
 ******************************************************************************************/
/* UART0 PID0*/
#define UART0_PeriphID0    ((UARTPeriphID0_TypeDef*) (UART0_BASE + UART_PeriphID0_OFFSET))
#define UART0_PeriphID0_R    (*((volatile const uint32_t*) (UART0_BASE + UART_PeriphID0_OFFSET)))

/******************************************************************************************
 ************************************ 24 PeriphID1 *********************************************
 ******************************************************************************************/
/* UART0 PID1*/
#define UART0_PeriphID1    ((UARTPeriphID1_TypeDef*) (UART0_BASE + UART_PeriphID1_OFFSET))
#define UART0_PeriphID1_R    (*((volatile const uint32_t*) (UART0_BASE + UART_PeriphID1_OFFSET)))

/******************************************************************************************
 ************************************ 25 PeriphID2 *********************************************
 ******************************************************************************************/
/* UART0 PID2*/
#define UART0_PeriphID2    ((UARTPeriphID2_TypeDef*) (UART0_BASE + UART_PeriphID2_OFFSET))
#define UART0_PeriphID2_R    (*((volatile const uint32_t*) (UART0_BASE + UART_PeriphID2_OFFSET)))

/******************************************************************************************
 ************************************ 26 PeriphID3 *********************************************
 ******************************************************************************************/
/* UART0 PID3*/
#define UART0_PeriphID3    ((UARTPeriphID3_TypeDef*) (UART0_BASE + UART_PeriphID3_OFFSET))
#define UART0_PeriphID3_R    (*((volatile const uint32_t*) (UART0_BASE + UART_PeriphID3_OFFSET)))

/******************************************************************************************
 ************************************ 27 CellID0 *********************************************
 ******************************************************************************************/
/* UART0 CID0*/
#define UART0_CellID0    ((UARTCellID0_TypeDef*) (UART0_BASE + UART_CellID0_OFFSET))
#define UART0_CellID0_R    (*((volatile const uint32_t*) (UART0_BASE + UART_CellID0_OFFSET)))

/******************************************************************************************
 ************************************ 28 CellID1 *********************************************
 ******************************************************************************************/
/* UART0 CID1*/
#define UART0_CellID1    ((UARTCellID1_TypeDef*) (UART0_BASE + UART_CellID1_OFFSET))
#define UART0_CellID1_R    (*((volatile const uint32_t*) (UART0_BASE + UART_CellID1_OFFSET)))

/******************************************************************************************
 ************************************ 29 CellID2 *********************************************
 ******************************************************************************************/
/* UART0 CID2*/
#define UART0_CellID2    ((UARTCellID2_TypeDef*) (UART0_BASE + UART_CellID2_OFFSET))
#define UART0_CellID2_R    (*((volatile const uint32_t*) (UART0_BASE + UART_CellID2_OFFSET)))

/******************************************************************************************
 ************************************ 30 CellID3 *********************************************
 ******************************************************************************************/
/* UART0 CID3*/
#define UART0_CellID3    ((UARTCellID3_TypeDef*) (UART0_BASE + UART_CellID3_OFFSET))
#define UART0_CellID3_R    (*((volatile const uint32_t*) (UART0_BASE + UART_CellID3_OFFSET)))

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_UART_REGISTERPERIPHERAL_MODULE0_H_ */

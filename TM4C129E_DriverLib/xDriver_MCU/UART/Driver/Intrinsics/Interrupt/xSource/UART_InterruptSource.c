/**
 *
 * @file UART_InterruptSource.c
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/xHeader/UART_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

static UART_nERROR UART__enGetInterruptSourceShift(UART_nMODULE enModuleArg, UART_nINT enInterruptArg, UBase_t* puxShiftArg);


static UART_nERROR UART__enGetInterruptSourceShift(UART_nMODULE enModuleArg, UART_nINT enInterruptArg, UBase_t* puxShiftArg)
{
    const UBase_t UART_uxInterruptBit[(UBase_t) UART_enINT_SW] =
    {
     UART_RIS_R_RI_BIT  , UART_RIS_R_CTS_BIT  , UART_RIS_R_DCD_BIT  , UART_RIS_R_DSR_BIT,
     UART_RIS_R_RX_BIT  , UART_RIS_R_TX_BIT   , UART_RIS_R_RT_BIT   , UART_RIS_R_FE_BIT ,
     UART_RIS_R_PE_BIT  , UART_RIS_R_BE_BIT   , UART_RIS_R_OE_BIT   , UART_RIS_R_EOT_BIT ,
     UART_RIS_R_BIT9_BIT, UART_RIS_R_DMARX_BIT, UART_RIS_R_DMATX_BIT
    };

    UART_nERROR enErrorReg;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) puxShiftArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = (UART_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) UART_enMODULE_MAX);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = (UART_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) UART_enINT_SW);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *puxShiftArg = UART_uxInterruptBit[(UBase_t) enInterruptArg];
    }
    return (enErrorReg);
}


UART_nERROR UART__enSetInterruptSourceStateByMask(UART_nMODULE enModuleArg, UART_nINTMASK enInterruptMaskArg, UART_nSTATE enStateArg)
{
    UART_Register_t stRegister;
    UBase_t uxValueReg;
    UART_nERROR enErrorReg;

    enErrorReg = (UART_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) UART_enINTMASK_MAX);
    if(UART_enERROR_OK == enErrorReg)
    {
        if(UART_enSTATE_DIS == enStateArg)
        {
            uxValueReg = 0U;
        }
        else
        {
            uxValueReg = (UBase_t) enInterruptMaskArg;
        }
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = UART_IM_OFFSET;
        stRegister.uxValue = uxValueReg;
        enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

UART_nERROR UART__enSetInterruptSourceStateByNumber(UART_nMODULE enModuleArg, UART_nINT enInterruptArg, UART_nSTATE enStateArg)
{
    UART_Register_t stRegister;
    UBase_t uxShiftReg;
    UART_nERROR enErrorReg;

    uxShiftReg = 0UL;
    enErrorReg = (UART_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) UART_enINT_SW);
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = UART_IM_RI_MASK;
        stRegister.uptrAddress = UART_IM_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

UART_nERROR UART__enGetInterruptSourceStateByMask(UART_nMODULE enModuleArg, UART_nINTMASK enInterruptMaskArg, UART_nINTMASK* penInterruptGetArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penInterruptGetArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = (UART_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) UART_enINTMASK_MAX);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = UART_IM_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penInterruptGetArg = (UART_nINTMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}

UART_nERROR UART__enGetInterruptSourceStateByNumber(UART_nMODULE enModuleArg, UART_nINT enInterruptArg, UART_nSTATE* penStateArg)
{
    UART_Register_t stRegister;
    UBase_t uxShiftReg;
    UART_nERROR enErrorReg;

    uxShiftReg = 0U;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = (UART_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) UART_enINT_SW);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = UART_IM_RI_MASK;
        stRegister.uptrAddress = UART_IM_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penStateArg = (UART_nSTATE) stRegister.uxValue;
    }
    return (enErrorReg);
}

UART_nERROR UART__enEnableInterruptSourceByMask(UART_nMODULE enModuleArg, UART_nINTMASK enInterruptMaskArg)
{
    UART_nERROR enErrorReg;

    enErrorReg = UART__enSetInterruptSourceStateByMask(enModuleArg, enInterruptMaskArg, UART_enSTATE_ENA);

    return (enErrorReg);
}

UART_nERROR UART__enEnableInterruptSourceByNumber(UART_nMODULE enModuleArg, UART_nINT enInterruptArg)
{
    UART_nERROR enErrorReg;

    enErrorReg = UART__enSetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, UART_enSTATE_ENA);

    return (enErrorReg);
}

UART_nERROR UART__enDisableInterruptSourceByMask(UART_nMODULE enModuleArg, UART_nINTMASK enInterruptMaskArg)
{
    UART_nERROR enErrorReg;

    enErrorReg = UART__enSetInterruptSourceStateByMask(enModuleArg, enInterruptMaskArg, UART_enSTATE_DIS);

    return (enErrorReg);
}

UART_nERROR UART__enDisableInterruptSourceByNumber(UART_nMODULE enModuleArg, UART_nINT enInterruptArg)
{
    UART_nERROR enErrorReg;

    enErrorReg = UART__enSetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, UART_enSTATE_DIS);

    return (enErrorReg);
}

UART_nERROR UART__enClearInterruptSourceByMask(UART_nMODULE enModuleArg, UART_nINTMASK enInterruptMaskArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = (UART_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) UART_enINTMASK_MAX);
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0U;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = UART_ICR_OFFSET;
        stRegister.uxValue = enInterruptMaskArg;
        enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

UART_nERROR UART__enClearInterruptSourceByNumber(UART_nMODULE enModuleArg, UART_nINT enInterruptArg)
{
    UART_Register_t stRegister;
    UBase_t uxShiftReg;
    UBase_t uxValueReg;
    UART_nERROR enErrorReg;

    uxShiftReg = 0UL;
    enErrorReg = (UART_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) UART_enINT_SW);
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        uxValueReg = 1UL;
        uxValueReg <<= uxShiftReg;
        stRegister.uxShift = 0U;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = UART_ICR_OFFSET;
        stRegister.uxValue = (UBase_t) uxValueReg;
        enErrorReg = UART__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

UART_nERROR UART__enStatusInterruptSourceByMask(UART_nMODULE enModuleArg, UART_nINTMASK enInterruptMaskArg, UART_nINTMASK* penInterruptStatusArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penInterruptStatusArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = (UART_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) UART_enINTMASK_MAX);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = UART_RIS_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penInterruptStatusArg = (UART_nINTMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}

UART_nERROR UART__enStatusInterruptSourceByNumber(UART_nMODULE enModuleArg, UART_nINT enInterruptArg, UART_nSTATUS* penStatusArg)
{
    UART_Register_t stRegister;
    UBase_t uxShiftReg;
    UART_nERROR enErrorReg;

    uxShiftReg = 0UL;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = (UART_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) UART_enINT_SW);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = UART_RIS_RI_MASK;
        stRegister.uptrAddress = UART_RIS_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (UART_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}

UART_nERROR UART__enStatusMaskedInterruptSourceByMask(UART_nMODULE enModuleArg, UART_nINTMASK enInterruptMaskArg, UART_nINTMASK* penInterruptStatusArg)
{
    UART_Register_t stRegister;
    UART_nERROR enErrorReg;

    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penInterruptStatusArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = (UART_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) UART_enINTMASK_MAX);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0U;
        stRegister.uxMask = enInterruptMaskArg;
        stRegister.uptrAddress = UART_MIS_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penInterruptStatusArg = (UART_nINTMASK) stRegister.uxValue;
    }
    return (enErrorReg);
}

UART_nERROR UART__enStatusMaskedInterruptSourceByNumber(UART_nMODULE enModuleArg, UART_nINT enInterruptArg, UART_nSTATUS* penStatusArg)
{
    UART_Register_t stRegister;
    UBase_t uxShiftReg;
    UART_nERROR enErrorReg;

    uxShiftReg = 0UL;
    enErrorReg = UART_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = UART_enERROR_POINTER;
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = (UART_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) UART_enINT_SW);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        enErrorReg = UART__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = UART_MIS_RI_MASK;
        stRegister.uptrAddress = UART_MIS_OFFSET;
        enErrorReg = UART__enReadRegister(enModuleArg, &stRegister);
    }
    if(UART_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (UART_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}

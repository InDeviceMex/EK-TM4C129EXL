/**
 *
 * @file FLASH_Prefetch.c
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
 * @verbatim 22 jun. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Prefetch.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/FLASH/Driver/Intrinsics/FLASH_Intrinsics.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>

FLASH_nERROR FLASH__enClearPrefetchBuffer(FLASH_nMODULE enModuleArg)
{
    FLASH_Register_t stRegister;
    stRegister.uxShift = FLASH_CONF_R_CLRTV_BIT;
    stRegister.uxMask = FLASH_CONF_CLRTV_MASK;
    stRegister.uptrAddress = FLASH_CONF_OFFSET;
    stRegister.uxValue = FLASH_CONF_CLRTV_CLEAR;

    FLASH_nERROR enErrorReg;
    enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
    return (enErrorReg);
}

FLASH_nERROR FLASH__enIsPrefetchDualModeAvailable(FLASH_nMODULE enModuleArg, FLASH_nBOOLEAN* penStatusArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStatusArg) ? FLASH_enERROR_POINTER : FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        FLASH_Register_t stRegister;
        stRegister.uxShift = FLASH_PP_R_PFC_BIT;
        stRegister.uxMask = FLASH_PP_PFC_MASK;
        stRegister.uptrAddress = FLASH_PP_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            *penStatusArg = (FLASH_nBOOLEAN) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enSetPrefetchMode(FLASH_nMODULE enModuleArg, FLASH_nPREFETCH_MODE enModeArg)
{
    FLASH_nBOOLEAN enStatusReg;
    enStatusReg = FLASH_enTRUE;

    FLASH_nERROR enErrorReg;
    enErrorReg = (FLASH_enPREFETCH_MODE_DUAL == enModeArg) ?
            FLASH__enIsPrefetchDualModeAvailable(enModuleArg, &enStatusReg):
            FLASH_enERROR_OK;

    if((FLASH_enERROR_OK == enErrorReg) && (FLASH_enFALSE == enStatusReg))
    {
        enErrorReg = FLASH_enERROR_VALUE;
    }

    if(FLASH_enERROR_OK == enErrorReg)
    {
        FLASH_Register_t stRegister;
        stRegister.uxShift = FLASH_CONF_R_SPFE_BIT;
        stRegister.uxMask = FLASH_CONF_SPFE_MASK;
        stRegister.uptrAddress = FLASH_CONF_OFFSET;
        stRegister.uxValue = (UBase_t) enModeArg;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
    }

    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enClearPrefetchBuffer(enModuleArg);
    }

    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetPrefetchMode(FLASH_nMODULE enModuleArg, FLASH_nPREFETCH_MODE* penModeArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penModeArg) ? FLASH_enERROR_POINTER : FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        FLASH_Register_t stRegister;
        stRegister.uxShift = FLASH_CONF_R_SPFE_BIT;
        stRegister.uxMask = FLASH_CONF_SPFE_MASK;
        stRegister.uptrAddress = FLASH_CONF_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            *penModeArg = (FLASH_nPREFETCH_MODE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enEnablePrefetch(FLASH_nMODULE enModuleArg)
{
    FLASH_Register_t stRegister;
    stRegister.uxShift = FLASH_CONF_R_FPFON_BIT;
    stRegister.uxMask = FLASH_CONF_FPFON_MASK;
    stRegister.uptrAddress = FLASH_CONF_OFFSET;
    stRegister.uxValue = FLASH_CONF_FPFON_FORCE;

    FLASH_nERROR enErrorReg;
    enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);

    if(enErrorReg == FLASH_enERROR_OK)
    {
        enErrorReg = FLASH__enClearPrefetchBuffer(enModuleArg);
    }
    return (enErrorReg);
}

FLASH_nERROR FLASH__enDisablePrefetch(FLASH_nMODULE enModuleArg)
{
    FLASH_Register_t stRegister;
    stRegister.uxShift = FLASH_CONF_R_FPFOFF_BIT;
    stRegister.uxMask = FLASH_CONF_FPFOFF_MASK;
    stRegister.uptrAddress = FLASH_CONF_OFFSET;
    stRegister.uxValue = FLASH_CONF_FPFOFF_FORCE;

    FLASH_nERROR enErrorReg;
    enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);

    if(enErrorReg == FLASH_enERROR_OK)
    {
        enErrorReg = FLASH__enClearPrefetchBuffer(enModuleArg);
    }

    return (enErrorReg);
}

FLASH_nERROR FLASH__enSetPrefetchState(FLASH_nMODULE enModuleArg, FLASH_nPREFETCH_STATE enStateArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (FLASH_enPREFETCH_STATE_OFF == enStateArg) ?
            FLASH__enDisablePrefetch(enModuleArg) :
            FLASH__enEnablePrefetch(enModuleArg)
    return (enErrorReg);
}

FLASH_nERROR FLASH__enIsMirrorModeAvailable(FLASH_nMODULE enModuleArg, FLASH_nBOOLEAN* penStatusArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStatusArg) ? FLASH_enERROR_POINTER : FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        FLASH_Register_t stRegister;
        stRegister.uxShift = FLASH_PP_R_FMM_BIT;
        stRegister.uxMask = FLASH_PP_FMM_MASK;
        stRegister.uptrAddress = FLASH_PP_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            *penStatusArg = (FLASH_nBOOLEAN) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}


FLASH_nERROR FLASH__enSetMirrorMode(FLASH_nMODULE enModuleArg, FLASH_nSTATE enStateArg)
{
    FLASH_nBOOLEAN enStatusReg;
    enStatusReg = FLASH_enTRUE;

    FLASH_nERROR enErrorReg;
    enErrorReg = (FLASH_enSTATE_ENA == enStateArg) ?
            FLASH__enIsMirrorModeAvailable(enModuleArg, &enStatusReg):
            FLASH_enERROR_OK;

    if((FLASH_enERROR_OK == enErrorReg) && (FLASH_enFALSE == enStatusReg))
    {
        enErrorReg = FLASH_enERROR_VALUE;
    }

    if(FLASH_enERROR_OK == enErrorReg)
    {
        FLASH_Register_t stRegister;
        stRegister.uxShift = FLASH_CONF_R_FMME_BIT;
        stRegister.uxMask = FLASH_CONF_FMME_MASK;
        stRegister.uptrAddress = FLASH_CONF_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
    }

    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = FLASH__enClearPrefetchBuffer(enModuleArg);
    }

    return (enErrorReg);
}

FLASH_nERROR FLASH__enGetMirrorMode(FLASH_nMODULE enModuleArg, FLASH_nSTATE* penStateArg)
{
    FLASH_nERROR enErrorReg;
    enErrorReg = (0UL == (uintptr_t) penStateArg) ? FLASH_enERROR_POINTER :  FLASH_enERROR_OK;

    if(FLASH_enERROR_OK == enErrorReg)
    {
        FLASH_Register_t stRegister;
        stRegister.uxShift = FLASH_CONF_R_FMME_BIT;
        stRegister.uxMask = FLASH_CONF_FMME_MASK;
        stRegister.uptrAddress = FLASH_CONF_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
        if(FLASH_enERROR_OK == enErrorReg)
        {
            *penStateArg = (FLASH_nSTATE) stRegister.uxValue;
        }
    }
    return (enErrorReg);
}

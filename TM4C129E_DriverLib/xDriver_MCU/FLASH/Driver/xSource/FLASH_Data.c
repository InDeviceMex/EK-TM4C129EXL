/**
 *
 * @file FLASH_Data.c
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
 * @verbatim 19 sep. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 sep. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Data.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/FLASH/Driver/Intrinsics/FLASH_Intrinsics.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>

FLASH_nERROR FLASH__enSetData(FLASH_nMODULE enModuleArg, UBase_t uxDataArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    stRegister.uxShift = FLASH_DATA_R_DATA_BIT;
    stRegister.uxMask = FLASH_DATA_DATA_MASK;
    stRegister.uptrAddress = FLASH_DATA_OFFSET;
    stRegister.uxValue = uxDataArg;
    enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

FLASH_nERROR FLASH__enSetDataOnBuffer(FLASH_nMODULE enModuleArg, UBase_t uxDataArg, UBase_t uxIndexArg)
{
    FLASH_Register_t stRegister;
    UBase_t uxOffsetReg;
    FLASH_nERROR enErrorReg;

    enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(uxIndexArg, 32UL);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        uxOffsetReg = uxIndexArg;
        uxOffsetReg <<= 2UL;
        uxOffsetReg += FLASH_WBn_OFFSET;
        stRegister.uxShift = 0UL;
        stRegister.uxMask = MCU_MASK_BASE;
        stRegister.uptrAddress = (uintptr_t) uxOffsetReg;
        stRegister.uxValue = uxDataArg;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


FLASH_nERROR FLASH__enSetDataBuffer(FLASH_nMODULE enModuleArg, const UBase_t* puxDataArg, UBase_t uxStartIndexArg, UBase_t* puxCountArg)
{
    FLASH_Register_t stRegister;
    UBase_t uxMaxCountReg;
    UBase_t uxCurrentIndexReg;
    FLASH_nERROR enErrorReg;

    enErrorReg = FLASH_enERROR_OK;
    if((0UL == (uintptr_t) puxDataArg) || (0UL == (uintptr_t) puxCountArg))
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        uxMaxCountReg =  uxStartIndexArg + *puxCountArg;
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(uxMaxCountReg, (32UL + 1UL));
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        uxCurrentIndexReg = uxStartIndexArg;
        uxCurrentIndexReg <<= 2UL;
        uxCurrentIndexReg += FLASH_WBn_OFFSET;
        while((0UL != *puxCountArg) && (FLASH_enERROR_OK == enErrorReg))
        {
            stRegister.uxShift = 0UL;
            stRegister.uxMask = MCU_MASK_BASE;
            stRegister.uptrAddress = (uintptr_t) uxCurrentIndexReg;
            stRegister.uxValue = *puxDataArg;
            enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);

            if(FLASH_enERROR_OK == enErrorReg)
            {
                uxCurrentIndexReg += 4UL;
                puxDataArg += 1UL;
                (*puxCountArg)--;
                if(FLASH_WB31_OFFSET < uxCurrentIndexReg)
                {
                    uxCurrentIndexReg = FLASH_WBn_OFFSET;
                }
            }
        }
    }

    return (enErrorReg);
}

FLASH_nERROR FLASH__enSetDataBufferValidByNumber(FLASH_nMODULE enModuleArg, UBase_t uxIndexArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(uxIndexArg, 32UL);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxIndexArg;
        stRegister.uxMask = FLASH_WBVAL_WB0_MASK;
        stRegister.uptrAddress = FLASH_WBVAL_OFFSET;
        stRegister.uxValue = FLASH_WBVAL_WB0_NEWDATA;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

FLASH_nERROR FLASH__enSetDataBufferInvalidByNumber(FLASH_nMODULE enModuleArg, UBase_t uxIndexArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(uxIndexArg, 32UL);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxIndexArg;
        stRegister.uxMask = FLASH_WBVAL_WB0_MASK;
        stRegister.uptrAddress = FLASH_WBVAL_OFFSET;
        stRegister.uxValue = FLASH_WBVAL_WB0_NODATA;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

FLASH_nERROR FLASH__enSetDataBufferValidByMask(FLASH_nMODULE enModuleArg, UBase_t uxIndexMaskArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    stRegister.uxShift = FLASH_WBVAL_R_WB0_BIT;
    stRegister.uxMask = uxIndexMaskArg;
    stRegister.uptrAddress = FLASH_WBVAL_OFFSET;
    stRegister.uxValue = uxIndexMaskArg;
    enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

FLASH_nERROR FLASH__enSetDataBufferInvalidByMask(FLASH_nMODULE enModuleArg, UBase_t uxIndexMaskArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    stRegister.uxShift = FLASH_WBVAL_R_WB0_BIT;
    stRegister.uxMask = uxIndexMaskArg;
    stRegister.uptrAddress = FLASH_WBVAL_OFFSET;
    stRegister.uxValue = 0UL;
    enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

FLASH_nERROR FLASH__enIsDataBufferValidByNumber(FLASH_nMODULE enModuleArg, UBase_t uxIndexArg, FLASH_nSTATUS* penValidArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) penValidArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(uxIndexArg, 32UL);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxIndexArg;
        stRegister.uxMask = FLASH_WBVAL_WB0_MASK;
        stRegister.uptrAddress = FLASH_WBVAL_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *penValidArg = (FLASH_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}


FLASH_nERROR FLASH__enIsDataBufferValidByMask(FLASH_nMODULE enModuleArg, UBase_t uxIndexMaskArg, UBase_t* puxValidArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) puxValidArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = FLASH_WBVAL_R_WB0_BIT;
        stRegister.uxMask = uxIndexMaskArg;
        stRegister.uptrAddress = FLASH_WBVAL_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *puxValidArg = stRegister.uxValue;
    }
    return (enErrorReg);
}

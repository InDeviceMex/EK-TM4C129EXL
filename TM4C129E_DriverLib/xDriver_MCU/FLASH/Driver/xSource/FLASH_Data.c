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

FLASH_nERROR FLASH__enSetData(FLASH_nMODULE enModuleArg, uint32_t u32DataArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    stRegister.u32Shift = FLASH_DATA_R_DATA_BIT;
    stRegister.u32Mask = FLASH_DATA_DATA_MASK;
    stRegister.uptrAddress = FLASH_DATA_OFFSET;
    stRegister.u32Value = u32DataArg;
    enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

FLASH_nERROR FLASH__enSetDataOnBuffer(FLASH_nMODULE enModuleArg, uint32_t u32DataArg, uint32_t u32IndexArg)
{
    FLASH_Register_t stRegister;
    uint32_t u32OffsetReg;
    FLASH_nERROR enErrorReg;

    enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(u32IndexArg, 32UL);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32OffsetReg = u32IndexArg;
        u32OffsetReg <<= 2UL;
        u32OffsetReg += FLASH_WBn_OFFSET;
        stRegister.u32Shift = 0UL;
        stRegister.u32Mask = MCU_MASK_32;
        stRegister.uptrAddress = (uintptr_t) u32OffsetReg;
        stRegister.u32Value = u32DataArg;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


FLASH_nERROR FLASH__enSetDataBuffer(FLASH_nMODULE enModuleArg, uint32_t* pu32DataArg, uint32_t u32StartIndexArg, uint32_t* pu32CountArg)
{
    FLASH_Register_t stRegister;
    uint32_t u32MaxCountReg;
    uint32_t u32CurrentIndexReg;
    FLASH_nERROR enErrorReg;

    enErrorReg = FLASH_enERROR_OK;
    if((0UL == (uintptr_t) pu32DataArg) || (0UL == (uintptr_t) pu32CountArg))
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32MaxCountReg =  u32StartIndexArg + *pu32CountArg;
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(u32MaxCountReg, (32UL + 1UL));
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        u32CurrentIndexReg = u32StartIndexArg;
        u32CurrentIndexReg <<= 2UL;
        u32CurrentIndexReg += FLASH_WBn_OFFSET;
        while((0UL != *pu32CountArg) && (FLASH_enERROR_OK == enErrorReg))
        {
            stRegister.u32Shift = 0UL;
            stRegister.u32Mask = MCU_MASK_32;
            stRegister.uptrAddress = (uintptr_t) u32CurrentIndexReg;
            stRegister.u32Value = *pu32DataArg;
            enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);

            if(FLASH_enERROR_OK == enErrorReg)
            {
                u32CurrentIndexReg += 4UL;
                pu32DataArg += 1UL;
                (*pu32CountArg)--;
                if(FLASH_WB31_OFFSET < u32CurrentIndexReg)
                {
                    u32CurrentIndexReg = FLASH_WBn_OFFSET;
                }
            }
        }
    }

    return (enErrorReg);
}

FLASH_nERROR FLASH__enSetDataBufferValidByNumber(FLASH_nMODULE enModuleArg, uint32_t u32IndexArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(u32IndexArg, 32UL);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = u32IndexArg;
        stRegister.u32Mask = FLASH_WBVAL_WB0_MASK;
        stRegister.uptrAddress = FLASH_WBVAL_OFFSET;
        stRegister.u32Value = FLASH_WBVAL_WB0_NEWDATA;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

FLASH_nERROR FLASH__enSetDataBufferInvalidByNumber(FLASH_nMODULE enModuleArg, uint32_t u32IndexArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(u32IndexArg, 32UL);
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = u32IndexArg;
        stRegister.u32Mask = FLASH_WBVAL_WB0_MASK;
        stRegister.uptrAddress = FLASH_WBVAL_OFFSET;
        stRegister.u32Value = FLASH_WBVAL_WB0_NODATA;
        enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

FLASH_nERROR FLASH__enSetDataBufferValidByMask(FLASH_nMODULE enModuleArg, uint32_t u32IndexMaskArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    stRegister.u32Shift = FLASH_WBVAL_R_WB0_BIT;
    stRegister.u32Mask = u32IndexMaskArg;
    stRegister.uptrAddress = FLASH_WBVAL_OFFSET;
    stRegister.u32Value = u32IndexMaskArg;
    enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

FLASH_nERROR FLASH__enSetDataBufferInvalidByMask(FLASH_nMODULE enModuleArg, uint32_t u32IndexMaskArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    stRegister.u32Shift = FLASH_WBVAL_R_WB0_BIT;
    stRegister.u32Mask = u32IndexMaskArg;
    stRegister.uptrAddress = FLASH_WBVAL_OFFSET;
    stRegister.u32Value = 0UL;
    enErrorReg = FLASH__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

FLASH_nERROR FLASH__enIsDataBufferValidByNumber(FLASH_nMODULE enModuleArg, uint32_t u32IndexArg, FLASH_nSTATUS* penValidArg)
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
        enErrorReg = (FLASH_nERROR) MCU__enCheckParams_RAM(u32IndexArg, 32UL);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = u32IndexArg;
        stRegister.u32Mask = FLASH_WBVAL_WB0_MASK;
        stRegister.uptrAddress = FLASH_WBVAL_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *penValidArg = (FLASH_nSTATUS) stRegister.u32Value;
    }
    return (enErrorReg);
}


FLASH_nERROR FLASH__enIsDataBufferValidByMask(FLASH_nMODULE enModuleArg, uint32_t u32IndexMaskArg, uint32_t* pu32ValidArg)
{
    FLASH_Register_t stRegister;
    FLASH_nERROR enErrorReg;

    enErrorReg = FLASH_enERROR_OK;
    if(0UL == (uintptr_t) pu32ValidArg)
    {
        enErrorReg = FLASH_enERROR_POINTER;
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        stRegister.u32Shift = FLASH_WBVAL_R_WB0_BIT;
        stRegister.u32Mask = u32IndexMaskArg;
        stRegister.uptrAddress = FLASH_WBVAL_OFFSET;
        enErrorReg = FLASH__enReadRegister(enModuleArg, &stRegister);
    }
    if(FLASH_enERROR_OK == enErrorReg)
    {
        *pu32ValidArg = stRegister.u32Value;
    }
    return (enErrorReg);
}

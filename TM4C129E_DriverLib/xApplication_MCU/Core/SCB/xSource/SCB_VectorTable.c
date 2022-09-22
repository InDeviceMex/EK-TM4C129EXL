/**
 *
 * @file SCB_VectorTable.c
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
 * @verbatim 2 jul. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/Core/SCB/xHeader/SCB_VectorTable.h>

#include <xApplication_MCU/Core/SCB/Intrinsics/xHeader/SCB_Dependencies.h>

#if defined (__TI_ARM__ ) || defined (__MSP430__ )
    #pragma DATA_SECTION(SCB__pfnVectors, ".vtable")
#elif defined (__GNUC__ )
__attribute__((section(".vtable")))
#endif
SCB_pvfIRQVectorHandler_t SCB__pfnVectors[SCB_VECTOR_TABLE_SIZE] = {0UL};

SCB_pvfIRQVectorHandler_t* SCB__pfnGetVectorTableRam(void)
{
    return (SCB__pfnVectors);
}

SCB_nERROR SCB__enSetVectorTable(SCB_nMODULE enModuleArg, uint32_t u32OffsetArg)
{
    uint32_t u32TableAddress;
    uint32_t u32FlashSize;
    MCU_nSTATE enInterruptState;
    SCB_nERROR enErrorReg;

    u32OffsetArg &= SCB_VTOR_R_TBLOFF_MASK;
    u32TableAddress = 0UL;
    u32FlashSize = 0UL;
    enErrorReg = SCB__enGetVectorOffset(enModuleArg, &u32TableAddress);
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SCB_nERROR) FLASH__enGetSize(FLASH_enMODULE_0 ,&u32FlashSize);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        if(u32FlashSize > u32OffsetArg)
        {
            enInterruptState = MCU__enDisGlobalInterrupt();
            /*FLASH__enWriteMultiWorld( (uint32_t*) u32TableAddress, u32OffsetArg, SCB_VECTOR_TABLE_SIZE);*/
            MCU__vSetGlobalInterrupt(enInterruptState);
        }
        else
        {
            uint32_t u32Count;
            uint32_t* pu32Ram;
            const uint32_t* pu32Table;

            pu32Table = (const uint32_t*) u32TableAddress;
            pu32Ram = (uint32_t*) u32OffsetArg;
            for(u32Count = 0UL; u32Count < SCB_VECTOR_TABLE_SIZE; u32Count++ )
            {
                *pu32Ram = *pu32Table;
                pu32Ram += 1U;
                pu32Table += 1U;
            }
        }
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enSetVectorOffset(enModuleArg, u32OffsetArg);
    }
    return (enErrorReg);
}




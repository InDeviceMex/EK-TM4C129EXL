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

SCB_nERROR SCB__enSetVectorTable(SCB_nMODULE enModuleArg, UBase_t uxOffsetArg)
{
    UBase_t uxTableAddress;
    UBase_t uxFlashSize;
    MCU_nSTATE enInterruptState;
    SCB_nERROR enErrorReg;

    uxOffsetArg &= SCB_VTOR_R_TBLOFF_MASK;
    uxTableAddress = 0UL;
    uxFlashSize = 0UL;
    enErrorReg = SCB__enGetVectorOffset(enModuleArg, &uxTableAddress);
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SCB_nERROR) FLASH__enGetSize(FLASH_enMODULE_0 ,&uxFlashSize);
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        if(uxFlashSize > uxOffsetArg)
        {
            enInterruptState = MCU__enDisableGlobalInterrupt();
            /*TODO: check this functionality*/
            /*FLASH__enWriteMultiWorld( (UBase_t*) uxTableAddress, uxOffsetArg, SCB_VECTOR_TABLE_SIZE);*/
            MCU__vSetGlobalInterrupt(enInterruptState);
        }
        else
        {
            UBase_t uxCount;
            UBase_t* puxRam;
            const UBase_t* puxTable;

            puxTable = (const UBase_t*) uxTableAddress;
            puxRam = (UBase_t*) uxOffsetArg;
            for(uxCount = 0UL; uxCount < SCB_VECTOR_TABLE_SIZE; uxCount++ )
            {
                *puxRam = *puxTable;
                puxRam += 1U;
                puxTable += 1U;
            }
        }
    }
    if(SCB_enERROR_OK == enErrorReg)
    {
        enErrorReg = SCB__enSetVectorOffset(enModuleArg, uxOffsetArg);
    }
    return (enErrorReg);
}




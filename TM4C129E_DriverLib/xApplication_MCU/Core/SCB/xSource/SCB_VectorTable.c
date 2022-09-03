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
void (*SCB__pfnVectors[SCB_VECTOR_TABLE_SIZE]) (void) = {0UL};

void (**SCB__pfnGetVectorTableRam(void)) (void)
{
    return (SCB__pfnVectors);
}

void SCB__vSetVectorTable(uint32_t u32Offset)
{
    uint32_t* pu32Ram = 0UL;
    const uint32_t* pu32Table = 0UL;
    uint32_t u32TableAddress = 0UL;
    uint32_t u32FlashSize = 0UL;
    uint32_t u32Count = 0UL;
    MCU_nSTATE enInterruptState = MCU_enSTATE_DIS;

    u32Offset &= ~(uint32_t) 0x3FFUL;
    SCB__enGetVectorOffset(SCB_enMODULE_0, &u32TableAddress);

    u32FlashSize = FLASH__u32GetSize();
    if(u32FlashSize > u32Offset)
    {
        enInterruptState = MCU__enDisGlobalInterrupt();
        FLASH__enWriteMultiWorld( (uint32_t*) u32TableAddress, u32Offset, SCB_VECTOR_TABLE_SIZE);
        MCU__vSetGlobalInterrupt(enInterruptState);
    }
    else
    {
        pu32Table = (const uint32_t*) u32TableAddress;
        pu32Ram = (uint32_t*) u32Offset;
        for(u32Count = 0UL; u32Count < SCB_VECTOR_TABLE_SIZE; u32Count++ )
        {
            *pu32Ram = *pu32Table;
            pu32Ram += 1U;
            pu32Table += 1U;
        }
    }
    SCB__enSetVectorOffset(SCB_enMODULE_0, u32Offset);
}




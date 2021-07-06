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

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/SCB.h>
#include <xDriver_MCU/FLASH/FLASH.h>


#if defined (__TI_ARM__ )

#pragma DATA_SECTION(SCB__pfnVectors, ".vtable")
void (*SCB__pfnVectors[SCB_VECTOR_TABLE_SIZE]) (void) = {0UL};

#elif defined (__GNUC__ )
__attribute__((section(".vtable"))) void (*SCB__pfnVectors[SCB_VECTOR_TABLE_SIZE]) (void) = {0UL};
#endif

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
    MCU_nENABLE enInterruptState = MCU_enENABLE_DIS;

    u32Offset &= ~(uint32_t) 0x3FFUL;
    u32TableAddress = SCB__u32GetVectorOffset();

    u32FlashSize = FLASH__u32GetSize();
    if(u32FlashSize > u32Offset)
    {
        enInterruptState = MCU__enDisGlobalInterrupt();
        FLASH__enWriteMultiWorld( (uint32_t*) u32TableAddress, u32Offset, SCB_VECTOR_TABLE_SIZE);
        MCU__enSetGlobalInterrupt(enInterruptState);
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
    SCB__vSetVectorOffset(u32Offset);
}




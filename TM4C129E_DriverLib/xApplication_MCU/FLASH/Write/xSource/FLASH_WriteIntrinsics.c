/**
 *
 * @file FLASH_WriteIntrinsics.c
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
 * @verbatim 14 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/FLASH/Write/xHeader/FLASH_WriteIntrinsics.h>

#include <xApplication_MCU/FLASH/xHeader/FLASH_InitProcess.h>
#include <xApplication_MCU/FLASH/Intrinsics/xHeader/FLASH_Dependencies.h>

FLASH_nSTATUS FLASH__enWrite(uint32_t u32Data, uint32_t u32Address)
{
    FLASH_nSTATUS enStatusReg = FLASH_enERROR;
    uint32_t u32Value = 0UL;
    uint32_t u32FlashSize = FLASH__u32GetSize();

    u32Address &= ~(uint32_t) 0x3UL;
    if(u32Address < u32FlashSize)
    {
        u32Value = *((uint32_t*) u32Address);
        if(0xFFFFFFFFUL == u32Value)
        {
            MCU__vWriteRegister(FLASH_BASE, FLASH_FMD_OFFSET,
                                u32Data, FLASH_FMD_R_DATA_MASK, 0UL);
            MCU__vWriteRegister(FLASH_BASE, FLASH_FMA_OFFSET,
                                u32Address, FLASH_FMA_R_OFFSET_MASK, 0UL);
            enStatusReg = FLASH__enInitProcess(FLASH_FMC_OFFSET,
                                               FLASH_FMC_R_WRITE_WRITE);
        }
    }
    return (enStatusReg);
}

FLASH_nSTATUS FLASH__enWriteBuf(const uint32_t* pu32Data, uint32_t u32Address, uint32_t u32Count)
{
    FLASH_nSTATUS enStatusReg = FLASH_enERROR;
    uint32_t u32Value = 0UL;
    uint32_t u32CountActual = 0UL;
    uint32_t u32RegisterOffset = 0UL;
    uint32_t u32Offset = 0UL;
    uint32_t u32CountMax = 0UL;
    uint32_t *pu32Address = 0UL;
    uint32_t u32FlashSize = FLASH__u32GetSize();

    u32CountActual = (u32Address & 0x7FUL) >> 2UL;
    u32CountMax = u32CountActual + u32Count;
    u32Address &= ~(uint32_t) 0x7FUL;

    if((u32Address < u32FlashSize) &&
       (u32CountMax <= 32UL) &&
       (0UL != u32Count) )
    {
        MCU__vWriteRegister(FLASH_BASE, FLASH_FMA_OFFSET, u32Address,
                            FLASH_FMA_R_OFFSET_MASK, 0UL);
        u32RegisterOffset = FLASH_FWBn_OFFSET;
        u32Offset = u32CountActual;
        u32Offset *= 4UL;
        u32RegisterOffset += u32Offset;
        while(0UL != u32Count)
        {
            pu32Address = (uint32_t*)u32Address;
            pu32Address += u32CountActual;
            u32Value = *pu32Address;
            if(0xFFFFFFFFUL == u32Value)
            {
                MCU__vWriteRegister(FLASH_BASE, u32RegisterOffset, *pu32Data, 0xFFFFFFFFU, 0UL);
            }
            pu32Data += 1U;
            u32Count--;
            u32CountActual++;
            u32RegisterOffset += 4UL;
        }
        enStatusReg = FLASH__enInitProcess(FLASH_FMC2_OFFSET, FLASH_FMC2_R_WRBUF_WRITE);
    }
    return (enStatusReg);
}

/**
 *
 * @file SSI_Data.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/xHeader/SSI_Data.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SSI/Driver/Flags/xHeader/SSI_Busy.h>
#include <xDriver_MCU/SSI/Driver/Flags/xHeader/SSI_FifoRx.h>
#include <xDriver_MCU/SSI/Driver/Flags/xHeader/SSI_FifoTx.h>
#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

inline uint32_t SSI__u32SetData(SSI_nMODULE enModule, uint32_t u32Data)
{
    SSI_nBUSY enBusyReg = SSI_enBUSY_IDLE;
    uint32_t u32ReceiveData = 0UL;
    SSI__vWriteRegister(enModule, SSI_DR_OFFSET, u32Data, 0xFFFFFFFFUL, 0UL);
    do
    {
        enBusyReg = SSI__enGetBusyState(enModule);
    }while(SSI_enBUSY_IDLE != enBusyReg);
    u32ReceiveData = SSI__u32GetData(enModule);
    return (u32ReceiveData);
}

inline uint32_t SSI__u32GetData(SSI_nMODULE enModule)
{
    uint32_t u32Reg = 0UL;
    u32Reg = SSI__u32ReadRegister(enModule, SSI_DR_OFFSET, SSI_DR_DATA_MASK, 0UL);
    return (u32Reg);
}

uint32_t SSI__u32GetFifoData(SSI_nMODULE enModule, uint32_t* pu32FifoArray)
{
    SSI_nFIFO_EMPTY enFifoEmpty = SSI_enFIFO_NO_EMPTY;
    uint32_t u32UartBase = 0UL;
    volatile uint32_t* pu32UartData = 0UL;

    uint32_t u32Module = 0UL;
    uint32_t u32Count = 0U;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) SSI_enMODULE_MAX);

    if((uint32_t) 0UL != (uint32_t) pu32FifoArray)
    {
        u32UartBase = SSI__u32BlockBaseAddress((SSI_nMODULE) u32Module);
        u32UartBase += SSI_DR_OFFSET;
        pu32UartData = (volatile uint32_t*) u32UartBase;

        enFifoEmpty = SSI__enIsFifoReceiveEmpty((SSI_nMODULE) u32Module);
        while(SSI_enFIFO_NO_EMPTY == enFifoEmpty)
        {
            *pu32FifoArray = *pu32UartData;
            pu32FifoArray += 0x1U;
            u32Count++;
            enFifoEmpty = SSI__enIsFifoReceiveEmpty((SSI_nMODULE) u32Module);
        }
    }
    return (u32Count);
}

uint32_t SSI__u32GetFifoDataByte(SSI_nMODULE enModule, uint8_t* pu8FifoArray)
{
    SSI_nFIFO_EMPTY enFifoEmpty = SSI_enFIFO_NO_EMPTY;
    uint32_t u32UartBase = 0UL;
    volatile uint32_t* pu32UartData = 0U;

    uint32_t u32Module = 0UL;
    uint32_t u32Count = 0U;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) SSI_enMODULE_MAX);

    if((uint32_t) 0UL != (uint32_t) pu8FifoArray)
    {
        u32UartBase = SSI__u32BlockBaseAddress((SSI_nMODULE) u32Module);
        u32UartBase += SSI_DR_OFFSET;
        pu32UartData = (volatile uint32_t*) u32UartBase;

        enFifoEmpty = SSI__enIsFifoReceiveEmpty((SSI_nMODULE) u32Module);
        while(SSI_enFIFO_NO_EMPTY == enFifoEmpty)
        {
            *pu8FifoArray = (uint8_t) *pu32UartData;
            pu8FifoArray += 0x1U;
            u32Count++;
            enFifoEmpty = SSI__enIsFifoReceiveEmpty((SSI_nMODULE) u32Module);
        }
    }
    return (u32Count);
}

uint32_t SSI__u32SetFifoData(SSI_nMODULE enModule, const uint32_t* pu32FifoArray, uint32_t u32SizeBuffer)
{
    uint32_t u32Timeout = 100000UL;
    SSI_nFIFO_FULL enFifoFull = SSI_enFIFO_NO_FULL;

    uint32_t u32UartBase = 0UL;
    volatile uint32_t* pu32UartData = 0U;

    uint32_t u32Module = 0UL;
    uint32_t u32Count = 0U;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) SSI_enMODULE_MAX);

    if((uint32_t) 0UL != (uint32_t) pu32FifoArray)
    {
        u32UartBase = SSI__u32BlockBaseAddress((SSI_nMODULE) u32Module);
        u32UartBase += SSI_DR_OFFSET;
        pu32UartData = (volatile uint32_t*) u32UartBase;
        while((u32Count != u32SizeBuffer) && (0UL != u32Timeout))
        {
            enFifoFull = SSI__enIsFifoTransmitFull(enModule);
            if(SSI_enFIFO_NO_FULL == enFifoFull)
            {
                *pu32UartData = *pu32FifoArray;
                pu32FifoArray += 0x1U;
                u32Count++;
                u32Timeout = 100000UL;
            }
            else
            {
                u32Timeout--;
            }
        }
    }
    return (u32Count);
}

uint32_t SSI__u32SetFifoDataConst(SSI_nMODULE enModule, const uint32_t u32FifoValue, uint32_t u32SizeBuffer)
{
    uint32_t u32Timeout = 100000UL;
    SSI_nFIFO_FULL enFifoFull = SSI_enFIFO_NO_FULL;

    uint32_t u32UartBase = 0UL;
    volatile uint32_t* pu32UartData = 0U;

    uint32_t u32Module = 0UL;
    uint32_t u32Count = 0U;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) SSI_enMODULE_MAX);

    u32UartBase = SSI__u32BlockBaseAddress((SSI_nMODULE) u32Module);
    u32UartBase += SSI_DR_OFFSET;
    pu32UartData = (volatile uint32_t*) u32UartBase;
    while((u32Count != u32SizeBuffer) && (0UL != u32Timeout))
    {
        enFifoFull = SSI__enIsFifoTransmitFull(enModule);
        if(SSI_enFIFO_NO_FULL == enFifoFull)
        {
            *pu32UartData = u32FifoValue;
            u32Count++;
            u32Timeout = 100000UL;
        }
        else
        {
            u32Timeout--;
        }
    }
    return (u32Count);
}
uint32_t SSI__u32SetFifoDataByte(SSI_nMODULE enModule, const uint8_t* pu8FifoArray, uint32_t u32SizeBuffer)
{
    uint32_t u32Timeout = 100000UL;
    SSI_nFIFO_FULL enFifoFull = SSI_enFIFO_NO_FULL;

    uint8_t u8Reg = 0U;
    uint32_t u32UartBase = 0UL;
    volatile uint32_t* pu32UartData = 0U;

    uint32_t u32Module = 0UL;
    uint32_t u32Count = 0U;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) SSI_enMODULE_MAX);

    if((uint32_t) 0UL != (uint32_t) pu8FifoArray)
    {
        u32UartBase = SSI__u32BlockBaseAddress((SSI_nMODULE) u32Module);
        u32UartBase += SSI_DR_OFFSET;
        pu32UartData = (volatile uint32_t*) u32UartBase;

        while((u32Count != u32SizeBuffer) && (0UL != u32Timeout))
        {
            enFifoFull = SSI__enIsFifoTransmitFull(enModule);
            if(SSI_enFIFO_NO_FULL == enFifoFull)
            {
                u8Reg = (uint8_t) (*pu8FifoArray);
                *pu32UartData = (uint32_t) u8Reg;
                pu8FifoArray += 0x1U;
                u32Count++;
                u32Timeout = 100000UL;
            }
            else
            {
                u32Timeout--;
            }
        }
    }
    return (u32Count);
}

/**
 *
 * @file UART_Data.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/xHeader/UART_Data.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/UART/Driver/Flags/xHeader/UART_FifoRx.h>
#include <xDriver_MCU/UART/Driver/Flags/xHeader/UART_FifoTx.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

inline void UART__vSetData(UART_nMODULE enModule, uint32_t u32Data)
{
    UART__vWriteRegister(enModule, UART_DR_OFFSET, u32Data, 0xFFFFFFFFUL, 0UL);
}

inline uint32_t UART__u32GetData(UART_nMODULE enModule)
{
    uint32_t u32DataReg = 0UL;
    u32DataReg = UART__u32ReadRegister(enModule, UART_DR_OFFSET, UART_DR_DATA_MASK, 0UL);
    return (u32DataReg);
}

inline uint32_t UART__u32GetDataWithStatus(UART_nMODULE enModule)
{
    uint32_t u32DataReg = 0UL;
    u32DataReg = UART__u32ReadRegister(enModule, UART_DR_OFFSET, 0xFFFFFFFFUL, 0UL);
    return (u32DataReg);
}

uint32_t UART__u32GetFifoData(UART_nMODULE enModule, uint32_t* pu32FifoArray)
{
    UART_nFIFO_EMPTY enFifoEmpty = UART_enFIFO_NO_EMPTY;

    uint32_t u32UartBase = 0UL;
    volatile uint32_t* pu32UartData = 0UL;

    uint32_t u32Module = 0UL;
    uint32_t u32Count = 0U;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) UART_enMODULE_MAX);

    if((uint32_t) 0UL != (uint32_t) pu32FifoArray)
    {
        u32UartBase = UART__u32BlockBaseAddress((UART_nMODULE) u32Module);
        u32UartBase += UART_DR_OFFSET;
        pu32UartData = (volatile uint32_t*) u32UartBase;

        enFifoEmpty = UART__enIsFifoReceiveEmpty((UART_nMODULE) u32Module);
        while(UART_enFIFO_NO_EMPTY == enFifoEmpty)
        {
            *pu32FifoArray = *pu32UartData;
            pu32FifoArray += 0x1U;
            u32Count++;
            enFifoEmpty = UART__enIsFifoReceiveEmpty((UART_nMODULE) u32Module);
        }
    }
    return (u32Count);
}

uint32_t UART__u32GetFifoDataByte(UART_nMODULE enModule, uint8_t* pu8FifoArray)
{
    UART_nFIFO_EMPTY enFifoEmpty = UART_enFIFO_NO_EMPTY;

    uint32_t u32UartBase = 0UL;
    volatile uint32_t* pu32UartData = 0U;

    uint32_t u32Module = 0UL;
    uint32_t u32Count = 0U;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) UART_enMODULE_MAX);

    if((uint32_t) 0UL != (uint32_t) pu8FifoArray)
    {
        u32UartBase = UART__u32BlockBaseAddress((UART_nMODULE) u32Module);
        u32UartBase += UART_DR_OFFSET;
        pu32UartData = (volatile uint32_t*) u32UartBase;

        enFifoEmpty = UART__enIsFifoReceiveEmpty((UART_nMODULE) u32Module);
        while(UART_enFIFO_NO_EMPTY == enFifoEmpty)
        {
            *pu8FifoArray = (uint8_t) *pu32UartData;
            pu8FifoArray += 0x1U;
            u32Count++;
            enFifoEmpty = UART__enIsFifoReceiveEmpty((UART_nMODULE) u32Module);
        }
    }
    return (u32Count);
}

uint32_t UART__u32SetFifoData(UART_nMODULE enModule, const uint32_t* pu32FifoArray,
                              uint32_t u32SizeBuffer)
{
    uint32_t u32Timeout = 100000UL;
    UART_nFIFO_FULL enFifoFull = UART_enFIFO_NO_FULL;

    uint32_t u32UartBase = 0UL;
    volatile uint32_t* pu32UartData = 0U;

    uint32_t u32Module = 0UL;
    uint32_t u32Count = 0U;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) UART_enMODULE_MAX);

    if((uint32_t) 0UL != (uint32_t) pu32FifoArray)
    {
        u32UartBase = UART__u32BlockBaseAddress((UART_nMODULE) u32Module);
        u32UartBase += UART_DR_OFFSET;
        pu32UartData = (volatile uint32_t*) u32UartBase;
        while((u32Count != u32SizeBuffer) && (0UL != u32Timeout))
        {
            enFifoFull = UART__enIsFifoTransmitFull(enModule);
            if(UART_enFIFO_NO_FULL == enFifoFull)
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

uint32_t UART__u32SetFifoDataByte(UART_nMODULE enModule, const uint8_t* pu8FifoArray,
                                  uint32_t u32SizeBuffer)
{
    uint32_t u32Timeout = 100000UL;
    UART_nFIFO_FULL enFifoFull = UART_enFIFO_NO_FULL;

    uint8_t u8Reg = 0U;
    uint32_t u32UartBase = 0UL;
    volatile uint32_t* pu32UartData = 0U;

    uint32_t u32Module = 0UL;
    uint32_t u32Count = 0U;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) UART_enMODULE_MAX);

    if((uint32_t) 0UL != (uint32_t) pu8FifoArray)
    {
        u32UartBase = UART__u32BlockBaseAddress((UART_nMODULE) u32Module);
        u32UartBase += UART_DR_OFFSET;
        pu32UartData = (volatile uint32_t*) u32UartBase;

        while((u32Count != u32SizeBuffer) && (0UL != u32Timeout))
        {
            enFifoFull = UART__enIsFifoTransmitFull(enModule);
            if(UART_enFIFO_NO_FULL == enFifoFull)
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

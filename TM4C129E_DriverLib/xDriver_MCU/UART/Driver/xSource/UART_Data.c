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

#define UART_TIMEOUT (100000UL)

inline void UART__vSetData(UART_nMODULE enModule, UBase_t uxData)
{
    UART__vWriteRegister(enModule, UART_DR_OFFSET, uxData, 0xFFFFFFFFUL, 0UL);
}

inline UBase_t UART__uxGetData(UART_nMODULE enModule)
{
    UBase_t uxDataReg = 0UL;
    uxDataReg = UART__uxReadRegister(enModule, UART_DR_OFFSET, UART_DR_DATA_MASK, 0UL);
    return (uxDataReg);
}

inline UBase_t UART__uxGetDataWithStatus(UART_nMODULE enModule)
{
    UBase_t uxDataReg = 0UL;
    uxDataReg = UART__uxReadRegister(enModule, UART_DR_OFFSET, 0xFFFFFFFFUL, 0UL);
    return (uxDataReg);
}

UBase_t UART__uxGetFifoData(UART_nMODULE enModule, UBase_t* puxFifoArray,
                              UBase_t uxSizeBuffer, UBase_t uxTimeout)
{
    UART_nFIFO_EMPTY enFifoEmpty = UART_enFIFO_NO_EMPTY;

    UBase_t uxUartBase = 0UL;
    volatile UBase_t* puxUartData = 0UL;

    UBase_t uxModule = 0UL;
    UBase_t uxCount = 0U;

    if((UBase_t) 0UL != (UBase_t) puxFifoArray)
    {
        uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) UART_enMODULE_MAX);

        uxUartBase = UART__uxBlockBaseAddress((UART_nMODULE) uxModule);
        uxUartBase += UART_DR_OFFSET;
        puxUartData = (volatile UBase_t*) uxUartBase;

        while((uxCount != uxSizeBuffer) && (0UL != uxTimeout))
        {

            enFifoEmpty = UART__enIsFifoReceiveEmpty((UART_nMODULE) uxModule);
            if(UART_enFIFO_NO_EMPTY == enFifoEmpty)
            {
                *puxFifoArray = *puxUartData;
                puxFifoArray += 0x1U;
                uxCount++;
                uxTimeout = UART_TIMEOUT;
            }
            else
            {
                uxTimeout--;
            }
        }
    }
    return (uxCount);
}

UBase_t UART__uxGetFifoDataByte(UART_nMODULE enModule, uint8_t* pu8FifoArray,
                                  UBase_t uxSizeBuffer, UBase_t uxTimeout)
{
    UART_nFIFO_EMPTY enFifoEmpty = UART_enFIFO_NO_EMPTY;

    UBase_t uxUartBase = 0UL;
    volatile UBase_t* puxUartData = 0U;

    UBase_t uxModule = 0UL;
    UBase_t uxCount = 0U;

    if((UBase_t) 0UL != (UBase_t) pu8FifoArray)
    {
        uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) UART_enMODULE_MAX);

        uxUartBase = UART__uxBlockBaseAddress((UART_nMODULE) uxModule);
        uxUartBase += UART_DR_OFFSET;
        puxUartData = (volatile UBase_t*) uxUartBase;

        while((uxCount != uxSizeBuffer) && (0UL != uxTimeout))
        {
            enFifoEmpty = UART__enIsFifoReceiveEmpty((UART_nMODULE) uxModule);
            if(UART_enFIFO_NO_EMPTY == enFifoEmpty)
            {
                *pu8FifoArray = (uint8_t) *puxUartData;
                pu8FifoArray += 0x1U;
                uxCount++;
                uxTimeout = UART_TIMEOUT;
            }
            else
            {
                uxTimeout--;
            }
        }
    }
    return (uxCount);
}

UBase_t UART__uxSetFifoData(UART_nMODULE enModule, const UBase_t* puxFifoArray,
                              UBase_t uxSizeBuffer, UBase_t uxTimeout)
{
    UART_nFIFO_FULL enFifoFull = UART_enFIFO_NO_FULL;

    UBase_t uxUartBase = 0UL;
    volatile UBase_t* puxUartData = 0U;

    UBase_t uxModule = 0UL;
    UBase_t uxCount = 0U;

    if((UBase_t) 0UL != (UBase_t) puxFifoArray)
    {
        uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) UART_enMODULE_MAX);

        uxUartBase = UART__uxBlockBaseAddress((UART_nMODULE) uxModule);
        uxUartBase += UART_DR_OFFSET;
        puxUartData = (volatile UBase_t*) uxUartBase;
        while((uxCount != uxSizeBuffer) && (0UL != uxTimeout))
        {
            enFifoFull = UART__enIsFifoTransmitFull(enModule);
            if(UART_enFIFO_NO_FULL == enFifoFull)
            {
                *puxUartData = *puxFifoArray;
                puxFifoArray += 0x1U;
                uxCount++;
                uxTimeout = UART_TIMEOUT;
            }
            else
            {
                uxTimeout--;
            }
        }
    }
    return (uxCount);
}

UBase_t UART__uxSetFifoDataByte(UART_nMODULE enModule, const uint8_t* pu8FifoArray,
                                  UBase_t uxSizeBuffer, UBase_t uxTimeout)
{
    UART_nFIFO_FULL enFifoFull = UART_enFIFO_NO_FULL;

    uint8_t u8Reg = 0U;
    UBase_t uxUartBase = 0UL;
    volatile UBase_t* puxUartData = 0U;

    UBase_t uxModule = 0UL;
    UBase_t uxCount = 0U;

    if((UBase_t) 0UL != (UBase_t) pu8FifoArray)
    {
        uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) UART_enMODULE_MAX);
        uxUartBase = UART__uxBlockBaseAddress((UART_nMODULE) uxModule);
        uxUartBase += UART_DR_OFFSET;
        puxUartData = (volatile UBase_t*) uxUartBase;

        while((uxCount != uxSizeBuffer) && (0UL != uxTimeout))
        {
            enFifoFull = UART__enIsFifoTransmitFull(enModule);
            if(UART_enFIFO_NO_FULL == enFifoFull)
            {
                u8Reg = (uint8_t) (*pu8FifoArray);
                *puxUartData = (UBase_t) u8Reg;
                pu8FifoArray += 0x1U;
                uxCount++;
                uxTimeout = UART_TIMEOUT;
            }
            else
            {
                uxTimeout--;
            }
        }
    }
    return (uxCount);
}

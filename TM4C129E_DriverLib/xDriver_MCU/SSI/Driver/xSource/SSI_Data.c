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

inline UBase_t SSI__uxSetData(SSI_nMODULE enModule, UBase_t uxData)
{
    SSI_nBUSY enBusyReg = SSI_enBUSY_IDLE;
    UBase_t uxReceiveData = 0UL;
    SSI__vWriteRegister(enModule, SSI_DR_OFFSET, uxData, 0xFFFFFFFFUL, 0UL);
    do
    {
        enBusyReg = SSI__enGetBusyState(enModule);
    }while(SSI_enBUSY_IDLE != enBusyReg);
    uxReceiveData = SSI__uxGetData(enModule);
    return (uxReceiveData);
}

inline UBase_t SSI__uxGetData(SSI_nMODULE enModule)
{
    UBase_t uxDataReg = 0UL;
    uxDataReg = SSI__uxReadRegister(enModule, SSI_DR_OFFSET, SSI_DR_DATA_MASK, 0UL);
    return (uxDataReg);
}

UBase_t SSI__uxGetFifoData(SSI_nMODULE enModule, UBase_t* puxFifoArray)
{
    SSI_nFIFO_EMPTY enFifoEmpty = SSI_enFIFO_NO_EMPTY;
    UBase_t uxUartBase = 0UL;
    volatile UBase_t* puxUartData = 0UL;

    UBase_t uxModule = 0UL;
    UBase_t uxCount = 0U;

    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) SSI_enMODULE_MAX);

    if(0UL != (UBase_t) puxFifoArray)
    {
        uxUartBase = SSI__uxBlockBaseAddress((SSI_nMODULE) uxModule);
        uxUartBase += SSI_DR_OFFSET;
        puxUartData = (volatile UBase_t*) uxUartBase;

        enFifoEmpty = SSI__enIsFifoReceiveEmpty((SSI_nMODULE) uxModule);
        while(SSI_enFIFO_NO_EMPTY == enFifoEmpty)
        {
            *puxFifoArray = *puxUartData;
            puxFifoArray += 0x1U;
            uxCount++;
            enFifoEmpty = SSI__enIsFifoReceiveEmpty((SSI_nMODULE) uxModule);
        }
    }
    return (uxCount);
}

UBase_t SSI__uxGetFifoDataByte(SSI_nMODULE enModule, uint8_t* pu8FifoArray)
{
    SSI_nFIFO_EMPTY enFifoEmpty = SSI_enFIFO_NO_EMPTY;
    UBase_t uxUartBase = 0UL;
    volatile UBase_t* puxUartData = 0U;

    UBase_t uxModule = 0UL;
    UBase_t uxCount = 0U;

    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) SSI_enMODULE_MAX);

    if(0UL != (UBase_t) pu8FifoArray)
    {
        uxUartBase = SSI__uxBlockBaseAddress((SSI_nMODULE) uxModule);
        uxUartBase += SSI_DR_OFFSET;
        puxUartData = (volatile UBase_t*) uxUartBase;

        enFifoEmpty = SSI__enIsFifoReceiveEmpty((SSI_nMODULE) uxModule);
        while(SSI_enFIFO_NO_EMPTY == enFifoEmpty)
        {
            *pu8FifoArray = (uint8_t) *puxUartData;
            pu8FifoArray += 0x1U;
            uxCount++;
            enFifoEmpty = SSI__enIsFifoReceiveEmpty((SSI_nMODULE) uxModule);
        }
    }
    return (uxCount);
}

UBase_t SSI__uxSetFifoData(SSI_nMODULE enModule,
                             const UBase_t* puxFifoArray, UBase_t uxSizeBuffer)
{
    UBase_t uxTimeout = 100000UL;
    SSI_nFIFO_FULL enFifoFull = SSI_enFIFO_NO_FULL;

    UBase_t uxUartBase = 0UL;
    volatile UBase_t* puxUartData = 0U;

    UBase_t uxModule = 0UL;
    UBase_t uxCount = 0U;

    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) SSI_enMODULE_MAX);

    if(0UL != (UBase_t) puxFifoArray)
    {
        uxUartBase = SSI__uxBlockBaseAddress((SSI_nMODULE) uxModule);
        uxUartBase += SSI_DR_OFFSET;
        puxUartData = (volatile UBase_t*) uxUartBase;
        while((uxCount != uxSizeBuffer) && (0UL != uxTimeout))
        {
            enFifoFull = SSI__enIsFifoTransmitFull(enModule);
            if(SSI_enFIFO_NO_FULL == enFifoFull)
            {
                *puxUartData = *puxFifoArray;
                puxFifoArray += 0x1U;
                uxCount++;
                uxTimeout = 100000UL;
            }
            else
            {
                uxTimeout--;
            }
        }
    }
    return (uxCount);
}

UBase_t SSI__uxSetFifoDataConst(SSI_nMODULE enModule,
                                  const UBase_t uxFifoValue, UBase_t uxSizeBuffer)
{
    UBase_t uxTimeout = 100000UL;
    SSI_nFIFO_FULL enFifoFull = SSI_enFIFO_NO_FULL;

    UBase_t uxUartBase = 0UL;
    volatile UBase_t* puxUartData = 0U;

    UBase_t uxModule = 0UL;
    UBase_t uxCount = 0U;

    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) SSI_enMODULE_MAX);

    uxUartBase = SSI__uxBlockBaseAddress((SSI_nMODULE) uxModule);
    uxUartBase += SSI_DR_OFFSET;
    puxUartData = (volatile UBase_t*) uxUartBase;
    while((uxCount != uxSizeBuffer) && (0UL != uxTimeout))
    {
        enFifoFull = SSI__enIsFifoTransmitFull(enModule);
        if(SSI_enFIFO_NO_FULL == enFifoFull)
        {
            *puxUartData = uxFifoValue;
            uxCount++;
            uxTimeout = 100000UL;
        }
        else
        {
            uxTimeout--;
        }
    }
    return (uxCount);
}
UBase_t SSI__uxSetFifoDataByte(SSI_nMODULE enModule,
                                 const uint8_t* pu8FifoArray, UBase_t uxSizeBuffer)
{
    UBase_t uxTimeout = 100000UL;
    SSI_nFIFO_FULL enFifoFull = SSI_enFIFO_NO_FULL;

    uint8_t u8Reg = 0U;
    UBase_t uxUartBase = 0UL;
    volatile UBase_t* puxUartData = 0U;

    UBase_t uxModule = 0UL;
    UBase_t uxCount = 0U;

    uxModule = MCU__uxCheckParams((UBase_t) enModule, (UBase_t) SSI_enMODULE_MAX);

    if(0UL != (UBase_t) pu8FifoArray)
    {
        uxUartBase = SSI__uxBlockBaseAddress((SSI_nMODULE) uxModule);
        uxUartBase += SSI_DR_OFFSET;
        puxUartData = (volatile UBase_t*) uxUartBase;

        while((uxCount != uxSizeBuffer) && (0UL != uxTimeout))
        {
            enFifoFull = SSI__enIsFifoTransmitFull(enModule);
            if(SSI_enFIFO_NO_FULL == enFifoFull)
            {
                u8Reg = (uint8_t) (*pu8FifoArray);
                *puxUartData = (UBase_t) u8Reg;
                pu8FifoArray += 0x1U;
                uxCount++;
                uxTimeout = 100000UL;
            }
            else
            {
                uxTimeout--;
            }
        }
    }
    return (uxCount);
}

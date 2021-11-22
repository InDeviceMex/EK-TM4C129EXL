/**
 *
 * @file CRC_SW.c
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
 * @verbatim 31 oct. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 31 oct. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xApplication_MCU/CRC/xHeader/CRC_SW.h>

#include <xApplication_MCU/CRC/Intrinsics/xHeader/CRC_Dependencies.h>

CRC16_Params_t pstTableCRC16[(uint32_t) CRC16_enSubType_MAX] =
{
 {0x1021U, 0xFFFFU, 0x0000U, FALSE, FALSE},
 {0x8005U, 0x0000U, 0x0000U, TRUE , TRUE },
 {0x1021U, 0x1D0FU, 0x0000U, FALSE, FALSE},
 {0x8005U, 0x0000U, 0x0000U, FALSE, FALSE},
 {0xC867U, 0xFFFFU, 0x0000U, FALSE, FALSE},
 {0x8005U, 0x800DU, 0x0000U, FALSE, FALSE},
 {0x0589U, 0x0000U, 0x0001U, FALSE, FALSE},
 {0x0589U, 0x0000U, 0x0000U, FALSE, FALSE},
 {0x3D65U, 0x0000U, 0xFFFFU, TRUE , TRUE },
 {0x3D65U, 0x0000U, 0xFFFFU, FALSE, FALSE},
 {0x1021U, 0xFFFFU, 0xFFFFU, FALSE, FALSE},
 {0x8005U, 0x0000U, 0xFFFFU, TRUE , TRUE },
 {0x1021U, 0xFFFFU, 0x0000U, TRUE , TRUE },
 {0x1021U, 0xB2AAU, 0x0000U, TRUE , TRUE },
 {0x8BB7U, 0x0000U, 0x0000U, FALSE, FALSE},
 {0xA097U, 0x0000U, 0x0000U, FALSE, FALSE},
 {0x1021U, 0x89ECU, 0x0000U, TRUE , TRUE },
 {0x8005U, 0xFFFFU, 0xFFFFU, TRUE , TRUE },
 {0x1021U, 0xC6C6U, 0x0000U, TRUE , TRUE },
 {0x1021U, 0x0000U, 0x0000U, TRUE , TRUE },
 {0x8005U, 0xFFFFU, 0x0000U, TRUE , TRUE },
 {0x1021U, 0xFFFFU, 0xFFFFU, TRUE , TRUE },
 {0x1021U, 0x0000U, 0x0000U, FALSE, FALSE}
};



uint16_t CRC16__u16Calculate(const char* pcDataValues, uint32_t u32DataLength, CRC16_eSubType enCrc16Type)
{
    uint16_t  u16Crc = 0U;
    uint16_t u16Data = 0U;
    uint8_t u8Data = 0U;
    uint32_t u32CrcType = 0UL;
    CRC16_Params_t* pstTableCRC16Reg = (CRC16_Params_t*) 0UL;
    uint8_t  u8BytePos = 0U;

    if(0UL != (uint32_t) pcDataValues)
    {
        u32CrcType = MCU__u32CheckParams((uint32_t) enCrc16Type, (uint32_t) CRC16_enSubType_MAX);
        pstTableCRC16Reg = &pstTableCRC16[u32CrcType];
        u16Crc = pstTableCRC16Reg->u16Init;


        while (u32DataLength > 0UL)
        {
            u8Data = (uint8_t) *pcDataValues;
            if(FALSE != pstTableCRC16Reg->boRefIn)
            {
                u8Data = MCU__u8ReverseByte(u8Data);
            }
            u16Crc ^= u8Data;
            u8BytePos = 8U;
            while(0U < u8BytePos)
            {
                u16Data = u16Crc & 0x1U;
                if (0U != u16Data)
                {
                    u16Crc >>= 1U;
                    u16Crc ^= pstTableCRC16Reg->u16Poly;
                }
                else
                {
                    u16Crc >>= 1U;
                }
                u8BytePos--;
            }
            pcDataValues += 1UL;
            u32DataLength--;
        }
        u16Crc ^= pstTableCRC16Reg->u16XorOut;
        if(FALSE != pstTableCRC16Reg->boRefOut)
        {
           u16Crc = MCU__u16ReverseHalfWorld(u16Crc);
        }
    }
    return (u16Crc);
}



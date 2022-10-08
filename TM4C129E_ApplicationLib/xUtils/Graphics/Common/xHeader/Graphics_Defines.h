/**
 *
 * @file Graphics_Defines.h
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
 * @verbatim 19 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_GRAPHICS_COMMON_XHEADER_GRAPHICS_DEFINES_H_
#define XUTILS_GRAPHICS_COMMON_XHEADER_GRAPHICS_DEFINES_H_

#include <xUtils/Graphics/Common/xHeader/Graphics_Enum.h>
#include <xUtils/Font/Font.h>

typedef volatile struct
{
    UBase_t uxCoordX_Initial;
    UBase_t uxCoordY_Initial;
    UBase_t uxCoordX [4U];
    UBase_t uxCoordY [4U];
    UBase_t uxRadius [3U];
    UBase_t uxRadius_Initial;
    UBase_t uxWidth;
    UBase_t uxHeight;
    UBase_t uxWidthTotal;
    UBase_t uxHeightTotal;
}Graphics_DIMENSIONS_t;

typedef struct GraphicsLayer_t Graphics_Layer_t;
struct GraphicsLayer_t
{
    FONT_t* pstFontType;
    char* pcString;

    UBase_t uxWidthTotal;
    UBase_t uxHeightTotal;
    UBase_t uxWidth;
    UBase_t uxHeight;
    /*
     * ToDo: This typedef will be increase in parameters when the system can create buffers for layers
     * */
} ;


#endif /* XUTILS_GRAPHICS_COMMON_XHEADER_GRAPHICS_DEFINES_H_ */

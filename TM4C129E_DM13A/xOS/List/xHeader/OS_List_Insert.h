/**
 *
 * @file OS_List_Insert.h
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
 * @verbatim 8 sep. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 sep. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XOS_LIST_XHEADER_OS_LIST_INSERT_H_
#define XOS_LIST_XHEADER_OS_LIST_INSERT_H_

#include <xOS/List/xHeader/OS_List_Defines.h>

void OS_List__vInsert(OS_List_t* const pstListArg ,
                         OS_ListItem_t* const pstNewListItemArg);

#endif /* XOS_LIST_XHEADER_OS_LIST_INSERT_H_ */


#ifndef __RNIC_CDS_INTERFACE_H__
#define __RNIC_CDS_INTERFACE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"

#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/
/*================================================*/
/* 数值宏定义 */
/*================================================*/

/*================================================*/
/* 功能函数宏定义 */
/*================================================*/

/*******************************************************************************
  3 枚举定义
*******************************************************************************/

/*****************************************************************************
  4 全局变量声明
*****************************************************************************/

/*****************************************************************************
  5 消息头定义
*****************************************************************************/

/*****************************************************************************
  6 消息定义
*****************************************************************************/
/*****************************************************************************
 枚举名    : RNIC_CDS_MSG_ID_ENUM
 枚举说明  : RNIC与CDS的消息定义
 1.日    期   : 2015年10月07日
   作    者   : f00179208
   修改内容   : 创建
*****************************************************************************/
enum RNIC_CDS_MSG_ID_ENUM
{
    /* RNIC发给CDS的消息枚举 */
    ID_RNIC_CDS_IMS_DATA_REQ            = 0x0001,                               /* _H2ASN_MsgChoice RNIC_CDS_IMS_DATA_REQ_STRU */

    /* CDS发给RNIC的消息枚举 */
    ID_CDS_RNIC_IMS_DATA_IND            = 0x1001,                               /* _H2ASN_MsgChoice CDS_RNIC_IMS_DATA_IND_STRU */


    ID_RNIC_CDS_MSG_ID_ENUM_BUTT

};
typedef VOS_UINT32 RNIC_CDS_MSG_ID_ENUM_UINT32;

/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/

/*****************************************************************************
 结构名    : RNIC_CDS_IMS_DATA_REQ_STRU
 结构说明  : RNIC给CDS发送数据结构
 1.日    期   : 2015年10月07日
   作    者   : f00179208
   修改内容   : 新增结构
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                  /* 消息头 */    /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                    /* 消息类型 */  /* _H2ASN_Skip */
    VOS_UINT16                          usModemId;
    VOS_UINT16                          usDataLen;
    VOS_UINT8                           aucData[4];
}RNIC_CDS_IMS_DATA_REQ_STRU;

/*****************************************************************************
 结构名    : CDS_RNIC_IMS_DATA_IND_STRU
 结构说明  : CDS给RNIC发送数据结构
 1.日    期   : 2015年10月07日
   作    者   : f00179208
   修改内容   : 新增结构
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                  /* 消息头 */    /* _H2ASN_Skip */
    VOS_UINT32                          ulMsgId;                    /* 消息类型 */  /* _H2ASN_Skip */
    VOS_UINT16                          usModemId;
    VOS_UINT16                          usDataLen;
    VOS_UINT8                           aucData[4];
}CDS_RNIC_IMS_DATA_IND_STRU;

/*****************************************************************************
  8 UNION定义
*****************************************************************************/

/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/

/*****************************************************************************
  H2ASN顶级消息结构定义
*****************************************************************************/
typedef struct
{
    RNIC_CDS_MSG_ID_ENUM_UINT32         enMsgId;            /* _H2ASN_MsgChoice_Export RNIC_CDS_MSG_ID_ENUM_UINT32 */
    VOS_UINT8                           aucMsg[4];
    /***************************************************************************
        _H2ASN_MsgChoice_When_Comment          RNIC_CDS_MSG_ID_ENUM_UINT32
    ****************************************************************************/
} RNIC_CDS_INTERFACE_MSG_DATA;
/* _H2ASN_Length UINT32 */

typedef struct
{
    VOS_MSG_HEADER
    RNIC_CDS_INTERFACE_MSG_DATA          stMsgData;
} RnicCdsInterface_MSG;

/*****************************************************************************
  10 函数声明
*****************************************************************************/



#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* RnicCdsInterface.h */


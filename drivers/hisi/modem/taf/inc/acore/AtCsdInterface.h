

#ifndef _ATCSDINTERFACE_H_
#define _ATCSDINTERFACE_H_

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "vos.h"
#include "ImmInterface.h"
#include "product_config.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#if(FEATURE_ON == FEATURE_CSD)


/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/

/*****************************************************************************
ö����   : AT_CSD_MSG_ID_ENUM
ö��˵�� : AT���͸�CSD��Ϣ����

  1.��    ��   : 2011��12��6��
    ��    ��   : w00199382
    �޸�����   : ����ö��
*****************************************************************************/
enum AT_CSD_MSG_ID_ENUM
{
    ID_AT_CSD_CALL_STATE_IND            = 0X0001,                               /*��ǰͨ��״ָ̬ʾ*/
    ID_AT_CSD_MSG_ID_ENUM_BUTT
};
typedef VOS_UINT32 AT_CSD_MSG_ID_ENUM_UINT32;

/*****************************************************************************
ö����   : AT_CSD_CALL_STATE_TYPE_ENUM
ö��˵�� : �Ƿ�ͨ�绰

  1.��    ��   : 2011��12��6��
    ��    ��   : w00199382
    �޸�����   : ����ö��
*****************************************************************************/
enum AT_CSD_CALL_TYPE_STATE
{
    AT_CSD_CALL_STATE_ON                = 0X0001,                               /*��ǰͨ��Ϊ��ͨ״̬*/
    AT_CSD_CALL_STATE_OFF                       ,                               /*��ǰͨ��Ϊ�Ҷ�״̬*/
    AT_CSD_CALL_STATE_BUTT
};
typedef VOS_UINT16 AT_CSD_CALL_TYPE_STATE_ENUM_UINT16;

/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  7 STRUCT����
*****************************************************************************/

/*****************************************************************************
�ṹ��    : AT_CSD_CALL_STATE_TYPE_IND_STRU
�ṹ˵��  : ��Ϣ�ṹ

  1.��    ��   : 2011��12��6��
    ��    ��   : w00199382
    �޸�����   : �����ṹ
  2.��    ��   : 2013��05��28��
    ��    ��   : f00179208
    �޸�����   : V3R3 PPP PROJECT
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /*��Ϣͷ*/
    AT_CSD_MSG_ID_ENUM_UINT32           enMsgId;                                /*��ϢID*/
    AT_CSD_CALL_TYPE_STATE_ENUM_UINT16  enCallState;                            /*�绰�Ƿ��ͨ*/
    VOS_UINT8                           ucIndex;
    VOS_UINT8                           aucReserved[1];
}AT_CSD_CALL_STATE_TYPE_IND_STRU;


/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/


/*****************************************************************************
 �� �� ��  : CSD_UL_SendData
 ��������  : �ṩ��USB_MODEM�����������ݵĽӿ�At_UsbModemDataInd
 �������  : IMM_ZC_STRU *pstULData
 �������  : ��
 �� �� ֵ  : VOS_VOID
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2011��12��14��
    ��    ��   : w00199382
    �޸�����   : �����ɺ���

*****************************************************************************/
extern VOS_VOID CSD_UL_SendData(IMM_ZC_STRU *pstULData);



#endif/*FEATURE_CSD*/

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

#endif /* end of CsdInterface.h */

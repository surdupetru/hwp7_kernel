/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : drv_efuse.h
  版 本 号   : 初稿
  生成日期   : 2013年2月2日
  最近修改   :
  功能描述   : drv_efuse.h 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2013年2月2日
    修改内容   : 创建文件

******************************************************************************/

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "drv_global.h"


#ifndef __DRV_EFUSE_H__
#define __DRV_EFUSE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif



/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 消息头定义
*****************************************************************************/


/*****************************************************************************
  5 消息定义
*****************************************************************************/


/*****************************************************************************
  6 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  7 UNION定义
*****************************************************************************/


/*****************************************************************************
  8 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  9 全局变量声明
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
/*************************************************
 函 数 名       : efuseWriteHUK
 功能描述   : HUK写efuse接口
 输入参数   : pBuf:烧写内容;len:烧写长度(字节)
 输出参数   :
 返 回 值      : OK/ERROR
 调用函数   :
 被调函数   :

 修改历史   :
    日    期       : 2012年3月27日
   修改内容 : 新生成函数

*************************************************/
int efuseWriteHUK(char *pBuf,unsigned int len);
#define EFUSE_WRITE_HUK(pBuf,len) efuseWriteHUK(pBuf,len)

/*************************************************
 函 数 名   : CheckHukIsValid
 功能描述   : 判断HUK是否有效，若为全0则无效，非全0则有效
 输入参数   : 无
 输出参数   :
 返 回 值   : BSP_FALSE:HUK无效；BSP_TRUE:HUK有效
 调用函数   :
 被调函数   :

 修改历史   :
   日    期 : 2012年3月27日
   修改内容 : 新生成函数

*************************************************/
int CheckHukIsValid(void);
#define DRV_CHECK_HUK_IS_VALID() CheckHukIsValid()


int DRV_GET_CHIPID(unsigned char* buf,int lenth);
int DRV_GET_DIEID(unsigned char* buf,int lenth);




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of drv_efuse.h */


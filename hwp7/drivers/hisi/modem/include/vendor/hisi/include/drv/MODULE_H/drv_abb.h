/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : drv_abb.h
  版 本 号   : 初稿
  生成日期   : 2013年2月2日
  最近修改   :
  功能描述   : drv_abb.h 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2013年2月2日
    修改内容   : 创建文件

******************************************************************************/

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "drv_global.h"


#ifndef __DRV_ABB_H__
#define __DRV_ABB_H__

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
/*****************************************************************************
 函 数 名  : DRV_ABB_REG_SET
 功能描述  : set ABB register data
 输入参数  : regAddr --- 待设置寄存器地址,ABB地址位宽为9bit,32bit留作扩展
             setData --- 设置的值,ABB数据位宽为8bit,32bit留作扩展
 输出参数  : 无
 返 回 值  : 0    - successful
             -1   - unsuccessful

 修改历史      :
  1.日    期   : 2012年6月19日
    修改内容   : 新生成函数

*****************************************************************************/
extern int DRV_ABB_REG_SET(unsigned int regAddr, unsigned int setData);


/*****************************************************************************
 函 数 名  : DRV_ABB_REG_GET
 功能描述  : get ABB register data
 输入参数  : regAddr --- 待读寄存器地址,ABB地址位宽为9bit,32bit留作扩展
 输出参数  : *getData --- 存放寄存器值,ABB数据位宽为8bit,32bit留作扩展
 返 回 值  : 0    - successful
             -1 - unsuccessful

 修改历史      :
  1.日    期   : 2012年6月19日
    修改内容   : 新生成函数

*****************************************************************************/
extern int DRV_ABB_REG_GET(unsigned int regAddr, unsigned int * getData);


/*****************************************************************************
 函 数 名  : DRV_AUX_ABB_REG_SET
 功能描述  : set AUX ABB register data
 输入参数  : regAddr --- 待设置寄存器地址,ABB地址位宽为9bit,32bit留作扩展
             setData --- 设置的值,ABB数据位宽为8bit,32bit留作扩展
 输出参数  : 无
 返 回 值  : 0    - successful
             -1   - unsuccessful

 修改历史      :
  1.日    期   : 2012年6月19日
    修改内容   : 新生成函数

*****************************************************************************/
extern int DRV_AUX_ABB_REG_SET(unsigned int regAddr, unsigned int setData);


/*****************************************************************************
 函 数 名  : DRV_AUX_ABB_REG_GET
 功能描述  : get AUX ABB register data
 输入参数  : regAddr --- 待读寄存器地址,ABB地址位宽为9bit,32bit留作扩展
 输出参数  : *getData --- 存放寄存器值,ABB数据位宽为8bit,32bit留作扩展
 返 回 值  : 0    - successful
             -1 - unsuccessful

 修改历史      :
  1.日    期   : 2012年6月19日
    修改内容   : 新生成函数

*****************************************************************************/
extern int DRV_AUX_ABB_REG_GET(unsigned int regAddr, unsigned int * getData);



#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of drv_abb.h */


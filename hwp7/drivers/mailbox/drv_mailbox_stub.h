/******************************************************************************

                  版权所有 (C), 2001-2012, 华为技术有限公司

 ******************************************************************************
  文 件 名   : drv_mailbox_stub.h
  版 本 号   : 初稿
  生成日期   : 2012年9月20日
  最近修改   :
  功能描述   : 跨核邮箱PC 测试用例的 打桩定义头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2012年11月23日
    修改内容   : 创建文件

******************************************************************************/
#ifndef __DRV_MAILBOX_STUB_H__
#define __DRV_MAILBOX_STUB_H__


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/* 邮箱占用memory基地址 */
#define MAILBOX_MEM_BASEADDR            ((int)&g_MAILBOX_BST_HEAD0[0])

/* 邮箱占用memory预留总长度, 包括邮箱控制头和邮箱队列缓存 */
#define MAILBOX_MEM_LENGTH              mailbox_memory_length()

/*PC侧把邮箱的共享内存通道空间映射到静态数组空间*/
extern  int g_MAILBOX_BST_HEAD0[];                      
#define MAILBOX_HEAD_ADDR_MCU2ACPU_MSG           MAILBOX_MEM_BASEADDR                                         
#define MAILBOX_HEAD_ADDR_ACPU2MCU_MSG          (MAILBOX_HEAD_ADDR_MCU2ACPU_MSG +  MAILBOX_HEAD_LEN)
                                                                                                                
#define MAILBOX_HEAD_ADDR_ACPU2HIFI_MSG         (MAILBOX_HEAD_ADDR_ACPU2MCU_MSG +  MAILBOX_HEAD_LEN)
#define MAILBOX_HEAD_ADDR_HIFI2ACPU_MSG         (MAILBOX_HEAD_ADDR_ACPU2HIFI_MSG + MAILBOX_HEAD_LEN)
                                                                                                                                                                                                    
#define MAILBOX_HEAD_ADDR_MCU2CCPU_MSG          (MAILBOX_HEAD_ADDR_HIFI2ACPU_MSG +  MAILBOX_HEAD_LEN)
#define MAILBOX_HEAD_ADDR_CCPU2MCU_MSG          (MAILBOX_HEAD_ADDR_MCU2CCPU_MSG +  MAILBOX_HEAD_LEN)
                                                                                                                
#define MAILBOX_HEAD_ADDR_CCPU2HIFI_MSG         (MAILBOX_HEAD_ADDR_CCPU2MCU_MSG +  MAILBOX_HEAD_LEN)
#define MAILBOX_HEAD_ADDR_HIFI2CCPU_MSG         (MAILBOX_HEAD_ADDR_CCPU2HIFI_MSG +  MAILBOX_HEAD_LEN)

#define MAILBOX_HEAD_ADDR_CCPU2ACPU_MSG             (MAILBOX_HEAD_ADDR_HIFI2CCPU_MSG +  MAILBOX_HEAD_LEN)
#define MAILBOX_HEAD_ADDR_ACPU2CCPU_MSG             (MAILBOX_HEAD_ADDR_CCPU2ACPU_MSG +  MAILBOX_HEAD_LEN)

#define MAILBOX_HEAD_ADDR_CCPU2ACPU_IFC             (MAILBOX_HEAD_ADDR_ACPU2CCPU_MSG +  MAILBOX_HEAD_LEN)
#define MAILBOX_HEAD_ADDR_ACPU2CCPU_IFC             (MAILBOX_HEAD_ADDR_CCPU2ACPU_IFC +  MAILBOX_HEAD_LEN)

#define MAILBOX_HEAD_ADDR_CCPU2MCU_IFC             (MAILBOX_HEAD_ADDR_ACPU2CCPU_IFC +  MAILBOX_HEAD_LEN)
#define MAILBOX_HEAD_ADDR_MCU2CCPU_IFC             (MAILBOX_HEAD_ADDR_CCPU2MCU_IFC +  MAILBOX_HEAD_LEN)

#define MAILBOX_HEAD_ADDR_ACPU2MCU_IFC             (MAILBOX_HEAD_ADDR_MCU2CCPU_IFC +  MAILBOX_HEAD_LEN)
#define MAILBOX_HEAD_ADDR_MCU2ACPU_IFC             (MAILBOX_HEAD_ADDR_ACPU2MCU_IFC +  MAILBOX_HEAD_LEN)

#define MAILBOX_HEAD_BOTTOM_ADDR                    (MAILBOX_HEAD_ADDR_MCU2ACPU_IFC +  MAILBOX_HEAD_LEN)    

#define MAILBOX_QUEUE_ADDR_MCU2ACPU_MSG         (MAILBOX_MEM_BASEADDR + MAILBOX_MEM_HEAD_LEN)
#define MAILBOX_QUEUE_ADDR_ACPU2MCU_MSG         (MAILBOX_QUEUE_ADDR_MCU2ACPU_MSG +  MAILBOX_QUEUE_SIZE(MCU,  ACPU ,MSG))
                                                                                                                
#define MAILBOX_QUEUE_ADDR_ACPU2HIFI_MSG        (MAILBOX_QUEUE_ADDR_ACPU2MCU_MSG +  MAILBOX_QUEUE_SIZE(ACPU, MCU  ,MSG))
#define MAILBOX_QUEUE_ADDR_HIFI2ACPU_MSG        (MAILBOX_QUEUE_ADDR_ACPU2HIFI_MSG + MAILBOX_QUEUE_SIZE(ACPU ,HIFI ,MSG))
                                                                                                                
#define MAILBOX_QUEUE_ADDR_MCU2CCPU_MSG         (MAILBOX_QUEUE_ADDR_HIFI2ACPU_MSG +  MAILBOX_QUEUE_SIZE(HIFI ,ACPU  ,MSG) )
#define MAILBOX_QUEUE_ADDR_CCPU2MCU_MSG         (MAILBOX_QUEUE_ADDR_MCU2CCPU_MSG +  MAILBOX_QUEUE_SIZE(MCU  ,CCPU ,MSG) )
                                                                                                                
#define MAILBOX_QUEUE_ADDR_CCPU2HIFI_MSG        (MAILBOX_QUEUE_ADDR_CCPU2MCU_MSG +  MAILBOX_QUEUE_SIZE(CCPU ,MCU  ,MSG) )
#define MAILBOX_QUEUE_ADDR_HIFI2CCPU_MSG        (MAILBOX_QUEUE_ADDR_CCPU2HIFI_MSG+  MAILBOX_QUEUE_SIZE(CCPU ,HIFI ,MSG))

#define MAILBOX_QUEUE_ADDR_CCPU2ACPU_MSG            (MAILBOX_QUEUE_ADDR_HIFI2CCPU_MSG +  MAILBOX_QUEUE_SIZE(HIFI, CCPU, MSG) )
#define MAILBOX_QUEUE_ADDR_ACPU2CCPU_MSG            (MAILBOX_QUEUE_ADDR_CCPU2ACPU_MSG +  MAILBOX_QUEUE_SIZE(CCPU ,ACPU ,MSG))

#define MAILBOX_QUEUE_ADDR_CCPU2ACPU_IFC            (MAILBOX_QUEUE_ADDR_ACPU2CCPU_MSG +  MAILBOX_QUEUE_SIZE(ACPU, CCPU, MSG) )
#define MAILBOX_QUEUE_ADDR_ACPU2CCPU_IFC            (MAILBOX_QUEUE_ADDR_CCPU2ACPU_IFC+  MAILBOX_QUEUE_SIZE(CCPU, ACPU, IFC))

#define MAILBOX_QUEUE_ADDR_CCPU2MCU_IFC            (MAILBOX_QUEUE_ADDR_ACPU2CCPU_IFC +  MAILBOX_QUEUE_SIZE(ACPU, CCPU, IFC) )
#define MAILBOX_QUEUE_ADDR_MCU2CCPU_IFC            (MAILBOX_QUEUE_ADDR_CCPU2MCU_IFC+  MAILBOX_QUEUE_SIZE(CCPU, MCU, IFC))

#define MAILBOX_QUEUE_ADDR_ACPU2MCU_IFC            (MAILBOX_QUEUE_ADDR_MCU2CCPU_IFC +  MAILBOX_QUEUE_SIZE(MCU, CCPU, IFC) )
#define MAILBOX_QUEUE_ADDR_MCU2ACPU_IFC            (MAILBOX_QUEUE_ADDR_ACPU2MCU_IFC+  MAILBOX_QUEUE_SIZE(ACPU, MCU, IFC))
  
#define MAILBOX_MEMORY_BOTTOM_ADDR                  (MAILBOX_QUEUE_ADDR_MCU2CCPU_IFC + MAILBOX_QUEUE_SIZE(MCU, ACPU, IFC))

int mailbox_memory_length(void);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif /* end of __DRV_MAILBOX_STUB_H__.h */


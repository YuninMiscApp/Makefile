/**
  ******************************************************************************
  * @file main.c
  * @author  leon.xie
  * @version v1.0.0
  * @date 2018-5-7 21:59:34
  * @brief  This file provides all the main functions. 
  ******************************************************************************
  * @attention
  *
  * File For Yunin Software Team Only
  *
  * Copyright (C), 2017-2027, Yunin Software Team
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/

#include "type.h"
#include "ipc.h"
#include "block.h"



#ifdef  __cplusplus
extern "C" {
#endif

/* Private typedef -----------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/


int
main(int argc, char *argv[])
{
	block_info_t *blockInfo = block_new();
	ASSERT(blockInfo);
	ipc_info_t *ipcInfo = ipc_new();
	ASSERT(ipcInfo);
	printf("[block name]:%s,[ipc name]:%s\n\r"
	,block_name_get(blockInfo),ipc_name_get(ipcInfo));
	return 0;
}

#ifdef  __cplusplus
}
#endif



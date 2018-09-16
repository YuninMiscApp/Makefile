/**
  ******************************************************************************
  * @file ipc.c
  * @author  leon.xie
  * @version v1.0.0
  * @date 2018-5-7 21:59:29
  * @brief  This file provides all the ipc functions. 
  ******************************************************************************
  * @attention
  *
  * File For Yunin Software Team Only
  *
  * Copyright (C), 2017-2027, Yunin Software Team
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include"type.h"
#include"ipc.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* Private typedef -----------------------------------------------------------*/
struct _ipc_info_{
	char *name;
	int reserve;
};

/* Private macro -------------------------------------------------------------*/
#define IPC_NAME  "IPC"

/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/



/***************************************************
 * Function : ipc_name_get
 * Author : leon.xie
 * Creat Date : 2018/05/07  22:7:45
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
char* ipc_name_get(ipc_info_t *p)
{
	ASSERT(NULL != p);
    return p->name;
    return 0;
}

/***************************************************
 * Function : ipc_new
 * Author : leon.xie
 * Creat Date : 2018/05/07  22:7:44
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
ipc_info_t *ipc_new(void)
{
	ipc_info_t *p = (ipc_info_t *)malloc(sizeof(ipc_info_t));
	ASSERT(NULL != p);
	p->name = strdup(IPC_NAME);
	return p;
}

/***************************************************
 * Function : ipc_destroy
 * Author : leon.xie
 * Creat Date : 2018/05/07  22:7:43
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
int ipc_destroy(ipc_info_t *p)
{
	ASSERT(NULL != p);
	if(p->name)
		free(p->name);
	free(p);
    return 0;
}


#ifdef  __cplusplus
}
#endif



/**
  ******************************************************************************
  * @file char.c
  * @author  leon.xie
  * @version v1.0.0
  * @date 2018-5-7 21:34:35
  * @brief  This file provides all the char functions. 
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

#include"char.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* Private typedef -----------------------------------------------------------*/
struct _char_info_ {
    /*< public >*/
    /*< protected >*/
    /*< private >*/
	char *name;
	int reserve;
};

/* Private macro -------------------------------------------------------------*/
#define CHAR_NAME  "char"
/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/***************************************************
 * Function : char_
 * Author : leon.xie
 * Creat Date : 2018/05/07  21:35:56
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
char* char_name_get(char_info_t *p)
{
	ASSERT(NULL != p);
    return p->name;
}

/***************************************************
 * Function : char_new
 * Author : leon.xie
 * Creat Date : 2018/05/07  21:34:46
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
char_info_t *char_new(void)
{
	char_info_t *p = (char_info_t *)malloc(sizeof(char_info_t));
	ASSERT(NULL != p);
	p->name = strdup(CHAR_NAME);
	return p;
}


/***************************************************
 * Function : char_destroy
 * Author : leon.xie
 * Creat Date : 2018/05/07  21:34:56
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
int char_destroy(char_info_t *p)
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









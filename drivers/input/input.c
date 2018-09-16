/**
  ******************************************************************************
  * @file input.c
  * @author  leon.xie
  * @version v1.0.0
  * @date 2018-5-7 21:34:35
  * @brief  This file provides all the input functions. 
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

#include"input.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* Private typedef -----------------------------------------------------------*/
struct _input_info_ {
    /*< public >*/
    /*< protected >*/
    /*< private >*/
	char *name;
	int reserve;
};

/* Private macro -------------------------------------------------------------*/
#define INPUT_NAME  "input"
/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/***************************************************
 * Function : input_
 * Author : leon.xie
 * Creat Date : 2018/05/07  21:35:56
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
char* input_name_get(input_info_t *p)
{
	ASSERT(NULL != p);
    return p->name;
}

/***************************************************
 * Function : input_new
 * Author : leon.xie
 * Creat Date : 2018/05/07  21:34:46
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
input_info_t *input_new(void)
{
	input_info_t *p = (input_info_t *)malloc(sizeof(input_info_t));
	ASSERT(NULL != p);
	p->name = strdup(INPUT_NAME);
	return p;
}


/***************************************************
 * Function : input_destroy
 * Author : leon.xie
 * Creat Date : 2018/05/07  21:34:56
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
int input_destroy(input_info_t *p)
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









/**
  ******************************************************************************
  * @file i2c.c
  * @author  leon.xie
  * @version v1.0.0
  * @date 2018-5-7 21:34:35
  * @brief  This file provides all the i2c functions. 
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

#include"i2c.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* Private typedef -----------------------------------------------------------*/
struct _i2c_info_ {
    /*< public >*/
    /*< protected >*/
    /*< private >*/
	char *name;
	int reserve;
};

/* Private macro -------------------------------------------------------------*/
#define I2C_NAME  "i2c"
/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/***************************************************
 * Function : i2c_
 * Author : leon.xie
 * Creat Date : 2018/05/07  21:35:56
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
char* i2c_name_get(i2c_info_t *p)
{
	ASSERT(NULL != p);
    return p->name;
}

/***************************************************
 * Function : i2c_new
 * Author : leon.xie
 * Creat Date : 2018/05/07  21:34:46
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
i2c_info_t *i2c_new(void)
{
	i2c_info_t *p = (i2c_info_t *)malloc(sizeof(i2c_info_t));
	ASSERT(NULL != p);
	p->name = strdup(I2C_NAME);
	return p;
}


/***************************************************
 * Function : i2c_destroy
 * Author : leon.xie
 * Creat Date : 2018/05/07  21:34:56
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
int i2c_destroy(i2c_info_t *p)
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









/**
  ******************************************************************************
  * @file spi.c
  * @author  leon.xie
  * @version v1.0.0
  * @date 2018-5-7 21:34:35
  * @brief  This file provides all the spi functions. 
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

#include"spi.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* Private typedef -----------------------------------------------------------*/
struct _spi_info_ {
    /*< public >*/
    /*< protected >*/
    /*< private >*/
	char *name;
	int reserve;
};

/* Private macro -------------------------------------------------------------*/
#define SPI_NAME  "spi"
/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/***************************************************
 * Function : spi_
 * Author : leon.xie
 * Creat Date : 2018/05/07  21:35:56
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
char* spi_name_get(spi_info_t *p)
{
	ASSERT(NULL != p);
    return p->name;
}

/***************************************************
 * Function : spi_new
 * Author : leon.xie
 * Creat Date : 2018/05/07  21:34:46
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
spi_info_t *spi_new(void)
{
	spi_info_t *p = (spi_info_t *)malloc(sizeof(spi_info_t));
	ASSERT(NULL != p);
	p->name = strdup(SPI_NAME);
	return p;
}


/***************************************************
 * Function : spi_destroy
 * Author : leon.xie
 * Creat Date : 2018/05/07  21:34:56
 * Description : none
 * In-Parameter : as below
 * Return : as below
 * Modify : none
 **************************************************/
int spi_destroy(spi_info_t *p)
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









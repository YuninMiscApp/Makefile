/**
  ******************************************************************************
  * @file char.h 
  * @author leon.xie
  * @version v1.0.0
  * @date 2018-5-8 21:30:48
  * @brief This file contains all the functions prototypes for the BOARD 
  *  char 
  ******************************************************************************
  * @attention
  *
  * File For Yunin Software Team Only
  *
  * Copyright (C), 2017-2027, Yunin Software Team
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/

#ifndef __CHAR_H
#define __CHAR_H

/* Includes ------------------------------------------------------------------*/

#include <stdio.h>
#include "type.h"
#ifdef  __cplusplus
extern "C" {
#endif

/* Exported typedef ----------------------------------------------------------*/
typedef struct _char_info_ char_info_t;

/* Exported variables --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
char* char_name_get(char_info_t *p);
char_info_t *char_new(void);
int char_destroy(char_info_t *p);

#ifdef  __cplusplus
}
#endif

#endif  /* __CHAR_H */



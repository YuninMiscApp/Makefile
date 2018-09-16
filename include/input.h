/**
  ******************************************************************************
  * @file input.h 
  * @author leon.xie
  * @version v1.0.0
  * @date 2018-5-8 21:30:29
  * @brief This file contains all the functions prototypes for the BOARD 
  *  input 
  ******************************************************************************
  * @attention
  *
  * File For Yunin Software Team Only
  *
  * Copyright (C), 2017-2027, Yunin Software Team
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/

#ifndef __INPUT_H
#define __INPUT_H

/* Includes ------------------------------------------------------------------*/

#include <stdio.h>
#include "type.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* Exported typedef ----------------------------------------------------------*/
typedef struct _input_info_ input_info_t;

/* Exported variables --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
char* input_name_get(input_info_t *p);
input_info_t *input_new(void);
int input_destroy(input_info_t *p);

#ifdef  __cplusplus
}
#endif

#endif  /* __INPUT_H */



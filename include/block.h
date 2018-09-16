/**
  ******************************************************************************
  * @file block.h 
  * @author leon.xie
  * @version v1.0.0
  * @date 2018-5-7 21:36:36
  * @brief This file contains all the functions prototypes for the BOARD 
  *  block 
  ******************************************************************************
  * @attention
  *
  * File For Yunin Software Team Only
  *
  * Copyright (C), 2017-2027, Yunin Software Team
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/

#ifndef __BLOCK_H
#define __BLOCK_H

/* Includes ------------------------------------------------------------------*/
#include "type.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* Exported typedef ----------------------------------------------------------*/
typedef struct _block_info_ block_info_t;
/* Exported variables --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
char* block_name_get(block_info_t *p);
block_info_t *block_new(void);
int block_destroy(block_info_t *p);


#ifdef  __cplusplus
}
#endif

#endif  /* __BLOCK_H */



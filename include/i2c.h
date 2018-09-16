/**
  ******************************************************************************
  * @file i2c.h 
  * @author leon.xie
  * @version v1.0.0
  * @date 2018-5-8 21:31:33
  * @brief This file contains all the functions prototypes for the BOARD 
  *  i2c 
  ******************************************************************************
  * @attention
  *
  * File For Yunin Software Team Only
  *
  * Copyright (C), 2017-2027, Yunin Software Team
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/

#ifndef __I2C_H
#define __I2C_H

/* Includes ------------------------------------------------------------------*/

#include <stdio.h>
#include "type.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* Exported typedef ----------------------------------------------------------*/
typedef struct _i2c_info_ i2c_info_t;

/* Exported variables --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
char* i2c_name_get(i2c_info_t *p);
i2c_info_t *i2c_new(void);
int i2c_destroy(i2c_info_t *p);

#ifdef  __cplusplus
}
#endif

#endif  /* __I2C_H */



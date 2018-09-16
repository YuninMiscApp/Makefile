/**
  ******************************************************************************
  * @file spi.h 
  * @author leon.xie
  * @version v1.0.0
  * @date 2018-5-8 21:32:22
  * @brief This file contains all the functions prototypes for the BOARD 
  *  spi 
  ******************************************************************************
  * @attention
  *
  * File For Yunin Software Team Only
  *
  * Copyright (C), 2017-2027, Yunin Software Team
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/

#ifndef __SPI_H
#define __SPI_H

/* Includes ------------------------------------------------------------------*/

#include <stdio.h>
#include "type.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* Exported typedef ----------------------------------------------------------*/
typedef struct _spi_info_ spi_info_t;

/* Exported variables --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
char* spi_name_get(spi_info_t *p);
spi_info_t *spi_new(void);
int spi_destroy(spi_info_t *p);

#ifdef  __cplusplus
}
#endif

#endif  /* __SPI_H */



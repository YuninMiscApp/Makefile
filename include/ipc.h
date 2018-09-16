/**
  ******************************************************************************
  * @file ipc.h 
  * @author leon.xie
  * @version v1.0.0
  * @date 2018-5-7 21:56:24
  * @brief This file contains all the functions prototypes for the BOARD 
  *  ipc 
  ******************************************************************************
  * @attention
  *
  * File For Yunin Software Team Only
  *
  * Copyright (C), 2017-2027, Yunin Software Team
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/

#ifndef __IPC_H
#define __IPC_H

/* Includes ------------------------------------------------------------------*/

#include <stdio.h>
#include "type.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* Exported typedef ----------------------------------------------------------*/
typedef struct _ipc_info_ ipc_info_t;

/* Exported variables --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
char* ipc_name_get(ipc_info_t *p);
ipc_info_t *ipc_new(void);
int ipc_destroy(ipc_info_t *p);


#ifdef  __cplusplus
}
#endif

#endif  /* __IPC_H */



/**
  ******************************************************************************
  * @file    tsl_ecs.h
  * @author  MCD Application Team
  * @version V2.1.1
  * @date    25-August-2014
  * @brief   This file contains external declarations of the tsl_ecs.c file.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2014 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __TSL_ECS_H
#define __TSL_ECS_H

/* Includes ------------------------------------------------------------------*/
#include "tsl_object.h"

/* Exported types ------------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/

TSL_tKCoeff_T TSL_ecs_CalcK(TSL_ObjectGroup_T *objgrp, TSL_tKCoeff_T k_slow, TSL_tKCoeff_T k_fast);
void TSL_ecs_ProcessK(TSL_ObjectGroup_T *objgrp, TSL_tKCoeff_T Kcoeff);
TSL_Status_enum_T TSL_ecs_Process(TSL_ObjectGroup_T *objgrp);

#endif /* __TSL_ECS_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

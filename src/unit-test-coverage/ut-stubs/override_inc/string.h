/************************************************************************
 * NASA Docket No. GSC-18,719-1, and identified as “core Flight System: Bootes”
 *
 * Copyright (c) 2020 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ************************************************************************/

/**
 * \file
 * \ingroup ut-stubs
 *
 * OSAL coverage stub replacement for string.h
 */

#ifndef OVERRIDE_STRING_H
#define OVERRIDE_STRING_H

#include "OCS_string.h"

/* ----------------------------------------- */
/* mappings for declarations in string.h */
/* ----------------------------------------- */
#define memchr   OCS_memchr
#define memcpy   OCS_memcpy
#define memset   OCS_memset
#define strcmp   OCS_strcmp
#define strcpy   OCS_strcpy
#define strlen   OCS_strlen
#define strncmp  OCS_strncmp
#define strncpy  OCS_strncpy
#define strchr   OCS_strchr
#define strrchr  OCS_strrchr
#define strstr   OCS_strstr
#define strcat   OCS_strcat
#define strncat  OCS_strncat
#define strerror OCS_strerror

#endif /* OVERRIDE_STRING_H */

/*******************************************************************************
* Copyright (c) 2015 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#ifndef _IMAGE_ACCESS_GEN_H_
#define _IMAGE_ACCESS_GEN_H_

#include  "image_access_env.h"

typedef struct gen_image_access_t {
	size_t (*read)(struct gen_image_access_t *ia, void *dest,
		       size_t src_offset, size_t bytes);
	size_t (*map_to_mem)(struct gen_image_access_t *ia, void **dest,
			     size_t src_offset, size_t bytes);
	void (*close)(struct gen_image_access_t *ia);
} gen_image_access_t;

#endif   /* _IMAGE_ACCESS_GEN_H_ */

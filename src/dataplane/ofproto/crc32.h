/*
 * Copyright 2014-2015 Nippon Telegraph and Telephone Corporation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


/*-
 *  COPYRIGHT (C) 1986 Gary S. Brown.  You may use this program, or
 *  code or tables extracted from it, as desired without restriction.
 */

#ifndef SRC_DATAPLANE_OFPROTO_CRC32_H_
#define SRC_DATAPLANE_OFPROTO_CRC32_H_

/**
 */
uint32_t calculate_crc32c(uint32_t, const unsigned char *, unsigned int);

#endif /* SRC_DATAPLANE_OFPROTO_CRC32_H_ */

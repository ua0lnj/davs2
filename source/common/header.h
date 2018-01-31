/*
 * header.h
 *
 * Description of this file:
 *    Header functions definition of the davs2 library
 *
 * --------------------------------------------------------------------------
 *
 *    davs2 - video encoder of AVS2/IEEE1857.4 video coding standard
 *    Copyright (C) 2018~ VCL, NELVT, Peking University
 *
 *    Authors: Falei LUO <falei.luo@gmail.com>
 *             etc.
 *
 *    This program is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02111, USA.
 *
 *    This program is also available under a commercial proprietary license.
 *    For more information, contact us at sswang @ pku.edu.cn.
 */

#ifndef __AVS2_HEADER_H__
#define __AVS2_HEADER_H__
#ifdef __cplusplus
extern "C" {
#endif

void parse_slice_header(davs2_t *h);
int  parse_header(davs2_t *h);
void release_one_frame(davs2_frame_t *frame);
void task_release_frames(davs2_t *h);

davs2_outpic_t *alloc_picture(int w, int h);
void free_picture(davs2_outpic_t *pic);

void destroy_dpb(davs2_mgr_t *mgr);

#ifdef __cplusplus
}
#endif
#endif  // __AVS2_HEADER_H__
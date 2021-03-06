/*-
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 * This file is part of a firmware for Xling, a tamagotchi-like toy.
 *
 * Copyright (c) 2020 Dmitry Salychev
 *
 * Xling firmware is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Xling firmware is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef XG_FONT_Alagard_12pt_H_
#define XG_FONT_Alagard_12pt_H_ 1

#include <stdint.h>
#include <avr/pgmspace.h>

/*
 * This file with bitmap font has been generated for Xling,
 * a tamagotchi-like toy, by LCD Image Converter.
 *
 * Data type: font
 * Filename: Alagard_12pt
 *
 * Family: Alagard
 * Size: 12
 * Style: Medium
 * Antialiasing: no
 * Type: proportional
 * Encoding: ASMO-708
 * Unicode BOM: no
 *
 * Preset name: Xling_SH1106_display_preset
 * Data block size: 8 bit(s), uint8_t
 * RLE compression: no
 * Conversion type: Monochrome, Diffuse Dither 128
 * Bits per pixel: 1
 * Bands used: yes
 * Band width: 8
 * Main scan direction: left_to_right
 * Line scan direction: forward
 * Inverse colors: no
 */

/* Xling graphics headers. */
#include "xling/graphics.h"

/* Glyphs bitmap */
static const uint8_t PROGMEM XG_FONT_Alagard_12pt_bitmaps[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0xde, 0xdf, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x0f, 0x07, 0x00, 0x0f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x24, 0xfe, 0x7f, 0x24, 0xfe, 0x7f, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x48, 0x9c, 0xf2, 0xbf, 0xe6, 0x4c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x86, 0x4f, 0x29, 0x73, 0xce, 0x94, 0xf2, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x66, 0xff, 0x99, 0xb3, 0x7e, 0xe0, 0x98, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x0f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x7c, 0xfe, 0x81, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x81, 0x7e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x14, 0x0f, 0x0e, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x10, 0x7c, 0x7e, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x80, 0x00, 0x05, 0x07, 0x00,
	0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00,
	0x00, 0x80, 0x80, 0x40, 0x30, 0x10, 0x08, 0x06, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3c, 0x7e, 0xd1, 0x8b, 0xfe, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x84, 0xfe, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xc6, 0xe3, 0xd1, 0xcf, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x44, 0xc2, 0x83, 0x93, 0xfe, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x38, 0x34, 0x32, 0xff, 0xff, 0x30, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xdf, 0xcf, 0x85, 0x8d, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x7c, 0xfe, 0xd1, 0x89, 0x9b, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x06, 0x03, 0xf3, 0xfb, 0x47, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x66, 0xf7, 0xc9, 0x91, 0xff, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xcc, 0xde, 0x99, 0x91, 0x73, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x48, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xc8, 0x00, 0x01, 0x00, 0x00,
	0x60, 0xd0, 0x88, 0x04, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00,
	0x00, 0x90, 0x90, 0x90, 0x90, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x8c, 0x98, 0x50, 0x30, 0x00, 0x01, 0x00, 0x00, 0x00,
	0x08, 0x86, 0xc6, 0x2e, 0x1c, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
	0xf0, 0xfc, 0x92, 0xd2, 0x3a, 0xf2, 0xf6, 0xfe, 0x78, 0x00, 0x03, 0x07, 0x04, 0x05, 0x05, 0x05, 0x05, 0x04, 0x02, 0x00,
	0xfc, 0xfe, 0x21, 0x13, 0xfe, 0xfc, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x44, 0xfe, 0x81, 0x99, 0xbf, 0xf6, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x7c, 0xfe, 0xc1, 0x81, 0x82, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02, 0xff, 0xff, 0x81, 0x43, 0x3e, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x7f, 0xff, 0xc9, 0x8b, 0x82, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02, 0xff, 0xff, 0x49, 0x0b, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x7c, 0xfe, 0xc3, 0x81, 0x93, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0xfe, 0xff, 0x10, 0x10, 0xfe, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0xfe, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0xfe, 0xff, 0x00, 0x02, 0x01, 0x00, 0x00,
	0x04, 0xfe, 0xff, 0x48, 0x1c, 0xf7, 0xe3, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0xfe, 0xff, 0x80, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0xfe, 0xff, 0x44, 0x02, 0xff, 0xff, 0x44, 0x02, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0xfe, 0xff, 0x4c, 0x18, 0xfe, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3c, 0x7e, 0xc1, 0x83, 0xfe, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0xfe, 0xff, 0x52, 0x11, 0x0f, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3c, 0x7e, 0xc1, 0x83, 0xfe, 0x7c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00,
	0x04, 0xfe, 0xff, 0x52, 0x11, 0xfb, 0xe6, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x64, 0xce, 0x99, 0x9b, 0xf2, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x01, 0x7d, 0xff, 0xc1, 0x82, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0x7e, 0xff, 0xc0, 0x84, 0xfe, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0x3e, 0x7f, 0xe0, 0xc0, 0x7e, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0x7e, 0xff, 0x40, 0xf8, 0xfc, 0x80, 0x7e, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x44, 0xc6, 0xef, 0x1c, 0x38, 0xf6, 0xe7, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0x0e, 0x1f, 0xf8, 0xf0, 0x4e, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x46, 0xe3, 0xdb, 0xdb, 0xc7, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xff, 0xff, 0x01, 0x00, 0x03, 0x03, 0x02, 0x00,
	0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0xff, 0xff, 0x00, 0x02, 0x03, 0x03, 0x00,
	0x10, 0x0c, 0x00, 0x06, 0x1e, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
	0x00, 0x02, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x48, 0xe4, 0x94, 0xfc, 0xf8, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0xfe, 0xff, 0x90, 0x88, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x30, 0x78, 0xc4, 0x88, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x78, 0x88, 0x92, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x70, 0xf8, 0xa4, 0x9c, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0xfe, 0xff, 0x51, 0x12, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x38, 0x44, 0x48, 0xfc, 0xfc, 0x08, 0x00, 0x03, 0x03, 0x02, 0x01, 0x00, 0x00, 0x00,
	0x04, 0xfe, 0xff, 0x10, 0xf8, 0xf0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xf4, 0xfa, 0x40, 0x00, 0x00, 0x00, 0x00,
	0x20, 0xf4, 0xfa, 0x00, 0x04, 0x03, 0x01, 0x00,
	0x04, 0xfe, 0xff, 0x10, 0xfc, 0xec, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0xfe, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0xf8, 0xfc, 0x10, 0xf8, 0xfc, 0x10, 0xf8, 0xfc, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0xf8, 0xfc, 0x08, 0xfc, 0xfc, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x30, 0x78, 0xc4, 0x8c, 0x78, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x20, 0xf0, 0xf8, 0xc4, 0x8c, 0x78, 0x30, 0x00, 0x00, 0x07, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x30, 0x78, 0xc4, 0x8c, 0xf8, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x02, 0x00,
	0x10, 0xf8, 0xfc, 0x90, 0x08, 0x18, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x48, 0xdc, 0xb4, 0xec, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x14, 0xfe, 0xff, 0x90, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x78, 0xfc, 0x80, 0x40, 0xf8, 0xfc, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x78, 0xfc, 0xc0, 0x80, 0x78, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x78, 0xfc, 0x80, 0x70, 0x78, 0x80, 0x78, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x68, 0xcc, 0x5c, 0x30, 0x68, 0xc4, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x78, 0xfc, 0x80, 0xf8, 0xfc, 0x00, 0x03, 0x06, 0x04, 0x04, 0x03, 0x01, 0x00,
	0x90, 0xc8, 0xac, 0x9c, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x40, 0xfc, 0x02, 0x00, 0x00, 0x07, 0x04, 0x00,
	0x00, 0xfc, 0xfe, 0x00, 0x00, 0x07, 0x03, 0x00,
	0x06, 0xfe, 0x40, 0x00, 0x04, 0x07, 0x00, 0x00,
	0x40, 0x30, 0x70, 0xe0, 0xc0, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* Glyphs */
static const xg_glyph_t XG_FONT_Alagard_12pt_glyphs[] = {
	{ .code=0x20, .data=&XG_FONT_Alagard_12pt_bitmaps[0], .width=4, .height=9, .data_size=8, },	/* ' ' */
	{ .code=0x21, .data=&XG_FONT_Alagard_12pt_bitmaps[8], .width=5, .height=9, .data_size=8, },	/* '!' */
	{ .code=0x22, .data=&XG_FONT_Alagard_12pt_bitmaps[18], .width=7, .height=9, .data_size=8, },	/* '\"' */
	{ .code=0x23, .data=&XG_FONT_Alagard_12pt_bitmaps[32], .width=8, .height=9, .data_size=8, },	/* '#' */
	{ .code=0x24, .data=&XG_FONT_Alagard_12pt_bitmaps[48], .width=7, .height=9, .data_size=8, },	/* '$' */
	{ .code=0x25, .data=&XG_FONT_Alagard_12pt_bitmaps[62], .width=9, .height=9, .data_size=8, },	/* '%' */
	{ .code=0x26, .data=&XG_FONT_Alagard_12pt_bitmaps[80], .width=9, .height=9, .data_size=8, },	/* '&' */
	{ .code=0x27, .data=&XG_FONT_Alagard_12pt_bitmaps[98], .width=4, .height=9, .data_size=8, },	/* '\'' */
	{ .code=0x28, .data=&XG_FONT_Alagard_12pt_bitmaps[106], .width=5, .height=9, .data_size=8, },	/* '(' */
	{ .code=0x29, .data=&XG_FONT_Alagard_12pt_bitmaps[116], .width=5, .height=9, .data_size=8, },	/* ')' */
	{ .code=0x2a, .data=&XG_FONT_Alagard_12pt_bitmaps[126], .width=5, .height=9, .data_size=8, },	/* '*' */
	{ .code=0x2b, .data=&XG_FONT_Alagard_12pt_bitmaps[136], .width=7, .height=9, .data_size=8, },	/* '+' */
	{ .code=0x2c, .data=&XG_FONT_Alagard_12pt_bitmaps[150], .width=3, .height=12, .data_size=8, },	/* ',' */
	{ .code=0x2d, .data=&XG_FONT_Alagard_12pt_bitmaps[156], .width=4, .height=9, .data_size=8, },	/* '-' */
	{ .code=0x2e, .data=&XG_FONT_Alagard_12pt_bitmaps[164], .width=3, .height=12, .data_size=8, },	/* '.' */
	{ .code=0x2f, .data=&XG_FONT_Alagard_12pt_bitmaps[170], .width=9, .height=12, .data_size=8, },	/* '/' */
	{ .code=0x30, .data=&XG_FONT_Alagard_12pt_bitmaps[188], .width=7, .height=9, .data_size=8, },	/* '0' */
	{ .code=0x31, .data=&XG_FONT_Alagard_12pt_bitmaps[202], .width=5, .height=9, .data_size=8, },	/* '1' */
	{ .code=0x32, .data=&XG_FONT_Alagard_12pt_bitmaps[212], .width=6, .height=9, .data_size=8, },	/* '2' */
	{ .code=0x33, .data=&XG_FONT_Alagard_12pt_bitmaps[224], .width=7, .height=9, .data_size=8, },	/* '3' */
	{ .code=0x34, .data=&XG_FONT_Alagard_12pt_bitmaps[238], .width=8, .height=9, .data_size=8, },	/* '4' */
	{ .code=0x35, .data=&XG_FONT_Alagard_12pt_bitmaps[254], .width=6, .height=9, .data_size=8, },	/* '5' */
	{ .code=0x36, .data=&XG_FONT_Alagard_12pt_bitmaps[266], .width=7, .height=9, .data_size=8, },	/* '6' */
	{ .code=0x37, .data=&XG_FONT_Alagard_12pt_bitmaps[280], .width=7, .height=9, .data_size=8, },	/* '7' */
	{ .code=0x38, .data=&XG_FONT_Alagard_12pt_bitmaps[294], .width=7, .height=9, .data_size=8, },	/* '8' */
	{ .code=0x39, .data=&XG_FONT_Alagard_12pt_bitmaps[308], .width=7, .height=9, .data_size=8, },	/* '9' */
	{ .code=0x3a, .data=&XG_FONT_Alagard_12pt_bitmaps[322], .width=3, .height=9, .data_size=8, },	/* ':' */
	{ .code=0x3b, .data=&XG_FONT_Alagard_12pt_bitmaps[328], .width=3, .height=9, .data_size=8, },	/* ';' */
	{ .code=0x3c, .data=&XG_FONT_Alagard_12pt_bitmaps[334], .width=5, .height=12, .data_size=8, },	/* '<' */
	{ .code=0x3d, .data=&XG_FONT_Alagard_12pt_bitmaps[344], .width=7, .height=12, .data_size=8, },	/* '=' */
	{ .code=0x3e, .data=&XG_FONT_Alagard_12pt_bitmaps[358], .width=5, .height=12, .data_size=8, },	/* '>' */
	{ .code=0x3f, .data=&XG_FONT_Alagard_12pt_bitmaps[368], .width=6, .height=12, .data_size=8, },	/* '?' */
	{ .code=0x40, .data=&XG_FONT_Alagard_12pt_bitmaps[380], .width=10, .height=12, .data_size=8, },	/* '\@' */
	{ .code=0x41, .data=&XG_FONT_Alagard_12pt_bitmaps[400], .width=8, .height=9, .data_size=8, },	/* 'A' */
	{ .code=0x42, .data=&XG_FONT_Alagard_12pt_bitmaps[416], .width=8, .height=9, .data_size=8, },	/* 'B' */
	{ .code=0x43, .data=&XG_FONT_Alagard_12pt_bitmaps[432], .width=7, .height=9, .data_size=8, },	/* 'C' */
	{ .code=0x44, .data=&XG_FONT_Alagard_12pt_bitmaps[446], .width=8, .height=9, .data_size=8, },	/* 'D' */
	{ .code=0x45, .data=&XG_FONT_Alagard_12pt_bitmaps[462], .width=8, .height=9, .data_size=8, },	/* 'E' */
	{ .code=0x46, .data=&XG_FONT_Alagard_12pt_bitmaps[478], .width=8, .height=9, .data_size=8, },	/* 'F' */
	{ .code=0x47, .data=&XG_FONT_Alagard_12pt_bitmaps[494], .width=8, .height=9, .data_size=8, },	/* 'G' */
	{ .code=0x48, .data=&XG_FONT_Alagard_12pt_bitmaps[510], .width=9, .height=9, .data_size=8, },	/* 'H' */
	{ .code=0x49, .data=&XG_FONT_Alagard_12pt_bitmaps[528], .width=5, .height=9, .data_size=8, },	/* 'I' */
	{ .code=0x4a, .data=&XG_FONT_Alagard_12pt_bitmaps[538], .width=4, .height=11, .data_size=8, },	/* 'J' */
	{ .code=0x4b, .data=&XG_FONT_Alagard_12pt_bitmaps[546], .width=9, .height=9, .data_size=8, },	/* 'K' */
	{ .code=0x4c, .data=&XG_FONT_Alagard_12pt_bitmaps[564], .width=7, .height=9, .data_size=8, },	/* 'L' */
	{ .code=0x4d, .data=&XG_FONT_Alagard_12pt_bitmaps[578], .width=13, .height=9, .data_size=8, },	/* 'M' */
	{ .code=0x4e, .data=&XG_FONT_Alagard_12pt_bitmaps[604], .width=9, .height=9, .data_size=8, },	/* 'N' */
	{ .code=0x4f, .data=&XG_FONT_Alagard_12pt_bitmaps[622], .width=7, .height=9, .data_size=8, },	/* 'O' */
	{ .code=0x50, .data=&XG_FONT_Alagard_12pt_bitmaps[636], .width=8, .height=9, .data_size=8, },	/* 'P' */
	{ .code=0x51, .data=&XG_FONT_Alagard_12pt_bitmaps[652], .width=8, .height=10, .data_size=8, },	/* 'Q' */
	{ .code=0x52, .data=&XG_FONT_Alagard_12pt_bitmaps[668], .width=9, .height=9, .data_size=8, },	/* 'R' */
	{ .code=0x53, .data=&XG_FONT_Alagard_12pt_bitmaps[686], .width=7, .height=9, .data_size=8, },	/* 'S' */
	{ .code=0x54, .data=&XG_FONT_Alagard_12pt_bitmaps[700], .width=8, .height=9, .data_size=8, },	/* 'T' */
	{ .code=0x55, .data=&XG_FONT_Alagard_12pt_bitmaps[716], .width=9, .height=9, .data_size=8, },	/* 'U' */
	{ .code=0x56, .data=&XG_FONT_Alagard_12pt_bitmaps[734], .width=8, .height=9, .data_size=8, },	/* 'V' */
	{ .code=0x57, .data=&XG_FONT_Alagard_12pt_bitmaps[750], .width=10, .height=9, .data_size=8, },	/* 'W' */
	{ .code=0x58, .data=&XG_FONT_Alagard_12pt_bitmaps[770], .width=9, .height=9, .data_size=8, },	/* 'X' */
	{ .code=0x59, .data=&XG_FONT_Alagard_12pt_bitmaps[788], .width=8, .height=9, .data_size=8, },	/* 'Y' */
	{ .code=0x5a, .data=&XG_FONT_Alagard_12pt_bitmaps[804], .width=7, .height=9, .data_size=8, },	/* 'Z' */
	{ .code=0x5b, .data=&XG_FONT_Alagard_12pt_bitmaps[818], .width=4, .height=11, .data_size=8, },	/* '[' */
	{ .code=0x5c, .data=&XG_FONT_Alagard_12pt_bitmaps[826], .width=8, .height=9, .data_size=8, },	/* '\' */
	{ .code=0x5d, .data=&XG_FONT_Alagard_12pt_bitmaps[842], .width=4, .height=11, .data_size=8, },	/* ']' */
	{ .code=0x5e, .data=&XG_FONT_Alagard_12pt_bitmaps[850], .width=7, .height=12, .data_size=8, },	/* '^' */
	{ .code=0x5f, .data=&XG_FONT_Alagard_12pt_bitmaps[864], .width=8, .height=12, .data_size=8, },	/* '_' */
	{ .code=0x60, .data=&XG_FONT_Alagard_12pt_bitmaps[880], .width=5, .height=12, .data_size=8, },	/* '`' */
	{ .code=0x61, .data=&XG_FONT_Alagard_12pt_bitmaps[890], .width=7, .height=9, .data_size=8, },	/* 'a' */
	{ .code=0x62, .data=&XG_FONT_Alagard_12pt_bitmaps[904], .width=7, .height=9, .data_size=8, },	/* 'b' */
	{ .code=0x63, .data=&XG_FONT_Alagard_12pt_bitmaps[918], .width=6, .height=9, .data_size=8, },	/* 'c' */
	{ .code=0x64, .data=&XG_FONT_Alagard_12pt_bitmaps[930], .width=7, .height=9, .data_size=8, },	/* 'd' */
	{ .code=0x65, .data=&XG_FONT_Alagard_12pt_bitmaps[944], .width=6, .height=9, .data_size=8, },	/* 'e' */
	{ .code=0x66, .data=&XG_FONT_Alagard_12pt_bitmaps[956], .width=7, .height=9, .data_size=8, },	/* 'f' */
	{ .code=0x67, .data=&XG_FONT_Alagard_12pt_bitmaps[970], .width=7, .height=11, .data_size=8, },	/* 'g' */
	{ .code=0x68, .data=&XG_FONT_Alagard_12pt_bitmaps[984], .width=8, .height=9, .data_size=8, },	/* 'h' */
	{ .code=0x69, .data=&XG_FONT_Alagard_12pt_bitmaps[1000], .width=4, .height=9, .data_size=8, },	/* 'i' */
	{ .code=0x6a, .data=&XG_FONT_Alagard_12pt_bitmaps[1008], .width=4, .height=11, .data_size=8, },	/* 'j' */
	{ .code=0x6b, .data=&XG_FONT_Alagard_12pt_bitmaps[1016], .width=8, .height=9, .data_size=8, },	/* 'k' */
	{ .code=0x6c, .data=&XG_FONT_Alagard_12pt_bitmaps[1032], .width=5, .height=9, .data_size=8, },	/* 'l' */
	{ .code=0x6d, .data=&XG_FONT_Alagard_12pt_bitmaps[1042], .width=11, .height=9, .data_size=8, },	/* 'm' */
	{ .code=0x6e, .data=&XG_FONT_Alagard_12pt_bitmaps[1064], .width=8, .height=9, .data_size=8, },	/* 'n' */
	{ .code=0x6f, .data=&XG_FONT_Alagard_12pt_bitmaps[1080], .width=7, .height=9, .data_size=8, },	/* 'o' */
	{ .code=0x70, .data=&XG_FONT_Alagard_12pt_bitmaps[1094], .width=8, .height=11, .data_size=8, },	/* 'p' */
	{ .code=0x71, .data=&XG_FONT_Alagard_12pt_bitmaps[1110], .width=8, .height=11, .data_size=8, },	/* 'q' */
	{ .code=0x72, .data=&XG_FONT_Alagard_12pt_bitmaps[1126], .width=7, .height=9, .data_size=8, },	/* 'r' */
	{ .code=0x73, .data=&XG_FONT_Alagard_12pt_bitmaps[1140], .width=6, .height=9, .data_size=8, },	/* 's' */
	{ .code=0x74, .data=&XG_FONT_Alagard_12pt_bitmaps[1152], .width=6, .height=9, .data_size=8, },	/* 't' */
	{ .code=0x75, .data=&XG_FONT_Alagard_12pt_bitmaps[1164], .width=9, .height=9, .data_size=8, },	/* 'u' */
	{ .code=0x76, .data=&XG_FONT_Alagard_12pt_bitmaps[1182], .width=8, .height=9, .data_size=8, },	/* 'v' */
	{ .code=0x77, .data=&XG_FONT_Alagard_12pt_bitmaps[1198], .width=10, .height=9, .data_size=8, },	/* 'w' */
	{ .code=0x78, .data=&XG_FONT_Alagard_12pt_bitmaps[1218], .width=8, .height=9, .data_size=8, },	/* 'x' */
	{ .code=0x79, .data=&XG_FONT_Alagard_12pt_bitmaps[1234], .width=7, .height=11, .data_size=8, },	/* 'y' */
	{ .code=0x7a, .data=&XG_FONT_Alagard_12pt_bitmaps[1248], .width=6, .height=9, .data_size=8, },	/* 'z' */
	{ .code=0x7b, .data=&XG_FONT_Alagard_12pt_bitmaps[1260], .width=4, .height=12, .data_size=8, },	/* '{' */
	{ .code=0x7c, .data=&XG_FONT_Alagard_12pt_bitmaps[1268], .width=4, .height=12, .data_size=8, },	/* '|' */
	{ .code=0x7d, .data=&XG_FONT_Alagard_12pt_bitmaps[1276], .width=4, .height=12, .data_size=8, },	/* '}' */
	{ .code=0x7e, .data=&XG_FONT_Alagard_12pt_bitmaps[1284], .width=7, .height=12, .data_size=8, },	/* '~' */
};

/* Font */
const xg_font_t XG_FONT_Alagard_12pt = {
	.length = 95,
	.glyphs = XG_FONT_Alagard_12pt_glyphs,
};

#endif /* XG_FONT_Alagard_12pt_H_ */

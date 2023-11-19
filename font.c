/* Copyright 2023 Dual Tachyon
 * https://github.com/DualTachyon
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 */

#include "font.h"


#if 0

#elif 0

#else

const uint8_t gFontBigDigits[11][20] =
        {




//
//
                {/*0x00, 0x00,*/ 0xFC, 0xFE, 0xFE, 0x06, 0x86, 0xC6, 0xE6, 0xFE, 0xFE, 0xFC, /*0x00,*/     /*0x00, 0x00,*/ 0x3F, 0x7F, 0x7F, 0x67, 0x63, 0x61, 0x60, 0x7F, 0x7F, 0x3F, /*0x00*/},
                {/*0x00, 0x00,*/ 0x00, 0x00, 0x18, 0x1C, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, /*0x00,*/     /*0x00, 0x00,*/ 0x00, 0x00, 0x60, 0x60, 0x7F, 0x7F, 0x7F, 0x60, 0x60, 0x00, /*0x00*/},
                {/*0x00, 0x00,*/ 0x1C, 0x1E, 0x1E, 0x06, 0x06, 0x06, 0x86, 0xFE, 0xFE, 0x7C, /*0x00,*/     /*0x00, 0x00,*/ 0x60, 0x70, 0x78, 0x7C, 0x6E, 0x67, 0x63, 0x61, 0x60, 0x60, /*0x00*/},
                {/*0x00, 0x00,*/ 0x0C, 0x0E, 0x0E, 0x86, 0x86, 0x86, 0x86, 0xFE, 0xFE, 0x7C, /*0x00,*/     /*0x00, 0x00,*/ 0x30, 0x70, 0x70, 0x61, 0x61, 0x61, 0x61, 0x7F, 0x7F, 0x3E, /*0x00*/},
                {/*0x00, 0x00,*/ 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0xFE, 0xFE, 0xFE, /*0x00,*/     /*0x00, 0x00,*/ 0x0F, 0x0F, 0x0F, 0x0C, 0x0C, 0x0C, 0x0C, 0x7F, 0x7F, 0x7F, /*0x00*/},
                {/*0x00, 0x00,*/ 0xFE, 0xFE, 0xFE, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x86, /*0x00,*/     /*0x00, 0x00,*/ 0x30, 0x70, 0x70, 0x60, 0x60, 0x60, 0x60, 0x7F, 0x7F, 0x3F, /*0x00*/},
                {/*0x00, 0x00,*/ 0xF8, 0xFC, 0xFE, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x80, /*0x00,*/     /*0x00, 0x00,*/ 0x3F, 0x7F, 0x7F, 0x60, 0x60, 0x60, 0x60, 0x7F, 0x7F, 0x3F, /*0x00*/},
                {/*0x00, 0x00,*/ 0x0E, 0x0E, 0x0E, 0x06, 0x06, 0x86, 0xE6, 0xFE, 0x7E, 0x1E, /*0x00,*/     /*0x00, 0x00,*/ 0x00, 0x00, 0x00, 0x00, 0x7C, 0x7F, 0x7F, 0x03, 0x00, 0x00, /*0x00*/},
                {/*0x00, 0x00,*/ 0x7C, 0xFE, 0xFE, 0x86, 0x86, 0x86, 0x86, 0xFE, 0xFE, 0x7C, /*0x00,*/     /*0x00, 0x00,*/ 0x3F, 0x7F, 0x7F, 0x61, 0x61, 0x61, 0x61, 0x7F, 0x7F, 0x3F, /*0x00*/},
                {/*0x00, 0x00,*/ 0xFC, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0xFC, /*0x00,*/     /*0x00, 0x00,*/ 0x01, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x7F, 0x3F, 0x1F, /*0x00*/},
                {/*0x00, 0x00,*/ 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, /*0x00,*/     /*0x00, 0x00,*/ 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, /*0x00*/}
        };
#endif

const uint8_t gFontSmall[95-1][6] =
        {
//  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00},    // ' '
                {0x00, 0x00, 0x5E, 0x00, 0x00, 0x00},    // '!'0
                {0x00, 0x06, 0x00, 0x06, 0x00, 0x00},    // '"'
                {0x14, 0x3E, 0x14, 0x3E, 0x14, 0x00},    // '#'
                {0x26, 0x49, 0x7F, 0x49, 0x32, 0x00},    // '$'
                {0x63, 0x13, 0x08, 0x04, 0x62, 0x61},    // '%'0
                {0x30, 0x4B, 0x4D, 0x55, 0x22, 0x50},    // '&'
                {0x00, 0x00, 0x07, 0x07, 0x00, 0x00},    // '''
                {0x00, 0x1C, 0x22, 0x41, 0x00, 0x00},    // '('
                {0x00, 0x41, 0x22, 0x1C, 0x00, 0x00},    // ')'
                {0x00, 0x2A, 0x1C, 0x1C, 0x2A, 0x00},    // '*'
                {0x08, 0x08, 0x3E, 0x08, 0x08, 0x00},    // '+'0
                {0x00, 0x40, 0x60, 0x20, 0x00, 0x00},    // ','
                {0x00, 0x08, 0x08, 0x08, 0x08, 0x00},    // '-'0
                {0x00, 0x00, 0x60, 0x60, 0x00, 0x00},    // '.'0
                {0x40, 0x20, 0x10, 0x08, 0x04, 0x02},    // '/'0
                {0x3E, 0x41, 0x41, 0x41, 0x41, 0x3E},    // '0'
                {0x00, 0x40, 0x42, 0x7F, 0x40, 0x40},    // '1'
                {0x62, 0x51, 0x51, 0x49, 0x49, 0x46},    // '2'
                {0x22, 0x41, 0x49, 0x49, 0x49, 0x36},    // '3'
                {0x18, 0x14, 0x12, 0x11, 0x7F, 0x10},    // '4'
                {0x27, 0x45, 0x45, 0x45, 0x45, 0x39},    // '5'
                {0x3E, 0x49, 0x49, 0x49, 0x49, 0x32},    // '6'
                {0x01, 0x01, 0x71, 0x09, 0x05, 0x03},    // '7'
                {0x36, 0x49, 0x49, 0x49, 0x49, 0x36},    // '8'
                {0x46, 0x49, 0x49, 0x49, 0x29, 0x1E},    // '9'
                {0x00, 0x00, 0x6C, 0x6C, 0x00, 0x00},    // ':'
                {0x00, 0x40, 0x6C, 0x2C, 0x00, 0x00},    // ';'
                {0x08, 0x14, 0x22, 0x41, 0x00, 0x00},    // '<'
                {0x14, 0x14, 0x14, 0x14, 0x14, 0x00},    // '='
                {0x00, 0x41, 0x22, 0x14, 0x08, 0x00},    // '>'
                {0x02, 0x01, 0x51, 0x09, 0x06, 0x00},    // '?'
                {0x30, 0x4A, 0x4A, 0x52, 0x3C, 0x00},    // '@'
                {0x7E, 0x09, 0x09, 0x09, 0x09, 0x7E},    // 'A'
                {0x7F, 0x49, 0x49, 0x49, 0x49, 0x36},    // 'B'
                {0x3E, 0x41, 0x41, 0x41, 0x41, 0x22},    // 'C'
                {0x7F, 0x41, 0x41, 0x41, 0x41, 0x3E},    // 'D'
                {0x7F, 0x49, 0x49, 0x49, 0x49, 0x41},    // 'E'
                {0x7F, 0x09, 0x09, 0x09, 0x09, 0x01},    // 'F'
                {0x3E, 0x41, 0x49, 0x49, 0x49, 0x3A},    // 'G'
                {0x7F, 0x08, 0x08, 0x08, 0x08, 0x7F},    // 'H'
                {0x41, 0x41, 0x7F, 0x41, 0x41, 0x00},    // 'I'
                {0x20, 0x41, 0x41, 0x3F, 0x01, 0x01},    // 'J'
                {0x7F, 0x08, 0x0C, 0x12, 0x21, 0x40},    // 'K'
                {0x7F, 0x40, 0x40, 0x40, 0x40, 0x40},    // 'L'
                {0x7F, 0x02, 0x04, 0x04, 0x02, 0x7F},    // 'M'
                {0x7F, 0x02, 0x04, 0x08, 0x10, 0x7F},    // 'N'
                {0x3E, 0x41, 0x41, 0x41, 0x41, 0x3E},    // 'O'
                {0x7F, 0x09, 0x09, 0x09, 0x09, 0x06},    // 'P'
                {0x3E, 0x41, 0x51, 0x61, 0x41, 0x3E},    // 'Q'
                {0x7F, 0x09, 0x09, 0x19, 0x29, 0x46},    // 'R'
                {0x26, 0x49, 0x49, 0x49, 0x49, 0x32},    // 'S'
                {0x01, 0x01, 0x7F, 0x01, 0x01, 0x00},    // 'T'
                {0x3F, 0x40, 0x40, 0x40, 0x40, 0x3F},    // 'U'
                {0x07, 0x38, 0x40, 0x40, 0x38, 0x07},    // 'V'
                {0x3F, 0x40, 0x30, 0x30, 0x40, 0x3F},    // 'W'
                {0x63, 0x14, 0x08, 0x08, 0x14, 0x63},    // 'X'
                {0x07, 0x08, 0x70, 0x08, 0x07, 0x00},    // 'Y'
                {0x61, 0x51, 0x49, 0x45, 0x43, 0x41},    // 'Z'
                {0x00, 0x7F, 0x41, 0x41, 0x00, 0x00},    // '['
                {0x01, 0x02, 0x04, 0x08, 0x10, 0x60},    // '"\'
                {0x00, 0x00, 0x41, 0x41, 0x7F, 0x00},    // ']'
                {0x04, 0x02, 0x01, 0x02, 0x04, 0x00},    // '^'
                {0x40, 0x40, 0x40, 0x40, 0x40, 0x40},    // '_'
                {0x00, 0x03, 0x07, 0x06, 0x00, 0x00},    // '`'
                {0x20, 0x54, 0x54, 0x54, 0x78, 0x00},    // 'a'
                {0x7F, 0x44, 0x44, 0x44, 0x38, 0x00},    // 'b'
                {0x38, 0x44, 0x44, 0x44, 0x28, 0x00},    // 'c'
                {0x38, 0x44, 0x44, 0x44, 0x7F, 0x00},    // 'd'
                {0x38, 0x54, 0x54, 0x54, 0x48, 0x00},    // 'e'
                {0x7C, 0x0A, 0x0A, 0x0A, 0x02, 0x00},    // 'f'
                {0x58, 0x54, 0x54, 0x54, 0x3C, 0x00},    // 'g'
                {0x7F, 0x04, 0x04, 0x04, 0x78, 0x00},    // 'h'
                {0x00, 0x00, 0x7A, 0x00, 0x00, 0x00},    // 'i'
                {0x20, 0x40, 0x40, 0x3D, 0x00, 0x00},    // 'j'
                {0x00, 0x7F, 0x10, 0x28, 0x44, 0x00},    // 'k'
                {0x00, 0x00, 0x3F, 0x40, 0x00, 0x00},    // 'l'
                {0x7C, 0x08, 0x10, 0x10, 0x08, 0x7C},    // 'm'
                {0x7C, 0x04, 0x04, 0x04, 0x78, 0x00},    // 'n'
                {0x38, 0x44, 0x44, 0x44, 0x38, 0x00},    // 'o'
                {0x7C, 0x14, 0x14, 0x14, 0x08, 0x00},    // 'p'
                {0x08, 0x14, 0x14, 0x14, 0x7C, 0x40},    // 'q'
                {0x7C, 0x04, 0x04, 0x04, 0x08, 0x00},    // 'r'
                {0x08, 0x54, 0x54, 0x54, 0x20, 0x00},    // 's'
                {0x3F, 0x44, 0x44, 0x44, 0x40, 0x00},    // 't'
                {0x3C, 0x40, 0x40, 0x40, 0x3C, 0x00},    // 'u'
                {0x0C, 0x30, 0x40, 0x30, 0x0C, 0x00},    // 'v'
                {0x3C, 0x40, 0x30, 0x40, 0x3C, 0x00},    // 'w'
                {0x44, 0x28, 0x10, 0x28, 0x44, 0x00},    // 'x'
                {0x0C, 0x50, 0x50, 0x50, 0x3C, 0x00},    // 'y'
                {0x44, 0x64, 0x54, 0x4C, 0x44, 0x00},    // 'z'
                {0x08, 0x36, 0x41, 0x00, 0x00, 0x00},    // '{'
                {0x00, 0x00, 0x7F, 0x00, 0x00, 0x00},    // '|'
                {0x00, 0x00, 0x41, 0x36, 0x08, 0x00},    // '}'
                {0x04, 0x02, 0x04, 0x08, 0x04, 0x00}     // '->'
        };

#ifdef ENABLE_SMALL_BOLD
const uint8_t gFontSmallBold[95 - 1][6] =
	{
//  	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
		{0x00, 0x00, 0x5E, 0x5E, 0x00, 0x00},
		{0x06, 0x06, 0x00, 0x06, 0x06, 0x00},
		{0x14, 0x3E, 0x14, 0x3E, 0x14, 0x00},
		{0x2E, 0x6B, 0x7F, 0x6B, 0x3A, 0x00},
		{0x63, 0x33, 0x18, 0x0C, 0x66, 0x63},
		{0x30, 0x4B, 0x4D, 0x55, 0x22, 0x50},
		{0x00, 0x00, 0x07, 0x07, 0x00, 0x00},
		{0x00, 0x1C, 0x3E, 0x63, 0x41, 0x00},
		{0x00, 0x41, 0x63, 0x3E, 0x1C, 0x00},
		{0x00, 0x2A, 0x1C, 0x1C, 0x2A, 0x00},
		{0x18, 0x18, 0x7E, 0x7E, 0x18, 0x18},
		{0x00, 0x40, 0x60, 0x20, 0x00, 0x00},
		{0x00, 0x18, 0x18, 0x18, 0x18, 0x00},
		{0x00, 0x00, 0x60, 0x60, 0x00, 0x00},
		{0x60, 0x30, 0x18, 0x0C, 0x06, 0x03},
		{0x3E, 0x7F, 0x63, 0x63, 0x7F, 0x3E},
		{0x64, 0x66, 0x7F, 0x7F, 0x60, 0x60},
		{0x62, 0x73, 0x7B, 0x7B, 0x6F, 0x66},
		{0x63, 0x63, 0x6B, 0x6B, 0x7F, 0x36},
		{0x38, 0x3C, 0x36, 0x7F, 0x7F, 0x30},
		{0x6F, 0x6F, 0x6B, 0x6B, 0x7B, 0x33},
		{0x3E, 0x7F, 0x6B, 0x6B, 0x7B, 0x32},
		{0x03, 0x03, 0x73, 0x7B, 0x0F, 0x07},
		{0x36, 0x7F, 0x6B, 0x6B, 0x7F, 0x36},
		{0x06, 0x6F, 0x6B, 0x6B, 0x7F, 0x3E},
		{0x00, 0x00, 0x6C, 0x6C, 0x00, 0x00},
		{0x00, 0x40, 0x6C, 0x2C, 0x00, 0x00},
		{0x08, 0x14, 0x22, 0x41, 0x00, 0x00},
		{0x36, 0x36, 0x36, 0x36, 0x36, 0x00},
		{0x00, 0x41, 0x22, 0x14, 0x08, 0x00},
		{0x06, 0x07, 0x53, 0x5B, 0x1F, 0x0E},
		{0x30, 0x7B, 0x6B, 0x7B, 0x7F, 0x3E},
		{0x7E, 0x7F, 0x1B, 0x1B, 0x7F, 0x7E},
		{0x7F, 0x7F, 0x6B, 0x6B, 0x7F, 0x36},
		{0x3E, 0x7F, 0x63, 0x63, 0x63, 0x36},
		{0x7F, 0x7F, 0x63, 0x63, 0x7F, 0x3E},
		{0x7F, 0x7F, 0x6B, 0x6B, 0x6B, 0x63},
		{0x7F, 0x7F, 0x1B, 0x1B, 0x1B, 0x03},
		{0x3E, 0x7F, 0x63, 0x6B, 0x7B, 0x3A},
		{0x7F, 0x7F, 0x0C, 0x0C, 0x7F, 0x7F},
		{0x63, 0x63, 0x7F, 0x7F, 0x63, 0x63},
		{0x30, 0x73, 0x63, 0x7F, 0x3F, 0x03},
		{0x7F, 0x7F, 0x1C, 0x36, 0x63, 0x41},
		{0x7F, 0x7F, 0x60, 0x60, 0x60, 0x60},
		{0x7F, 0x7F, 0x06, 0x06, 0x7F, 0x7F},
		{0x7F, 0x7F, 0x0C, 0x18, 0x7F, 0x7F},
		{0x3E, 0x7F, 0x63, 0x63, 0x7F, 0x3E},
		{0x7F, 0x7F, 0x1B, 0x1B, 0x1F, 0x0E},
		{0x3E, 0x7F, 0x63, 0x73, 0x7F, 0x7E},
		{0x7F, 0x7F, 0x1B, 0x3B, 0x7F, 0x66},
		{0x66, 0x6F, 0x6B, 0x6B, 0x7B, 0x33},
		{0x03, 0x03, 0x7F, 0x7F, 0x03, 0x03},
		{0x3F, 0x7F, 0x60, 0x60, 0x7F, 0x3F},
		{0x1F, 0x3F, 0x60, 0x60, 0x3F, 0x1F},
		{0x3F, 0x7F, 0x30, 0x30, 0x7F, 0x3F},
		{0x63, 0x77, 0x1C, 0x1C, 0x77, 0x63},
		{0x07, 0x0F, 0x78, 0x78, 0x0F, 0x07},
		{0x63, 0x73, 0x7B, 0x6F, 0x67, 0x63},
		{0x00, 0x7F, 0x7F, 0x63, 0x63, 0x00},
		{0x01, 0x02, 0x04, 0x08, 0x10, 0x60},
		{0x00, 0x63, 0x63, 0x7F, 0x7F, 0x00},
		{0x0C, 0x0E, 0x03, 0x03, 0x0E, 0x0C},
		{0x60, 0x60, 0x60, 0x60, 0x60, 0x60},
		{0x00, 0x03, 0x07, 0x06, 0x00, 0x00},
		{0x20, 0x76, 0x56, 0x56, 0x7E, 0x3C},
		{0x7F, 0x7F, 0x6C, 0x6C, 0x7C, 0x38},
		{0x38, 0x7C, 0x6C, 0x6C, 0x6C, 0x00},
		{0x38, 0x7C, 0x6C, 0x6C, 0x7F, 0x7F},
		{0x3C, 0x7E, 0x56, 0x56, 0x5E, 0x0C},
		{0x7E, 0x7F, 0x1B, 0x1B, 0x02, 0x00},
		{0x0C, 0x5E, 0x56, 0x56, 0x7E, 0x3C},
		{0x7F, 0x7F, 0x0C, 0x0C, 0x7C, 0x78},
		{0x00, 0x00, 0x7A, 0x7A, 0x00, 0x00},
		{0x30, 0x60, 0x60, 0x7D, 0x3D, 0x00},
		{0x7F, 0x7F, 0x18, 0x3C, 0x7E, 0x66},
		{0x00, 0x3F, 0x7F, 0x40, 0x00, 0x00},
		{0x7C, 0x7C, 0x18, 0x18, 0x7C, 0x7C},
		{0x7C, 0x7C, 0x0C, 0x0C, 0x7C, 0x78},
		{0x3C, 0x7E, 0x66, 0x66, 0x7E, 0x3C},
		{0x7E, 0x7E, 0x36, 0x36, 0x3E, 0x1C},
		{0x1C, 0x3E, 0x36, 0x7E, 0x7E, 0x60},
		{0x7C, 0x7C, 0x0C, 0x0C, 0x18, 0x00},
		{0x4C, 0x5E, 0x56, 0x56, 0x76, 0x20},
		{0x3F, 0x7F, 0x6C, 0x6C, 0x60, 0x00},
		{0x3C, 0x7C, 0x60, 0x60, 0x7C, 0x3C},
		{0x0C, 0x3C, 0x70, 0x70, 0x3C, 0x0C},
		{0x3C, 0x7C, 0x30, 0x30, 0x7C, 0x3C},
		{0x44, 0x6C, 0x38, 0x38, 0x6C, 0x44},
		{0x06, 0x6E, 0x68, 0x68, 0x7E, 0x3E},
		{0x66, 0x76, 0x7E, 0x6E, 0x66, 0x00},
		{0x08, 0x3E, 0x77, 0x41, 0x00, 0x00},
		{0x00, 0x00, 0x7F, 0x00, 0x00, 0x00},
		{0x00, 0x41, 0x77, 0x3E, 0x08, 0x00},
		{0x0C, 0x06, 0x0C, 0x18, 0x0C, 0x00}
	};
#endif

#ifdef ENABLE_SPECTRUM
const uint8_t gFont3x5[][3] =
	{
		{0x00, 0x00, 0x00}, //  32 - space
		{0x00, 0x17, 0x00}, //  33 - exclam
		{0x03, 0x00, 0x03}, //  34 - quotedbl
		{0x1f, 0x0a, 0x1f}, //  35 - numbersign
		{0x0a, 0x1f, 0x05}, //  36 - dollar
		{0x09, 0x04, 0x12}, //  37 - percent
		{0x0f, 0x17, 0x1c}, //  38 - ampersand
		{0x00, 0x03, 0x00}, //  39 - quotesingle
		{0x00, 0x0e, 0x11}, //  40 - parenleft
		{0x11, 0x0e, 0x00}, //  41 - parenright
		{0x05, 0x02, 0x05}, //  42 - asterisk
		{0x04, 0x0e, 0x04}, //  43 - plus
		{0x10, 0x08, 0x00}, //  44 - comma
		{0x04, 0x04, 0x04}, //  45 - hyphen
		{0x00, 0x10, 0x00}, //  46 - period
		{0x18, 0x04, 0x03}, //  47 - slash
		{0x1e, 0x11, 0x0f}, //  48 - zero
		{0x02, 0x1f, 0x00}, //  49 - one
		{0x19, 0x15, 0x12}, //  50 - two
		{0x11, 0x15, 0x0a}, //  51 - three
		{0x07, 0x04, 0x1f}, //  52 - four
		{0x17, 0x15, 0x09}, //  53 - five
		{0x1e, 0x15, 0x1d}, //  54 - six
		{0x19, 0x05, 0x03}, //  55 - seven
		{0x1f, 0x15, 0x1f}, //  56 - eight
		{0x17, 0x15, 0x0f}, //  57 - nine
		{0x00, 0x0a, 0x00}, //  58 - colon
		{0x10, 0x0a, 0x00}, //  59 - semicolon
		{0x04, 0x0a, 0x11}, //  60 - less
		{0x0a, 0x0a, 0x0a}, //  61 - equal
		{0x11, 0x0a, 0x04}, //  62 - greater
		{0x01, 0x15, 0x03}, //  63 - question
		{0x0e, 0x15, 0x16}, //  64 - at
		{0x1e, 0x05, 0x1e}, //  65 - A
		{0x1f, 0x15, 0x0a}, //  66 - B
		{0x0e, 0x11, 0x11}, //  67 - C
		{0x1f, 0x11, 0x0e}, //  68 - D
		{0x1f, 0x15, 0x15}, //  69 - E
		{0x1f, 0x05, 0x05}, //  70 - F
		{0x0e, 0x15, 0x1d}, //  71 - G
		{0x1f, 0x04, 0x1f}, //  72 - H
		{0x11, 0x1f, 0x11}, //  73 - I
		{0x08, 0x10, 0x0f}, //  74 - J
		{0x1f, 0x04, 0x1b}, //  75 - K
		{0x1f, 0x10, 0x10}, //  76 - L
		{0x1f, 0x06, 0x1f}, //  77 - M
		{0x1f, 0x0e, 0x1f}, //  78 - N
		{0x0e, 0x11, 0x0e}, //  79 - O
		{0x1f, 0x05, 0x02}, //  80 - P
		{0x0e, 0x19, 0x1e}, //  81 - Q
		{0x1f, 0x0d, 0x16}, //  82 - R
		{0x12, 0x15, 0x09}, //  83 - S
		{0x01, 0x1f, 0x01}, //  84 - T
		{0x0f, 0x10, 0x1f}, //  85 - U
		{0x07, 0x18, 0x07}, //  86 - V
		{0x1f, 0x0c, 0x1f}, //  87 - W
		{0x1b, 0x04, 0x1b}, //  88 - X
		{0x03, 0x1c, 0x03}, //  89 - Y
		{0x19, 0x15, 0x13}, //  90 - Z
		{0x1f, 0x11, 0x11}, //  91 - bracketleft
		{0x02, 0x04, 0x08}, //  92 - backslash
		{0x11, 0x11, 0x1f}, //  93 - bracketright
		{0x02, 0x01, 0x02}, //  94 - asciicircum
		{0x10, 0x10, 0x10}, //  95 - underscore
		{0x01, 0x02, 0x00}, //  96 - grave
		{0x1a, 0x16, 0x1c}, //  97 - a
		{0x1f, 0x12, 0x0c}, //  98 - b
		{0x0c, 0x12, 0x12}, //  99 - c
		{0x0c, 0x12, 0x1f}, // 100 - d
		{0x0c, 0x1a, 0x16}, // 101 - e
		{0x04, 0x1e, 0x05}, // 102 - f
		{0x0c, 0x2a, 0x1e}, // 103 - g
		{0x1f, 0x02, 0x1c}, // 104 - h
		{0x00, 0x1d, 0x00}, // 105 - i
		{0x10, 0x20, 0x1d}, // 106 - j
		{0x1f, 0x0c, 0x12}, // 107 - k
		{0x11, 0x1f, 0x10}, // 108 - l
		{0x1e, 0x0e, 0x1e}, // 109 - m
		{0x1e, 0x02, 0x1c}, // 110 - n
		{0x0c, 0x12, 0x0c}, // 111 - o
		{0x3e, 0x12, 0x0c}, // 112 - p
		{0x0c, 0x12, 0x3e}, // 113 - q
		{0x1c, 0x02, 0x02}, // 114 - r
		{0x14, 0x1e, 0x0a}, // 115 - s
		{0x02, 0x1f, 0x12}, // 116 - t
		{0x0e, 0x10, 0x1e}, // 117 - u
		{0x0e, 0x18, 0x0e}, // 118 - v
		{0x1e, 0x1c, 0x1e}, // 119 - w
		{0x12, 0x0c, 0x12}, // 120 - x
		{0x06, 0x28, 0x1e}, // 121 - y
		{0x1a, 0x1e, 0x16}, // 122 - z
		{0x04, 0x1b, 0x11}, // 123 - braceleft
		{0x00, 0x1b, 0x00}, // 124 - bar
		{0x11, 0x1b, 0x04}, // 125 - braceright
		{0x02, 0x03, 0x01}, // 126 - asciitilde
		{0x12, 0x17, 0x12}, // 127 - plusminus

	};
#endif
const uint8_t gFontChinese_out[2187]={
0X88,0X48,0X2E,0X08,0X08,0X7F,0X8A,
0X4A,0X2A,0X08,0X00,0XA8,0X06,
0X40,0X82,0X3E,0X00,0X25,0XD5,
0X0F,0XC5,0X3F,0X05,0X05,0X80,
0XA9,0XAA,0XE2,0X84,0XF2,0XA7,
0XA8,0X06,0XD0,0X77,0XD0,0X5F,
0XD0,0XA7,0X01,0X46,0X0A,0XAA,
0X4A,0X0A,0XCF,0XCB,0X0B,0X4B,
0XAA,0X0A,0X02,0X00,0X0C,0X00,
0X04,0X87,0X64,0X1C,0X07,0X34,
0XD4,0X55,0X35,0X02,0X04,0X86,
0X56,0X29,0X90,0XDF,0XB2,0X94,
0X3F,0X00,0X01,0X19,0XC1,0X3F,
0X81,0XE1,0XA0,0X23,0XE8,0X2F,
0X28,0X08,0X40,0X40,0X40,0XFC,
0X43,0XC0,0X0F,0XA0,0X81,0X91,
0XFC,0X53,0X00,0XA8,0XB8,0XEF,
0XA8,0XBA,0XA9,0X00,0X38,0X6A,
0X29,0XFE,0X80,0X40,0XFF,0X00,
0X08,0X04,0X3B,0XC2,0X7E,0X02,
0XC0,0XA0,0X65,0X95,0X33,0XDB,
0X97,0X53,0X35,0XC2,0X1F,0X21,
0X1F,0X81,0X56,0X1A,0XE9,0X24,
0XA4,0XA4,0XA4,0XB4,0XAE,0X25,
0X24,0XE4,0X04,0X00,0XE8,0X00,
0X64,0X84,0X05,0XFC,0X07,0X04,
0XFC,0X07,0X84,0X65,0X00,0XA8,
0XEB,0X2A,0X08,0X0A,0XEE,0XAE,
0XAB,0XAA,0XAE,0XEE,0X0A,0X08,
0X00,0XB0,0XEA,0X00,0X11,0XCD,
0X3F,0X05,0X90,0XDE,0X97,0XF6,
0X9B,0X1E,0X10,0X8C,0X46,0X4A,
0XF2,0X4F,0X01,0XE0,0X0F,0X24,
0XC2,0X08,0XFC,0X03,0XE0,0X80,
0X41,0X26,0XE8,0X03,0X50,0X56,
0XFA,0X59,0X55,0X52,0X02,0X00,
0X98,0XAA,0X2A,0X12,0X9A,0X7A,
0X1B,0X5E,0X5A,0XDB,0X5A,0X5A,
0X12,0X12,0XA1,0XBA,0X0A,0X01,
0X01,0X01,0X61,0X1F,0X05,0X05,
0X05,0X05,0X3D,0X81,0X06,0XA8,
0XE1,0X2F,0X20,0XA0,0XBF,0XA8,
0XA8,0X2F,0X20,0XE0,0X0F,0X30,
0X00,0XE8,0X18,0X28,0XE8,0X7B,
0X68,0X6C,0X6B,0XF8,0X2B,0X18,
0X00,0XA8,0XC6,0X3A,0X46,0X4A,
0X2A,0X16,0XF2,0X53,0X56,0X5A,
0X5A,0X16,0X00,0X00,0X57,0X81,
0X84,0XFC,0X8D,0X8C,0XCC,0XBD,
0X8C,0XCC,0X8D,0XBC,0X04,0X01,
0X53,0XD1,0XFF,0XDA,0XF9,0XDA,
0X0F,0X10,0X1F,0X11,0XF1,0X09,
0XB0,0X3A,0XEB,0X2C,0X34,0XB4,
0XAF,0XF5,0XB7,0XAE,0XB4,0X37,
0X2C,0X00,0XE8,0XFA,0X2B,0X04,
0X84,0X7F,0X04,0X04,0XFC,0X00,
0XFE,0X02,0X02,0XFE,0X86,0X46,
0X95,0X8D,0XAA,0X84,0X8E,0XCD,
0XAE,0X89,0X8C,0XA2,0X05,0X00,
0XAB,0XEB,0X10,0X21,0X0F,0X80,
0X9F,0XBA,0XDA,0XBF,0X9A,0X8A,
0X0F,0X60,0XAE,0XEB,0X26,0XE8,
0X03,0X00,0X20,0X28,0X2B,0XF9,
0X25,0X25,0X23,0XB0,0XB1,0X3A,
0X09,0XFA,0X00,0XEF,0X2D,0XAD,
0XFF,0XAD,0X2D,0XEF,0X00,0XA6,
0XAA,0X0A,0X07,0XC0,0X3F,0X02,
0X00,0X01,0XFF,0X01,0X01,0X01,
0X01,0X0C,0XAC,0XAA,0X64,0XF5,
0X65,0XA5,0X05,0XAD,0X65,0XF5,
0X65,0XA5,0XA4,0XE1,0X90,0X02,
0XFC,0X07,0X44,0X44,0XF4,0X47,
0X44,0X45,0X06,0X00,0X98,0XBA,
0X2A,0X12,0XFF,0X0A,0X00,0XF8,
0X04,0X04,0X05,0X04,0X04,0X00,
0X8C,0X01,0X40,0X82,0X3E,0X00,
0XC0,0X7F,0X40,0XF9,0X6F,0X79,
0XC0,0X3F,0X5B,0X80,0X4E,0XBE,
0XA2,0XF2,0XAF,0XA2,0X02,0X0E,
0XE0,0X07,0XF0,0X1F,0X4C,0XA1,
0X53,0X50,0XD0,0X53,0X50,0X50,
0X10,0XFC,0X10,0X17,0X18,0XEA,
0X16,0XD0,0X24,0XFF,0X14,0X00,
0X1E,0X5A,0XD0,0X7F,0X50,0XDA,
0X5E,0X0E,0X7A,0X29,0X86,0XA2,
0XAA,0XAA,0XF6,0XB7,0XAA,0XA6,
0XA2,0X02,0X86,0XC6,0X90,0X12,
0X92,0XF1,0X90,0X92,0X0F,0XC0,
0X07,0X00,0XF0,0X0F,0X80,0X06,
0XE8,0X80,0XA8,0XA8,0XAA,0XAA,
0XFD,0XA8,0XA9,0XAA,0XA8,0X82,
0X10,0X1B,0XA4,0X22,0X12,0XFA,
0X06,0X43,0X4A,0X4A,0XEA,0X5A,
0X42,0X02,0X30,0XE0,0X00,0X02,
0XFF,0X00,0X80,0XA0,0XEA,0XAA,
0XAA,0XAA,0X20,0X00,0XC3,0XAA,
0X93,0XA0,0X0F,0X20,0XA0,0XBF,
0X6D,0XB5,0XAD,0X2F,0X00,0X60,
0XAA,0XAA,0XFC,0X47,0XFC,0X43,
0XFC,0X47,0XFC,0X03,0XF8,0X01,
0XFC,0XC7,0XC4,0XE0,0XFF,0X81,
0XFF,0X00,0X04,0XA2,0X29,0XF9,
0X29,0XAA,0X04,0X03,0XE1,0X10,
0X02,0X3A,0X89,0XBA,0X42,0XBA,
0X8A,0X0A,0X39,0X02,0X02,0X15,
0X53,0X00,0X40,0X48,0X2D,0X32,
0XAF,0XA3,0XA2,0X62,0X02,0X02,
0X1E,0XB0,0XAA,0X93,0XFC,0X53,
0X00,0X44,0X44,0X44,0X44,0X44,
0X44,0XFC,0X3B,0XA8,0XEA,0X24,
0XFF,0X14,0X00,0XFA,0X4A,0X4F,
0XFA,0X4A,0X4F,0XFA,0X0E,0XEB,
0X3A,0X02,0XFF,0X00,0X13,0X88,
0X86,0XD9,0X90,0XBE,0X88,0X04,
0X03,0X1A,0X49,0X38,0XE8,0XA5,
0XAF,0XA5,0XA5,0XA5,0XED,0X25,
0X00,0XA0,0X5A,0XA9,0X50,0X4C,
0XFA,0X49,0X02,0X04,0X74,0X57,
0X54,0X74,0X07,0X18,0XA3,0XAF,
0X24,0XFF,0X14,0X00,0X16,0X52,
0XBB,0X92,0X72,0X16,0X00,0X0E,
0X6A,0XAA,0X7F,0X80,0X9F,0X80,
0XBE,0X80,0X1F,0X80,0X1F,0XC0,
0XFF,0X18,0X89,0XCE,0XB2,0XAF,
0X42,0X90,0X0F,0XA0,0XA2,0XFA,
0XAF,0XEA,0XC3,0XB2,0X9A,0X40,
0X40,0XFC,0X43,0X60,0X50,0X49,
0X46,0X40,0X40,0X00,0XC0,0X06,
0X29,0X10,0X50,0XBE,0X92,0X9A,
0X93,0X92,0XB2,0X92,0X7E,0X10,
0XBA,0XBB,0X2B,0X80,0XBF,0X94,
0X94,0XD4,0X94,0X94,0X94,0X3F,
0X00,0X00,0XAB,0XEA,0X80,0XA8,
0XA6,0XA1,0XA8,0X0C,0X40,0X40,
0XF8,0X47,0XC0,0X5F,0X11,0X86,
0X31,0XED,0X2B,0X01,0XE4,0X29,
0X20,0XBE,0X21,0X2A,0XE4,0X71,
0X18,0X90,0X06,0X0A,0XEA,0X0A,
0X0A,0XFB,0X4A,0X4A,0X4A,0X0A,
0X06,0X46,0XA5,0X2A,0X82,0XBA,
0XC2,0XBF,0X92,0X12,0XC0,0X7C,
0X64,0XE5,0XFD,0X94,0XAA,0XEA,
0X2F,0X21,0XE1,0X0F,0X40,0X40,
0X41,0X46,0XF0,0X4F,0X50,0X05,
0XE8,0X50,0X48,0XC4,0XA3,0XA2,
0XBE,0XA2,0XB6,0XEA,0X13,0X00,
0XC0,0XAA,0X0E,0X7E,0X4A,0X4A,
0X4A,0XFF,0X4A,0X4A,0X4A,0X7E,
0X00,0X80,0X00,0XAB,0X3A,0X84,
0XA4,0XA6,0XB6,0XDE,0X97,0X96,
0XB6,0X96,0X04,0X84,0X6A,0XA5,
0X2A,0X20,0XA0,0XA3,0XA2,0XFE,
0XA2,0XAE,0XA2,0X23,0X20,0XA8,
0X06,0XA9,0X03,0XFC,0X07,0X14,
0X26,0XC5,0X24,0X15,0X06,0XFC,
0X03,0X18,0X00,0XD0,0X88,0XFE,
0X88,0X00,0X1E,0XFB,0X52,0XDE,
0XB3,0XFA,0X1E,0X00,0XBC,0X8E,
0X84,0XF4,0X92,0XB2,0X90,0X90,
0XF2,0X92,0XB4,0X04,0X80,0XBB,
0XEE,0X02,0XF2,0X55,0X59,0X5F,
0X51,0X51,0X5F,0XF9,0X05,0X02,
0XA0,0XAE,0XAB,0X20,0X24,0XA6,
0X25,0X24,0XE4,0X27,0X24,0XA4,
0X20,0X21,0X06,0X3A,0X40,0X00,
0X20,0X24,0XD6,0X5B,0XEB,0X54,
0XD2,0X50,0X20,0X00,0X14,0X06,
0X01,0X44,0X44,0XE4,0X5F,0X44,
0X44,0XC4,0X7F,0X44,0X04,0X04,
0X06,0X30,0X40,0X44,0XF3,0X4F,
0X02,0XF0,0X1F,0X10,0XF0,0X0F,
0X00,0X08,0X63,0XB0,0X03,0X00,
0XFA,0X49,0X6F,0X69,0X2B,0XF9,
0X01,0X02,0X00,0X18,0XE9,0X33,
0X08,0XD1,0X02,0X00,0X10,0XFE,
0X08,0X7F,0X08,0X24,0XBC,0X03,
0XAC,0XBA,0X84,0XC2,0X03,0X3C,
0X14,0X14,0XD4,0XBB,0X44,0X04,
0X02,0X70,0X35,0X00,0X21,0X41,
0X81,0X0D,0XF3,0X01,0X8F,0X41,
0X21,0X01,0XA9,0X01,0XAB,0X43,
0X7C,0XD7,0XD5,0XD6,0X57,0X54,
0XD5,0XFE,0XC0,0X42,0X55,0X8C,
0X1E,0X40,0X30,0X0C,0X00,0X00,
0XFF,0X00,0X00,0X04,0X18,0X60,
0X80,0X0E,0X80,0X8C,0X84,0X85,
0XF6,0X86,0X86,0XB6,0X85,0X84,
0X0C,0X80,0X06,0XAC,0X03,0XE0,
0XAF,0XA0,0XE4,0XBD,0XA5,0XE5,
0XAD,0X24,0X00,0X60,0X6A,0XA9,
0X10,0X10,0X10,0X92,0X7D,0X90,
0X10,0X11,0X12,0X10,0X00,0X68,
0X00,0X29,0X00,0X80,0X7E,0XEA,
0X2A,0X2A,0X2B,0X2A,0X2A,0XEE,
0X00,0XC6,0XAA,0X0E,0X12,0XDB,
0X16,0X12,0X01,0X35,0XD5,0X17,
0X15,0X35,0X81,0X16,0XAB,0X23,
0XA0,0XA3,0XAA,0XA6,0XF2,0XAF,
0XA6,0XAA,0XA2,0X23,0X50,0XC0,
0X50,0X02,0XFC,0X17,0X94,0XD6,
0XD6,0XD6,0X77,0X55,0X15,0X1D,
0X19,0XC0,0XEA,0X04,0XC9,0X02,
0X00,0XF9,0XAA,0XAF,0XA8,0XAC,
0XFA,0X01,0X03,0X03,0X4E,0X82,
0X3E,0X00,0X01,0X05,0X2D,0XE1,
0X3F,0X01,0X01,0X80,0XA9,0XAA,
0XCA,0X43,0X42,0X42,0X42,0XF2,
0X4F,0X42,0X42,0X42,0XC2,0X03,
0XC0,0X00,0XB0,0X4D,0X21,0X01,
0XFC,0X03,0X58,0XE3,0XF8,0XE3,
0X58,0X6B,0XAC,0XAA,0X00,0X10,
0X10,0X10,0X10,0X10,0X10,0X10,
0X10,0X10,0X00,0X00,0X00,0XC0,
0X7F,0X45,0XD5,0X27,0X00,0XC0,
0X7F,0X50,0XE0,0X1F,0XC0,0X46,
0X0C,0XE0,0X2F,0XE8,0X0F,0X40,
0X62,0XA2,0XF2,0X1F,0X92,0X42,
0X02,0X00,0X0E,0X00,0X01,0XF9,
0X29,0X6D,0X69,0X4B,0XF9,0X83,
0X40,0X00,0XA8,0X85,0X03,0X08,
0XFC,0X03,0X08,0X94,0X73,0X10,
0X13,0XF4,0X08,0X00,0X8C,0XA1,
0X41,0X42,0XFF,0X42,0X3E,0X40,
0XE0,0X67,0XE4,0X07,0X3C,0X00,
0X15,0XA8,0X01,0X00,0X00,0X00,
0X00,0XF0,0X8F,0X80,0X80,0X00,
0X00,0XA0,0XEA,0XAA,0X62,0XD1,
0X4D,0X21,0X01,0XA0,0XA0,0XFC,
0X51,0X56,0X5A,0X69,0XA1,0XE5,
0X01,0X01,0X01,0X01,0XFF,0X01,
0X09,0X11,0X21,0X01,0X00,0X00,
0X03,0X80,0XBF,0XA0,0X3F,0X00,
0X3F,0X81,0X7D,0X25,0X3D,0X01,
0X3F,0XC0,0X00,0X0E,0XE0,0X2F,
0X20,0X21,0XA6,0X30,0X23,0XAC,
0X23,0X00,0X60,0XAA,0XAE,0X20,
0XF0,0X0F,0X10,0XF0,0X10,0X17,
0X18,0X10,0XF3,0X10,0X30,0XAA,
0XAB,0X09,0X0D,0XFD,0X4B,0X39,
0X00,0X7D,0X05,0XFF,0X05,0X7D,
0X39,0X60,0X24,0X8A,0X9E,0XD6,
0XBF,0X96,0X1A,0XC2,0X0F,0X72,
0X8A,0X66,0X75,0X19,0X0D,0X90,
0X2C,0X01,0XC0,0X6F,0X20,0X23,
0XF5,0X29,0X65,0X33,0X18,0X46,
0XD2,0XAB,0XEE,0XAB,0XDA,0X03,
0X24,0X9D,0XC5,0X27,0X3D,0X44,
0X4E,0X5D,0X01,0XFF,0XA5,0XFF,
0X40,0X00,0X25,0X26,0XFC,0X26,
0X25,0XC1,0X60,0X24,0X88,0X88,
0XAE,0X8E,0X8D,0XBC,0X4A,0X69,
0X04,0X08,0X40,0X81,0X43,0X01,
0X00,0X00,0X08,0X86,0X71,0X80,
0X01,0X0E,0X00,0X00,0X60,0X00,
0X90,0X08,0XA8,0XAB,0XAA,0XAB,
0XBE,0XAA,0XAA,0XAB,0XAA,0X0B,
0X18,0X00,0X00,0X24,0XFF,0X14,
0X00,0X16,0X32,0X2E,0XE3,0X2E,
0X32,0X16,0X0E,0XEA,0XAA,0X84,
0XFD,0X97,0X95,0X3C,0X04,0XD5,
0X95,0X3F,0X15,0X1F,0XD7,0XE0,
0XE0,0X2F,0XE8,0X0F,0XC0,0X49,
0XF9,0X59,0XFC,0X49,0XC9,0X09,
0X68,0X4C,0X12,0X4D,0X59,0X69,
0X4B,0X51,0X4D,0XE9,0X49,0X5B,
0X69,0X01,0X84,0X0E,0X6C,0X5B,
0X40,0X00,0X00,0X81,0X7F,0X41,
0X89,0X4F,0X38,0X1A,0X66,0XA4,
0X0B,0XC9,0X3F,0X05,0X00,0X8A,
0XDA,0XAB,0X8A,0X3E,0X0A,0X0C,
0X80,0X83,0XF0,0X8F,0X04,0X00,
0XE2,0X0F,0XF1,0X87,0X82,0X84,
0X17,0XC0,0XAA,0XFF,0X07,0X04,
0X14,0X26,0XA5,0X44,0XA4,0X15,
0X06,0X00,0XAC,0XAA,0X2A,0X00,
0XFE,0X2A,0X81,0X08,0X26,0X51,
0X91,0X51,0X26,0X08,0X1D,0X18,
0X09,0X08,0X49,0X89,0X29,0X1F,
0X99,0X69,0X09,0X09,0X08,0X80,
0X06,0X90,0X02,0X45,0X65,0X5B,
0XC9,0X4B,0X47,0X25,0X4B,0X05,
0X05,0X80,0X6A,0X01,0X10,0XF8,
0X07,0XE4,0X93,0X88,0X88,0XF8,
0X8B,0X84,0X00,0X30,0X99,0X64,
0XF2,0X12,0X16,0XDA,0X5A,0X5B,
0XDA,0X16,0X12,0XF2,0X00,0X43,
0X15,0X0E,0X02,0XFF,0X00,0X80,
0XBF,0XAA,0XFA,0XAA,0XBA,0XAA,
0X3B,0XE3,0XCC,0X2C,0X29,0XE7,
0X1F,0X05,0X48,0XA5,0X3B,0X23,
0XA3,0X6A,0X06,0XA3,0X16,0XE4,
0X0B,0X40,0X46,0X46,0XF5,0X47,
0X44,0X44,0X04,0XFC,0X0F,0X38,
0XE0,0X00,0X04,0X24,0X24,0X25,
0XFE,0X24,0X24,0X24,0X04,0X00,
0XA8,0XAE,0XCA,0X41,0X66,0X58,
0XE6,0X01,0XC0,0X41,0X66,0X58,
0XE6,0X81,0X91,0X18,0X19,0XDE,
0X9A,0XDA,0X5E,0XDA,0X1A,0X0E,
0XC0,0X07,0XF0,0XBF,0XAE,0XA3,
0X83,0X80,0XBC,0XA4,0XA7,0XA6,
0XA6,0XBE,0X82,0X82,0X00,0X00,
0XA0,0X06,0X00,0XFE,0X0A,0XEA,
0X2A,0X2A,0X29,0X29,0XE9,0X08,
0X00,0XC6,0XAA,0X83,0X92,0XD5,
0X97,0X95,0X16,0XB4,0X96,0XD5,
0X97,0X95,0X92,0X86,0X43,0X8A,
0XC0,0X3F,0X00,0X20,0X23,0X65,
0X75,0X6D,0X25,0X25,0XC3,0X80,
0X0E,0X00,0X00,0XE0,0X03,0X00,
0XFC,0X23,0X20,0X20,0X00,0X00,
0XE8,0XBA,0XAA,0X8A,0X6A,0XFE,
0X29,0X81,0X6C,0X03,0XFE,0X02,
0X32,0XC6,0X30,0XE0,0X40,0X48,
0X48,0X44,0X42,0XFF,0X40,0X42,
0X44,0X48,0X10,0X00,0XC0,0X00,
0X40,0X48,0X44,0XCA,0X49,0XF8,
0X4F,0XC8,0X49,0X4A,0X44,0X08,
0XC0,0X00,0XB0,0XEC,0XAB,0X00,
0XA0,0X90,0X8A,0XA6,0X8A,0X92,
0XA2,0XB0,0X80,0X06,0XFF,0X01,
0X01,0X79,0X49,0X49,0X79,0X01,
0X01,0XFF,0X00,0XAB,0XAA,0X0E,
0X02,0X01,0X91,0X92,0X52,0XBE,
0X92,0X12,0X11,0X01,0X02,0XAA,
0XAB,0X02,0X21,0XAD,0X35,0XA5,
0X25,0X0D,0XF1,0X9F,0X98,0X78,
0XC7,0XEA,0X0C,0XF0,0X90,0XFC,
0X93,0XF0,0X02,0X20,0X28,0XBD,
0X2B,0X21,0X78,0X8D,0XAE,0XFE,
0X82,0X82,0XFE,0X00,0XFE,0X80,
0X80,0X40,0XFF,0X00,0X00,0X00,
0X0C,0X80,0XBF,0X4A,0X4A,0X0E,
0X80,0XBF,0X44,0X44,0X3C,0X84,
0X81,0X01,0X23,0X22,0XA1,0XEF,
0XBA,0XAA,0XAA,0XAA,0XAA,0X2F,
0X00,0X00,0X03,0X3A,0X00,0XFC,
0X27,0X25,0X25,0XFD,0X27,0X25,
0X25,0XFD,0X03,0X18,0X30,0X38,
0XFF,0X08,0X08,0X08,0X88,0X00,
0XFF,0X08,0X08,0X04,0X82,0X6B,
0XB0,0X3A,0X02,0XFF,0X00,0X48,
0XC4,0X4B,0X3E,0X80,0X1F,0XC0,
0X3F,0X83,0XA1,0X0E,0XA4,0XA4,
0XA4,0XE4,0X9F,0X94,0X94,0X94,
0X04,0X04,0X00,0X38,0X00,0X10,
0XEC,0X2B,0X38,0XA8,0XA3,0XB0,
0XAC,0X2B,0X38,0XE8,0X33,0X54,
0XE1,0X11,0XF2,0X00,0X00,0X70,
0XAF,0X21,0X21,0XAF,0X70,0X00,
0X1C,0X5A,0X2A,0X80,0X33,0XD0,
0X37,0XD2,0X11,0X33,0X15,0X31,
0X00,0X80,0XBB,0XEE,0XE2,0X2F,
0XE8,0X0F,0XE0,0XAF,0XA0,0X90,
0X9F,0X80,0X00,0X00,0X18,0X0C,
0X20,0XF8,0X23,0X22,0X01,0X08,
0X8A,0X79,0X08,0X08,0XF8,0X03,
0X1A,0XE4,0X24,0XFF,0X14,0X40,
0X78,0X4C,0XDB,0XEA,0X4E,0X78,
0X40,0X8E,0X06,0X09,0X04,0X02,
0XC5,0X24,0X1C,0XC4,0X04,0X3D,
0X02,0X04,0X80,0X06,0X18,0XA0,
0XA8,0XE6,0X9F,0X04,0XC0,0X01,
0XF0,0X03,0X48,0X84,0X02,0X83,
0X05,0X00,};
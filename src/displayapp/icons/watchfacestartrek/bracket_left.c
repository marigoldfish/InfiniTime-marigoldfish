#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
  #define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BRACKET_LEFT
  #define LV_ATTRIBUTE_IMG_BRACKET_LEFT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BRACKET_LEFT uint8_t bracket_left_map[] = {
  0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
  0x10, 0x5d, 0xd5, 0xff, /*Color of index 1*/
  0xfe, 0xdd, 0x82, 0xff, /*Color of index 2*/
  0x6b, 0x61, 0x4a, 0xff, /*Color of index 3*/

  0x00, 0xaa, 0xaa, 0xaa, 0x02, 0xaa, 0xaa, 0xaa, 0x02, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x00, 0x00, 0xaa, 0xa8, 0x00, 0x00, 0xaa, 0xa8,
  0x00, 0x00, 0xaa, 0xa8, 0x00, 0x00, 0x02, 0xa8, 0x00, 0x00, 0x02, 0xa8, 0x00, 0x00, 0x02, 0xa8, 0x00, 0x00, 0x02, 0xa8, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x03, 0xfc,
  0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x54, 0x00, 0x00, 0x01, 0x54, 0x00, 0x00, 0x01, 0x54, 0x00, 0x00,
  0x01, 0x54, 0x00, 0x00, 0x01, 0x54, 0x00, 0x00, 0x01, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xa8, 0x00, 0x00, 0x02, 0xa8,
  0x00, 0x00, 0x02, 0xa8, 0x00, 0x00, 0x02, 0xa8, 0x00, 0x00, 0x02, 0xa8, 0x00, 0x00, 0xaa, 0xa8, 0x00, 0x00, 0xaa, 0xa8, 0x00, 0x00,
  0xaa, 0xa8, 0x00, 0x00, 0xaa, 0xaa, 0x00, 0x00, 0x02, 0xaa, 0xaa, 0xaa, 0x02, 0xaa, 0xaa, 0xaa, 0x00, 0xaa, 0xaa, 0xaa,
};

const lv_img_dsc_t bracket_left = {{LV_IMG_CF_INDEXED_2BIT, 0, 0, 16, 38}, 168, bracket_left_map};

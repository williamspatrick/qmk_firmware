// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define HSV_SOLAR_BLUE 146, 201, 210
#define HSV_SOLAR_CYAN 124, 189, 161
#define HSV_SOLAR_GREEN 48, 255, 153
#define HSV_SOLAR_RED 0, 253, 212
#define HSV_SOLAR_VIOLET 168, 115, 197
#define HSV_SOLAR_YELLOW 32, 255, 182
/*

LED index mapping:

          (31)              (32)              (33)                                    (67)              (66)              (65)
┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
│0       │1       │2       │3       │4       │5       │                          │39      │38      │37      │36      │35      │34      │
├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
│11      │10      │9       │8       │7       │6       │                          │40      │41      │42      │43      │44      │45      │
├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
│12      │13      │14      │15      │16      │17      │                          │51      │50      │49      │48      │47      │46      │
├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
│23      │22      │21      │20      │19      │18      │27      │        │61      │52      │53      │54      │55      │56      │57      │
└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                               │24      │25      │26      │                 │60      │59      │58      │
                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
          (30)              (29)              (28)                                    (62)              (63)              (64)

*/


const rgblight_segment_t PROGMEM base_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    // Left Side Keys
    { 0, 28, HSV_SOLAR_BLUE },
    // Left Side Underglow
    { 28, 6, HSV_SOLAR_YELLOW },
    // Right Side Keys
    { 34, 28, HSV_SOLAR_BLUE },
    // Right Side Underglow
    { 62, 6, HSV_SOLAR_YELLOW }
);

const rgblight_segment_t PROGMEM fn_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 0, 6, HSV_SOLAR_CYAN },
    { 6, 2, HSV_SOLAR_GREEN },
    { 8, 1, HSV_SOLAR_VIOLET },
    { 9, 4, HSV_SOLAR_GREEN },
    { 14, 3, HSV_SOLAR_VIOLET },
    { 20, 3, HSV_SOLAR_GREEN },
    { 34, 6, HSV_SOLAR_CYAN },
    { 40, 2, HSV_SOLAR_GREEN },
    { 43, 2, HSV_SOLAR_GREEN },
    { 47, 2, HSV_SOLAR_GREEN },
    { 50, 1, HSV_SOLAR_GREEN },
    { 55, 1, HSV_SOLAR_GREEN }
);

const rgblight_segment_t PROGMEM lower_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 0, 6, HSV_SOLAR_YELLOW },
    { 7, 1, HSV_SOLAR_GREEN },
    { 8, 1, HSV_SOLAR_VIOLET },
    { 9, 1, HSV_SOLAR_GREEN },
    { 14, 3, HSV_SOLAR_VIOLET },
    { 19, 1, HSV_SOLAR_GREEN },
    { 21, 1, HSV_SOLAR_GREEN },
    { 35, 5, HSV_SOLAR_YELLOW },
    { 40, 5, HSV_SOLAR_YELLOW },
    { 46, 6, HSV_SOLAR_YELLOW },
    { 52, 5, HSV_SOLAR_YELLOW }
);

const rgblight_segment_t PROGMEM raise_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 7, 1, HSV_SOLAR_GREEN },
    { 8, 1, HSV_SOLAR_VIOLET },
    { 9, 1, HSV_SOLAR_GREEN },
    { 14, 3, HSV_SOLAR_VIOLET },
    { 19, 1, HSV_SOLAR_GREEN },
    { 21, 1, HSV_SOLAR_GREEN },
    { 28, 6, HSV_SOLAR_BLUE },
    { 41, 3, HSV_SOLAR_VIOLET },
    { 48, 3, HSV_SOLAR_VIOLET },
    { 53, 3, HSV_SOLAR_VIOLET },
    { 62, 6, HSV_SOLAR_BLUE }
);

const rgblight_segment_t PROGMEM cmd_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 28, 6, HSV_SOLAR_GREEN },
    { 35, 5, HSV_SOLAR_CYAN },
    { 41, 4, HSV_SOLAR_CYAN },
    { 47, 4, HSV_SOLAR_CYAN },
    { 52, 5, HSV_SOLAR_CYAN },
    { 62, 6, HSV_SOLAR_GREEN }
);

const rgblight_segment_t PROGMEM swap_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    { 28, 6, HSV_SOLAR_RED },
    { 62, 6, HSV_SOLAR_RED }
);

const rgblight_segment_t* const PROGMEM my_light_layers[] = RGBLIGHT_LAYERS_LIST(
    base_light_layer,
    fn_light_layer,
    lower_light_layer,
    raise_light_layer,
    cmd_light_layer,
    swap_light_layer
);


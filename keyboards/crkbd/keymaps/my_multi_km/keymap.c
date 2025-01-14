/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
qmk flash -kb crkbd/rev1/common -km my_multi_km
*/

#include QMK_KEYBOARD_H

#define ALT_ESC ALT_T(KC_ESC)
#define CTL_ESC CTL_T(KC_ESC)
#define GUI_ESC GUI_T(KC_ESC)
#define HYPER LGUI(LSFT(KC_LALT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // 0 - Colemak
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                         KC_J,    KC_L,    KC_U,    KC_Y, KC_LGUI, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                         KC_H,    KC_N,    KC_E,    KC_I,    KC_O,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_K,    KC_M, KC_COMM,  KC_DOT, KC_QUES, KC_EXLM,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT,   MO(3),   MO(2),     KC_SPC,   MO(1), KC_ESC
                                      //`--------------------------'  `--------------------------'
  ),

  // 1 -
  [1] = LAYOUT_split_3x6_3(
  //,        ,    ~   ,    =   ,    '   ,    (   ,    )   ,                    ,    /   ,    <   ,    >   ,        ,        ,    )   ,
      _______, KC_TILD, KC_PEQL, KC_QUOT, KC_LPRN, KC_RPRN,                      KC_PSLS,   KC_LT,   KC_GT, XXXXXXX, XXXXXXX,  KC_DEL,
  //,        ,    #   ,    :   ,    "    ,   [   ,    ]   ,                    ,    |   ,        ,        ,        ,        ,        ,
      _______, KC_HASH, KC_COLN, KC_DQUO, KC_LBRC, KC_RBRC,                      KC_PIPE, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, _______,
  //,        ,    ^   ,        ,        ,    {   ,    }   ,                    ,    \   ,        ,        ,        ,        ,        ,
      _______, KC_CIRC, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR,                      KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,   MO(5),    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  // 2 - Symbols
  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,   KC_P1,   KC_P2,   KC_P3,   KC_P4,   KC_P5,                        KC_P6,   KC_P7,   KC_P8,   KC_P9,   KC_P0,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,   KC_AT, XXXXXXX,  KC_DLR, KC_UNDS, KC_PMNS,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, KC_QUES, KC_EXLM, XXXXXXX, KC_LALT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______,   MO(5), _______
                                      //`--------------------------'  `--------------------------'
  ),

  // 4 - MAN Linux
  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,    *   ,    7   ,    8   ,    9   ,    +   ,        ,
      _______, _______, KC_BRID, KC_VOLU, KC_BRIU, _______,                      KC_ASTR,    KC_7,    KC_8,    KC_9, KC_PLUS, _______,
  //|--------+--------+--------+--------+--------+--------|                    ,    \   ,    4   ,    5   ,    6   ,    -   ,        ,
      _______, KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, _______,                      KC_BSLS,    KC_4,    KC_5,    KC_6, KC_PMNS, _______,
  //|--------+--------+--------+--------+--------+--------|                    ,    0   ,    1   ,    2   ,    3   ,    .   ,        ,
      _______, _______, _______, KC_VOLD, _______, _______,                         KC_0,    KC_1,    KC_2,    KC_3,  KC_DOT, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  // 3 - MAN Mac
  [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,   KC_P1,   KC_P2,   KC_P3,   KC_P4,   KC_P5,                        KC_P6,   KC_P7,   KC_P8,   KC_P9,   KC_P0,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  // 5 - Extra
  [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,                      _______, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  )
};

#ifdef OLED_ENABLE
#    include <stdio.h>

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE_MAC 0
#define L_BASE_LINUX 2
#define L_SYMBOLS 4
#define L_MAN_MAC 8
#define L_MAN_LINUX 16
#define L_EXTRA 32

void oled_render_layer_state(void) {
    oled_write_P(PSTR("L: "), false);

    switch (layer_state) {
        case L_BASE_MAC:
            oled_write_ln_P(PSTR("Colemak"), false);
            break;
        case L_BASE_LINUX:
            oled_write_ln_P(PSTR("Base"), false);
            break;
        case L_SYMBOLS:
            oled_write_ln_P(PSTR("Symbols"), false);
            break;
        case L_MAN_MAC:
            oled_write_ln_P(PSTR("Media/Num (Mac)"), false);
            break;
        case L_MAN_LINUX:
            oled_write_ln_P(PSTR("Media/Num (Linux)"), false);
            break;
        case L_EXTRA:
        case L_EXTRA|L_SYMBOLS:
        case L_EXTRA|L_MAN_MAC:
        case L_EXTRA|L_MAN_LINUX:
        case L_EXTRA|L_SYMBOLS|L_MAN_MAC:
        case L_EXTRA|L_SYMBOLS|L_MAN_LINUX:
            oled_write_ln_P(PSTR("Extra"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Unhandled!"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_ENABLE

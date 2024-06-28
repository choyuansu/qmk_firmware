#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, LSFT_T(KC_ESC), LT(1, KC_BSPC), KC_SPC, LT(2, KC_ENT)),
                                                              [1] = LAYOUT_split_3x5_2(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_CAPS, LSFT(KC_TAB), KC_TAB, LCTL(KC_PGUP), LCTL(KC_PGDN), KC_LGUI, OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), KC_MINS, KC_RALT, LSFT(KC_LALT), LCTL(KC_LALT), LCTL(KC_LSFT), CW_TOGG, KC_RCTL, OSM(MOD_LCTL | MOD_LSFT), OSM(MOD_LCTL | MOD_LALT), OSM(MOD_LSFT | MOD_LALT), OSM(MOD_LSFT | MOD_LGUI), KC_TRNS, KC_NO, MO(4), KC_DOT),
                                                              [2] = LAYOUT_split_3x5_2(KC_EXLM, KC_LPRN, KC_RPRN, KC_DQUO, KC_PERC, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_PSCR, KC_EQL, KC_LCBR, KC_RCBR, KC_QUOT, KC_BSLS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, KC_AMPR, KC_LBRC, KC_RBRC, KC_UNDS, KC_PIPE, KC_TILD, KC_MINS, KC_ASTR, KC_PLUS, KC_GRV, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS),
                                                              [3] = LAYOUT_split_3x5_2(KC_BTN5, KC_WH_L, KC_MS_U, KC_WH_R, KC_WH_U, KC_BTN2, KC_F1, KC_F2, KC_F3, KC_F4, KC_BTN4, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_BTN1, KC_F5, KC_F6, KC_F7, KC_F8, KC_AT, KC_HASH, KC_DLR, KC_CIRC, KC_NO, KC_BTN3, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO),
                                                              [4] = LAYOUT_split_3x5_2(QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(5), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, SH_ON, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, SH_OFF, KC_NO, KC_NO, KC_NO, KC_NO),
                                                              [5] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT, LT(6, KC_BSPC), KC_SPC, KC_ENT),
                                                              [6] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(5), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

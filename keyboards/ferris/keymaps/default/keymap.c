#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

enum custom_keycodes {
    GOOGLE_FIRST_RESULT = SAFE_RANGE,
};

enum tap_dance_keycodes {
    TD_BRCS = 0,
    TD_CBRS,
    TD_PRNS,
    TD_BSLS_PIPE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, LT(3,KC_ESC), LT(1,KC_BSPC), KC_SPC, LT(2,KC_TAB)),
	[1] = LAYOUT_split_3x5_2(KC_APP, LALT(KC_RGHT), LSA(KC_LEFT), LSA(KC_RGHT), LCTL(KC_EQL), KC_PGUP, KC_HOME, KC_UP, KC_END, KC_PSCR, CW_TOGG, LALT(KC_LEFT), LCTL(KC_PGUP), LCTL(KC_PGDN), LCTL(KC_MINS), KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT, KC_CAPS, KC_RCTL, LCA(KC_MINS), LCTL(LSFT(KC_MINS)), KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(4), KC_TRNS),
	[2] = LAYOUT_split_3x5_2(KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_DQT, KC_QUOT, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, TD(TD_BSLS_PIPE), TD(TD_BRCS), TD(TD_CBRS), TD(TD_PRNS), KC_PLUS, KC_MINS, KC_EQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_split_3x5_2(KC_BTN5, KC_WH_L, KC_BTN3, KC_WH_R, KC_NO, KC_BTN2, KC_F1, KC_F2, KC_F3, KC_F4, KC_BTN4, KC_WH_U, KC_MS_U, KC_WH_D, KC_NO, KC_BTN1, KC_F5, KC_F6, KC_F7, KC_F8, KC_BTN1, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_BTN3, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT_split_3x5_2(QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(5), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, SH_ON, EE_CLR, KC_NO, KC_NO, KC_NO, KC_NO, TO(7), KC_NO, KC_NO, KC_NO, SH_OFF, KC_NO, KC_NO, KC_TRNS, KC_NO),
	[5] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT, LT(6,KC_NO), KC_SPC, KC_ENT),
	[6] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(5), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[7] = LAYOUT_split_3x5_2(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_0, KC_9, KC_8, KC_7, KC_6, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_5, KC_4, KC_3, KC_2, KC_1, KC_LCTL, KC_LSFT, KC_M, KC_C, KC_V, TG(7), KC_NO, KC_NO, KC_NO, KC_NO, SH_MON, KC_SPC, KC_NO, KC_NO)
};
#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case GOOGLE_FIRST_RESULT:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB));
            }
            else {}
            break;
    }
    return true;
}

void dance_brcs(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING("[");
    } else if (state->count == 2) {
        SEND_STRING("]");
    } else {
        reset_tap_dance (state);
    }
}

void dance_cbrs(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING("{");
    } else if (state->count == 2) {
        SEND_STRING("}");
    } else {
        reset_tap_dance (state);
    }
}

void dance_prns(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING("(");
    } else if (state->count == 2) {
        SEND_STRING(")");
    } else {
        reset_tap_dance (state);
    }
}

void dance_bsls_pipe(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        SEND_STRING("\\");
    } else if (state->count == 2) {
        SEND_STRING("|");
    } else {
        reset_tap_dance (state);
    }
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_BRCS] = ACTION_TAP_DANCE_FN (dance_brcs),
    [TD_CBRS] = ACTION_TAP_DANCE_FN (dance_cbrs),
    [TD_PRNS] = ACTION_TAP_DANCE_FN (dance_prns),
    [TD_BSLS_PIPE] = ACTION_TAP_DANCE_DOUBLE(KC_BSLS, KC_PIPE)
};


#include QMK_KEYBOARD_H

#define _BASE 0
#define _FUNC 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC,     KC_F1,      KC_F2,   KC_F3,   KC_F4,    KC_F5,  KC_DEL,     KC_NO,  KC_NO,          KC_DEL,  KC_F6,  KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO, 
        KC_GRV,     KC_1,       KC_2,    KC_3,    KC_4,     KC_5,   KC_MINS,    KC_NO,  KC_NO,          KC_EQL,  KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_HOME, KC_PGUP, KC_NO, 
        KC_TAB,     KC_Q,       KC_W,    KC_E,    KC_R,     KC_T,   KC_LBRC,    KC_NO,  KC_NO,          KC_RBRC, KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_BSLS, KC_PGDN, KC_NO, 
        KC_LSFT,    KC_A,       KC_S,    KC_D,    KC_F,     KC_G,   KC_BSPC,    KC_NO,  KC_NO,          KC_BSPC, KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_RSFT, KC_NO, 
        KC_LCTL,    KC_Z,       KC_X,    KC_C,    KC_V,     KC_B,   KC_ENT,     KC_NO,  KC_NO,          KC_ENT,  KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_UP,   KC_RCTL, KC_NO, 
        MO(_FUNC),  MO(_FUNC),  KC_LGUI, KC_LALT, KC_SPC,   KC_SPC, KC_SPC,     KC_NO,  KC_NO,          KC_SPC,  KC_SPC, KC_SPC, KC_RALT, KC_RGUI, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO
    ),

    [_FUNC] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_TRNS, KC_HOME, KC_UP,   KC_END,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLU, KC_TRNS, KC_TRNS,                KC_VOLU, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_TRNS, KC_TRNS,                KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_MUTE, KC_MUTE, KC_TRNS, KC_TRNS,                KC_MUTE, KC_MUTE, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};
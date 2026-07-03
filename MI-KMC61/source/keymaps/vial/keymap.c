#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _MOUSE,
    _SEL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // レイヤー0 (デフォルト)
    [_BASE] = LAYOUT(
        KC_1, KC_2, KC_3,
        KC_4, KC_5, KC_6
    ),
    // レイヤー1 (購入者がVial等で自由に変えられるように枠だけ用意)
    [_MOUSE] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
    ),
    // レイヤー2 (同上)
    [_SEL] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
    )
};
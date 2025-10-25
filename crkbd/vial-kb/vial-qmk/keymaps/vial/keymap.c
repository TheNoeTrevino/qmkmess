#include QMK_KEYBOARD_H

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_split_3x6_3_ex2(
        'L', 'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R', 'R',
        '*', 'L', 'L', 'L', 'L', 'L',            'R', 'R', 'R', 'R', 'R', '*',
                       'L', 'L', 'L',            'R', 'R', 'R'
    );

// NOTE: LOOK HERE NOE NOE NOE
#ifdef LAYOUT_split_3x6_3_ex2
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3_ex2(
               KC_TAB,        KC_Q,         KC_W,           KC_E,           KC_R,     KC_T, KC_T,                   KC_Y, KC_Y,          KC_U,        KC_I,            KC_O,      KC_P,         KC_BSLS,
               KC_ESC,        KC_A,   LT(3, KC_S),    LT(2, KC_D),    LT(1, KC_F),    KC_G, KC_G,                   KC_H, KC_H,          KC_J,        KC_K,            KC_L,      KC_SCLN,      KC_QUOT,
              KC_LSFT,        KC_Z ,  GUI_T(KC_X),    ALT_T(KC_C),    CTL_T(KC_V),    KC_B,                               KC_N,    CTL_T(KC_M), ALT_T(KC_COMM),  GUI_T(KC_DOT),   KC_SLSH,      KC_RSFT,
                                                                         CW_TOGG,  MO(4), KC_BSPC,                   KC_SPC,  KC_ENT,  MO(5)

  ),
  [1] = LAYOUT_split_3x6_3_ex2(
      _______,  _______, _______, _______, _______, _______, _______,         _______,  KC_PPLS, KC_7,   KC_8,   KC_9,   KC_RBRC, _______,
      _______,  _______, _______, _______, _______, _______, _______,         _______,  KC_EQL,  KC_4,   KC_5,   KC_6,   KC_RGHT, _______,
      _______,  _______, _______, _______, _______, _______,                            KC_PMNS, KC_1,   KC_2,   KC_3,   KC_RCBR, _______,
                                            _______, _______, _______,         KC_0,   KC_COMM, KC_PDOT
  ),
  // pairs
  [2] = LAYOUT_split_3x6_3_ex2(
      _______,  _______, _______, _______, _______, _______, _______,         _______, KC_PPLS, KC_LBRC, KC_LPRN, KC_RPRN, KC_RBRC, _______,
      _______,  _______, _______, _______, _______, _______, _______,         _______,  KC_EQL,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
      _______,  _______, _______, _______, _______, _______,                            KC_PMNS, KC_LCBR, KC_LT,   KC_GT,   KC_RCBR, _______,
                                            _______, _______, _______,         _______,  _______,  _______
  ),
  // symbols
  [3] = LAYOUT_split_3x6_3_ex2(
      _______,  _______, _______, _______, _______, _______, _______,         _______,  KC_PPLS, KC_AMPR, KC_ASTR, KC_UNDS, _______, _______,
      _______,  _______, _______, _______, _______, _______, _______,         _______,  KC_EQL,  KC_DLR,  KC_PERC, KC_CIRC, KC_GRV,  _______,
      _______,  _______, _______, _______, _______, _______,                            KC_PMNS, KC_EXLM, KC_AT,   KC_HASH, KC_TILD, _______,
                                            _______, _______, _______,         _______,  _______, _______
  ),
  // mouse layer
  [4] = LAYOUT_split_3x6_3_ex2(
      _______,  _______, _______, _______,     _______,  _______, _______,       _______,   _______,  _______,    _______, _______, _______, _______,
      _______,  _______, _______, _______,     _______,  _______, _______,       _______,   _______,  MS_LEFT,    MS_DOWN, MS_UP,   MS_RGHT, _______,
      _______,  _______, _______, _______,     _______,  _______,                           _______,  _______,    _______, _______, _______, _______,
                                               _______,  _______, _______,         MS_BTN1,  MS_BTN2, KC_PDOT
  ),
  // function keys
  [5] = LAYOUT_split_3x6_3_ex2(
      _______,  KC_F1,   KC_F2,    KC_F3,     KC_F4,          KC_F5,  _______,                 _______,     _______, _______,    _______, _______, _______, _______,
      _______,  KC_F6,   KC_F7,    KC_F8,     KC_F9,          KC_F10, _______,                 _______,     _______, _______,    _______, _______, _______, _______,
      _______,  KC_F11,  KC_F12,   KC_F13,    KC_F14,         KC_F15,                                    KC_KB_MUTE, MS_LEFT,    MS_DOWN, MS_UP,   MS_RGHT, _______,
                                              KC_MPRV,        KC_MNXT, KC_MEDIA_PLAY_PAUSE,   MS_BTN1,  MS_BTN2, KC_PDOT
  ),
  // gaming layer
  [6] = LAYOUT_split_3x6_3_ex2(
              KC_TAB,    KC_Q,     KC_W,    KC_E,  KC_R,     KC_T,  _______,                _______,   KC_Y,          KC_U,        KC_I,           KC_O,            KC_P,           KC_BSLS,
              KC_ESC,    KC_A,     KC_S,    KC_D,  KC_F,     KC_G,  _______,                _______,   KC_H,          KC_J,        KC_K,           KC_L,            KC_SCLN,        KC_QUOT,
             KC_LSFT,    KC_Z,     KC_X,    KC_C,  KC_V,     KC_B,                                     KC_N,    CTL_T(KC_M), ALT_T(KC_COMM), GUI_T(KC_DOT),         KC_SLSH,        KC_RSFT,
                                              KC_SPC,  KC_SPC,  KC_SPC,                          KC_SPC,  KC_ENT,  KC_RALT
  ),
};
#else
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, TL_LOWR,  KC_SPC,     KC_ENT, TL_UPPR, KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};
#endif

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    // Layer 0: volume control
    [0] = { 
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU), 
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU), 
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU), 
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
    },

    // Layer 1: default (RGB)
    [1] = { 
        ENCODER_CCW_CW(RGB_TOG, KC_NO),          // Toggle RGB on/off
        ENCODER_CCW_CW(RGB_TOG, KC_NO),          // Toggle RGB on/off
        ENCODER_CCW_CW(RGB_TOG, KC_NO),          // Toggle RGB on/off
        ENCODER_CCW_CW(RGB_TOG, KC_NO),          // Toggle RGB on/off
    },

    // Layer 2: RGB control 1
    [2] = { 
        ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),       // Mode previous / Mode next
        ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),       // Mode previous / Mode next
        ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),       // Mode previous / Mode next
        ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),       // Mode previous / Mode next
    },

    // Layer 3: RGB control 2
    [3] = { 
        ENCODER_CCW_CW(RGB_HUD, RGB_HUI),        // Hue down / up
        ENCODER_CCW_CW(RGB_HUD, RGB_HUI),        // Hue down / up
        ENCODER_CCW_CW(RGB_HUD, RGB_HUI),        // Hue down / up
        ENCODER_CCW_CW(RGB_HUD, RGB_HUI),        // Hue down / up
    },

    // Layer 4: RGB control 3
    [4] = { 
        ENCODER_CCW_CW(RGB_SAD, RGB_SAI),        // Saturation down / up
        ENCODER_CCW_CW(RGB_SAD, RGB_SAI),         // Saturation down / up
        ENCODER_CCW_CW(RGB_SAD, RGB_SAI),         // Saturation down / up
        ENCODER_CCW_CW(RGB_SAD, RGB_SAI),         // Saturation down / up
    },

    // Layer 5: RGB control 4
    [5] = { 
        ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), 
        ENCODER_CCW_CW(RGB_HUI, RGB_HUD), 
        ENCODER_CCW_CW(RGB_VAI, RGB_VAD), 
        ENCODER_CCW_CW(RGB_SAI, RGB_SAD) 
    },

    // Layer 6: RGB control 5
    [6] = { 
        ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), 
        ENCODER_CCW_CW(RGB_HUI, RGB_HUD), 
        ENCODER_CCW_CW(RGB_VAI, RGB_VAD), 
        ENCODER_CCW_CW(RGB_SAI, RGB_SAD)
#endif

#ifdef CHORDAL_HOLD
bool get_chordal_hold(uint16_t tap_hold_keycode, keyrecord_t *tap_hold_record, uint16_t other_keycode, keyrecord_t *other_record) {
    // combining with shifts fluidly
    uint16_t tap_hold_tap = tap_hold_keycode;
    uint16_t other_tap = other_keycode;

    if (IS_QK_MOD_TAP(tap_hold_keycode)) {
        tap_hold_tap = QK_MOD_TAP_GET_TAP_KEYCODE(tap_hold_keycode);
    }
    if (IS_QK_MOD_TAP(other_keycode)) {
        other_tap = QK_MOD_TAP_GET_TAP_KEYCODE(other_keycode);
    }

    if ((tap_hold_tap == KC_X || tap_hold_tap == KC_C || tap_hold_tap == KC_V ||
         tap_hold_tap == KC_M || tap_hold_tap == KC_COMM || tap_hold_tap == KC_DOT) &&
        (other_keycode == KC_LSFT || other_keycode == KC_RSFT ||
         (IS_QK_MOD_TAP(other_keycode) && (QK_MOD_TAP_GET_MODS(other_keycode) & MOD_MASK_SHIFT)))) {
        return true;
    }
    if ((other_tap == KC_X || other_tap == KC_C || other_tap == KC_V ||
         other_tap == KC_M || other_tap == KC_COMM || other_tap == KC_DOT) &&
        (tap_hold_keycode == KC_LSFT || tap_hold_keycode == KC_RSFT ||
         (IS_QK_MOD_TAP(tap_hold_keycode) && (QK_MOD_TAP_GET_MODS(tap_hold_keycode) & MOD_MASK_SHIFT)))) {
        return true;
    }

    // Disable chordal hold for other Shift combinations
    if (other_keycode == KC_LSFT || other_keycode == KC_RSFT) return false;
    if (tap_hold_keycode == KC_LSFT || tap_hold_keycode == KC_RSFT) return false;
    if (IS_QK_MOD_TAP(other_keycode) && (QK_MOD_TAP_GET_MODS(other_keycode) & MOD_MASK_SHIFT)) return false;
    if (IS_QK_MOD_TAP(tap_hold_keycode) && (QK_MOD_TAP_GET_MODS(tap_hold_keycode) & MOD_MASK_SHIFT)) return false;

    return get_chordal_hold_default(tap_hold_record, other_record);
}
#endif

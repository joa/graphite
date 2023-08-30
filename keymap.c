#include QMK_KEYBOARD_H
#include "version.h"

#define L_GRAPHITE 0
#define L_QWERTY 1
#define L_MEDIA 2
#define L_UMLAUT 3
#define L_GAMING 4
#define L_SYMBOL 5
#define L_NUMPAD 6

#define K_DEL_WORD LCTL(KC_BSPC)
#define K_L_MED TT(L_MEDIA)
#define K_L_SYM MO(L_SYMBOL)
#define K_L_NUM TT(L_NUMPAD)
#define K_L_UML OSL(L_UMLAUT)
#define K_L_GRA TO(L_GRAPHITE)
#define K_L_QWE TO(L_QWERTY)
#define K_L_GAM TO(L_GAMING)
#define K_CTL_Q LCTL_T(KC_Q)
#define K_CTL_Z LCTL_T(KC_Z)
#define K_CTL_SLSH RCTL_T(KC_SLSH)
#define K_CTL_OSM OSM(MOD_LCTL)
#define K_GUI_SCLN LGUI_T(KC_SCLN)
#define K_GUI_QUOT LGUI_T(KC_QUOT)
#define K_ALTSPC LALT_T(KC_SPC)
#define K_SRNSHT SGUI(KC_S)
#define K_ENT LT(L_SYMBOL, KC_ENT)
#define K_MAGIC LSFT_T(QK_AREP)

enum custom_keycodes { K_UML_A = SAFE_RANGE, K_UML_O, K_UML_U, K_UML_S, K_EURO, K_BLE, MG_THE, MG_EFORE, MG_UST, MG_ENT, MG_MENT, MG_UEN, MG_ION, MG_ON };

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_GRAPHITE] = LAYOUT_moonlander(
    KC_ESC    , KC_1     , KC_2   , KC_3   , KC_4   , KC_5, KC_MINS,        KC_EQL , KC_6   , KC_7   , KC_8   , KC_9      , KC_0      , KC_GRV    , 
    KC_DEL    , KC_B     , KC_L   , KC_D   , KC_W   , KC_Z, KC_LBRC,        KC_RBRC, KC_QUOT, KC_F   , KC_O   , KC_U      , KC_J      , KC_BSLS   ,
    K_DEL_WORD, KC_N     , KC_R   , KC_T   , KC_S   , KC_G, K_L_UML,        K_BLE  , KC_Y   , KC_H   , KC_A   , KC_E      , KC_I      , K_GUI_SCLN, 
    KC_TAB    , K_CTL_Q  , KC_X   , KC_M   , KC_C   , KC_V,                          KC_K   , KC_P   , KC_COMM, KC_DOT    , K_CTL_SLSH, K_L_MED   , 
    K_L_SYM   , K_CTL_OSM, K_L_NUM, KC_LEFT, KC_RGHT,       K_ALTSPC,       K_SRNSHT,         KC_UP  , KC_DOWN, KC_LBRC   , KC_RBRC   , K_L_SYM   ,
                                           K_MAGIC, KC_BSPC, KC_LGUI,       KC_TAB  , K_ENT , KC_SPC
  ),

  [L_QWERTY] = LAYOUT_moonlander(
    _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______   , 
    _______, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , _______,         _______, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , _______   , 
    _______, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , _______,         _______, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, K_GUI_QUOT, 
    _______, K_CTL_Z, KC_X   , KC_C   , KC_V   , KC_B   ,                           KC_N   , KC_M   , _______, _______, _______, _______   , 
    _______, _______, _______, _______, _______,          _______,         _______,          _______, _______, _______, _______, _______   , 
                                        _______, _______, _______,         _______, _______, _______
  ),

  [L_MEDIA ] = LAYOUT_moonlander(
    AU_TOGG, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, QK_BOOT,
    MU_TOGG, _______, KC_BTN1, KC_MS_U, KC_BTN2, _______, _______,         _______, _______, _______, _______, KC_UP  , _______, _______, 
    MU_NEXT, KC_WH_U, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______,         _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
    _______, KC_WH_D, _______, _______, _______, _______,                           _______, _______, KC_MRWD, KC_MFFD, _______, XXXXXXX, 
    _______, _______, _______, _______, _______,          _______,         _______,          KC_VOLU, KC_VOLD, KC_MUTE, _______, _______,
                                        _______, KC_WBAK, _______,         _______, _______, KC_MPLY
  ),

  [L_UMLAUT] = LAYOUT_moonlander(
    _______, _______, _______, _______, _______, _______, K_L_GAM,        _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, K_EURO , _______, _______, K_L_QWE,        _______, _______, _______, K_UML_O, K_UML_U, _______, _______,
    _______, _______, _______, _______, K_UML_S, _______, K_L_GRA,        _______, _______, _______, K_UML_A, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                          _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______,          _______,        _______,          _______, _______, _______, _______, _______,
                                        _______, _______, _______,        _______, _______, _______
  ),

  [L_GAMING] = LAYOUT_moonlander(
    KC_ESC , _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, _______,
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , _______,         _______, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , _______, 
    KC_CAPS, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , _______,         _______, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, 
    KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                           KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, _______,
    KC_LCTL, KC_LALT, _______, _______, _______,          _______,         _______,          _______, _______, _______, _______, _______, 
                                         KC_SPC, _______, _______,         _______, _______, _______
  ),

  [L_SYMBOL] = LAYOUT_moonlander(
    _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , _______,        _______, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
    _______, KC_EXLM, KC_AT  , KC_LCBR, KC_RCBR, KC_BSLS, _______,        _______, _______, KC_EQL , _______, _______, _______, KC_F12 , 
    _______, KC_HASH, KC_DLR , KC_LPRN, KC_RPRN, KC_GRV , _______,        _______, KC_UNDS, KC_MINS, KC_PLUS, KC_ASTR, KC_SCLN, KC_QUOT, 
    _______, _______, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD,                          _______, _______, _______, _______, KC_BSLS, _______,
    _______, KC_COMM, _______, KC_HOME, KC_END ,          _______,        _______,          KC_PGUP, KC_PGDN, _______, _______, _______, 
                                  _______, LCTL(KC_BSPC), KC_LGUI,        _______, _______, _______
  ),

  [L_NUMPAD] = LAYOUT_moonlander(
    RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, KC_NUM, KC_PSLS, KC_PAST, KC_PMNS, XXXXXXX, 
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, KC_P7 , KC_P8  , KC_P9  , KC_PPLS, XXXXXXX, 
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,         XXXXXXX, XXXXXXX, KC_P4 , KC_P5  , KC_P6  , KC_PCMM, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                           XXXXXXX, KC_P1 , KC_P2  , KC_P3  , KC_PEQL, _______, 
    _______, XXXXXXX, _______, XXXXXXX, XXXXXXX,          RGB_MOD,         RGB_TOG,          KC_P0 , KC_PDOT, KC_PENT, XXXXXXX, _______, 
                                        RGB_VAD, RGB_VAI, RGB_SAD,         RGB_SAI, RGB_HUD, RGB_HUI
  )
};
// clang-format on

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

// clang-format off
uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_B: return MG_EFORE;
        case KC_E: return KC_U;
        case KC_G: return KC_S;
        case KC_H: return KC_Y;
        case KC_I: return MG_ON;
        case KC_J: return MG_UST;
        case KC_M: return MG_ENT;
        case KC_N: return MG_ION;
        case KC_O: return KC_A;
        case KC_P: return KC_H;
        case KC_Q: return MG_UEN;
        case KC_R: return KC_L;
        case KC_S: return KC_C;
        case KC_T: return MG_MENT;
        case KC_U: return KC_E;
        case KC_W: return KC_S;
        case KC_Y: return KC_QUOT;
    }

    return MG_THE;
}
// clang-format on

#define SEND_MAGIC(x)            \
    if (record->event.pressed) { \
        SEND_STRING(x);          \
    }                            \
    return false;

bool process_record_magic(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MG_THE:
            SEND_MAGIC("the");
        case MG_EFORE:
            SEND_MAGIC("efore");
        case MG_UST:
            SEND_MAGIC("ust");
        case MG_ENT:
            SEND_MAGIC("ent");
        case MG_MENT:
            SEND_MAGIC("ment");
        case MG_ION:
            SEND_MAGIC("ion");
        case MG_UEN:
            SEND_MAGIC("uen");
        case MG_ON:
            SEND_MAGIC("on");
    }

    return true;
}

bool remember_last_key_user(uint16_t keycode, keyrecord_t *record, uint8_t *remembered_mods) {
    return keycode != K_MAGIC; // must not remember the magic key itself
}

uint8_t mod_state    = 0;
bool    release_lsft = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    mod_state = get_mods();
    switch (keycode) {
        case K_MAGIC:
            if (record->tap.count && record->event.pressed) {
                // can't send the quantuum key so we do this manually
                if (get_repeat_key_count()) {
                    return true;
                }
                alt_repeat_key_invoke(&record->event);
            } else if (record->event.pressed) {
                register_code16(KC_LSFT);
                release_lsft = true;
            } else if (release_lsft) {
                unregister_code16(KC_LSFT);
                release_lsft = false;
            }
            return false;
        case K_BLE:
            if (record->event.pressed) {
                SEND_STRING("ble");
            }
            return false;
        case K_UML_A:
            if (record->event.pressed) {
                // windows compatible shifted german umlaut handling
                // must enable numlock for this to work
                if (mod_state & MOD_MASK_SHIFT) {
                    del_mods(MOD_MASK_SHIFT);
                    SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_6)));
                    set_mods(mod_state);
                } else {
                    SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_8)));
                }
            }
            return false;
        case K_UML_O:
            if (record->event.pressed) {
                if (mod_state & MOD_MASK_SHIFT) {
                    del_mods(MOD_MASK_SHIFT);
                    SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_4)));
                    set_mods(mod_state);
                } else {
                    SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_6)));
                }
            }
            return false;
        case K_UML_U:
            if (record->event.pressed) {
                if (mod_state & MOD_MASK_SHIFT) {
                    del_mods(MOD_MASK_SHIFT);
                    SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_0)));
                    set_mods(mod_state);
                } else {
                    SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_2)));
                }
            }
            return false;
        case K_UML_S:
            if (record->event.pressed) {
                bool is_shift = mod_state & MOD_MASK_SHIFT;
                if (is_shift) {
                    del_mods(MOD_MASK_SHIFT);
                }
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_3)));
                if (is_shift) {
                    set_mods(mod_state);
                }
            }
            return false;
        case K_EURO:
            if (record->event.pressed) {
                bool is_shift = mod_state & MOD_MASK_SHIFT;
                if (is_shift) {
                    del_mods(MOD_MASK_SHIFT);
                }
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_8)));
                if (is_shift) {
                    set_mods(mod_state);
                }
            }
            return false;
    }

    if (!process_record_magic(keycode, record)) {
        return false;
    }

    return true;
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [L_MEDIA] = {{0, 245, 245}, {234, 255, 255}, {234, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {131, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {131, 255, 255}, {131, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {131, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {41, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {131, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {131, 255, 255}, {131, 255, 255}, {234, 255, 255}, {0, 245, 245}, {0, 0, 0}, {0, 0, 0}, {131, 255, 255}, {234, 255, 255}, {234, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {234, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {234, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [L_UMLAUT] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {74, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {219, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {152, 255, 255}, {9, 213, 228}, {128, 255, 137}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {234, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {219, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {219, 255, 255}, {219, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {234, 255, 255}, {234, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [L_GAMING] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [L_NUMPAD] = {{9, 240, 248}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {236, 213, 228}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {104, 229, 191}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {139, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 2, 108}, {0, 0, 255}, {149, 70, 173}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {98, 255, 255}, {44, 255, 255}, {149, 255, 255}, {0, 0, 0}},

};

void set_layer_color(int layer) {
    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

bool rgb_matrix_indicators_user(void) {
    // if (rawhid_state.rgb_control) {
    //     return true;
    // }
    if (keyboard_config.disable_layer_led) {
        return true;
    }

    switch (biton32(layer_state)) {
        case L_MEDIA:
            set_layer_color(L_MEDIA);
            break;
        case L_UMLAUT:
            set_layer_color(L_UMLAUT);
            break;
        case L_GAMING:
            set_layer_color(L_GAMING);
            break;
        case L_NUMPAD:
            set_layer_color(L_NUMPAD);
            break;
        default:
            if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
                rgb_matrix_set_color_all(0, 0, 0);
            }
            break;
    }

    return false;
}

void housekeeping_task_user(void) {
    if (!is_transport_connected()) {
        layer_move(L_GAMING);
    }
}

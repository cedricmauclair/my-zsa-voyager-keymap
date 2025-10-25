#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};

#define DUAL_FUNC_0 LT(7, KC_1)
#define DUAL_FUNC_1 LT(6, KC_7)
#define DUAL_FUNC_2 LT(10, KC_8)
#define DUAL_FUNC_3 LT(2, KC_C)
#define DUAL_FUNC_4 LT(2, KC_F13)
#define DUAL_FUNC_5 LT(11, KC_2)
#define DUAL_FUNC_6 LT(12, KC_H)
#define DUAL_FUNC_7 LT(4, KC_B)
#define DUAL_FUNC_8 LT(14, KC_B)
#define DUAL_FUNC_9 LT(11, KC_F18)
#define DUAL_FUNC_10 LT(9, KC_C)
#define DUAL_FUNC_11 LT(12, KC_G)
#define DUAL_FUNC_12 LT(4, KC_N)
#define DUAL_FUNC_13 LT(7, KC_I)
#define DUAL_FUNC_14 LT(6, KC_F24)
#define DUAL_FUNC_15 LT(2, KC_9)
#define DUAL_FUNC_16 LT(7, KC_F23)
#define DUAL_FUNC_17 LT(5, KC_B)
#define DUAL_FUNC_18 LT(5, KC_3)
#define DUAL_FUNC_19 LT(4, KC_F24)
#define DUAL_FUNC_20 LT(7, KC_F3)
#define DUAL_FUNC_21 LT(12, KC_U)
#define DUAL_FUNC_22 LT(1, KC_F20)
#define DUAL_FUNC_23 LT(10, KC_F6)
#define DUAL_FUNC_24 LT(9, KC_3)
#define DUAL_FUNC_25 LT(11, KC_O)
#define DUAL_FUNC_26 LT(9, KC_R)
#define DUAL_FUNC_27 LT(2, KC_F24)
#define DUAL_FUNC_28 LT(13, KC_J)
#define DUAL_FUNC_29 LT(11, KC_F6)
#define DUAL_FUNC_30 LT(2, KC_N)
#define DUAL_FUNC_31 LT(11, KC_B)
#define DUAL_FUNC_32 LT(1, KC_Y)
#define DUAL_FUNC_33 LT(13, KC_F9)
#define DUAL_FUNC_34 LT(3, KC_S)
#define DUAL_FUNC_35 LT(9, KC_F11)
#define DUAL_FUNC_36 LT(9, KC_F17)
#define DUAL_FUNC_37 LT(12, KC_F10)
#define DUAL_FUNC_38 LT(5, KC_9)
#define DUAL_FUNC_39 LT(5, KC_F11)
#define DUAL_FUNC_40 LT(2, KC_U)
#define DUAL_FUNC_41 LT(5, KC_F18)
#define DUAL_FUNC_42 LT(1, KC_F4)
#define DUAL_FUNC_43 LT(15, KC_7)
#define DUAL_FUNC_44 LT(5, KC_A)
#define DUAL_FUNC_45 LT(4, KC_S)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,    DUAL_FUNC_5,                                    DUAL_FUNC_16,   KC_7,           DUAL_FUNC_17,   DUAL_FUNC_18,   DUAL_FUNC_19,   DUAL_FUNC_20,   
    CW_TOGG,        DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_10,                                   DUAL_FUNC_21,   DUAL_FUNC_22,   KC_I,           DUAL_FUNC_23,   DUAL_FUNC_24,   DUAL_FUNC_25,   
    KC_TRANSPARENT, FR_Q,           MT(MOD_LGUI, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LALT, KC_F),DUAL_FUNC_11,                                   KC_H,           MT(MOD_LALT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RGUI, KC_L),DUAL_FUNC_26,   DUAL_FUNC_27,   
    KC_TRANSPARENT, FR_W,           DUAL_FUNC_12,   DUAL_FUNC_13,   DUAL_FUNC_14,   DUAL_FUNC_15,                                   KC_N,           MT(MOD_RALT, KC_M),KC_COMMA,       DUAL_FUNC_28,   DUAL_FUNC_29,   DUAL_FUNC_30,   
                                                    LT(3, KC_ENTER),MT(MOD_LSFT, KC_TAB),                                MT(MOD_LSFT, KC_BSPC),TD(DANCE_0)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, FR_1,           FR_2,           FR_3,           FR_4,           FR_5,                                           FR_6,           FR_7,           FR_8,           FR_9,           FR_0,           KC_MINUS,       
    KC_TRANSPARENT, KC_B,           DUAL_FUNC_2,    KC_P,           KC_O,           DUAL_FUNC_3,                                    KC_EQUAL,       KC_V,           KC_D,           KC_L,           KC_J,           FR_Z,           
    KC_TRANSPARENT, FR_A,           MT(MOD_LGUI, KC_U),MT(MOD_LCTL, KC_I),MT(MOD_LALT, KC_E),KC_COMMA,                                       DUAL_FUNC_13,   MT(MOD_LALT, KC_T),MT(MOD_RCTL, KC_S),MT(MOD_RGUI, KC_R),KC_N,           FR_M,           
    KC_TRANSPARENT, DUAL_FUNC_1,    KC_Y,           KC_X,           KC_M,           KC_K,                                           KC_TRANSPARENT, FR_Q,           KC_G,           KC_H,           KC_F,           FR_W,           
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_1)
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, FR_1,           FR_2,           FR_3,           FR_4,           FR_5,                                           FR_6,           FR_7,           FR_8,           FR_9,           FR_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, FR_Q,           KC_C,           KC_O,           KC_P,           FR_W,                                           KC_J,           FR_M,           KC_D,           OSL(6),         KC_Y,           KC_TRANSPARENT, 
    KC_TRANSPARENT, FR_A,           MT(MOD_LGUI, KC_S),MT(MOD_LCTL, KC_E),MT(MOD_LALT, KC_N),KC_F,                                           KC_L,           MT(MOD_LALT, KC_R),MT(MOD_RCTL, KC_T),MT(MOD_RGUI, KC_I),KC_U,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_TRANSPARENT, KC_V,           KC_B,                                           KC_M,           KC_H,           KC_G,           KC_COMMA,       KC_K,           KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,                                     KC_F12,         LSFT(KC_7),     LSFT(KC_8),     LSFT(KC_9),     DUAL_FUNC_32,   DUAL_FUNC_27,   
    KC_TRANSPARENT, LCTL(FR_A),     KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,                                        MT(MOD_LSFT, KC_DELETE),DUAL_FUNC_33,   DUAL_FUNC_34,   DUAL_FUNC_35,   DUAL_FUNC_36,   DUAL_FUNC_37,   
    KC_TRANSPARENT, DUAL_FUNC_31,   LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     QK_LLCK,                                        KC_ENTER,       LSFT(KC_1),     LSFT(KC_2),     LSFT(KC_3),     DUAL_FUNC_38,   DUAL_FUNC_39,   
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_0)
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 MO(5),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_0,     DUAL_FUNC_40,   DUAL_FUNC_41,   RALT(KC_D),     RALT(KC_P),                                     KC_GRAVE,       DUAL_FUNC_42,   KC_BSLS,        KC_MINUS,       ST_MACRO_2,     RALT(LSFT(KC_8)),
    KC_TRANSPARENT, RALT(KC_T),     KC_5,           KC_6,           RALT(KC_Y),     LSFT(KC_SLASH),                                 LSFT(KC_QUOTE), KC_RBRC,        DUAL_FUNC_25,   KC_QUOTE,       LSFT(KC_MINUS), KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_1,     RALT(KC_5),     RALT(KC_6),     RALT(KC_8),     LSFT(KC_GRAVE),                                 RALT(KC_L),     LSFT(KC_COMMA), LSFT(KC_M),     DUAL_FUNC_28,   DUAL_FUNC_29,   KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_TRANSPARENT, KC_INSERT,      KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_TRANSPARENT,                                 TO(0),          TO(1),          TO(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_UP,QK_DYNAMIC_TAPPING_TERM_PRINT,QK_LLCK,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_3,     DUAL_FUNC_43,   DUAL_FUNC_44,   ST_MACRO_4,     KC_TRANSPARENT,                                 KC_TRANSPARENT, FR_MU,          RALT(FR_8),     LSFT(KC_EQUAL), KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    KC_TRANSPARENT, KC_TRANSPARENT,                                 FR_LPRN,        FR_RPRN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_45,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LSFT(FR_COLN),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);




extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,182}, {131,255,182}, {131,255,182}, {131,255,182}, {131,255,182}, {0,0,0}, {131,255,182}, {131,255,182}, {131,255,182}, {131,255,182}, {131,255,182}, {0,0,0}, {131,255,182}, {131,255,182}, {131,255,182}, {131,255,182}, {131,255,182}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,182}, {131,255,182}, {131,255,182}, {131,255,182}, {131,255,182}, {0,0,0}, {131,255,182}, {131,255,182}, {131,255,182}, {131,255,182}, {131,255,182}, {0,0,0}, {131,255,182}, {131,255,182}, {131,255,182}, {131,255,182}, {131,255,182}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {0,0,0}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {0,0,0}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {216,124,147}, {216,124,147}, {216,124,147}, {216,124,147}, {216,124,147}, {0,0,0}, {216,124,147}, {216,124,147}, {216,124,147}, {216,124,147}, {216,124,147}, {0,0,0}, {216,124,147}, {216,124,147}, {216,124,147}, {216,124,147}, {216,124,147}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {216,124,147}, {216,124,147}, {216,124,147}, {216,124,147}, {216,124,147}, {0,0,0}, {216,124,147}, {216,124,147}, {216,124,147}, {216,124,147}, {216,124,147}, {0,0,0}, {216,124,147}, {216,124,147}, {216,124,147}, {216,124,147}, {216,124,147}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {98,189,255}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {98,188,166}, {98,188,166}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {0,0,0}, {98,188,166}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {0,0,0}, {98,188,166}, {98,188,166}, {98,188,166}, {98,188,166}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {98,189,255}, {0,0,0}, {98,189,255} },

    [4] = { {0,0,0}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {0,0,0}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {0,0,0}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {0,0,0}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {139,179,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {216,124,147}, {0,245,245}, {0,245,245}, {0,245,245}, {216,124,147}, {216,124,147}, {0,0,0}, {0,0,0}, {216,124,147}, {216,124,147}, {216,124,147}, {0,0,0}, {0,0,0}, {216,124,147}, {216,124,147}, {216,124,147}, {216,124,147}, {0,0,0}, {0,0,0}, {0,0,0}, {216,124,147}, {216,124,147}, {216,124,147}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {216,124,147}, {216,124,147}, {0,0,0}, {0,0,0}, {0,245,245}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}



typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[2];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(LSFT(RALT(KC_SPACE))); break;
        case DOUBLE_HOLD: register_code16(RALT(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case SINGLE_HOLD:
          if(!is_layer_locked(4)) {
            layer_off(4);
          }
        break;
        case DOUBLE_TAP: unregister_code16(LSFT(RALT(KC_SPACE))); break;
        case DOUBLE_HOLD: unregister_code16(RALT(KC_SPACE)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case SINGLE_HOLD: layer_on(4); break;
        case DOUBLE_TAP: register_code16(KC_RIGHT_ALT); break;
        case DOUBLE_HOLD: register_code16(KC_RIGHT_ALT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case SINGLE_HOLD:
          if(!is_layer_locked(4)) {
            layer_off(4);
          }
        break;
        case DOUBLE_TAP: unregister_code16(KC_RIGHT_ALT); break;
        case DOUBLE_HOLD: unregister_code16(KC_RIGHT_ALT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[1].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_N))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_3))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(100)  SS_TAP(X_A));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(100)  SS_TAP(X_O));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_GRAVE);
        } else {
          unregister_code16(KC_GRAVE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_ESCAPE);
        } else {
          unregister_code16(KC_ESCAPE);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(LSFT(KC_1)));
        } else {
          unregister_code16(RALT(LSFT(KC_1)));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(LSFT(KC_2)));
        } else {
          unregister_code16(RALT(LSFT(KC_2)));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(LSFT(KC_3)));
        } else {
          unregister_code16(RALT(LSFT(KC_3)));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(LSFT(KC_4)));
        } else {
          unregister_code16(RALT(LSFT(KC_4)));
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_5));
        } else {
          unregister_code16(RALT(KC_5));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(FR_A);
        } else {
          unregister_code16(FR_A);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(FR_A));
        } else {
          unregister_code16(RALT(FR_A));
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(FR_Z);
        } else {
          unregister_code16(FR_Z);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(FR_Z));
        } else {
          unregister_code16(RALT(FR_Z));
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_E);
        } else {
          unregister_code16(KC_E);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_E));
        } else {
          unregister_code16(RALT(KC_E));
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_R);
        } else {
          unregister_code16(KC_R);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_R));
        } else {
          unregister_code16(RALT(KC_R));
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_T);
        } else {
          unregister_code16(KC_T);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_T));
        } else {
          unregister_code16(RALT(KC_T));
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_G);
        } else {
          unregister_code16(KC_G);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_G));
        } else {
          unregister_code16(RALT(KC_G));
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_X);
        } else {
          unregister_code16(KC_X);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_X));
        } else {
          unregister_code16(RALT(KC_X));
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_C);
        } else {
          unregister_code16(KC_C);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_C));
        } else {
          unregister_code16(RALT(KC_C));
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_V);
        } else {
          unregister_code16(KC_V);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_EQUAL));
        } else {
          unregister_code16(RALT(KC_EQUAL));
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_B);
        } else {
          unregister_code16(KC_B);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_EQUAL);
        } else {
          unregister_code16(KC_EQUAL);
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_6));
        } else {
          unregister_code16(RALT(KC_6));
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_8);
        } else {
          unregister_code16(KC_8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_8));
        } else {
          unregister_code16(RALT(KC_8));
        }  
      }  
      return false;
    case DUAL_FUNC_18:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_9);
        } else {
          unregister_code16(KC_9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_9));
        } else {
          unregister_code16(RALT(KC_9));
        }  
      }  
      return false;
    case DUAL_FUNC_19:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_0);
        } else {
          unregister_code16(KC_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_0));
        } else {
          unregister_code16(RALT(KC_0));
        }  
      }  
      return false;
    case DUAL_FUNC_20:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_MINUS);
        } else {
          unregister_code16(KC_MINUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_MINUS));
        } else {
          unregister_code16(RALT(KC_MINUS));
        }  
      }  
      return false;
    case DUAL_FUNC_21:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_Y);
        } else {
          unregister_code16(KC_Y);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_Y));
        } else {
          unregister_code16(RALT(KC_Y));
        }  
      }  
      return false;
    case DUAL_FUNC_22:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_U);
        } else {
          unregister_code16(KC_U);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_U));
        } else {
          unregister_code16(RALT(KC_U));
        }  
      }  
      return false;
    case DUAL_FUNC_23:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_O);
        } else {
          unregister_code16(KC_O);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_O));
        } else {
          unregister_code16(RALT(KC_O));
        }  
      }  
      return false;
    case DUAL_FUNC_24:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_P);
        } else {
          unregister_code16(KC_P);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_P));
        } else {
          unregister_code16(RALT(KC_P));
        }  
      }  
      return false;
    case DUAL_FUNC_25:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LBRC);
        } else {
          unregister_code16(KC_LBRC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(LSFT(KC_LBRC)));
        } else {
          unregister_code16(RALT(LSFT(KC_LBRC)));
        }  
      }  
      return false;
    case DUAL_FUNC_26:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(FR_M);
        } else {
          unregister_code16(FR_M);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(FR_M));
        } else {
          unregister_code16(RALT(FR_M));
        }  
      }  
      return false;
    case DUAL_FUNC_27:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUOTE);
        } else {
          unregister_code16(KC_QUOTE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_QUOTE));
        } else {
          unregister_code16(RALT(KC_QUOTE));
        }  
      }  
      return false;
    case DUAL_FUNC_28:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_DOT));
        } else {
          unregister_code16(RALT(KC_DOT));
        }  
      }  
      return false;
    case DUAL_FUNC_29:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_SLASH);
        } else {
          unregister_code16(KC_SLASH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_SLASH));
        } else {
          unregister_code16(RALT(KC_SLASH));
        }  
      }  
      return false;
    case DUAL_FUNC_30:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RBRC);
        } else {
          unregister_code16(KC_RBRC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_RBRC));
        } else {
          unregister_code16(RALT(KC_RBRC));
        }  
      }  
      return false;
    case DUAL_FUNC_31:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(FR_Z));
        } else {
          unregister_code16(LCTL(FR_Z));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_Y));
        } else {
          unregister_code16(LCTL(KC_Y));
        }  
      }  
      return false;
    case DUAL_FUNC_32:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LBRC);
        } else {
          unregister_code16(KC_LBRC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_LBRC));
        } else {
          unregister_code16(RALT(KC_LBRC));
        }  
      }  
      return false;
    case DUAL_FUNC_33:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(KC_4));
        } else {
          unregister_code16(LSFT(KC_4));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_34:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(KC_5));
        } else {
          unregister_code16(LSFT(KC_5));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_35:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(KC_6));
        } else {
          unregister_code16(LSFT(KC_6));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }  
      }  
      return false;
    case DUAL_FUNC_36:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RBRC);
        } else {
          unregister_code16(KC_RBRC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_RBRC));
        } else {
          unregister_code16(LSFT(KC_RBRC));
        }  
      }  
      return false;
    case DUAL_FUNC_37:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_BSLS);
        } else {
          unregister_code16(KC_BSLS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_BSLS));
        } else {
          unregister_code16(RALT(KC_BSLS));
        }  
      }  
      return false;
    case DUAL_FUNC_38:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_M);
        } else {
          unregister_code16(KC_M);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }  
      }  
      return false;
    case DUAL_FUNC_39:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(KC_SLASH));
        } else {
          unregister_code16(LSFT(KC_SLASH));
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(LSFT(KC_SLASH)));
        } else {
          unregister_code16(RALT(LSFT(KC_SLASH)));
        }  
      }  
      return false;
    case DUAL_FUNC_40:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_NUBS);
        } else {
          unregister_code16(KC_NUBS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_NUBS));
        } else {
          unregister_code16(RALT(KC_NUBS));
        }  
      }  
      return false;
    case DUAL_FUNC_41:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(KC_NUBS));
        } else {
          unregister_code16(LSFT(KC_NUBS));
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(LSFT(KC_NUBS)));
        } else {
          unregister_code16(RALT(LSFT(KC_NUBS)));
        }  
      }  
      return false;
    case DUAL_FUNC_42:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RALT(KC_4));
        } else {
          unregister_code16(RALT(KC_4));
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(KC_1));
        } else {
          unregister_code16(RALT(KC_1));
        }  
      }  
      return false;
    case DUAL_FUNC_43:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RALT(KC_C));
        } else {
          unregister_code16(RALT(KC_C));
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(LSFT(KC_C)));
        } else {
          unregister_code16(RALT(LSFT(KC_C)));
        }  
      }  
      return false;
    case DUAL_FUNC_44:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RALT(KC_O));
        } else {
          unregister_code16(RALT(KC_O));
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(LSFT(KC_O)));
        } else {
          unregister_code16(RALT(LSFT(KC_O)));
        }  
      }  
      return false;
    case DUAL_FUNC_45:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RALT(FR_A));
        } else {
          unregister_code16(RALT(FR_A));
        }
      } else {
        if (record->event.pressed) {
          register_code16(RALT(LSFT(FR_A)));
        } else {
          unregister_code16(RALT(LSFT(FR_A)));
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

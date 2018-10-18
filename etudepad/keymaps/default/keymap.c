#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    KEYMAP(
	    KC_7,  KC_8,   KC_9,   
	    KC_4,  KC_5,   KC_6,   
	    KC_1,  KC_2,   KC_3,   
	    LT(2, KC_0),  KC_DOT, KC_ENT ),
	
	KEYMAP(
	    KC_WH_D,       KC_MS_U,    KC_WH_U,
	    KC_MS_L,       KC_NO,      KC_MS_R,
	    KC_MS_BTN1,    KC_MS_D,    KC_MS_BTN2,
	    MO(2),         LALT(KC_LEFT), KC_ENT  ),
	
	KEYMAP(
	    KC_TAB, KC_UP,  KC_BSPC,
	    KC_LEFT,KC_NO,  KC_RIGHT,
	    TO(3),  KC_DOWN,KC_ENT,
	    KC_NO,  TO(1),  TO(0)  ),
		
    KEYMAP(
        KC_WH_D,    LSFT(KC_WH_U),  KC_WH_U,
        LCTL(KC_WH_U),  KC_NO,   LCTL(KC_WH_D),
        KC_MS_BTN1, LSFT(KC_WH_D), KC_MS_BTN2,
        MO(2),         TO(2),       KC_NO )
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}

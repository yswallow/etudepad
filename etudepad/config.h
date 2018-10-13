#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    qmkbuilder
#define PRODUCT         EtudePad
#define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 3

/* key matrix pins */
#define MATRIX_COL_PINS { D1, D0, D4 }
#define MATRIX_ROW_PINS { B6, B2, B3, B1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS


#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

/* Mousekey config */
#define MOUSEKEY_DELAY             100
#define MOUSEKEY_INTERVAL          50
#define MOUSEKEY_MAX_SPEED         10
#define MOUSEKEY_TIME_TO_MAX       10
#define MOUSEKEY_WHEEL_MAX_SPEED   6
#define MOUSEKEY_WHEEL_TIME_TO_MAX 30

#endif

#define TAPPING_TERM 150

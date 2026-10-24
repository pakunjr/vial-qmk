#pragma once

#define VIAL_KEYBOARD_UID {0x89, 0x36, 0x2A, 0xC7, 0xFA, 0xD8, 0x89, 0x45}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS // Define above and comment this out if unsure of -bl value

#undef DYNAMIC_KEYMAP_LAYER_COUNT // Enable this if there's an error of `already defined`
#define DYNAMIC_KEYMAP_LAYER_COUNT 11
#define DYNAMIC_KEYMAP_MACRO_COUNT 41

#define VIAL_ALT_REPEAT_KEY_ENTRIES 20
#define VIAL_COMBO_ENTRIES 60
#define VIAL_TAP_DANCE_ENTRIES 41

// QMK Settings -> Tap-Hold
#define TAPPING_TERM 200
#define QUICK_TAP_TERM 200
#define TAPPING_TOGGLE 2       // Taps needed to toggle a TT(layer) key

// QMK Settings -> Combo
#define COMBO_TERM 80          // Increasing this may make all keys sluggish

// QMK Settings -> One Shot Keys
#define ONESHOT_TAP_TOGGLE 2   // Taps needed to lock a one-shot key
#define ONESHOT_TIMEOUT 6000   // One-shot timeout in milliseconds

// QMK Settings -> Mouse keys
#define MOUSEKEY_OVERLAP_RESET // If another MOUSEKEY overlaps with another, the acceleration will reset
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 10
#define MOUSEKEY_MOVE_DELTA 1
#define MOUSEKEY_MAX_SPEED 120
#define MOUSEKEY_TIME_TO_MAX 160
#define MOUSEKEY_WHEEL_DELAY 120
#define MOUSEKEY_WHEEL_INTERVAL 20
#define MOUSEKEY_WHEEL_MAX_SPEED 1
#define MOUSEKEY_WHEEL_DELTA 1
#define MOUSEKEY_WHEEL_TIME_TO_MAX 0

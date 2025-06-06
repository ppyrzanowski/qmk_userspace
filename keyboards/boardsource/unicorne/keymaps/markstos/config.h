#pragma once

#define RGB_MATRIX_LED_COUNT 54
#define RGB_MATRIX_DEFAULT_SPD 127
#define RGB_MATRIX_TIMEOUT 180000 // 3 minutes // 300000 = 5 minutes
#define RGB_MATRIX_LED_FLUSH_LIMIT 16
#define RGB_MATRIX_DEFAULT_SAT 77
#define RGB_MATRIX_DEFAULT_VAL 86
#define RGB_MATRIX_SPLIT { 27, 27 }
#define SPLIT_TRANSPORT_MIRROR
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_TRIGGER_ON_KEYDOWN

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

#define SPLIT_ACTIVITY_ENABLE

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
// #define POINTING_DEVINCE_ROTATION_90

// #define ANALOG_JOYSTICK_Y_AXIS_PIN GP27
// #define ANALOG_JOYSTICK_X_AXIS_PIN GP28



// #define I2C_DRIVER I2CD1
// #define I2C1_SDA_PIN GP22
// #define I2C1_SCL_PIN GP23

// #define AUDIO_PIN GP28
// #define AUDIO_PWM_DRIVER PWMD6
// #define AUDIO_INIT_DELAY
// #define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A

// markstos prefers silent boot.
// #define STARTUP_SONG SONG(ODE_TO_JOY)
//#define AUDIO_CLICKY

// #define ANALOG_JOYSTICK_Y_AXIS_PIN GP26
// #define ANALOG_JOYSTICK_X_AXIS_PIN GP27
// #define POINTING_DEVICE_INVERT_Y
// #define POINTING_DEVICE_INVERT_X

/* Select hand configuration */

//#define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS

// Customized by markstos
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY
// used for Tapping Term on thumb keys
#define TAPPING_TERM_THUMB 125

// If you press a dual-role key, press another key, and then release the
// dual-role key, all within the tapping term, by default the dual-role key
// will perform its tap action. If the HOLD_ON_OTHER_KEY_PRESS option is
// enabled, the dual-role key will perform its hold action instead.
#define HOLD_ON_OTHER_KEY_PRESS

// markstos: prevent keydown and keyup from firing on different layers
#define PREVENT_STUCK_MODIFER

// When enabled, typing a mod-tap plus second within term will register as the mod-combo
// Ref: https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold#permissive-hold 
#define PERMISSIVE_HOLD

#define COMBO_COUNT 2

// Set the COMBO_TERM so low that I won't type the keys one after each other during normal typing.
// They would have be held together intentionally to trigger this.
#define COMBO_TERM 40

// These mostly affect my one-shot Shift key, providing a CapsLock alternative.
// I want a relatively low timeout, so if I accidentally type "Shift", I can pause just briefly and move on.
#define ONESHOT_TAP_TOGGLE 3  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 2000  /* Time (in ms) before the one shot key is released */

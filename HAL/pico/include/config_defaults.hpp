#ifndef _CONFIG_DEFAULTS_HPP
#define _CONFIG_DEFAULTS_HPP

#include <Adafruit_TinyUSB.h>
#include <config.pb.h>

// clang-format off

const Config default_config = {
    .game_mode_configs_count = 7,
    .game_mode_configs = {
    GameModeConfig {
            .mode_id = MODE_MELEE,
            .socd_pairs_count = 4,
            .socd_pairs = {
                SocdPair { .button_dir1 = BTN_LF3, .button_dir2 = BTN_LF1, .socd_type = SOCD_2IP_NO_REAC },
                SocdPair { .button_dir1 = BTN_LF2, .button_dir2 = BTN_RF4, .socd_type = SOCD_2IP_NO_REAC },
                SocdPair { .button_dir1 = BTN_RT3, .button_dir2 = BTN_RT5, .socd_type = SOCD_2IP_NO_REAC },
                SocdPair { .button_dir1 = BTN_RT2, .button_dir2 = BTN_RT4, .socd_type = SOCD_2IP_NO_REAC },
            },
            .button_remapping_count = 0,
            .activation_binding_count = 3,
            .activation_binding = { BTN_LT1, BTN_MB1, BTN_LF4 },
        },
       GameModeConfig {
            .mode_id = MODE_PROJECT_M,
            .socd_pairs_count = 4,
            .socd_pairs = {
                SocdPair { .button_dir1 = BTN_LF3, .button_dir2 = BTN_LF1, .socd_type = SOCD_2IP_NO_REAC },
                SocdPair { .button_dir1 = BTN_LF2, .button_dir2 = BTN_RF4, .socd_type = SOCD_2IP_NO_REAC },
                SocdPair { .button_dir1 = BTN_RT3, .button_dir2 = BTN_RT5, .socd_type = SOCD_2IP_NO_REAC },
                SocdPair { .button_dir1 = BTN_RT2, .button_dir2 = BTN_RT4, .socd_type = SOCD_2IP_NO_REAC },
            },
            .button_remapping_count = 0,
            .activation_binding_count = 3,
            .activation_binding = { BTN_LT1, BTN_MB1, BTN_LF3 },
        },
        GameModeConfig {
            .mode_id = MODE_ULTIMATE,
            .socd_pairs_count = 4,
            .socd_pairs = {
                SocdPair { .button_dir1 = BTN_LF3, .button_dir2 = BTN_LF1, .socd_type = SOCD_2IP },
                SocdPair { .button_dir1 = BTN_LF2, .button_dir2 = BTN_RF4, .socd_type = SOCD_2IP },
                SocdPair { .button_dir1 = BTN_RT3, .button_dir2 = BTN_RT5, .socd_type = SOCD_2IP },
                SocdPair { .button_dir1 = BTN_RT2, .button_dir2 = BTN_RT4, .socd_type = SOCD_2IP },
            },
            .button_remapping_count = 0,
            .activation_binding_count = 3,
            .activation_binding = { BTN_LT1, BTN_MB1, BTN_LF2 },
        },
        GameModeConfig {
            .mode_id = MODE_FGC,
            .socd_pairs_count = 2,
            .socd_pairs = {
                SocdPair { .button_dir1 = BTN_LF3, .button_dir2 = BTN_LF1, .socd_type = SOCD_NEUTRAL },
                SocdPair { .button_dir1 = BTN_LF2, .button_dir2 = BTN_LT1, .socd_type = SOCD_NEUTRAL },
            },
            .button_remapping_count = 1,
            .button_remapping = {
                ButtonRemap { .physical_button = BTN_RT4, .activates = BTN_LT1 },
            },
            .activation_binding_count = 3,
            .activation_binding = { BTN_LT1, BTN_MB1, BTN_LF1 },
        },
        GameModeConfig {
            .mode_id = MODE_RIVALS_OF_AETHER,
            .socd_pairs_count = 4,
            .socd_pairs = {
                SocdPair { .button_dir1 = BTN_LF3, .button_dir2 = BTN_LF1, .socd_type = SOCD_2IP_NO_REAC },
                SocdPair { .button_dir1 = BTN_LF2, .button_dir2 = BTN_RF4, .socd_type = SOCD_2IP_NO_REAC },
                SocdPair { .button_dir1 = BTN_RT3, .button_dir2 = BTN_RT5, .socd_type = SOCD_2IP_NO_REAC },
                SocdPair { .button_dir1 = BTN_RT2, .button_dir2 = BTN_RT4, .socd_type = SOCD_2IP_NO_REAC },
            },
            .button_remapping_count = 0,
            .activation_binding_count = 3,
            .activation_binding = { BTN_LT1, BTN_MB1, BTN_RF1 },
        },
        GameModeConfig {
            .mode_id = MODE_RIVALS_2,
            .socd_pairs_count = 4,
            .socd_pairs = {
                SocdPair { .button_dir1 = BTN_LF3, .button_dir2 = BTN_LF1, .socd_type = SOCD_2IP_NO_REAC },
                SocdPair { .button_dir1 = BTN_LF2, .button_dir2 = BTN_RF4, .socd_type = SOCD_2IP_NO_REAC },
                SocdPair { .button_dir1 = BTN_RT3, .button_dir2 = BTN_RT5, .socd_type = SOCD_2IP_NO_REAC },
                SocdPair { .button_dir1 = BTN_RT2, .button_dir2 = BTN_RT4, .socd_type = SOCD_2IP_NO_REAC },
            },
            .button_remapping_count = 0,
            .activation_binding_count = 3,
            .activation_binding = { BTN_LT1, BTN_MB1, BTN_RF5 },
        },
        GameModeConfig {
            .mode_id = MODE_KEYBOARD,
            .socd_pairs_count = 2,
            .socd_pairs = {
                SocdPair { .button_dir1 = BTN_LF3, .button_dir2 = BTN_LF1, .socd_type = SOCD_2IP },
                SocdPair { .button_dir1 = BTN_LT1, .button_dir2 = BTN_RT4, .socd_type = SOCD_2IP },
            },
            .button_remapping_count = 0,
            .activation_binding_count = 3,
            .activation_binding = { BTN_LT2, BTN_MB1, BTN_LF4 },
            .keyboard_mode_config = 1,
        },
    },
    .communication_backend_configs_count = 8,
    .communication_backend_configs = {
        CommunicationBackendConfig {
            .backend_id = COMMS_BACKEND_XINPUT,
            .default_mode_config = 1,
        },
        CommunicationBackendConfig {
            .backend_id = COMMS_BACKEND_DINPUT,
            .default_mode_config = 1,
            .activation_binding_count = 1,
            .activation_binding = { BTN_RF3 },
        },
        CommunicationBackendConfig {
            .backend_id = COMMS_BACKEND_NINTENDO_SWITCH,
            .default_mode_config = 3,
            .activation_binding_count = 1,
            .activation_binding = { BTN_RF2 },
        },
        CommunicationBackendConfig {
            .backend_id = COMMS_BACKEND_GAMECUBE,
            .default_mode_config = 1,
        },
        CommunicationBackendConfig {
            .backend_id = COMMS_BACKEND_N64,
            .default_mode_config = 1,
            .activation_binding = { BTN_RT3 },
        },
        CommunicationBackendConfig {
            .backend_id = COMMS_BACKEND_NES,
            .default_mode_config = 1,
            .activation_binding_count = 1,
            .activation_binding = { BTN_LT1 },
        },
        CommunicationBackendConfig {
            .backend_id = COMMS_BACKEND_SNES,
            .default_mode_config = 1,
            .activation_binding_count = 1,
            .activation_binding = { BTN_LT2 },
        },
        CommunicationBackendConfig {
            .backend_id = COMMS_BACKEND_CONFIGURATOR,
            .activation_binding_count = 1,
            .activation_binding = { BTN_MB1 },
        }
    },
    .keyboard_modes_count = 1,
    .keyboard_modes = {
        KeyboardModeConfig {
            0,
            22,
            {
                { BTN_LF7, HID_KEY_A },
                { BTN_LF6, HID_KEY_B },
                { BTN_LF5, HID_KEY_C },
                { BTN_LF4, HID_KEY_D },
                { BTN_LF3, HID_KEY_E },
                { BTN_LF2, HID_KEY_F },
                { BTN_LF1, HID_KEY_G },
                { BTN_LT4, HID_KEY_H },
                { BTN_LT3, HID_KEY_I },
                { BTN_LT1, HID_KEY_J },
                { BTN_LT2, HID_KEY_K },
                { BTN_MB1, HID_KEY_L },
                { BTN_RT3, HID_KEY_M },
                { BTN_RT4, HID_KEY_N },
                { BTN_RT2, HID_KEY_O },
                { BTN_RT1, HID_KEY_P },
                { BTN_RT5, HID_KEY_Q },
                { BTN_RF5, HID_KEY_R },
                { BTN_RF6, HID_KEY_S },
                { BTN_RF7, HID_KEY_T },
                { BTN_RF8, HID_KEY_U },
                { BTN_RF1, HID_KEY_V },
                { BTN_RF2, HID_KEY_W },
                { BTN_RF3, HID_KEY_X },
                { BTN_RF4, HID_KEY_Y },
            },
        },
    },
    .default_backend_config = 1,
    .default_usb_backend_config = 1,
    .melee_options = {
        .crouch_walk_os = false,
        .disable_ledgedash_socd_override = false,
    },
    .project_m_options = {
        .true_z_press = true,
        .disable_ledgedash_socd_override = false,
    },
};

// clang-format on

#endif

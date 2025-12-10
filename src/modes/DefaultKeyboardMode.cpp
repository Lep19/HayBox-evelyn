#include "modes/DefaultKeyboardMode.hpp"

#include "core/socd.hpp"
#include "core/state.hpp"

DefaultKeyboardMode::DefaultKeyboardMode() : KeyboardMode() {}

void DefaultKeyboardMode::UpdateKeys(const InputState &inputs) {
    Press(HID_KEY_A, inputs.lf7);
    Press(HID_KEY_B, inputs.lf6);
    Press(HID_KEY_C, inputs.lf5);
    Press(HID_KEY_D, inputs.lf4);
    Press(HID_KEY_E, inputs.lf3);
    Press(HID_KEY_F, inputs.lf2);
    Press(HID_KEY_G, inputs.lf1);
    Press(HID_KEY_H, inputs.lt4);
    Press(HID_KEY_I, inputs.lt3);
    Press(HID_KEY_J, inputs.lt1);
    Press(HID_KEY_K, inputs.lt2);
    Press(HID_KEY_L, inputs.mb1);
    Press(HID_KEY_M, inputs.rt3);
    Press(HID_KEY_N, inputs.rt4);
    Press(HID_KEY_O, inputs.rt2);
    Press(HID_KEY_P, inputs.rt1);
    Press(HID_KEY_Q, inputs.rt5);
    Press(HID_KEY_R, inputs.rf5);
    Press(HID_KEY_S, inputs.rf6);
    Press(HID_KEY_T, inputs.rf7);
    Press(HID_KEY_U, inputs.rf8);
    Press(HID_KEY_V, inputs.rf1);
    Press(HID_KEY_W, inputs.rf2);
    Press(HID_KEY_X, inputs.rf3);
    Press(HID_KEY_Y, inputs.rf4);
}

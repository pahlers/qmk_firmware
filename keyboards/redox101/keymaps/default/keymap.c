/* Copyright 2019 Peter Ahlers
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include <stdint.h>

// Defines the keycodes used by our macros in process_record_user
// enum custom_keycodes {
//   QMKBEST = SAFE_RANGE,
//   QMKURL
// };


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /*
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
   |ESC| 1 | 2 | 3 | 4 | 5 |~` |                                                                     |=+ | 6 | 7 | 8 | 9 | 0 |F5 |
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
   |F1 | q | w | e | r | t |"' |                                                                     |-_ | y | u | i | o | p |F6 |
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
   |F2 | a | s | d | f | g |{[ |                                                                     |]} | h | j | k | l |;: |F7 |
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
   |F3 | z | x | c | v | b |DEL|                                                                     |L2 | n | m |,< |.> |UP |F8 |
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
   |F4 |TAB|L2 |WIN|L1 |CTL|BSP|                                                                     |L1 |SP |SHF|/? |LEF|DOW|RIG|
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
                       |ALT|                                                                             |ENT|
                       +---+                                                                             +---+
 */
  [0] = LAYOUT( /* Base */
    KC_ESC,KC_1,   KC_2,  KC_3,    KC_4,  KC_5,    KC_GRV,                      KC_EQL,  KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_F5,   \
    KC_F1, KC_Q,   KC_W,  KC_E,    KC_R,  KC_T,    KC_QUOT,                     KC_MINS, KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_F6,   \
    KC_F2, KC_A,   KC_S,  KC_D,    KC_F,  KC_G,    KC_LBRC,                     KC_RBRC, KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_F7,   \
    KC_F3, KC_Z,   KC_X,  KC_C,    KC_V,  KC_B,    KC_BSPC,                     KC_BSPC,  KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_UP,   KC_F8,   \
    KC_F4, KC_TAB, TT(2), KC_LGUI, MO(1), KC_LCTL, KC_COLN,                     KC_SCLN, KC_SPC, KC_RSFT, KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT, \
                                          KC_LALT,                                       KC_ENT                                               \
  ),

   /*
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
   |ESC| 1 | 2 | 3 | 4 | 5 |`~ |                                                                     |=+ | 6 | 7 | 8 | 9 | 0 |F13|
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
   |F9 | q | w | e | r | t |<  |                                                                     |>  | y | u | i | o | p |F14|
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
   |F10| a | s | d | f | g |(  |                                                                     |)  | h | j | k | l |:; |F15|
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
   |F11| z | x | c | v | b |DEL|                                                                     |L2 | n | m |,< |.> |PUP|F16|
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
   |F12|TAB|L2 |WIN|L1 |CTL|BSP|                                                                     |L1 |SP |SHF|/? |HOM|PDN|END|
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
                       |ALT|                                                                             |ENT|
                       +---+                                                                             +---+
 */
  [1] = LAYOUT( /* Layer 1 */
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LT,                         KC_GT,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F13, \
    KC_F9,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_PIPE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F14, \
    KC_F10,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LPRN,                       KC_RPRN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F15, \
    KC_F11,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL,                        KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_F16, \
    KC_F12,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS,                       KC_PSLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END, \
                                                 KC_TRNS,                                         KC_TRNS                                              \
  ),

     /*
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
   |LSC| 1 | 2 | 3 | 4 | 5 |~` |                                                                     |AC0| 6 |B3 | 8 | 9 | 0 |MUT|
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
   |SLP| q | w | e | r | t |;: |                                                                     |AC1|B1 |MU |B2 | o | p |V+ |
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
   |PWD| a | s | d | f | g |<  |                                                                     |AC2|ML |MD |MR | l |:; |V- |
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
   |DBG| z | x | c | v | b |DEL|                                                                     |WHL|WHD|WHU|WHR|>. |STP|F8 |
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
   |RES|TAB|L2 |WIN|L1 |CTL|BSP|                                                                     |RED|SP |SHF|/? |PRV|PLY|NXT|
   +---+---+---+---+---+---+---+                                                                     +---+---+---+---+---+---+---+
                       |ALT|                                                                             |ENT|
                       +---+                                                                             +---+
 */
  [2] = LAYOUT( /* Layer 2 */
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_ACL0, KC_TRNS, KC_BTN3, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, \
    KC_SLEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_ACL1, KC_BTN1, KC_MS_U, KC_BTN2, KC_TRNS, KC_TRNS, KC_VOLU, \
    KC_PWR,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_ACL2, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_TRNS, KC_VOLD, \
    DEBUG,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BRIGHTNESS_DOWN,            KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_MSTP, KC_TRNS, \
    RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BRIGHTNESS_UP,              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, \
                                                 KC_TRNS,                                         KC_TRNS                                               \
  ),
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}

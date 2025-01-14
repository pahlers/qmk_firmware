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
#pragma once

#include "quantum.h"
 /*
   +---+---+---+---+---+---+---+                     +---+---+---+---+---+---+---+
   |ESC| 1 | 2 | 3 | 4 | 5 |~` |                     |+= | 6 | 7 | 8 | 9 | 0 |F5 |
   +---+---+---+---+---+---+---+                     +---+---+---+---+---+---+---+
   |F1 | q | w | e | r | t |   |                     |   | y | u | i | o | p |F6 |
   +---+---+---+---+---+---+---+                     +---+---+---+---+---+---+---+
   |F2 | a | s | d | f | g |{[ |                     |]} | h | j | k | l | ; |F7 |
   +---+---+---+---+---+---+---+                     +---+---+---+---+---+---+---+
   |F3 | z | x | c | v | b |DEL|                     |   | n | m | , | . |UP |F8 |
   +---+---+---+---+---+---+---+-                    +---+---+---+---+---+---+---+
   |F4 |   |   |WIN|   |CTL|   |                     |   |SP |SHI|   |LEF|DOW|RIG|
   +---+---+---+---+---+---+---+                     +---+---+---+---+---+---+---+
                       |ALT|                             |ENT|                    
                       +---+                             +---+                    
 */
#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06,              k07, k08, k09, k10, k11, k12, k13, \
    k14, k15, k16, k17, k18, k19, k20,              k21, k22, k23, k24, k25, k26, k27, \
    k28, k29, k30, k31, k32, k33, k34,              k35, k36, k37, k38, k39, k40, k41, \
    k42, k43, k44, k45, k46, k47, k48,              k49, k50, k51, k52, k53, k54, k55, \
    k56, k57, k58, k59, k60, k61, k62,              k63, k64, k65, k66, k67, k68, k69, \
                             k70,                        k71                           \
) \
{ \
    { k00,   k01,   k02,   k03,   k04,   k05,   k06  }, \
    { k14,   k15,   k16,   k17,   k18,   k19,   k20  }, \
    { k28,   k29,   k30,   k31,   k32,   k33,   k34  }, \
    { k42,   k43,   k44,   k45,   k46,   k47,   k48  }, \
    { k56,   k57,   k58,   k59,   k60,   k61,   k62  }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k70  , KC_NO}, \
    { k13,   k12,   k11,   k10,   k09,   k08,   k07  }, \
    { k27,   k26,   k25,   k24,   k23,   k22,   k21  }, \
    { k41,   k40,   k39,   k38,   k37,   k36,   k35  }, \
    { k55,   k54,   k53,   k52,   k51,   k50,   k49  }, \
    { k69,   k68,   k67,   k66,   k65,   k64,   k63  }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k71  , KC_NO}  \
}

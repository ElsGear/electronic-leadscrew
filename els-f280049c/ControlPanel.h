// Clough42 Electronic Leadscrew
// https://github.com/clough42/electronic-leadscrew
//
// MIT License
//
// Copyright (c) 2019 James Clough
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.


#ifndef __CONTROL_PANEL_H
#define __CONTROL_PANEL_H

#include "F28x_Project.h"


#define ZERO    0b1111110000000000 // 0
#define ONE     0b0110000000000000 // 1
#define TWO     0b1101101000000000 // 2
#define THREE   0b1111001000000000 // 3
#define FOUR    0b0110011000000000 // 4
#define FIVE    0b1011011000000000 // 5
#define SIX     0b1011111000000000 // 6
#define SEVEN   0b1110000000000000 // 7
#define EIGHT   0b1111111000000000 // 8
#define NINE    0b1111011000000000 // 9
#define POINT   0b0000000100000000 // .
#define BLANK   0b0000000000000000

#define LED_TPI 1
#define LED_INCH (1<<1)
#define LED_MM (1<<2)
#define LED_THREAD (1<<3)
#define LED_FEED (1<<4)
#define LED_REVERSE (1<<5)
#define LED_FORWARD (1<<6)
#define LED_POWER (1<<7)

struct LED_BITS
{
    Uint16 TPI:1;
    Uint16 INCH:1;
    Uint16 MM:1;
    Uint16 THREAD:1;
    Uint16 FEED:1;
    Uint16 REVERSE:1;
    Uint16 FORWARD:1;
    Uint16 POWER:1;
};

typedef union LED_REG
{
    Uint16 all;
    struct LED_BITS bit;
} LED_REG;

struct KEY_BITS
{
    Uint16 UP:1;
    Uint16 reserved1:1;
    Uint16 DOWN:1;
    Uint16 IN_MM:1;
    Uint16 FEED_THREAD:1;
    Uint16 FWD_REV:1;
    Uint16 SET:1;
    Uint16 POWER:1;
};

typedef union KEY_REG
{
    Uint16 all;
    struct KEY_BITS bit;
} KEY_REG;


#endif // __CONTROL_PANEL_H

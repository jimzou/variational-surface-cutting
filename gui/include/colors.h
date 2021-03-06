#pragma once

#include <vector3.h>

const Vector3 RGB_TEAL = {0., 178./255., 178./255.};
const Vector3 RGB_BLUE = {150./255., 154./255., 255./255.};
const Vector3 RGB_SKYBLUE = {152./255., 158./255., 200./255.};
const Vector3 RGB_ORANGE = {1., 0.5, 0.};
const Vector3 RGB_BLACK = {0., 0., 0.};
const Vector3 RGB_WHITE = {1., 1., 1.};
const Vector3 RGB_RED = {0.8, 0., 0.};
const Vector3 RGB_DARKGRAY = { .2, .2, .2 };
const Vector3 RGB_LIGHTGRAY = { .8, .8, .8 };
const Vector3 RGB_DARKRED = { .2, .0, .0 };

static Vector3 getBackgroundColor() { return RGB_DARKGRAY; }
// static Vector3 getBackgroundColor() { return RGB_WHITE; }


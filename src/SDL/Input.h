#pragma once

#include <SDL.h>

static bool isKeyPressed(SDL_Scancode key) {
    const Uint8 *state = SDL_GetKeyboardState(nullptr);
    return state[key];
}

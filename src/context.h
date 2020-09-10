#ifndef CONTEXT_H
#define CONTEXT_H

#include <SDL.h>
#include <iostream>

namespace cppsdl
{
    namespace CONTEXT_FLAGS_INIT
    {
        constexpr uint32_t TIMER = SDL_INIT_TIMER;
        constexpr uint32_t AUDIO = SDL_INIT_AUDIO;
        constexpr uint32_t VIDEO = SDL_INIT_VIDEO;
        constexpr uint32_t JOYSTICK = SDL_INIT_JOYSTICK;
        constexpr uint32_t HAPTIC = SDL_INIT_HAPTIC;
        constexpr uint32_t GAMECONTROLLER = SDL_INIT_GAMECONTROLLER;
        constexpr uint32_t EVENTS = SDL_INIT_EVENTS;
        constexpr uint32_t EVERYTHING = SDL_INIT_EVERYTHING;
        constexpr uint32_t NOPARACHUTE = SDL_INIT_NOPARACHUTE;
    } // namespace CONTEXT_FLAGS_INIT

    class Context
    {
    public:
        Context(uint32_t flags = CONTEXT_FLAGS_INIT::VIDEO);
        // temp method
        void Delay(int ms);
        ~Context();
    };
} // namespace cppsdl

#endif
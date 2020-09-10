#ifndef WINDOW_H
#define WINDOW_H

#include <SDL.h>
#include <iostream>
#include <string>

#include "config.h"

namespace cppsdl
{
    namespace WINDOW_FLAGS
    {
        constexpr uint32_t FULLSCREEN = SDL_WINDOW_FULLSCREEN;
        constexpr uint32_t MAXIMIZED = SDL_WINDOW_MAXIMIZED;
        constexpr uint32_t SHOWN = SDL_WINDOW_SHOWN;
        constexpr uint32_t FULLSCREEN_DESKTOP = SDL_WINDOW_FULLSCREEN_DESKTOP;
        constexpr uint32_t OPENGL = SDL_WINDOW_OPENGL;
        constexpr uint32_t HIDDEN = SDL_WINDOW_HIDDEN;
        constexpr uint32_t VULKAN = SDL_WINDOW_VULKAN;
        constexpr uint32_t BORDERLESS = SDL_WINDOW_BORDERLESS;
        constexpr uint32_t RESIZABLE = SDL_WINDOW_RESIZABLE;
        constexpr uint32_t MINIMIZED = SDL_WINDOW_MINIMIZED;
        constexpr uint32_t INPUT_GRABBED = SDL_WINDOW_INPUT_GRABBED;
        constexpr uint32_t ALLOW_HIGHDPI = SDL_WINDOW_ALLOW_HIGHDPI;
    } // namespace WINDOW_FLAGS

    class Window
    {
    private:
        SDL_Window *window;

    public:
        Window(std::string name,
               int width,
               int height,
               int windowPositionX = config::WINDOWPOS_CENTERED,
               int windowPositionY = config::WINDOWPOS_CENTERED,
               uint32_t flags = WINDOW_FLAGS::SHOWN);

        SDL_Window *GetSDLWindow();

        ~Window();
    }; // namespace WINDOW_FLAGS
} // namespace cppsdl

#endif // WINDOW_H
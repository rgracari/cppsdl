#ifndef WINDOW_H
#define WINDOW_H

#include <SDL.h>
#include <iostream>
#include <string>

namespace cppsdl
{
    class Window
    {
    private:
        SDL_Window *window;

    public:
        Window(std::string name, int width, int height, int windowPositionX = SDL_WINDOWPOS_UNDEFINED, int windowPositionY = SDL_WINDOWPOS_UNDEFINED);
        ~Window();
    };
} // namespace cppsdl

#endif // WINDOW_H
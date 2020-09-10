#include "window.h"

namespace cppsdl
{
    Window::Window(
        std::string name,
        int width,
        int height,
        int windowPositionX,
        int windowPositionY)
    {
        std::cout << "Create Window" << std::endl;
        window = SDL_CreateWindow(
            name.c_str(),
            windowPositionX,
            windowPositionY,
            width,
            height,
            SDL_WINDOW_SHOWN);
    }

    Window::~Window()
    {
        std::cout << "Destroy Window" << std::endl;
        SDL_DestroyWindow(window);
    }
} // namespace cppsdl

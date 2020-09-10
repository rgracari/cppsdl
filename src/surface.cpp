#include "surface.h"

#include <iostream>

namespace cppsdl
{
    Surface::Surface()
    {
        std::cout << "SHOULD IMP CREATE RGB SURFACE" << std::endl;
    }

    Surface::Surface(const char *path)
    {
        std::cout << "Create Surface" << std::endl;
        surface = SDL_LoadBMP(path);
    }

    SDL_Surface *Surface::GetSDLSurface()
    {
        return surface;
    }

    Surface::~Surface()
    {
        if (surface != nullptr)
        {
            std::cout << "Free Surface" << std::endl;
            SDL_FreeSurface(surface);
        }
    }
} // namespace cppsdl
#ifndef SURFACE_H
#define SURFACE_H

#include <SDL.h>

#include <string>

#include "rect.h"

namespace cppsdl
{
    class Surface
    {
    private:
        SDL_Surface *surface = nullptr;

    public:
        Surface();

        Surface(const char *path);

        Rect GetRect();
        SDL_Surface *GetSDLSurface();

        ~Surface();
    };
} // namespace cppsdl

#endif // SURFACE_H
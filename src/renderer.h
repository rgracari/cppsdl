#ifndef RENDERER_H
#define RENDERER_H

#include <SDL.h>

#include "window.h"

namespace cppsdl
{
    namespace RENDERER_FLAGS
    {
        constexpr uint32_t SOFTWARE = SDL_RENDERER_SOFTWARE;
        constexpr uint32_t ACCELERATED = SDL_RENDERER_ACCELERATED;
        constexpr uint32_t PRESENTVSYNC = SDL_RENDERER_PRESENTVSYNC;
        constexpr uint32_t FULLSCREEN_TARGETTEXTURE = SDL_RENDERER_TARGETTEXTURE;
    } // namespace RENDERER_FLAGS

    class Renderer
    {
    private:
        SDL_Renderer *renderer;

    public:
        Renderer() = delete;
        Renderer(Window &window, uint32_t flags = RENDERER_FLAGS::ACCELERATED);
        ~Renderer();
    };
} // namespace cppsdl

#endif // RENDERER_H

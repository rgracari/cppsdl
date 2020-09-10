#ifndef TEXTURE_H
#define TEXTURE_H

#include <SDL.h>

#include "surface.h"
#include "renderer.h"

namespace cppsdl
{
    class Texture
    {
    private:
        SDL_Texture *texture = nullptr;

    public:
        Texture(Renderer &renderer, Surface &surface);

        SDL_Texture *GetSDLTexture();

        ~Texture();
    };
} // namespace cppsdl

#endif // TEXTURE_H
#include "texture.h"

#include <iostream>

namespace cppsdl
{
    Texture::Texture(Renderer &renderer, Surface &surface)
    {
        std::cout << "Create Texture" << std::endl;
        texture = SDL_CreateTextureFromSurface(renderer.GetSDLRenderer(), surface.GetSDLSurface());
    }

    SDL_Texture *Texture::GetSDLTexture()
    {
        return texture;
    }

    Texture::~Texture()
    {
        if (texture != nullptr)
        {
            std::cout << "Destroy Texture" << std::endl;
            SDL_DestroyTexture(texture);
        }
    }
} // namespace cppsdl
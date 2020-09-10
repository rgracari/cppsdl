#include "renderer.h"

#include "texture.h"

namespace cppsdl
{
    Renderer::Renderer(Window &window, int index, uint32_t flags)
    {
        std::cout << "Create Renderer" << std::endl;
        renderer = SDL_CreateRenderer(
            window.GetSDLWindow(),
            index,
            flags);
    }

    void Renderer::DisplayRenderDriverInfo()
    {
        int numberOfDriver = SDL_GetNumRenderDrivers();
        SDL_RendererInfo info;
        std::cout << "====== ALL DRIVERS ======" << std::endl;
        for (int i = 0; i < numberOfDriver; i++)
        {
            SDL_GetRenderDriverInfo(i, &info);
            std::cout << info.name << std::endl;
        }
        std::cout << "=========================" << std::endl;
    }

    SDL_Renderer *Renderer::GetSDLRenderer()
    {
        return renderer;
    }

    void Renderer::RenderClear()
    {
        SDL_RenderClear(renderer);
    }

    void Renderer::RenderCopy(Texture &texture)
    {
        SDL_RenderCopy(renderer, texture.GetSDLTexture(), NULL, NULL);
    }

    void Renderer::RenderPresent()
    {
        SDL_RenderPresent(renderer);
    }

    Renderer::~Renderer()
    {
        std::cout << "Destroy Renderer" << std::endl;
        SDL_DestroyRenderer(renderer);
    }
} // namespace cppsdl
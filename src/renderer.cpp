#include "renderer.h"

namespace cppsdl
{
    Renderer::Renderer(Window &window, uint32_t flags)
    {
        std::cout << "Create Renderer" << std::endl;
        renderer = SDL_CreateRenderer(
            window.GetSDLWindow(),
            -1,
            flags);
    }

    Renderer::~Renderer()
    {
        std::cout << "Destroy Renderer" << std::endl;
        SDL_DestroyRenderer(renderer);
    }
}
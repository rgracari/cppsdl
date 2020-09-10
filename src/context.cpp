#include "context.h"

namespace cppsdl
{
    Context::Context(uint32_t flags)
    {
        std::cout << "SDL_INIT" << std::endl;
        SDL_Init(flags);
    }

    void Context::Delay(int ms)
    {
        SDL_Delay(ms);
    }

    Context::~Context()
    {
        std::cout << "SDL_QUIT" << std::endl;
        SDL_Quit();
    }
} // namespace cppsdl

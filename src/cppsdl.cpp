#include "cppsdl.h"

#include <iostream>
#include <SDL.h>

namespace cppsdl
{
    void Init()
    {
        std::cout << "SDL_INIT" << std::endl;
        SDL_Init(SDL_INIT_VIDEO);
    }
    void Quit()
    {
        std::cout << "SDL_QUIT" << std::endl;
        SDL_Quit();
    }
} // namespace cppsdl
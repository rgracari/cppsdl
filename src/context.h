#include <SDL.h>
#include <iostream>

namespace cppsdl
{
    class Context
    {
    public:
        Context()
        {
            std::cout << "SDL_INIT" << std::endl;
            SDL_Init(SDL_INIT_VIDEO);
        }
        ~Context()
        {
            std::cout << "SDL_QUIT" << std::endl;
            SDL_Quit();
        }
    };
} // namespace cppsdl

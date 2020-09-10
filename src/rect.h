#ifndef RECT_H
#define RECT_H

#include <SDL.h>

namespace cppsdl
{
    class Rect
    {
    private:
        SDL_Rect rect;

    public:
        Rect();
        Rect(int x, int y, int w, int h);
        Rect(const Rect &other);
        Rect(SDL_Rect &rect);

        void SetRect(int x, int y, int w, int h);
        void SetX(int x);
        void SetY(int y);
        void SetW(int w);
        void SetH(int h);

        SDL_Rect &GetSDLRect();
    };
} // namespace cppsdl

#endif // RECT_H
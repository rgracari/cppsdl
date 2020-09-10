#include "rect.h"

namespace cppsdl
{
    Rect::Rect()
    {
        Rect::SetRect(0, 0, 0, 0);
    }

    Rect::Rect(SDL_Rect &r)
    {
        rect.x = r.x;
        rect.y = r.y;
        rect.w = r.w;
        rect.h = r.h;
    }

    Rect::Rect(int x, int y, int w, int h)
    {
        rect.x = x;
        rect.y = y;
        rect.w = w;
        rect.h = h;
    }

    Rect::Rect(const Rect &other)
    {
        rect.x = other.rect.x;
        rect.y = other.rect.y;
        rect.w = other.rect.w;
        rect.h = other.rect.h;
    }

    void Rect::SetRect(int x, int y, int w, int h)
    {
        rect.x = x;
        rect.y = y;
        rect.w = w;
        rect.h = h;
    }

    void Rect::SetX(int x)
    {
        rect.x = x;
    }
    void Rect::SetY(int y)
    {
        rect.y = y;
    }
    void Rect::SetW(int w)
    {
        rect.w = w;
    }
    void Rect::SetH(int h)
    {
        rect.h = h;
    }

    SDL_Rect &Rect::GetSDLRect()
    {
        return rect;
    }
} // namespace cppsdl
#include <cppsdl.h>

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    cppsdl::Context context(cppsdl::CONTEXT_FLAGS_INIT::VIDEO);
    cppsdl::Window window(
        "TEST",
        800,
        800,
        cppsdl::config::WINDOWPOS_CENTERED,
        cppsdl::config::WINDOWPOS_CENTERED);

    cppsdl::Renderer renderer(window);
    cppsdl::Surface surface("sandbox/Hercule.bmp");
    cppsdl::Texture texture(renderer, surface);

    cppsdl::Rect rect(200, 200, 400, 400);
    cppsdl::Rect rectsurface = surface.GetRect();

    renderer.RenderClear();
    renderer.RenderCopy(texture, rectsurface, rect);
    renderer.RenderPresent();

    context.Delay(1000);
    return 0;
}
#include <cppsdl.h>
#include <iostream>

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

    context.Delay(1000);

    return 0;
}
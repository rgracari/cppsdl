#include <cppsdl.h>
#include <iostream>

int main(int argc, char *argv[])
{
    cppsdl::Context context;
    cppsdl::Window window(
        "TEST",
        800,
        800,
        cppsdl::config::WINDOWPOS_CENTERED,
        cppsdl::config::WINDOWPOS_CENTERED);
    return 0;
}
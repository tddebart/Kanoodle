#include <iostream>
#include "SDL/SetupSDL.cpp"

int main() {
    std::cout << "Hello, World!" << std::endl;

    InitSDL();

    while (!done) {
        handleInput();
    }
    
    return 0;
}

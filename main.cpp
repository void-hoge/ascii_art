#include <iostream>
#include "ascii.hpp"

int main(int argc, char const *argv[]) {
    ascii hoge;
    for (size_t i = 0; i < argc-1; i++) {
        hoge.cui_output(argv[i+1]);
    }
    return 0;
}

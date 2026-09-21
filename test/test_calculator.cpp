#include "../src/calculator.h"
#include <iostream>

int main() {
    if (add(2, 3) != 5) {
        std::cout << "Add test failed\n";
        return 1;
    }

    if (subtract(5, 3) != 2) {
        std::cout << "Subtract test failed\n";
        return 1;
    }

    if (multiply(4, 3) != 12) {
        std::cout << "Multiply test failed\n";
        return 1;
    }

    std::cout << "All tests passed!\n";
    return 0;
}
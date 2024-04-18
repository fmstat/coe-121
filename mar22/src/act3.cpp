#include <iostream>

int main() {
    int rows;
    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    for (int y = 1; y <= rows; ++y) {
        for (int x = 1; x <= rows - y; ++x)
            std::cout << ' ';
        for (int x = 1; x <= y; ++x)
            std::cout << x * y << ' ';

        std::cout << '\n';
    }
}

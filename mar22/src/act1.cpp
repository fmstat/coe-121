#include <iostream>

int main() {
    int array[5];
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": ";
        std::cin >> array[i];
    }
    std::cout << '\n';
    std::cout << "Element 0: " << array[0] << '\n';
    std::cout << "Element 2: " << array[2] << '\n';
    std::cout << "Element 4: " << array[4] << '\n';
}

#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string fruits[] {"apple", "banana", "cherry", "date", "grape"};
    int size = sizeof(fruits) / sizeof(fruits[0]);

    std::cout << "Enter a fruit: ";
    std::string input;
    std::cin >> input;

    auto ptr = std::find(fruits, fruits + size, input);

    if (ptr != fruits + size)
        std::cout << "Found " << input << " at index "
                  << std::distance(fruits, ptr) << '\n';
    else
        std::cout << input << " not found.\n";
}

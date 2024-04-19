#include <algorithm>
#include <iostream>

int main() {
    std::cout << "Minimum and maximum elements of sorted array\n\n";

    // Create array
    const int SIZE = 5;
    int nums[SIZE];

    std::cout << "Array size: " << SIZE << "\n\n";

    // Ask user for integers
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Enter an integer: ";
        std::cin >> nums[i];
    }

    std::sort(nums, nums + SIZE);

    // Display array
    std::cout << "\n[";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << nums[i];
        if (i < SIZE - 1)
            std::cout << ", ";
    }
    std::cout << "]\n\n";

    // Getting the minimum and maximum is simple
    std::cout << "Min: " << nums[0] << '\n';
    std::cout << "Max: " << nums[SIZE - 1] << '\n';
}

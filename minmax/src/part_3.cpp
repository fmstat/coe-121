#include <algorithm>
#include <iostream>

int main() {
    std::cout << "Minimum and maximum elements of array\n";
    std::cout << "Standard library implementation\n\n";

    // Create array
    const int SIZE = 5;
    int nums[SIZE];

    std::cout << "Array size: " << SIZE << "\n\n";

    // Ask user for integers
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Enter an integer: ";
        std::cin >> nums[i];
    }

    // Display array
    std::cout << "\n[";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << nums[i];
        if (i < SIZE - 1)
            std::cout << ", ";
    }
    std::cout << "]\n\n";

    // Get minimum and maximum element
    auto [min, max] = std::minmax_element(nums, nums + SIZE);

    // Alternate method:
    // int min = *std::min_element(nums, nums + SIZE);
    // int max = *std::max_element(nums, nums + SIZE);
    // std::cout << "Min: " << min << '\n';
    // std::cout << "Max: " << max << '\n';

    std::cout << "Min: " << *min << '\n';
    std::cout << "Max: " << *max << '\n';
}

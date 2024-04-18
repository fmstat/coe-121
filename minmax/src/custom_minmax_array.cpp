#include <iostream>

int main() {
    std::cout << "Minimum and maximum elements of array\n";
    std::cout << "Custom implementation\n\n";

    // Create array
    const int SIZE = 5;
    int nums[SIZE];

    std::cout << "Array size: " << SIZE << "\n\n";

    // Ask user for integers
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Enter an integer: ";
        std::cin >> nums[i];
    }

    // Start at first element
    int min = nums[0];
    int max = nums[0];

    std::cout << "\n[";
    for (int i = 0; i < SIZE; ++i) {
        // Update min and max
        if (nums[i] < min)
            min = nums[i];
        if (nums[i] > max)
            max = nums[i];

        // Display element
        std::cout << nums[i];
        if (i < SIZE - 1)
            std::cout << ", ";
    }
    std::cout << "]\n\n";

    std::cout << "Min: " << min << '\n';
    std::cout << "Max: " << max << '\n';
}

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::cout << "Minimum and maximum elements of vector\n";
    std::cout << "Standard library implementation\n\n";

    // Create vector
    std::vector<int> nums;

    // Ask user for vector size
    std::cout << "How many integers? ";
    int size;
    std::cin >> size;
    std::cout << '\n';

    // Ask user for integers
    for (size_t i = 0; i < size; ++i) {
        std::cout << "Enter an integer: ";
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    // Display vector
    std::cout << "\n[";
    for (size_t i = 0; i < nums.size(); ++i) {
        std::cout << nums.at(i);
        if (i < nums.size() - 1)
            std::cout << ", ";
    }
    std::cout << "]\n\n";

    // Get minimum and maximum element
    auto [min, max] = std::minmax_element(nums.begin(), nums.end());

    // Alternate method:
    // int min = *std::min_element(nums.begin(), nums.end());
    // int max = *std::max_element(nums.begin(), nums.end());
    // std::cout << "Min: " << min << '\n';
    // std::cout << "Max: " << max << '\n';

    std::cout << "Min: " << *min << '\n';
    std::cout << "Max: " << *max << '\n';
}

#include <iostream>
#include <vector>

int main() {
    std::cout << "Minimum and maximum elements of vector\n";
    std::cout << "Custom implementation\n\n";

    std::vector<int> nums;

    std::cout << "How many integers? ";
    int size;
    std::cin >> size;
    std::cout << '\n';

    for (size_t i = 0; i < size; ++i) {
        std::cout << "Enter an integer: ";
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    int min = nums.at(0);
    int max = nums.at(0);

    std::cout << "\n[";
    for (size_t i = 0; i < nums.size(); ++i) {
        int num = nums.at(i);

        // Update `min` and `max`
        if (num < min)
            min = num;
        if (num > max)
            max = num;

        // Display element
        std::cout << num;
        if (i < nums.size() - 1)
            std::cout << ", ";
    }
    std::cout << "]\n\n";

    std::cout << "Min: " << min << '\n';
    std::cout << "Max: " << max << '\n';
}

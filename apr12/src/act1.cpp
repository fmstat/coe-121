#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums {};
    for (int i = 1; i <= 10; ++i)
        nums.push_back(i);

    std::cout << "Before:\n";
    std::cout << '[';
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i];
        if (i < nums.size() - 1)
            std::cout << ' ';
    }
    std::cout << "]\n";

    nums.resize(5);

    std::cout << "After:\n";
    std::cout << '[';
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i];
        if (i < nums.size() - 1)
            std::cout << ' ';
    }
    std::cout << ']';
}

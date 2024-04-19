#include <iostream>
#include <vector>

int main() {
    std::vector<double> nums;

    std::cout << "How many numbers? ";
    int size;
    std::cin >> size;

    double sum = 0;
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter a number: ";
        double num;
        std::cin >> num;
        nums.push_back(num);
        sum += num;
    }
    double average = sum / size;

    std::cout << "Sum: " << sum << '\n';
    std::cout << "Average: " << average << '\n';
}

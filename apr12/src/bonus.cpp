#include <iostream>
#include <vector>

int sum(std::vector<int>& vec) {
    int result = 0;
    for (auto&& i : vec)
        result += i;

    return result;
}

void display(std::vector<int>& vec) {
    std::cout << '[';
    for (size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i];
        if (i < vec.size() - 1)
            std::cout << ' ';
    }
    std::cout << ']';
}

int main() {
    std::vector<int> vec;

    int num;
    while (true) {
        std::cout << "Enter a number: ";
        std::cin >> num;
        if (std::cin.fail())
            break;
        vec.push_back(num);
    }

    std::cout << "Vector: ";
    display(vec);
    std::cout << "\nSum: " << sum(vec) << '\n';
}

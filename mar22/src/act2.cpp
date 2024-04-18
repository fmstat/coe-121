#include <iostream>
#include <string>

int main() {
    std::string colors[3] {"Blue", "Orange", "Yellow"};
    std::cout << '[';
    std::cout << colors[0] << ", " << colors[1] << ", " << colors[2];
    std::cout << "]\n";
}

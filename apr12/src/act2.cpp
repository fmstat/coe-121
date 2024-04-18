#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> colors {"LION", "TIGER", "EAGLE", "DOG", "CAT"};
    std::vector<std::string> animals {
        "BLUE", "RED", "GREEN", "VIOLET", "YELLOW"
    };

    std::cout << "Before:\n";
    std::cout << "Colors: [";
    for (int i = 0; i < colors.size(); ++i) {
        std::cout << colors[i];
        if (i < colors.size() - 1)
            std::cout << ' ';
    }
    std::cout << "]\n";
    std::cout << "Animals: [";
    for (int i = 0; i < animals.size(); ++i) {
        std::cout << animals[i];
        if (i < animals.size() - 1)
            std::cout << ' ';
    }
    std::cout << "]\n";

    colors.swap(animals);

    std::cout << "After:\n";
    std::cout << "Colors: [";
    for (int i = 0; i < colors.size(); ++i) {
        std::cout << colors[i];
        if (i < colors.size() - 1)
            std::cout << ' ';
    }
    std::cout << "]\n";
    std::cout << "Animals: [";
    for (int i = 0; i < animals.size(); ++i) {
        std::cout << animals[i];
        if (i < animals.size() - 1)
            std::cout << ' ';
    }
    std::cout << "]\n";
}

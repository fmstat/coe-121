#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string names[] {
        "Sulaiman",
        "Sta. Teresa",
        "Siano",
        "Sappari",
        "Rogero",
        "Lim",
        "Jacinto",
        "Ismi",
        "Fabian",
        "Estabillo",
        "Chiong",
        "Baguio",
        "Angeles",
        "Alkun",
        "Alihuddin"
    };
    int size = sizeof(names) / sizeof(names[0]);

    std::cout << "Before:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << names[i] << '\n';
    }

    std::sort(names, names + size);

    std::cout << "\nAfter:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << names[i] << '\n';
    }
}

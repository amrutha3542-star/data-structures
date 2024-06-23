#include <iostream>
#include <string>

int main() {
    std::string haystack = "Finding a needle in a haystack.";
    std::string needle = "needle";

    if (haystack.find(needle) != std::string::npos) {
        std::cout << "Needle found in the haystack!" << std::endl;
    } else {
        std::cout << "Needle not found in the haystack." << std::endl;
    }

    return 0;
}

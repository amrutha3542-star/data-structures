#include <iostream>
#include <unordered_map>

void printRepeatedCharIndices(const std::string& str) {
    std::unordered_map<char, int> charIndexMap;

    for (int i = 0; i < str.length(); ++i) {
        if (charIndexMap.find(str[i]) != charIndexMap.end()) {
            std::cout << "Character '" << str[i] << "' is repeated at indices: " << charIndexMap[str[i]] << " and " << i << std::endl;
        } else {
            charIndexMap[str[i]] = i;
        }
    }
}

int main() {
    std::string input = "hello";
    printRepeatedCharIndices(input);

    return 0;
}

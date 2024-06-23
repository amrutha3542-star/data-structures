#include <iostream>
#include <unordered_map>

void printFrequentNumbersCount(int arr[], int size) {
    std::unordered_map<int, int> frequencyMap;

    for (int i = 0; i < size; ++i) {
        frequencyMap[arr[i]]++;
    }

    for (const auto& pair : frequencyMap) {
        std::cout << "Number: " << pair.first << " Frequency: " << pair.second << std::endl;
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printFrequentNumbersCount(arr, size);

    return 0;
}

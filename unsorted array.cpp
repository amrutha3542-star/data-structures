#include <iostream>
#include <vector>
#include <algorithm>

void displayMissingElement(const std::vector<int>& arr) {
    int n = arr.size();
    std::sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] - arr[i] > 1) {
            for (int j = 1; j < arr[i + 1] - arr[i]; j++) {
                std::cout << arr[i] + j << " is missing." << std::endl;
            }
        }
    }
}

int main() {
    std::vector<int> arr = {2, 5, 1, 4, 6, 9};
    displayMissingElement(arr);

    return 0;
}

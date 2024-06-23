#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr1 = {1, 2, 3};
    std::vector<int> arr2 = {4, 5, 6};

    arr1.insert(arr1.end(), arr2.begin(), arr2.end());

    std::cout << "Concatenated Array: ";
    for (int num : arr1) {
        std::cout << num << " ";
    }

    return 0;
}

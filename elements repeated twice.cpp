#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> findDuplicates(std::vector<int>& nums) {
    std::vector<int> duplicates;
    std::unordered_map<int, int> count;

    for (int num : nums) {
        count[num]++;
        if (count[num] == 2) {
            duplicates.push_back(num);
        }
    }

    return duplicates;
}

int main() {
    std::vector<int> nums = {1, 2, 2, 3, 4, 4, 5};
    std::vector<int> duplicates = findDuplicates(nums);

    std::cout << "Duplicates: ";
    for (int num : duplicates) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

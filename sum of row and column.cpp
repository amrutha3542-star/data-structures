#include <iostream>

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    int arr[rows][cols];

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> arr[i][j];
        }
    }

    std::cout << "Sum of each row:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j) {
            rowSum += arr[i][j];
        }
        std::cout << "Row " << i + 1 << ": " << rowSum << std::endl;
    }

    std::cout << "Sum of each column:" << std::endl;
    for (int j = 0; j < cols; ++j) {
        int colSum = 0;
        for (int i = 0; i < rows; ++i) {
            colSum += arr[i][j];
        }
        std::cout << "Column " << j + 1 << ": " << colSum << std::endl;
    }

    return 0;
}

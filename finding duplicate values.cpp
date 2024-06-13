#include <stdio.h>

void findDuplicates(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate: %d\n", arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {4, 2, 7, 3, 2, 7, 8, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, size);

    return 0;
}

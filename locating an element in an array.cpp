#include <stdio.h>

int findElement(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = findElement(arr, n, key);

    if (index != -1) {
        printf("Element found at index: %d", index);
    } else {
        printf("Element not found in the array");
    }

    return 0;
}

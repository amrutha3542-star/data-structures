#include <stdio.h>

int findSecondLargest(int arr[], int size) {
    int first, second;
    
    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }
    
    for (int i = 2; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    
    return second;
}

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int secondLargest = findSecondLargest(arr, size);
    
    printf("The second largest element in the array is: %d\n", secondLargest);
    
    return 0;
}

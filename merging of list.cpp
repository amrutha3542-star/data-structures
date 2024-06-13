#include <stdio.h>
#include <stdlib.h>

int main() {
    int list1[] = {1, 3, 5, 7, 9};
    int list2[] = {2, 4, 6, 8, 10};
    int mergedList[10];
    int i, j, k;

    for (i = 0; i < 5; i++) {
        mergedList[i] = list1[i];
    }

    for (j = 0; j < 5; j++) {
        mergedList[i + j] = list2[j];
    }

    printf("Merged List: ");
    for (k = 0; k < 10; k++) {
        printf("%d ", mergedList[k]);
    }

    return 0;
}

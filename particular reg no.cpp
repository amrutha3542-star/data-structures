#include <stdio.h>

int main() {
    int regNos[] = {123, 456, 789, 1011, 1213};
    int searchRegNo = 1011;
    int size = sizeof(regNos) / sizeof(regNos[0]);
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (regNos[i] == searchRegNo) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Registration number %d found in the array.", searchRegNo);
    } else {
        printf("Registration number %d not found in the array.", searchRegNo);
    }

    return 0;
}

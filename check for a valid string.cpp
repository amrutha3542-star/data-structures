#include <stdio.h>
#include <string.h>

int isValidString(char *str) {
    if (str == NULL) {
        return 0;
    }

    for (int i = 0; i < strlen(str); i++) {
        if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z')) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str[] = "ValidString";
    
    if (isValidString(str)) {
        printf("The string is valid.\n");
    } else {
        printf("The string is not valid.\n");
    }

    return 0;
}

// print all ascii values

#include <stdio.h>

int main() {
    int i;

    printf("ASCII values from 0 to 255:\n\n");

    for (i = 0; i <= 255; i++) {
        printf("ASCII value of %3d is '%c'\n", i, i);
    }

    return 0;
}

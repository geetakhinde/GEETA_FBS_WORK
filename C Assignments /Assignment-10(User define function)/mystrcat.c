//user define function for mystrcat

#include <stdio.h>

char* mystrcat(char* dest, const char* src) {
    char* temp = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
    return temp;
}

int main() {
    char dest[100] = "Hello, ";
    char src[] = "World!";

    mystrcat(dest, src);

    printf("Concatenated string: %s\n", dest);
    return 0;
}

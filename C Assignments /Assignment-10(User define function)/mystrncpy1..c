#include <stdio.h>

char* mystrncpy(char* dest, const char* src, int n);

int main() {
    char dest[20];

    mystrncpy(dest, "Hello", 10);
    printf("Copied string: \"%s\"\n", dest);  // Output: Hello

    return 0;
}

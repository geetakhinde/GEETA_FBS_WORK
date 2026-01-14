// User-defined function similar to strncpy


char* mystrncpy(char* dest, const char* src, int n) {
    char* temp = dest; 

    int i = 0;

    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    
    while (i < n) {
        dest[i] = '\0';
        i++;
    }

    return temp;  
}

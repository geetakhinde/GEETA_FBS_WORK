//Print armstrong numbers in the given range 1 to n. 


#include <stdio.h>

int main() {
    int n;

    printf("Enter the range 1 to: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int num = i;
        int rem, sum = 0;

        while (num > 0) {
            rem = num % 10;
            sum += rem * rem * rem;
            num /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}


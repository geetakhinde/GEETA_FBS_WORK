
//program to print factors of number in given range

#include <stdio.h>

int main() {
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);
    
    for (int num = start; num <= end; num++)
	{
        printf("Factors of %d: ", num);
        
        for (int i = 1; i <= num; i++) 
		{
            if (num % i == 0)
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}

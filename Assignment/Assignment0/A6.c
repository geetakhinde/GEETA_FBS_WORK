#include<stdio.h>
int main()
{
	int num;
	int square,cube;
	printf("enter a number :");
	scanf("%d", &num);
	
	square = num * num;
	cube = num * num * num;
	
	printf("square of %d is %d\n", num, square);
	printf("cube of %d is %d\n",num, cube);
	
}

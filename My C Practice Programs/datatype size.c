//to find size of datatypes

#include<stdio.h>
void main()
{
	int inttype;
	char chartype;
	float floattype;
	double doubletype;
	
	printf("Size of int : %zu\n",sizeof(int));
	printf("Size of char : %zu\n",sizeof(char));
	printf("Size of float : %zu\n",sizeof(float));
	printf("Size of double : %zu\n",sizeof(double));
}
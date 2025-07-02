//Complex (real, imaginary)

#include<stdio.h>
struct complex{
	
	int real;
	int img;
};
struct complex storeComplex();
void displayComplex(struct complex c1);
void main()
{
	struct complex c1,c2;
	
	printf("Enter c1 ");
	c1=storeComplex();
	printf("Enter c2 ");
	c2=storeComplex();
	
	printf("Complex details:\n");
	displayComplex(c1);
	displayComplex(c2);
	
}
struct complex storeComplex()
{
	struct complex c1;
	scanf("%d%d",&c1.img,&c1.real);
	return c1;
}
void displayComplex(struct complex c1)
{
	printf("Real=%d Img=%d\n",c1.img,c1.real);
}
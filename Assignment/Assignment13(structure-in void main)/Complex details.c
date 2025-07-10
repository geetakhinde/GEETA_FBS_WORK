//Complex (real, imaginary) 

struct complex{
	
	int real;
	int complex;
};
void main()
{
	
	struct complex c1,c2,c3;
	
	printf("Enter first complex number");
	scanf("%d %d",&c1.real,&c1.complex);
	
	printf("Enter second complex number");
	scanf("%d %d",&c2.real,&c2.complex);
	
	printf("Enter third complex number");
	scanf("%d %d",&c3.real,&c3.complex);
	
	printf("Complex Number details:\n");
	printf("Real=%d Complex=%d\n",c1.real,c1.complex);
	printf("Real=%d Complex=%d\n",c2.real,c2.complex);
	printf("Real=%d Complex=%d\n",c3.real,c3.complex);
}
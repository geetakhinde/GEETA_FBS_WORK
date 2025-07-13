//Complex (real, imaginary) using array

struct complex{
	
	int real; 
	int imaginary;
};
void main()
{
	
	struct complex Carr[3];
	
	for(int i=0;i<3;i++)
	{
		printf("Enter %d complex numbers",i+1);
		scanf("%d%d",&Carr[i].real,&Carr[i].imaginary);
	}
	
	printf("Complex Details:\n");
	for(int i=0;i<3;i++)
	{
		printf("Real=%d Imaginary=%d\n",Carr[i].real,Carr[i].imaginary);
	}
}
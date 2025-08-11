

#include<stdio.h>
void main()
{
	int amount,n1,n2,n3,n4,n5,n6,n7,n8;
	printf("Enter amount:");
	scanf("%d",&amount);
	
	n1=amount/500;
	printf("500 notes=%d\n",n1);
	amount=amount%500;
	
	n2=amount/200;
	printf("200 notes=%d\n",n2);
	amount=amount%200;

	n3=amount/100;
	printf("100 notes=%d\n",n3);
	amount=amount%100;
	
	n4=amount/50;
	printf("50 notes=%d\n",n4);
	amount=amount%50;
	
	n5=amount/20;
	printf("20 notes=%d\n",n5);
	amount=amount%20;
	
	n6=amount/5;
	printf("5 notes=%d\n",n6);
	amount=amount%5;
	
	n7=amount/2;
	printf("2 noted=%d\n",n7);
	amount=amount%2;
	
	n8=amount/1;
	printf("1 notes=%d\n",n8);
	amount=amount%1;
	
	
}

//int n1, amt=5235;
//int notes[9]=(500,200,100,50,20,10,5,2,1);
//{
//
//while(amt>0)
//{
//	for(int i=0;i<=9;i++)
//	{
//		n1=amt/notes[i];
//		if(n1>0)
//		{
//			printf("%d*%d",notes[i],n1);
//		}
//		amt=amt%notes[i];
//		i++;	
//	}
//}
//}
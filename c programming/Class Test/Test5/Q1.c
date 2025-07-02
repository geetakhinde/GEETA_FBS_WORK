//to calculate selling price of book based on cost price and discout

#include<stdio.h>
void main()
{
	float sellingprice,costprice,discount,tamount;
	
	printf("Enter your costprice of book");
	scanf("%f",&costprice);
	

	if(costprice>=1000)
	{
		discount=costprice*0.20;
		printf("discount=%.2f\n",discount);
		sellingprice=costprice-discount;
		printf("Your total selling price=%.2f",sellingprice);
	}
	else if(costprice>=700 && costprice<1000)
	{
		discount=costprice*0.10;
		printf("discount=%f\n",discount);
		sellingprice=costprice-discount;
		printf("Your total selling price=%f",sellingprice);
	}
	else if(costprice>=500 && costprice<700)
	{
		discount=costprice*0.05;
		printf("discount=%f\n",discount);
		sellingprice=costprice-discount;
		printf("Your total selling price=%f",sellingprice);
	}
	else 
	{
		printf("You have no discount\n");
		printf("Your total selling price=%f",costprice);
	}
}
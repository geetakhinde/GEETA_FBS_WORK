//Product (id, name, quantity, price) 

#include<stdio.h>
typedef struct product{
	
	int ID;
	char name[20];
	int quantity;
	int price;
}product;
struct product storeProduct(product*);
void displayProduct(product*);
void main()
{
	struct product p1,p2,p3;
	
	printf("Enter product 1 detail");
	storeProduct(&p1);
	printf("Enter product 2 detail");
	storeProduct(&p2);
	printf("Enter product 3 detail");
	storeProduct(&p3);
	
	printf("Product details:\n");
	displayProduct(&p1);
	displayProduct(&p2);
	displayProduct(&p3);
	
}
struct product storeProduct(product* p1)
{
	
	scanf("%d%s%d%d",&p1->ID,&p1->name,&p1->quantity,&p1->price);
	
}
void displayProduct(product* p1)
{
	printf("ID=%d Name=%s Quantity=%d Price=%d\n",p1->ID,p1->name,p1->quantity,p1->price);
}
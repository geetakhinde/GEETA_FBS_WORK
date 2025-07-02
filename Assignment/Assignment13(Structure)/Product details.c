//Product (id, name, quantity, price) 

#include<stdio.h>
struct product{
	
	int ID;
	char name[20];
	int quantity;
	int price;
};
struct product storeProduct();
void displayProduct(struct product p1);
void main()
{
	struct product p1,p2,p3;
	
	printf("Enter product 1 detail");
	scanf("%d%s%d%d",&p1.ID,&p1.name,&p1.quantity,&p1.price);
	printf("Enter product 2 detail");
	scanf("%d%s%d%d",&p2.ID,&p2.name,&p2.quantity,&p2.price);
	printf("Enter product 3 detail");
	scanf("%d%s%d%d",&p3.ID,&p3.name,&p3.quantity,&p3.price);
	
	printf("Product details:\n");
	displayProduct(p1);
	displayProduct(p2);
	displayProduct(p3);
	
}
struct product storeProduct()
{
	struct product p1;
	scanf("%d%s%d%d",&p1.ID,&p1.name,&p1.quantity,&p1.price);
	return p1;
}
void displayProduct(struct product p1)
{
	printf("ID=%d Name=%s Quantity=%d Price=%d\n",p1.ID,p1.name,p1.quantity,p1.price);
}
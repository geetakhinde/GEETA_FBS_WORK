//Product (id, name, quantity, price)

struct product{
	
	int id;
	char name[20];
	int quantity;
	int price;
};
void main()
{
	
	struct product p1,p2,p3;
	
	printf("Enter first product details");
	scanf("%d %s %d %d",&p1.id,p1.name,&p1.quantity,&p1.price);
	
	printf("Enter second product details");
	scanf("%d %s %d %d",&p2.id,p2.name,&p2.quantity,&p2.price);
	
	printf("Enter third product details");
	scanf("%d %s %d %d",&p3.id,p3.name,&p3.quantity,&p3.price);
	
	printf("Product details:\n");
	printf("ID=%d Name=%d Quantity=%d Price=%d\n",p1.id,p1.name,p1.quantity,p1.price);
	printf("ID=%d Name=%d Quantity=%d Price=%d\n",p2.id,p2.name,p2.quantity,p2.price);
	printf("ID=%d Name=%d Quantity=%d Price=%d\n",p3.id,p3.name,p3.quantity,p3.price);
	
	
}
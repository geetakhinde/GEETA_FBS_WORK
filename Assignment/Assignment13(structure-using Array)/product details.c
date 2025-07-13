//Product (id, name, quantity, price) using array

struct product{
	
	int id;
	char name[10];
	int quantity;
	int price;
};
void main()
{
	
	struct product Parr[3];
	for(int i=0;i<3;i++)
	{
		printf("Enter %d product details:",i+1);
		scanf("%d%s%d%d",&Parr[i].id,Parr[i].name,&Parr[i].quantity,&Parr[i].price);
	}
	
	printf("Product Details:\n");
	for(int i=0;i<3;i++)
	{
		printf("ID=%d Name=%s Quantity=%d Price=%d\n",Parr[i].id,Parr[i].name,Parr[i].quantity,Parr[i].price);
	}
}
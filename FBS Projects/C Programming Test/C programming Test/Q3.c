//develope a program to manage a music library. Define a structure to store song details (song ID.title,artist and duration).
//Create a menu driven program to add new songs and display the song library. Use function to handle these operations.

typedef struct library{
	
	int ID;
	char title[];
	char artist[];
	int duration;
}library;

void main()
{
	library l1;
	
	printf("Enter song details:\n");
	printf("Enter ID:");
	scanf("%d",&l1.ID);
	printf("Enter title:");
	scanf("%s",&l1.title);
	printf("Enter artist:");
	scanf("%s",&l1.artist);
	printf("Enter duration:");
	scanf("%d",&l1.duration);
	
	printf("\n---Song Details---\n");
	display( l1);
//	printf("ID=%d",l1.ID);
//	printf("Title=%s",l1.title);
//	printf("Artist=%s",l1.artist);
//	printf("Duration=%d",l1.duration);
	
}

void display(library l1)
{
	printf("ID=%d",l1.ID);
	printf("Title=%s",l1.title);
	printf("Artist=%s",l1.artist);
	printf("Duration=%d",l1.duration);
}
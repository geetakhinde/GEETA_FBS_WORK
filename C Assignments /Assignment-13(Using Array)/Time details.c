//Time (hour, min, sec) using array

struct time{
	
	int hour;
	int min;
	int sec;
};
void main()
{
	
	struct time Tarr[3];
	for(int i=0;i<3;i++)
	{
		printf("Enter %d time details",i+1);
		scanf("%d%d%d",&Tarr[i].hour,&Tarr[i].min,&Tarr[i].sec);
	}
	
	printf("Time Details:\n");
	for(int i=0;i<3;i++)
	{
		printf("Hour=%d Min=%d Sec=%d\n",Tarr[i].hour,Tarr[i].min,Tarr[i].sec);
	}
}
//Time (hour, min, sec) 

struct time{
	
	int hour;
	int min;
	int sec;
};
void main()
{
	
	struct time t1,t2,t3;
	
	printf("Enter first time");
	scanf("%d %d %d",&t1.hour,&t1.min,&t1.sec);
	
	printf("Enter second time");
	scanf("%d %d %d",&t2.hour,&t2.min,&t2.sec);
	
	printf("Enter third time");
	scanf("%d %d %d",&t3.hour,&t3.min,&t3.sec);
	
	printf("Time Details:\n");
	printf("Hour=%d Min=%d Sec=%d\n",t1.hour,t1.min,t1.sec);
	printf("Hour=%d Min=%d Sec=%d\n",t2.hour,t2.min,t2.sec);
	printf("Hour=%d Min=%d Sec=%d\n",t3.hour,t3.min,t3.sec);
}
//Time (hour, min, sec) 

#include<stdio.h>
struct time {
	
	int hour;
	int min;
	int sec;
};
struct time storeTime();
void displayTime(struct time t1);
void main()
{
	struct time t1,t2,t3,t4,t5,t6,t7;
	
	printf("Enter time 1");
	t1=storeTime();
	
	printf("Enter time 2");
	t2=storeTime();
	
	printf("Enter time 3");
	t3=storeTime();
	
	printf("Enter time 4");
	t4=storeTime();
	
	printf("Enter time 5");
	t5=storeTime();
	
	printf("Enter time 6");
	t6=storeTime();
	
	printf("Enter time 7");
	t7=storeTime();
	
	printf("Details of time:\n");
	displayTime(t1);
	displayTime(t2);
	displayTime(t3);
	displayTime(t4);
	displayTime(t5);
	displayTime(t6);
	displayTime(t7);
	
}
struct time storeTime()
{
	struct time t1;
	scanf("%d%d%d",&t1.hour,&t1.min,&t1.sec);
	return t1;
}
void displayTime(struct time t1)
{
	printf("Hour=%d Min=%d Sec=%d\n",t1.hour,t1.min,t1.sec);
}
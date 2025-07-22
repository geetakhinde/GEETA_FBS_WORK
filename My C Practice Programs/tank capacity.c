//Tank capacity: 100 liters
//Pipe 1 fills: 3 liters/min
//Pipe 2 fills: 4 liters/min
//Leakage removes: 2 liters/min
//Net inflow = 3 + 4 - 2 = 5 liters/min

#include<stdio.h>
void main()
{
	
	int tank_capacity=100;
	int pipe_1=3;
	int pipe_2=4;
	int leakage=2;
	
	int net_rate=pipe_1+pipe_2-leakage;     //find net rate
	
	//find total minutes
	
	int total_minutes=tank_capacity/net_rate;
	
	
	//convert minutes to hours and minutes
	
	int t_hours=total_minutes/60;
	int t_minutes=total_minutes%60;
	
	printf("Hours=%d Minutes=%d",t_hours,t_minutes);
	
}
#include<stdio.h>
int finddigit(int,int);
void main()
{
	int no=123456;
	int dig=8;
	int res=finddigit(no,dig); //function call
	if(res==1)
		printf("digit found");
	else
		printf("digit not found");
}
    int finddigit( int no, int dig) //function defination
    {
    	while(no>0)
    	{
		int rem=no%10;
    	if(rem==dig)
    	return 1;
    	no=no/10;
    	}
    	return 0;
    }
    

#include<stdio.h>
void main()
{
	int bs=15000;
	int da,ta,hra,tsal;
	if (bs>=5000)
	{
		da=bs*0.10;
		ta=bs*0.20;
		hra=bs*0.25;
	}
	else
	{
		da=bs*0.15;
		ta=bs*0.25;
		hra=bs*0.30;
	}
	tsal= bs+da+ta+hra;
}
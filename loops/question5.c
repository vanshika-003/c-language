#include<stdio.h>
#include<conio.h>

void main()
{
	int year;
	int end;
	printf("starting enter year:");
	scanf("%d",&year);
	printf("ending enter year:");
	scanf("%d",&end);
	while (year<=end)
	{
	if(year%4==0)
	printf("%d\n",year);
	year++;	
	}
}
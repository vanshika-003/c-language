#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	int y;
	printf("enter the value of x=");
	scanf("%d",&x);
	printf("enter the value of y=");
	scanf("%d",&y);
	int z=(x*y)+(2*x*y)+(y*y);
	printf("answer=%d",z);
}
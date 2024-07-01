#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	int y;
	int z;
	printf("enter the value of x=");
	scanf("%d",&x);
	printf("enter the value of y=");
	scanf("%d",&y);
	printf("enter the value of z=");
	scanf("%d",&z);
	int a = (x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x));
	printf("answer=%d",a);
}
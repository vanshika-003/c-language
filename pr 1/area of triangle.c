#include<stdio.h>
#include<conio.h>

void main()
{
	float base,height,area;
	
	printf("enter base of triangle:");
	scanf("%f",&base);
	printf("enter height of triangle:");
	scanf("%f",&height);
	
	area=5*base*height;
	printf("area of triangle:%d",area);
}
#include<stdio.h> 
#include<conio.h>

int main()
{
	int celsius,Fahrenheit;
	
	printf("enter degree celsius:");
	scanf("%d",&celsius);
	Fahrenheit=9/5*celsius+32;	
	printf("fahrenheit=%d",Fahrenheit);	
}
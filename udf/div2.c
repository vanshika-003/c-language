#include<stdio.h>

void div()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	if(n%3==0 && n%5==0)
	{
		printf("The given number is divisible by both 3 & 5:");
	}
	else if(n%3==0)
	{
		printf("The given number is divisible by only 3 :");
	}
	else if(n%3==0)
	{
		printf("The given number is divisible by only 5 :");
	}
	else 
	{
		printf("The number is not divisible by both 3 & 5");
	}
	
	
}
void main()
{
	div();
}
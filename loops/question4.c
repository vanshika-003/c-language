#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	while(n>=1)
	{
	if(n%2==0)
	printf("%d\n",n);
		n--;
		
	}
}
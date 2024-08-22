#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,c;

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ", j);
		}
		for(c=4; c>=i; c--)
		{
			printf("  ");
		}
		for(c=4; c>=i; c--)
		{
			printf("  ");
		}
		for(j=i; j>=1; j--)
		{
			printf("%d ", j);
		}
			printf("\n");	
	}
}
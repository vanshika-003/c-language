#include<stdio.h>
#include<conio.h>


void main()
{
	int i,j,c;

	for(i=5; i>=1; i--)
	{
		for(c=i; c>=1; c--)
		{
			printf("  ");
		}
		for(j=i; j<=5; j++)
		{
			printf("%d ", j);
		}
		for(j=i; j<=4; j++)
		{
			printf("%d ", j);
		}
				printf("\n");
		}
	}
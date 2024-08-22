#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c=11;

	for(a=1; a<=4; a++)
	{
		for(b=1; b<=a; b++)
		{
			printf("%d ", c);
			c++;
		}
		printf("\n");
	}

}
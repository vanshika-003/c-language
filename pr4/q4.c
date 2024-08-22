void main()
{
	int i,j,c;

	for(i=5; i>=1; i--)
	{
		for(c=i; c<=4; c++)
		{
			printf("  ");
		}
		for(j=1; j<=i; j++)
		{
			if(j%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}

}
#include<stdio.h>
// Write a Program to find the length of a 1D array.
main()
{
	int i,n;
	int a[n];
	
	printf("enter the size of array: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	  printf("enter a[%]:",i);
	  scanf("%d",&a[n]);
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[n]);
	}
}
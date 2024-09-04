#include<stdio.h>
// Write a Program to find the average of a 1D array.
void main()
{
//a[0] = 12
//a[1] = 42
//a[2] = 18
//a[3] = 50
//a[4] = 26
	int n,i;
	float avg,sum=0;
	
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	for (i=0; i<n; i++)
	{
	printf("enter a[%d]:",i);
	scanf("%d",&a[i]);	
	}
	for (i=0; i<n; i++)
	{
	sum=sum+a[i];	
	}
	avg=sum/n;
	printf("avg is %.1f",avg);
}
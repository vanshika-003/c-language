#include<stdio.h>
#include<stdio.h>

void main()
{
	int marks1,marks2,marks3,average;
	
	printf("enter marks for english (out of 100):");
	scanf("%d",&marks1);
		printf("enter marks for hindi (out of 100):");
	scanf("%d",&marks2);
		printf("enter marks for math (out of 100):");
	scanf("%d",&marks3);
	
	average=(marks1 + marks2 + marks3)/3;
	printf("the average is=%d",average);	
}
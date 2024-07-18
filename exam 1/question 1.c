//Q.2

#include<stdio.h>
#include<conio.h>

void main()
{
	char grade;
	printf("enter your score :");
	scanf("%c",&grade);
	
	switch(grade)
	{
		case'A':
		printf("Excellent Work!");
		break;
		case'B':
		printf("Well Done!");
		break;
		case'C':
		printf("Good Job!");
		break;
		case'D':
		printf("you passed!");
		break;
		case'F':
     	printf("Sorry yoy failed!");
     	break;
     	default:
     	printf("Invalid Grade:");
     		
			
	}
	
}








#include<stdio.h>
#include<conio.h>

void main()
{
	int choice;
	printf("telcom call service\n");
	printf("press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for gujarati\n");
	printf("enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			
		printf("press 1 for internet recharge\n");
		printf("press 2 for top-up recharge\n");
		printf("press 3 for special recharge\n");
		printf("\n enter your choice :");
		scanf("%d",&choice);
		
		switch(choice)	
		{
			case 1: printf("you have successfully done a internet recharge.");
			break;
			case 2: printf("you have successfully done a top-up recharge.");
			break;
			case 3: printf("you have successfully done a special recharge.");
			break;
			default: printf("enter valid input!");
			}
		}
			
			
			
			switch(choice)
	{
		case 2:
			
		printf(" internet recharge ke liye 1 dabaiye\n");
		printf(" top-up recharge  ke liye 2 dabaiye\n");
		printf("special recharge  ke liye 3 dabaiye\n");
		printf("\n enter your choice :");
		scanf("%d",&choice);
		
		switch(choice)	
		{
			case 1: printf(" aapne safaltapurvak internet recharge kar liya hai.");
			break;
			case 2: printf("aapne safaltapurvak top-up recharge kar liya hai.");
			break;
			case 3: printf("aapne safaltapurvak special kar liya hai.");
			break;
			default: printf("enter valid input!");
			}
		}
			
			
			
			switch(choice)
	{
		case 3:
			
		printf(" internet recharge mate 1 dabavo\n");
		printf(" top-up recharge  mate 2 dabavo\n");
		printf("special recharge  mate 3 dabavo\n");
		printf("\n enter your choice :");
		scanf("%d",&choice);
		
		switch(choice)	
		{
			case 1: printf(" tame safaltapurvak internet recharge karyu che.");
			break;
			case 2: printf("tame safaltapurvak top-up recharge karyu che.");
			break;
			case 3: printf("tame safaltapurvak special karyu che.");
			break;
			default: printf("enter valid input!");
			}
		}
			
	
				
	
}
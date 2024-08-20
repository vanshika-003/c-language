#include<stdio.h>
#include<conio.h>

int main()
{
	float base_salary,HRD,DA,TA,gross_salary;
    printf("enter base_salary:");
	scanf("%f",&base_salary);
	
	printf("enter HRD percentage:");
	scanf("%f",&HRD);
	
	printf("enter DA percentage:");
	scanf("%f",&DA);
	
	printf("enter TA percentage:");
	scanf("%f",&TA);
	
	gross_salary=base_salary+(base_salary*HRD/100)+(base_salary*DA/100)+(base_salary*TA/10);	
	printf("base_salary=%f",base_salary);
		
}
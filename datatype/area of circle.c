#include<stdio.h>
#include<conio.h>

void main()
{
float radius, area, pi=22/7;
printf ("enter the radius of circle:");
scanf("%f",&radius);

area=pi*radius*radius;
printf ("the area of the circle is:%.2f\n",area);
}
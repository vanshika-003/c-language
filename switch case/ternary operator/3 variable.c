#include<conio.h>
#include<stdio.h>

void main()
{
	int x,y,z;
	printf("enter x,y,z:");
	scanf("%d%d%d",&x,&y,&z);
	
	(x<y)? (x<z)? printf("x is minimum"): printf("z is minimum"):(y<z)? printf("y is minimum"): printf("z is minimum");
}
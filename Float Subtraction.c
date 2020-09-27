#include<stdio.h>
#include<conio.h>
main()
{
	float x,y;
	// 4 digits after the decimal point 
	printf("put any two number subtraction");
	scanf("%f%f",&x,&y);
	printf("the subtraction of %f and %f is%0.2f",x,y,x-y);
	getch();
}

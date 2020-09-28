#include<stdio.h>
#include<conio.h>
main()
{
	void wholenumber();
	wholenumber();
	getch();
}
void wholenumber()
  {
	int x;
	printf("Enter Any number to check whole number.");
	scanf("%d",&x);
	x>=0?printf("It is a whole number."):printf("It's not a whole number.");
  }



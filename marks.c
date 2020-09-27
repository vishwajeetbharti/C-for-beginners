#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z,a,b;
	printf("Enter the all subject marks that you have obtained in series");
	scanf("%d%d%d%d%d",&x,&y,&z,&a,&b);
	if ((x+y+z+a+b)>=164)
	{
		if (x>=44 && y>=30 && z>=30 && a>=30 && b>=30)
		printf("Pass,you have promoted.");
		else
		printf("failed in x");
	}
	else 
	{
		printf("Failed. Try again,Next year");
	}
	if (x+y+z+a+b>500)
	{
		printf("It is not possible");
	}
	getch();
}
	

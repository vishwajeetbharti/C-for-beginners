#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	printf("Enter Any Two Number For Add.");
	scanf("%d%d",&x,&y);
	void add(int x,int y);
	add(x,y);
	getch();
}
void add(int a,int b)
{
	int z;
	z=a+b;
	printf("Sum of numbers is %d",z);
}

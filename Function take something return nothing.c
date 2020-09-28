#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	printf("Enter Any Two Number For add.");
	scanf("%d%d",&x,&y);
	void add(int x,int y);
	add(x,y);
	getch();
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("Sum of x and y is %d",c);
}

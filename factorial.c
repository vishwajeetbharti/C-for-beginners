#include<stdio.h>
int fact(int n);
void main()
{
	int a,result;
	printf("Enter the number for factorial.\n");
	scanf("%d",&a);
	printf("factorial of %d is %d.",a,fact(a));
}
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return (n*fact(n-1));
}

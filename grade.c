#include<stdio.h>
void main()
{
int a;
printf("Enter the marks");
scanf("%d",&a);
if(0<=a &&  a<=39)
{
	printf("F");
}
else if(40<=a&&a<=59)
{
	printf("E");

}
if(60<=a &&  a<=69)
{
	printf("D");
}
else if(70<=a&&a<=79)
{
	printf("C");

}
if(80<=a &&  a<=89)
{
	printf("B");
}
else if(90<=a&&a<=100)
{
	printf("A");

}

}

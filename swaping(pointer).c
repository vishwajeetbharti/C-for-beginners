#include<stdio.h>
void swap(int*,int*);
void main()
{
    int a,b;
    printf("Enter two number for swaping");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);
}
void swap (int *x,int *y)
{
    int k;
    k=*x;
    *x=*y;
    *y=k;
}
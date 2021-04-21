#include<stdio.h>
void swap(int*,int*);
void main()
{
    int a,b;
    printf("Enter two number for swaping\n");
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapoing address.\na=%d,b=%d",a,b);
}
void swap (int *x,int *y)
{
    int k;
    k=*x;
    *x=*y;
    *y=k;
}

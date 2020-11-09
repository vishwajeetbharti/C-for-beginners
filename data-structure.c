#include<stdio.h>
struct date
{
    int d,m,y;
};
void main()
{
    struct date today;
    printf("Enter Your Birthday date");
    scanf("%d/%d/%d",&today.d,&today.m,&today.y);
    printf("your Birthday date is %d/%d/%d",today.d,today.m,today.y);
              
    
}
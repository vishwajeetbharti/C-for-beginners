#include<stdio.h>
#include<string.h>
void main()
{
    int l,i;
    char a[25];
    printf("Enter Your Name");
    fgets(a,25,stdin);
    for (l=0;a[l];l++);
    i=(l-1);
    printf("length of  char is %d",i);
}
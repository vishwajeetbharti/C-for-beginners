#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char a[25];
    printf("Enter Your Name");
    fgets(a,25,stdin);
    i=strlen(a);
    printf("length of  char is %d",i);
}
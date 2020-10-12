#include<stdio.h>
#include<string.h>
void main()
{
    char a[25],rev;
    int l,i;
    printf("Enter Your Name");
    fgets(a,25,stdin);
    for (l=0;a[l];l++);
    for (i=0;i<l/2;i++)
    {
        rev=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=rev;
    }
    printf("reverse of sring is %s",a);
}    

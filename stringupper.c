#include<stdio.h>
#include<string.h>
void main()
{
    char z[50];
    int i;
    printf("Enter Your Home Address.");
    fgets(z,50,stdin);
    for (i=0;z[i];i++)
    {
        if(z[i]>'a' && z[i]<'z')
        z[i]=z[i]-32;
    }
    puts(&z[0]);

}
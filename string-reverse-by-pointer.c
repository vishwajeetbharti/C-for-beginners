#include<stdio.h>
#include<string.h>
int string_length(char *pString);
char p[25];
void reverse(char* pStr)
{
    int length,i;
    char *start, *end,rev;
    length = string_length(p);
    start = pStr;
    end = pStr;
    for (i=0;i<(length-1);i++)
    end++;
    for (i=0;i<length/2;i++)
    {
        rev=*end;
        *end=*start;
        *start=rev;
        start++;
        end--;
    }
    printf("Reverse of entered string is %s\n",pStr);
}
int string_length(char *pString)
{
    int c=0;
    while (*(pString+c) !='\0')
    {
        c++;
    }
    return c;
    
}
void main()
{
    
    printf("Enter Your Name\n");
    fgets(p,25,stdin);
    reverse(p);
    
}
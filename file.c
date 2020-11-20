#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int i;
    FILE *fp;
    char k[20];
    fp=fopen("f2.txt","w");
    if(fp==NULL)
    {
        printf("file cannot open\n");
        exit(1);
    }
    else
    {
        printf("file opened.\n");
    }

    printf("Enter your name.\n");
    fgets(k,20,stdin);
    for (i=0;i<strlen(k);i++)
    fputc(k[i],fp);
    printf("%s",k);
    fclose(fp);
}

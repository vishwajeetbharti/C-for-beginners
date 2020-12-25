#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int x,y;
	fp=fopen("f6.txt","w");
	if(fp==NULL)
    {
        printf("file cannot open\n");
        exit(1);
    }
    printf("Enter any two number.\n");
	scanf("%d%d",&x,&y);
	fprintf(fp,"Sum of that two number is %d",x+y);
	fclose(fp);
}

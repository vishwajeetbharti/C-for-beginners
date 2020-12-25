#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int x,y;
	fp=fopen("f2.txt","r+");
	if(fp==NULL)
    {
        printf("file cannot open\n");
        exit(1);
    }
    fscanf(fp,"%d%d",&x,&y);
    printf("a=%d\nb=%d\nSum of them is %d\n",x,y,x+y);
    fclose(fp);
}

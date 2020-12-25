#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("f2.txt","w+");
	if(fp == NULL)
	  {
      perror("Error in opening file");
      return(-1);
      }
    fprintf(fp,"55\n89\n");  
	fclose(fp);
	 
}

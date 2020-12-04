#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("f2.txt","a");
	if(fp == NULL)
	  {
      perror("Error in opening file");
      return(-1);
      }
    else
    {
    	fputs(" Vishwajeet\n",fp);
	}
	fclose(fp);
	 
}

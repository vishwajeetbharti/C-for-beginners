#include<stdio.h>
struct contact
	{
		char Name[100];
		long int Num;
		char CName[100];
	};
	void main()
{
	
	struct contact A1;
	FILE *fp;
	fp=fopen("Mystudent.dat","rb");
	if(fp==NULL)
	{
		printf("File is not found.\n");
	}
	else
	{
		while(fread(&A1,sizeof(A1),1,fp)>0);
		{
		printf("%s\n%ld\n%s\n",A1.Name,A1.Num,A1.CName);
		}
		fclose(fp);
	}
}

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
	fp=fopen("Mystudent.dat","wb");
	printf("Enter Your Name.\n");
	gets(A1.Name);
	
	printf("Enter Your Collage Name.\n");
	gets(A1.CName);
	printf("Enter Your Phone Number.\n");
	scanf("%ld",&A1.Num);
	fwrite(&A1,sizeof(A1),1,fp);
	fclose(fp);
	
}	

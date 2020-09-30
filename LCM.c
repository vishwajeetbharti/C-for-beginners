#include<stdio.h>
#include<conio.h>
main()
{
	int LCM(int x,int y);
	int x,y,z;
	printf("Enter any two positive number");
	scanf("%d%d",&x,&y);
    z= LCM(x,y);
    printf("LCM of %d and %d is %d",x,y,z);
}
int LCM(int a,int b)
{
	int max;
	max=(a>b)?b:a;
	while (1)
	{
	
	if (max % a == 0 && max % b == 0)
	{
		return max;
		break;
	}
	max++;
}
	return 0;
}

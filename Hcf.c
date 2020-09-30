#include<stdio.h>
#include<conio.h>
void main()
{
	int s;
	int hcf(void);
	s=hcf();
	printf("HCF is %d",s);
	getch;
}
int hcf()
{
	int x,y,low,max,r;
	printf("Enter any two positive number");
	scanf("%d%d",&x,&y);
		
    if(x>y){
    	max= x;
    	low = y;
	}
	else{
		max = y;
		low =x;
	}
    
    while(1)
    {
    r = max % low;
	if(r == 0){
		return(low);
		break;
	}	
	else{
		max = low;
		low = r;
		
	}
    	
	}
	
}

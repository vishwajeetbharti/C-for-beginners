#include<stdio.h>
#include <stdlib.h>
#define SUM(a,b) a+b
#define product(x,y) x*y
#define divide(x,y) x/y
#define Sub(a,b) a-b
int main()
{
    int x,y,q;
    printf("Enter any two number.\n");
    scanf("%d%d",&x,&y);

	while(1)
	{
	printf("\n1.  Addition.");
	printf("\n2.  Subtraction.");
	printf("\n3.  Divide.");
	printf("\n4.  Multiplication");
    printf("\n5.  Exit");
    
    printf("\nEnter Your Choice Number.");
	scanf("%d",&q);
	switch(q)
    {
        case 1:
            printf("Sum of %d and %d is %d.\n",x,y,SUM(x,y) );
            break;
        case 4:
            printf("Product of %d and %d is %d.\n",x,y,product(x,y));
            break;
        case 3:
            printf("Results of %d and %d is %d.\n",x,y,divide(x,y));
            break;
        case 2:
            printf("Answer of %d and %d is %d.\n",x,y,Sub(x,y));
            break;
        case 5:
		    exit(0);    
	    default:
		    printf("Invalid Input");     

    }

    }
}
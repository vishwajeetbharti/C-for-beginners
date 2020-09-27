#include<stdio.h>
#include<conio.h>
main()
{
	int x,v,y,z;
	
	while(1)
	{
	printf("\n1.  Addition.");
	printf("\n2.  Subtraction.");
	printf("\n3.  Divide.");
	printf("\n4.  Multiplication");
    printf("\n5.  Exit");
    
    printf("\nEnter Your Choice Number.");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("enter any two digit for adding");
            scanf("%d%d",&v,&y);
            printf("sum of %d and %d is %d",v,y,v+y);
            break;
        case 2:
        	printf("put any two number subtraction");
	        scanf("%d%d",&v,&y);
	        printf("the subtraction of %d and %d is %d",v,y,v-y);
	        break;
	    case 3:
		    printf("put any two number to divide ");
	        scanf("%d%d",&v,&y);
	        printf("the answer of %d and %d is %d",v,y,v/y);
	        break;
	    case 4:
		    printf("put any two number to divide ");
	        scanf("%d%d",&v,&y);
	        printf("the answer of %d and %d is %d",v,y,v*y);
	        break;
	    case 5:
		    exit(0);    
	    default:
		    printf("invalide code");    
		    
	}
	getch();
    }
}

#include<stdio.h>   
void main ()  
{  
    int a[100];
    int item,n, i,flag; 
	printf("Enter the number of elements:\n"); 
    scanf("%d",&n);
    printf("Enter the numbers.\n");
    for (i=0; i<n; i++)
    scanf("%d",&a[i]); 
    printf("Enter Item which is to be searched\n");  
    scanf("%d",&item);  
    for (i = 0; i< 100; i++)  
    {  
        if(a[i] == item)   
        {  
            flag = i+1;  
            break;  
        }   
        else   
        flag = 0;  
    }   
    if(flag != 0)  
    {  
        printf("\nItem found at location %d\n",flag);  
    }  
    else  
    {  
        printf("\nItem not found\n");   
    }  
}  

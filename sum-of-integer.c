#include<stdio.h>
int main() 
{
   int number,sum=0;
   int a=0;
   printf("Enter the number\n");
   scanf("%d",&number);
   while(a<=number)
   {
   	    if(number<0)
   {
   	    printf("you have entered negative number");
   	    continue;
   }		
		sum=sum+a;
   	    a++; 
   }
   printf("%d",sum);
   return 0;
   
}

#include<stdio.h>
void main()
{
int n,num,r; 
int rev=0;

printf("Enter a four digit number\n");
scanf("%d",&n);

num = n; 
while(n != 0)
{
r= n%10; 
rev=rev*10+r;
n = n / 10;
}
printf("\n%d\n",rev);
if(num == rev)
printf("The Number is Palindrome \n");
else
printf("The Number is not Palindrome \n");
}

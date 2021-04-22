#include <stdio.h>
int main()
{
int num[100], n,i,low, high, mid,found=0,key;
printf("Enter the number of elements:\n"); 
scanf("%d",&n);
printf("Enter the numbers  in ascending order\n");
for (i=0; i<n; i++)
scanf("%d",&num[i]); 
printf("Please enter the number to be searched\n ");
scanf("%d",&key);
low=0; 
high=n-1;
while(low<=high && !found)
{
mid=(low+high)/2;
if (num[mid]==key)
found=1;
else if (key>num[mid]) 
low=mid+1;
else
high=mid-1;	
}
if (found==1)
printf ("\nNumber found in position %d",mid+1);
else
printf("\nNumber not found !!!");
return 0;
}

#include <stdio.h>
 void main()
{
int a[10],i, j, n, temp;

printf("\n Enter the no. of elements \n");
scanf("%d",&n);

printf("\n Enter %d elements \n",n); 
for(i = 0 ; i< n ; i++)
scanf("%d",&a[i]);
printf("\n The original elements are \n"); 
for(i = 0 ; i< n ; i++)
printf("%d \n",a[i]);
for(i = 1 ; i< n ; i++)
{
for(j = 0 ; j < n-i; j++)
{
if(a[j] > a[j+1])
{
temp = a[j]; 
a[j] = a[j+1];
a[j+1] = temp;
}
}
}

printf("\n The Sorted elements are \n"); 
for(i = 0 ; i< n ; i++)
printf("%d \n",a[i]);

}

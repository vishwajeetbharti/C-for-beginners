#include <stdio.h>
void Addeven();55
void main()
{
    int a[11], x;
    printf("Enter any 11 number\n");
    for (x = 0; x <= 11; x++)
        scanf("%d", &a[x]);
    Addeven(a);
}

void Addeven(int a[])
{
    int evensum=0,oddsum = 0;
    for (int x = 0; x <= 11; x++)
    {
        if (a[x] % 2 == 0)
    {
        
        printf("%d is a even number.\n",a[x]);
        evensum=evensum+a[x];

    }
    else
    {
        printf("%d is a odd number.\n",a[x]);
        oddsum=oddsum+a[x];
    }
    
    
    
    }
            printf("\n%d is the sum of all even numbers\n",evensum);
            printf("\n%d is the sum of all odd numbers\n",oddsum);


}
#include<stdio.h>
#define SUM(a,b) a+b
#define product(x,y) x*y
int main()
{
    int x,y;
    printf("Enter any two for addinng.\n");
    scanf("%d%d",&x,&y);
    printf("Sum of x and y is %d.\n",SUM(x,y) );

    int a,b;
    printf("Enter any two number for multiply.\n");
    scanf("%d%d",&a,&b);
    printf("Multiplication of two number is %d.\n",product(a,b));
}

#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],x[3][3],i,j;
    printf("Enter nine number of 1st matrix\n");
    for(i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter nine number of 2st matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            x[i][j]=a[i][j]+b[i][j];
            printf("%d",x[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}
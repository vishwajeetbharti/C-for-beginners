#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10];
int m,n,p,q,i,j,k;

printf("Enter row and column size for first matrix:\n");
scanf("%d%d",&m,&n);

printf("Enter row and column size for second matrix:\n");
scanf("%d%d",&p,&q);

if(n!=p)
{
printf("Cannot multiply matrices !!!");
return 1;
}
printf("\nEnter elements for first matrix:\n");
for(i=0;i<=m;i++)
{
for(j=0;j<=n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nThe first matrix is\n");
for(i=0;i<=m;i++)
{
for(j=0;j<=n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("Enter elements for second matrix\n");
for(i=0;i<=p;i++)
{
for(j=0;j<=q;j++)
{
scanf("%d",&b[j][i]);
}
}
printf("\nThe second matrix is\n");
for(i=0;i<=p;i++)
{
for(j=0;j<=q;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
for(i=0;i<=m;i++)
{
for(j=0;j<=q;j++)
{
c[i][j]=0;
for(k=0;k<=n;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}

}
}
printf("The resultant matrix is:\n");
for(i=0;i<=m;i++)
{
for(j=0;j<=q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}

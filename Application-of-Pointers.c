#include<stdio.h>
void input(int *p)
{
    int i;
    for (i=0;i<=3;i++)
    scanf("%d",p+i);
}
void display(int *p)
{
    int i;
    for (i=0;i<=3;i++)
    printf("%4d",*(p+i));
    printf("\n");
}
void swap(int *p)
{
    int r,t,i;
    for (r=1;r<=3;r++)
    {
        for(i=0;i<=3-r;i++)
        if(*(p+i)<*(p+i+1))
        {
            t=*(p+i);
            *(p+i)=*(p+i+1);
            *(p+i+1)=t;
        }
    }
}
void main()
{
    int a[4];
    input(a);
    display(a);
    swap(a);
    display(a);
}
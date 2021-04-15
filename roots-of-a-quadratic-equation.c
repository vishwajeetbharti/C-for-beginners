#include <stdio.h>
#include <math.h>

void main()
{
float a,b,c,d,x1,x2;
printf("\n Enter the three non zero coefficient\n"); scanf("%f%f%f",&a,&b,&c);
d = (b * b)-(4 * a *c); if(d== 0)
{
printf("\n The roots are real and equal\n"); x1 = x2 = -b/(2*a);

printf("\n The roots are:\n,x1=%f,x2=%f",x1,x2);
}
else if(d> 0)
{
printf("\n The roots are real and distinct\n"); x1 = (-b +sqrt(b*b-(4*a*c))) / (2*a);
x2 = (-b -sqrt(b*b-(4*a*c))) / (2*a);
printf("\n The roots are x1=%f and x2=%f \n",x1,x2);
}
else
{
printf("\n The roots are complex\n"); x1 = -b / (2 * a); 
x2 = (sqrt(fabs(d))) / (2*a); 
printf("The first root=%f+i%f",x1,x2);
printf("The second root= %f-i%f",x1,x2);
}

}

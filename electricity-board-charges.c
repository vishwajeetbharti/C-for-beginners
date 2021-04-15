#include<stdio.h>
void main()
{
int units; 
float amt;
char name[10];
printf("Enter the name of the user\n");
scanf("%s",name);
printf("Enter the number of units\n");
scanf("%d",&units);
if(units<=200)
{
amt=0.8*units; 
if(amt<100) amt=100; 
}
else if(units>200 &&units<=300)
amt=200*0.8+(units-200)*0.9;
else 
amt=200*0.8+100*0.9+(units-300)*1.0;
if(amt>400) amt=amt+.15*amt;
printf("Electricity charges for the user %s is=%f",name,amt);
}

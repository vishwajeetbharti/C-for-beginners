#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct identity
{
    char name[100];
    char father[100];
    long int phone;
    int date,month,year;
};
void main()
{
    struct identity p[10];
    int top=-1,choice;
    {
        while (1)
        {
    
        printf("Choose option for Operation\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        {
            if(top==9)
            {
                printf("Stack is full");
            }
            else
            {
                ++top;
                {
                printf("Enter your name.\n");
                scanf("%s",&p[top].name[100]);

                fflush(stdin);
                printf("Enter your father name.\n");
                scanf("%s",&p[top].father[100]);
                printf("Enter your phone Number.\n");                  
                scanf("%ld",&p[top].phone);
                printf("Enter Your Birthday date.\n");
                scanf("%d/%d/%d",&p[top].date,&p[top].month,&p[top].year);
                }
            }
            
        }
        break;
        case 2:
        {
            if(top==-1)
            {
                printf("stack is already empty\n");
            }
            else
            {
               top;
               p[top].name[100] ='\0';
               p[top].father[100] ='\0';
               p[top].phone='\0';
               p[top].date='\0';
               p[top].month='\0';
               p[top].year='\0';

            }           
        }
        break;
        case 3:
        {
            top;
            printf("Name:-%s\n Father name:- %s\n Phone Number:- %ld \n Date of birth :- %d/%d/%d \n",p[top].name,p[top].father,p[top].phone,p[top].date,p[top].month,p[top].year);
            //printf("",p[top].fname);
            //printf("Phone Number:- %ld \n",p[top].phone);
            //printf("Date of birth :- %d/%d/%d \n",p[top].date,p[top].month,p[top].year);

        }
        break;
        case 4: exit(0);
        break;
        default:
        printf("you have entered wrong choice\n");
            break;
        }
        }
    }
    
    
}

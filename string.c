#include<stdio.h>
void main()
{
    int i;
    char s[20];                  //char s[20]={'V','I','S','H','W','A','J','E','E','T','B','H','A','R','T','I','\0'};
    printf("Enter Your Name");
    fgets(s,20,stdin);           //scanf("%s",&s[0]);   
                                  /*for(i=0;s[i]!='\0';i++)
                                      printf("%c",s[i]);*/
                                 //printf("%s",s);
    puts(&s[0]);
}
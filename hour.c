#include<stdio.h>
#include<Windows.h>
int main()
{
SYSTEMTIME stime;
SYSTEMTIME It;
GetSystemTime(&stime);
GetLocalTime(&It);
printf("%d/%d/%d\n",stime.wDay,stime.wMonth,stime.wYear);
if(It.wDayOfWeek==0)
 printf("Sun\n");
else if(It.wDayOfWeek==1)
 printf("Mon\n");
 else if(It.wDayOfWeek==2)
 printf("Tue\n");
 else if(It.wDayOfWeek==3)
 printf("Wed\n");
 else if(It.wDayOfWeek==4)
 printf("Thu\n");
 else if(It.wDayOfWeek==5)
 printf("Fri\n");
 else if(It.wDayOfWeek==6)
 printf("Sat\n");
 printf("%02d:%02d:%02d",It.wHour,It.wMinute,It.wSecond);
}

// leap year project
#include<stdio.h>
int main()
{int y1;
printf("enter a year");
scanf("%d",&y1);
if (y1%4==0 && (y1%400==0 || y1%100!=0))
{printf("%d is a leap year",y1);}
else 
{printf("%d is not a leap year",y1);}
return 0;
}

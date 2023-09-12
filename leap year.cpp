//LEAP YEAR
#include<stdio.h>
int main()
{	int y1;
	printf("enter the year");
	scanf("%d",&y1);
	y1%4==0&&(y1%400==0||y1%100!=0)?printf("%d is a leap year",y1):printf("%d is a not a leap year",y1);
	return 0;
}

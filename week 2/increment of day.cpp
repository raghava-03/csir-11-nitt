//increment of day
#include<stdio.h>
int main()
{	printf("enter the date month and year in respective order");
	int d,m,y;
	scanf("%d %d %d",&d,&m,&y);
	if(d>32||m>12)
	{	printf("enter valid data");
	}
	else if(m==1||m==3||m==5||m==7||m==8||m==10)
	{		if(d==31)
			{	d=1;
				m=++m;
				printf("%d %d %d",d,m,y);
			}
			else
			{	d=++d;
				printf("%d %d %d",d,m,y);
			}
	}
	else if(m==4||m==6||m==9||m==11)
	{		if(d==30)
			{	d=1;
				m=++m;
				printf("%d %d %d",d,m,y);
			}
			else
			{	d=++d;
				printf("%d %d %d",d,m,y);
			}	}
	else if(m==2)
	{		if(((y%4==0&&(y%400==0||y%100!=0))&&d>29)||d>28)
			{	d=1;
				m=++m;
				printf("%d %d %d",d,m,y);
			}
			else 
			{	d=++d;
				printf("%d %d %d",d,m,y);
			}		
	}
	else
	{		if(d=31)
		{	d=1;
			m=1;
			y=++y;
			printf("%d %d %d",d,m,y);
					}
		else
		{	d=++d;
			printf("%d %d %d",d,m,y);
								}						}				
}	

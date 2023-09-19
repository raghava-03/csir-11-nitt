//sum of first n natural numbers
#include<stdio.h>
int main(void)
{	int n,i,t;
	n=0;
	printf("sum of first i natural numbers\n enter value of i");
	scanf("%d",&i);
	for(t=1;t<=i;t++)
	{	n+=t;
	}
	printf("sum of first %d natural numbers is %d",i,n);
	return 0;
}

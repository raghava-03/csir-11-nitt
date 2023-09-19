//multiplication table
#include<stdio.h>
int main(void)
{	int n,i;
	printf("multiplication tables of n\n enter value of n");
	scanf("%d",&n);
	for(i=0;i<=20;i++)
	{	printf("%d*%d=%d\n",n,i,n*i);
	}
	return 0;
}

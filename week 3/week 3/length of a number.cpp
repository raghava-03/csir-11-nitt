//length of a number
#include<stdio.h>
int main(void)
{	int n,c;
	c=0;
	printf("enter the number to find its length");
	scanf("%d",&n);
	while(n!=0)
	{	n=n/10;
		c++;
	}
	printf("%d",c);
	return 0;
}

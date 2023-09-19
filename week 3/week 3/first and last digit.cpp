//first and last digit addition
#include<stdio.h>
int main()
{	int n,t;
	printf("enter a number to find sum");
	scanf("d",&n);
	t=n%10;
		while(n>10)
		{	n=n/10;
		}
	printf("%d",n+t);
	return 0;
}

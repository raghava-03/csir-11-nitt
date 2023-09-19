//factorial
#include<stdio.h>
int main()
{	int n,i,t;
	t=1;
	printf("finding factorial of n\n enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	t=t*i;
	}
	printf("%d",t);
	return 0;
}

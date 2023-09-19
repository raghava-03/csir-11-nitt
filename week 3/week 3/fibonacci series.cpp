//fibonacci series
#include<stdio.h>
int main()
{	int s,a,b,n,i;
	s=0;
	a=0;
	b=1;
	printf("fibonacci series of n terms\nenter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{	s=a+b;
			a=b;
			b=s;
		}
	printf("%d",s);
	return 0;
}

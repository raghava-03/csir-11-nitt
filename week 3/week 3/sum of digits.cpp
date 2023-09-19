//sum of all digits
#include<stdio.h>
int main()
{int n,t,s;
	s=0;
	printf("enter a number to find sum of thee digits");
	scanf("%d",&n);
	while(n!=0)
	{	t=n%10;
		s=s+t;
		n=n/10;
	}
printf("%d",s);
return 0;	
}

// swapping numbers
#include<stdio.h>
int main()
{	int a,b,t;
	printf("enter two numbers to swap\n");
	scanf("%d %d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("after swapping\n a=%d  b=%d",a,b);
	return 0;
}

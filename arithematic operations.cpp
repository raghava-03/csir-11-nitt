//arithematic operations
#include<stdio.h>
int main()
{	printf("enter two numbers");
	int a,b,sum,pro,dif,mod;
	float div;
	scanf("%d %d",&a,&b);
	sum=a+b;
	pro=a*b;
	dif=a-b;
	div=(float)a/b;
	mod=a%b;
	printf(" the sum is %d\n the product is %d\n the difference is %d\n the quotient is %f\n the modulus is %d",sum,pro,dif,div,mod);
	return 0;
}

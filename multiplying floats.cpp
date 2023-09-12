//multiplying two floating point numbers
#include<stdio.h>
int main()
{	float a,b,c;
	int d;
	printf("enter two numbers");
	scanf("%f %f",&a,&b);
	c=a*b;
	d=(int)(a*b);
	printf("product is\n  int form=%d  float form=%f",d,c);
	return 0;
}

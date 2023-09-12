// kilometer to meters and centimeter
#include<stdio.h>
int main()
{	float k,m,c;
	printf("enter distance in km");
	scanf("%f",&k);
	m=k*1000;
	c=m*100;
	printf("meters=%f\tcentimeters=%f",m,c);
	return 0;
}

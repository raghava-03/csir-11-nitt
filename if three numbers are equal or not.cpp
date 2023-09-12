//checking if three numbers are equal or not
#include<stdio.h>
int main()
{	float a,b,c;
	printf("enter three numbers");
	scanf("%f %f %f",&a,&b,&c);
	a==b&&b==c?printf("all the three numbers are equal"):printf("all the three numbers are not equal");
	return 0;
}

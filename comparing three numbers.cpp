//comparing three numbers
#include<stdio.h>
int main()
{	float a,b,c;
	printf("enter three numbers to compare");
	scanf("%f %f %f",&a,&b,&c);
	a>b&&a>c?printf("%f is the greatest number",a):(b>c?printf("%f is the greatest",b):printf("%f is the greatest",c));
	return 0;
}

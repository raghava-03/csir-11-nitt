// area of a square
#include<stdio.h>
#include<math.h>
int main()
{	float side,area;
	printf("enter the value for the side of the square");
	scanf("%f",&side);
	area=pow(side,2);
	printf("the area of the square of side %f is %f",side,area);
	return 0;
}

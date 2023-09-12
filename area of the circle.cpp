//area of a circle
#include<stdio.h>
#include<math.h>
int main()
{	float r,area;
	printf("enter the radius of the circle to calculate area of the circle\n");
	scanf("%f",&r);
	area=pow(r,2)*3.141;
	printf("the area of the circle is %f\n",area);
	return 0;
}


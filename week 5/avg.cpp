// avg
#include<stdio.h>
int main()
{
	int n,i,j,t=0,max=0,min=0;
	float avg=0,r=0;
	printf("enter value of n (length of array)");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		r+=a[i];
	avg=float (r/n);
	printf("avg=%f",avg);
	return 0;
}

//reversal
#include<stdio.h>
int main()
{
	int n,i,t;
	printf("n");
	scanf("%d",&n);
	int a[n];
	printf("a[n]");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//sort
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

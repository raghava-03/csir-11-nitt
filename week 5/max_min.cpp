// max_min
#include<stdio.h>
int main()
{
	//reading variables 
	int n,i,j,t;
	printf("n");
	scanf("%d",&n);
	int a[n];
	printf("a[n]");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	//bubble sort
	for(i=0;i<n-1;i++)
	{
			for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("max is %d\n min is %d",a[n-1],a[0]);
	return 0;
}

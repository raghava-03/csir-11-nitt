//swapping
#include<stdio.h>
int main()
{
	int n,i,j,t;
	printf("n");
	scanf("%d",&n);
	if(n%2!=0);
	else	
{
	int a[n];
	printf("a[n]\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	//sort
	for(i=0;i<n;i+=2)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
	return 0;
}

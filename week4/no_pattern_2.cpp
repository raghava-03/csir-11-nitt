//no_pattern_2
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("n= number of rows\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		for(j=0;j<i+1;j++)
		{
			printf("%d",i+1);
		}
		printf("\n");
	}
	return 0;
}

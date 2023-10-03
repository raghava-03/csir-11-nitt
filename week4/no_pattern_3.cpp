//no_pattern_3
#include<stdio.h>
int main()
{
	int n,i,j,c;c=0;
	printf("n= number of rows\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		for(j=0;j<i+1;j++)
		{
			c++;
			printf("%d ",c);
		}
		printf("\n");
	}
	return 0;
}

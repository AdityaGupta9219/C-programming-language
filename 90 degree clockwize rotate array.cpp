#include<stdio.h>
int main()
{
	int m,n;
	
	printf("Enter the rows/column : ");
	scanf("%d %d",&m,&n);
	int arr[m][n],i,j;
	printf("INSERT MATRIX\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		
	}
	printf("OUTPUT MATRIX\n");
	for(i=m-1;i>=0;i--)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[j][i]);	
		}
		printf("\n");
	}
	return 0;
}

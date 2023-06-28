#include<stdio.h>
int main()
{
	int m,n,sum=0,i,j;
	printf("1->Enter the Rows and Column : ");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	printf("Enter the elements\n");
	for(i=0;i<m;i++)
	{
		for( j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int p,q;
	printf("2-> Enter the Rows and Colum : ");
	scanf("%d %d",&p,&q);
	int crr[p][q];
	for( i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&crr[p][q]);
		}
	}
	int multi[n][p];
	if(n==p)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<p;j++)
			{
				sum=sum+arr[i][j]*crr[j][i];
				multi[i][j]=sum;
			}
		}
	}
	for(int r=0;r<n;r++)
	{
		for(int s=0;s<p;s++)
		{
			printf("%d ",multi[r][s]);
		}
		printf("\n");
	}
	return 0;
}

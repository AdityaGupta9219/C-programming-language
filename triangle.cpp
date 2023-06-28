#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		for(int j=m;j>=i;j--)
		{
			printf("* ");
		}
		printf("\n");
		
	}
}

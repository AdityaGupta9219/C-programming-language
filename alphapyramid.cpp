#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	int d=m-1;
	int g;
	int y;
	for(int i=1;i<=m;i++)
	{
		int x=64;		
		g=i-1;
		g=g+64;
		for(int s=1;s<=d;s++)
		{
			printf("  ");
		}
		d=d-1;
	
		
		for(int j=1;j<=i;j++)
		{
			y=x+j;
			char l=(char)y;
			printf("%c ",l);
			
		}
			for(int k=1;k<=i-1;k++)
		{
		char h=(char)g;
		printf("%c ",h);	
		g=g-1;
		}
	
	
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int n,factor=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	int i=1;
	while(i<=n/2+1)
	{
		if(n%i==0)
		{
			factor = factor+i;
		}
		i++;
	}
	if(factor==n)
	{
		printf("Perfect Number!!");
	}
	else 
	{
		printf("Not perfect number");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int t,x,s=0;
	printf("Enter the total numbers :");
	scanf("%d",&t);
	printf("Enter the numbers : ");
	for(int i=1;i<=t;i++)
	{
		scanf("%d",&x);
		s+=x;
	}
	printf("the sum of numbers is : %d",s);
	return 0;
}

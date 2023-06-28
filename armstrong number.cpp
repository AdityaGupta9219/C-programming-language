#include<stdio.h>
#include<math.h>
int main()
{
	int n,count=0,sum=0,rem;
	printf("Enter the number : ");
	scanf("%d",&n);
	int p=n,endn=n;
	while(n!=0)
	{
		count++;
		n/=10;
	}
	while(p!=0)
	{
		rem=p%10;
		sum=sum+pow(rem,count);
		p/=10;
	}
	if(endn==sum)
	{
		printf("The number is Armstrong!");
	}
	else {
		printf("It's not Armstrong!");
	}
	return 0;
}

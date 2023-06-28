#include<stdio.h>
int main()
{
	int num,count;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(int i=num;i>0;i=i/10)
	{
		count++;
		
	}
	printf("%d",count);
	return 0;
}

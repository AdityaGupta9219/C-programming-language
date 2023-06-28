#include<stdio.h>
int main()
{
	int num,rem,rev=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(int i=num;i>0;i=i/10)
	{
		rem=i%10;
		rev=rev*10+rem;
		
	}
	
	if(rev==num)
	printf("Given number is palindrome!");
	else {
		printf("Given Number is not palindrome!");
	}
	return 0;
}

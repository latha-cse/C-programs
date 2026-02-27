#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("The give number is prime");
	}
	else
	{
		printf("The given number is not a primr number");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int n,r,rev=0,i,temp;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
	 r=temp%10;
	 rev=rev+r;
	 temp=temp/10;
}
	 if(n%rev==0)
	 {
	 	printf("the given number is harshed");
		 }	
		 else
		 {
		 	printf("the given number is not a harshed");
		 }
	
	return 0;
}

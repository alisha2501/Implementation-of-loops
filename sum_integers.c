//sum of digits of integer//
#include<stdio.h>
int main()
{
	int i,s=0,n,num;
	printf("enter n:");
	scanf("%d",&n);
	while(n!=0)
	{
		s=s+(n%10);
		n=n/10;
	}
	printf("sum=%d",s);
}


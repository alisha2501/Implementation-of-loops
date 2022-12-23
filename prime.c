//to check if it is prime no. or not//
#include<stdio.h>
int main()
{
	int i,n,p=1;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			p=0;
			break;
		}
	}
	if(p)
		printf("%d prime number",n);
	else
		printf("%d not a prime number",n);
}



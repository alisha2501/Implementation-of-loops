//factorial of nos.//
#include<stdio.h>
int main()
{
	int fact=1,n;
	printf("enter n");
	scanf("%d",&n);
	while(n>1)
	{
		fact=fact*n--;
	}
	printf("%d",fact);
}

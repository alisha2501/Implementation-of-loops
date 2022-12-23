//sum of series 1+7^2.....//
#include<stdio.h>
#include<math.h>
int main()
{
	int i,s=0,p=7,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		s=s+(pow(p,i));
	}
	printf("%d",s);
}

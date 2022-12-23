//fibonacci series//
#include<stdio.h>
int main()
	{
		int i,a=0,b=1,c,num;
		printf("enter a number");
		scanf("%d",&num);
		printf("\n %d %d",a,b);
		for(i=2;i<num;++i)
		{
			c=a+b;
			printf("%d\t",c);
			a=b;
			b=c;
		}
	}

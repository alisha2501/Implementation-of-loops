//sum of squares//
#include<stdio.h>
int main()
{
        int i,n,s=0,x;
        printf("enter n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
		x=i*i;
                s=s+x;

        }
        printf("%d",s);
}


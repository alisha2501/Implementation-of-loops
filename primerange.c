//prime number with a range//
#include<stdio.h>
int main()
{
        int i,j,n,n2;
        printf("enter range n and n2");
	scanf("%d %d",&n,&n2);
	for(i=n;i<=n2;i++)
	{
	  c=0;
	  for(j=n;j<i;j++)
            {
	      if(i%j==0)
	      {
		 c++;
		 break;
	      }
	    }
	  if(c==0)
           {
		   printf("%d",&c);
	   }
	  }
	return 0;
}

	


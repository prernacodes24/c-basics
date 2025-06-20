//wap to print reverse of a given number.and calculate the sum of both. 
 
#include <stdio.h>

int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int r=0 ;     //r=revers
    
	while(n>0)
	{	
     	r=r*10;
		r=r+n%10;
		n=n/10;
     
}printf("the reverse number is r= %d",r);
	
	 int sum;
	 sum=n+r;
	 printf("%d+%d=%d",n,r,sum);
			
      

	return 0;
}

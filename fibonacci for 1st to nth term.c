//print the  fibonacci term fron 1st to nth number.

#include <stdio.h>

int main() 
{	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int a=1;
	int b=1;
	int sum =1;
	for(int i=1; i<=n-2; i++) {
        sum=a+b;
		a=b;
		b=sum;
      
	  printf("fibonacci %d is:%d\n",i,sum); //op:1st : 1
	                                       //2nd:1
	}                                      //3rd:2.....
	
		
}

//wap to calculate the value of a ki power b .

#include <stdio.h>

int main()
{
	int a;
	printf("enter the value base a :");
	scanf("%d",& a);
	int b;
	printf("enter the value power b :");
	scanf("%d",& b);
	int	power=1;
	for(int i=1; i<=b; i++) {
		power=power*a;

	}
	printf("a raise to b is a^b :  %d",power);

	return 0;
}

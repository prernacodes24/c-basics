#include <stdio.h>

int main() {
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int product=1;
	for(int i=1; i<=n; i++) {
		product=product*i;

		printf("factorial %d :%d\n",i,product);
	}
}

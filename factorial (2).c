#include<stdio.h>

int main()
{
	int n;
	printf("ENTER NUMBER : ");
	scanf("%d", &n);
	
	int factorial=1;
	for(int i=1;i<=n;i=i++) {
		factorial = n*i;
	}
		printf("Factorial is %d", factorial);
	return 0;
}

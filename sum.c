#include<stdio.h>

int main()
{
	int n;
	printf("ENTER NUMBER : ");
	scanf("%d", &n);
	
	int sum=0;
	for(int i=1,j=n;i<=n,j>=1;i++,j--) {
		sum=sum+i;
		printf("%d\n", j);
	}
		printf("THE SUM IS %d\n", sum);
		return 0;
	
}

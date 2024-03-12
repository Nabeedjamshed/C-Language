#include<stdio.h>

int main()
{
	int age;
	printf("enter age :");
	scanf("%d", &age);
	
	if(age > 18)	{
		printf("adult \n");
		printf("They can vote \n");
		printf("They can drive \n");
	}
	else {
		printf("Not an adult \n");
	}
		printf("THANK YOU");
	
	return 0;
}

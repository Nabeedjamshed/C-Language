#include<stdio.h>

int main()
{
	int marks;
	printf("enter marks(0-100) : ");
	scanf("%d", &marks);
	
	if(marks > 30 && marks <=100) {
		printf("PASS \n");
		if(marks >90 && marks <=100) {
		printf("CONGRATULATION"); }
	} else if(marks <= 30 && marks > 0) {
		printf("FAIL \n");
		printf("BAD LUCK");
	} else {
		printf("NOT A VALID NUMBER \n");
	}
	return 0;
}

#include<stdio.h>

// GRADING SYSTEM:

int main()
{
	int percentage;
	printf("Enter percentage : ");
	scanf("%d", &percentage);
	
	if(percentage >= 80) {
		printf("Grade is A+");
	} else if(percentage >= 70) {
		printf("Grade is A");
	} else if(percentage >= 60) {
		printf("Grade is B");
	} else if(percentage >= 50) {
		printf("Grade is C");
	} else if(percentage >= 40) {
		printf("Grade is D");
	} else {
		printf("BETA TU FAIL HAI");
	}
	return 0;
}

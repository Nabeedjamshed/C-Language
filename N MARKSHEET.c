#include<stdio.h>

// MARKSHEET

int main()
{
	int eng,urdu,math,physics,islamiat,chemistry,biology;
	printf("Marks of Eng \n");
	scanf("%d", &eng);
	
	printf("Marks of urdu \n");
	scanf("%d", &urdu);
	
	printf("Marks of math \n");
	scanf("%d", &math);
	
	printf("Marks of physics \n");
	scanf("%d", &physics);
	
	printf("Marks of islamiat \n");
	scanf("%d", &islamiat);
	
	printf("Marks of chemistry \n");
	scanf("%d", &chemistry);
	
	printf("Marks of biology \n");
	scanf("%d", &biology);
	
	float obtained;
	obtained = (eng+urdu+math+physics+islamiat+chemistry+biology);
	printf("obained Marks %.1f \n", obtained);
	float percentage;
	percentage = ((obtained/550)*100);
	printf("percentage %.2f \n", percentage);
	
	if(percentage >= 80 && percentage <=100) {
		printf("Grade is A+ \n");
		printf("Remarks : EXCELLENT \n");
	} else if(percentage >= 70 && percentage <=100) {
		printf("Grade is A \n");
		printf("Remarks : GOOD \n");
	} else if(percentage >= 60 && percentage <=100) {
		printf("Grade is B \n");
		printf("Remarks : BETTER \n");
	} else if(percentage >= 50 && percentage <=100) {
		printf("Grade is C \n");
		printf("Remarks : BAD \n");
	} else if(percentage >= 40 && percentage <=100) {
		printf("Grade is D \n");
		printf("Remarks : VERY BAD \n");
	} else {
		printf("Remarks : BETA TU FAIL HAI \n");
		printf("PHELI FURSAT MAI NIKL \n");
		
	}
	
	return 0;
}

#include<stdio.h>

int main()
{
	int age;
	printf("enter age : ");
	scanf("%d", &age);
	
	if(age >=18) {
		printf("Adult \n");
		printf("They can vote \n");
		printf("They can drive \n");
	} else if(age > 13 && age <18) {
		printf("Teenager \n");
		printf("they can prepare their future \n");
	} else {
		printf("Child \n");
		printf("They are very cute \n");
    }
		printf("THANK YOU");
	return 0;
		
}

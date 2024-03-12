#include<stdio.h>

int main()
{
	char ch;
	printf("Enter Character : ");
	scanf("%c", &ch);
	
	if(ch >= 'A' && ch <= 'Z') {
		printf("UPPER CASE");
	} else if(ch >= 'a' && ch <= 'z') {
		printf("LOWER CASE");
	} else {
		printf("NOT ENGLISH LETTER");
	}
	return 0;
	
}

#include<stdio.h>
//declaration,prototype:
void printhello();
void good();
int main()
{
//	function call:
	printhello();
	printhello();
	printhello();
	printhello();
	printhello();
	good();
	good();
	good();
	good();
	good();
	return 0;
}
// function definition:
void good() {
	printf("GOOD BYE\n");
}

void printhello() {
	printf("HELLO\n");
}



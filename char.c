#include<stdio.h>
void pakistani();
void american();
int main()
{
	char ch;
	printf("ENTER P FOR PAKISTANI & A FOR AMERICAN : ");
	scanf("%c", &ch);
	if(ch == 'p') {
		pakistani();
		pakistani();
		pakistani();
	} else if(ch == 'a') {
		american();
	} else {
		printf("NOT MENTION\n");
	}
	return 0;
}
	void pakistani() {
		printf("ASSALAM U ALAIKUM\n");
	}
	void american() {
		printf("HI\n");
	}

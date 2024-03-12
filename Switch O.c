#include<stdio.h>

int main()
{
	char day; // m-Mon,t-Tues,w-Wed,T-thur,f-Fri,s-Sat,S-Sun:
	printf("Enter day(1-7) : ");
	scanf("%c", &day);
	
	switch(day) {
	case 'm' : printf("Monday \n");
			 break;
	
	case 't': printf("Tuesday \n");
			 break;
			 
	case 'w': printf("Wednesday \n");
			 break;
			 
	case 'T': printf("Thurday \n");
			 break;
			 
	case 'f': printf("Friday \n");
			 break;
			 
	case 's': printf("Saturday \n");
			 break;
			 
	case 'S': printf("Sunday \n");
			 break;	
	
	default : printf("not a valid day! \n");
	}
	
	return 0;	 
}

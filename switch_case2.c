#include<stdio.h>
int main()
{
	int a = 2, b = 10;
	switch(a>b && a+b>2)
	{
		case 0:   //if expr is FALSE
			printf("Hello 2021!!");
			break;
			
		case 1:  //if expr is TRUE
			printf("Bye 2021!!");
			break;
			
		default:
			printf("Unwanted result...");
	}
	return 0;
}

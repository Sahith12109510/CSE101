//simple demo of switch-case statement
#include<stdio.h>
int main()
{               //body of main
	int x = 15;
	switch(x)
	{           //body of switch starts
		case 4:
			printf("Value is 4\n");
			break;
		case 5:
			printf("Value is 5\n");
			break;
		case 10:
			printf("Value is 10\n");
			break;
		default:
			printf("No value\n");
	}     //body of switch ends	
	return 0;
}   //end of main

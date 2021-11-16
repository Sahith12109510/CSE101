//getch(), putch() & getche()
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Press any key to exit...");
	ch = getch();  //takes input from user, but doesnt display on console
	
	printf("\nYou have entered the below key:\n");
	putch(ch);  //display the input on the console
	
	char z;
	printf("\nPress any key... ");
	z = getche();  //take input as well as display on the console
	
	printf("\nYou have entered: ");
	putch(z);
	
	return 0;
}

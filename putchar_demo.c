//putchar() demo
#include<stdio.h>
#include<conio.h>
int main()
{
	char x;
	printf("Enter your character: ");
	x = getchar();  //input
	
	//printf("Character entered = %c", x);
	printf("\nCharacter entered = ");
	putchar(x);  //output
	
	return 0;
}

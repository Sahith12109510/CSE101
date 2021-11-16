//ASCII value of a character
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter your character: ");
	scanf("%c", &ch);    //scanf("format spec",&var_name);
	
	printf("ASCII value of your character is: %d", ch);
	
	printf("\nASCII value of %c is: %d", ch, ch);
}

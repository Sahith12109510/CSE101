//getchar() demo
#include<stdio.h>
#include<conio.h>
int main()
{
	char x;
	printf("Enter your gender: ");
	//scanf("%c",x);
	x = getchar();   //reads only 1 character at a time
	
	printf("\nYour gender is : %c",x);
	return 0;
}

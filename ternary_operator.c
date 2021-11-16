//Ternary operator demo

#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	
	(age >= 18)	? printf("vote now!!") : printf("Can't vote...");
	return 0;
}


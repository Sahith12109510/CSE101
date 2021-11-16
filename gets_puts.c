//gets() & puts()
#include<stdio.h>
#include<conio.h>
int main()
{
	char name[10];  //array can have 10 characters only
	printf("Enter your name: ");
	//scanf("%s", name);   //general/traditional approach to take input
	gets(name);  //taking name as input from the user
	
	//printf("nYour name is %s",name);
	printf("\nYour name is ");
	puts(name);
	
	return 0;
}




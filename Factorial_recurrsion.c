//factorial of a number using recursion
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);  
	printf("\nFactorial of %d = %d",num, factorial(num)); //function call
	return 0;
}
//function declaration & definition
int factorial(int n)   
{
	if(n >= 1)    
		return n * factorial(n-1);  //recursive function calling
	else
		return 1; 
}

//sum of 2 numbners using function
#include<stdio.h>
int main()
{
	int num1, num2;
	
	printf("Enter num1: ");
	scanf("%d",&num1);	
	printf("Enter num2: ");
	scanf("%d",&num2);
	
	//printf("\nSum of 2 numbers = %d",addition(num1, num2)); //fnctn call
	   // 2nd way of function calling
	int result = addition(num1, num2);
	printf("\nSum = %d",result);   
}

//function prototype/declaration and definition
int addition(int num1, int num2)   //or int addition(int x, int y) 
{     //num1, num2 are local variables
	int sum = num1 + num2;  //int sum = x+y;
	return sum;
}

//Call by value : swapping 2 numbers(no swapping happens)
#include<stdio.h>
void swapping(int num1, int num2)  //function declaration + definition
{   //num1, num2: formal arguments
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	//printf("\n%d, %d",num1, num2);  swapping happens for num1 and num2 only
}

int main()
{
	int a, b;
	printf("Enter the values of a and b: ");
	scanf("%d %d",&a,&b);
	printf("\nBefore swapping, a = %d and b = %d", a, b);
	
	swapping(a, b);  //CALL BY VALUE; a and b are actual arguments
	printf("\nAfter swapping, a = %d and b = %d", a, b);
	
	return 0;
}


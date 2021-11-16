//Call by reference: swapping
#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter a and b: ");
	scanf("%d %d",&a,&b);
	
	printf("\nBefore swapping, a= %d and b= %d",a, b);
	
	swapping(&a, &b);  //CALL BY REFERENCE: actual parameters
	printf("\nAfter swapping, a= %d and b= %d",a, b);
	return 0;
}

void swapping(int *num1, int *num2)   //formal arguments
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

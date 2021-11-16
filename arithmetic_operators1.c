//Simple arithmetic opeartors
#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter the value of num1 and num2: ");
	scanf("%d %d",&num1,&num2);  //taking value of num1 and num2 from user
	
	printf("num1 + num2 = %d", (num1+num2));
	printf("\nnum1 - num2 = %d", (num1-num2));
	printf("\nnum1 * num2 = %d", (num1*num2));
	printf("\nnum1 / num2 = %d", (num1/num2));
	printf("\nnum1 %% num2 = %d", (num1%num2));
	
	return 0;
}

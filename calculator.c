//Simple claculator using switch case
#include<stdio.h>
int main()
{
	int num1, num2, choice;
	printf("Enter the values of 2 numbers: ");
	scanf("%d %d", &num1, &num2);
	
	printf("\nChoose your operation:\n");
	printf("1-->Addition\n2-->Substraction\n3-->Multiplication\n4-->Division\n5-->Remainder\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nAddition of %d and %d = %d",num1, num2, (num1+num2));
			break;
		case 2:
			printf("\nDifference of %d and %d = %d",num1, num2, (num1-num2));
			break;
		case 3:
			printf("\nMultiplication of %d and %d = %d",num1, num2, (num1*num2));
			break;
		case 4:
			printf("\nDivision of %d and %d = %d",num1, num2, (num1/num2));
			break;
		case 5:
			printf("\nModulos of %d and %d = %d",num1, num2, (num1%num2));
			break;
		default:
			printf("\nWrong operation selected...");
	}
	return 0;
}

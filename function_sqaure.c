//sqaure of number using VOID function
#include<stdio.h>
void sqaure(int a);  //function declaration/prototype

int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	sqaure(num);   //function call: num is a actual argument
}

//void function have no return type, so use only printf()
void sqaure(int a)  //function definition: a is formal argument
{
	int sq = a * a;
	printf("\nSqaure of %d = %d", a,sq);
}

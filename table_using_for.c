//Print the table for a number
#include<stdio.h>
int main()
{
	int n, i;  //n: number whose table should be printed
	           //i: counter for the loop
	printf("Enter a number: ");
	scanf("%d", &n);
	
	printf("\nThe table of %d is :\n", n);
	for(i=1; i<=10; i++)
	{
		//2*1=2
	   //2*2=4....
		printf("%d * %d = %d\n", n,i,(n*i));
	}
	return 0;
}

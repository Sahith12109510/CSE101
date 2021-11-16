/*  *
    * *
    * * * 
    * * * *   */
#include<stdio.h>
int main()
{
	int rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);  
	
	int i, j;  //i:rows, j:columns
	for(i=1; i<=rows; i++)   //rows  
	{
		for(j=1; j<=i; j++)   //columns  
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
} 

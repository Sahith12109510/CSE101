/*  1
    1 2
    1 2 3 
    1 2 3 4   */
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
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
} 

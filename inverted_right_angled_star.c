/*   * * * *
     * * *
     * * 
     *     */
#include<stdio.h>
int main()
{
	int rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows); //6 
	
	int i, j;  //i:rows, j:columns
	for(i=rows; i>=1; --i)   //rows   
	{
		for(j=1; j<=i; j++)   //columns  
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
} 

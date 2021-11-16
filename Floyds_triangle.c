/* Floyd's Triangle
    1 
	2 3 
    4 5 6
    7 8 9 10   */
#include<stdio.h>
int main()
{
	int rows;
	printf("Enter number of rows: ");
	scanf("%d",&rows); 
	
	int i, j, k=1;   
	for(i=1; i<=rows; i++)  //rows
	{
		for(j=1; j<=i; j++) //columns 
		{
			printf("%d ",k);  //print number
			++k;   //or use k++;
 		}
		printf("\n");
	}
	return 0;
}

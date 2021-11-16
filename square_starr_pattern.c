/* printing Square  * pattern
   * * * *
   * * * *
   * * * *
   * * * *    */
#include<stdio.h>
int main()
{
	int i, j, rows;
	printf("Enter rows: ");
	scanf("%d",&rows);
	
	for(i=1; i<=rows; i++)  //rows
	{
		for(j=1; j<=rows; j++)  //columns
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

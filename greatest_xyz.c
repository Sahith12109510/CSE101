//Greatest among 3 numbers
#include<stdio.h>
int main()
{
	int x, y, z;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d",&x, &y, &z);

	printf("\nx= %d, y= %d, z= %d", x, y, z);
/*	
	if(x>y && x>z)
	   printf("\nx is greatest of all");
	   
	else if(y>x && y>z)
	   printf("\ny is greatest of all");
	   
	else
	   printf("\nz is greatest of all");
	*/
	//ternary operator
	int greatest = x>y ? (x>z?x:z) : (y>z?y:z);
	printf("\n%d is greatest of all",greatest);	
	return 0;
}

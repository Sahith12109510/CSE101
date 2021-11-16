//NULL pointer
#include<stdio.h>
int main()
{
	//int *ptr; //pointer declaration, wild pointer
	//solution: 
	int *ptr = NULL;
	
	int x = 90;
	int *ptr2 = &x;
	
	if(ptr2 == NULL)
	{
		printf("No address reference, ptr2 = %d",ptr2);
	}
	else
	{
		printf("Value of ptr2 = %d",*ptr2);
	}
	
	return 0;	
}

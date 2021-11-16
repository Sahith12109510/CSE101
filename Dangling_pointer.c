//Dangling pointer demo
#include<stdio.h>
int main()
{
	int a = 80;
	int *ptr = &a;  //pointer declaration & initialization
	                //memory allocation done
	printf("Address of a = %d", ptr);
	
	free(ptr);  //de-allocate the memory
	printf("\nAddress of a after de-allocation = %d", ptr);
	
	*ptr = NULL;
	
	return 0;
}

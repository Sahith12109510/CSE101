//Array insertion
#include<stdio.h>
int main()
{
	int size, i, item, loc;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("\nEnter the array elements:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray before insertion and size = %d: ",size);
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\nEnter the new value to be added: ");
	scanf("%d",&item);
	
	printf("\nEnter the location where value should be added: ");
	scanf("%d",&loc);
	//logic for insertion
	for(i=size-1; i>=loc-1 ; i--) //start moving the elements from the back
	{
		arr[i+1] = arr[i];   //moving the array element forward
	}
	arr[loc-1] = item;  //add new element at the vacancy created
	size = size+1;  //new array size
	printf("\nArray after insertion and new size = %d: ",size);
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

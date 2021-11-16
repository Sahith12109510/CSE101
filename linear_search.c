//Linear search: unsorted & small arrays
#include<stdio.h>
int main()
{
	int size, i, item;
	printf("\nEnter the array size: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("\nEnter the array elements:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray created as: ");
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter the value you want to search: ");
	scanf("%d",&item);   //value to be searched
	
	//logic for linear search
	for(i=0; i<size; i++)
	{
		if(arr[i] == item)
		{
			printf("%d is present in the array at location= %d",item,(i+1));
			break;                     //loc= i+1, index number = i
		}
	}
	if(i == size)
		printf("Item not found!!");
	return 0;
}

//Bubble sort
#include<stdio.h>
int main()
{
	int size, i, temp, j;
	printf("Enter the array size: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("\nEnter the array contents:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray before Sorting: ");
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	//logic of bubble sort
	for(i=0; i<size-1; i++)   //number of passes
	{
		for(j=0; j<size-i-1; j++)  //comparing the elements
		{
			if(arr[j] > arr[j+1])
			{   //swapping
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("\nArray after Sorting: ");
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

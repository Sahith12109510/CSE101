//Binary search: sorted array only
#include<stdio.h>
int main()
{
	int size, i, item, low, high, mid;
	printf("Enter the array size: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("\nEnter the array contents:");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray: ");
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter the value to be searched: ");
	scanf("%d",&item);
	
	//logic for binary search
	low = 0;        //starting index
	high = size-1;  //last index
	mid = (low+high)/2;
	
	while(low <= high)
	{
		if(arr[mid] < item)  //search on right side
		{
			low = mid+1;   //new low will be calculated
		}
		else if(arr[mid] == item)  //item present at mid
		{
			printf("\n%d found at location %d",item,(mid+1));
			break;
		}
		else   //search on left side
		{
			high = mid-1;  //new high will be calculated
		}
		mid = (low+high)/2;
	}
	if(low > high)
		printf("Item not found!!");
	return 0;
}

/* WAP to implement binary search. */
#include <stdio.h>

int binary_search(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		// Check if x is present at mid
		if (arr[m] == x)
			return m;

		// If x greater, ignore left half
		if (arr[m] < x)
			l = m + 1;

		// If x is smaller, ignore right half
		else
			r = m - 1;
	}

	// if we reach here, then element was
	// not present
	return -1;
}

int main(void)
{
	int size;
	printf("Enter a size of an array: ");
	scanf("%d",&size);
	int search,i, arr[size];
	printf("Enter an array:\n");
	for(i=0;i<size;i++)
	{
		printf("Enter element - %d = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter element to be searched: ");
	scanf("%d",&search);
	int result = binary_search(arr,0,size-1,search);
	(result == -1)
		? printf("Element is not present in array\n")
		: printf("Element is present at index %d\n", result);
	return 0;
}

/*
output:
Enter a size of an array: 5
Enter an array:
Enter element - 0 = 1
Enter element - 1 = 2
Enter element - 2 = 3
Enter element - 3 = 4
Enter element - 4 = 5
Enter element to be searched: 5
Element is present at index 4
Enter a size of an array: 5
Enter an array:
Enter element - 0 = 1
Enter element - 1 = 43
Enter element - 2 = 5
Enter element - 3 = 2
Enter element - 4 = 6
Enter element to be searched: 5
Element is present at index 2
*/

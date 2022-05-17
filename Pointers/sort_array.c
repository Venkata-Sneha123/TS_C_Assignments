// Write a C program to sort an int array using pointers. 
// [ increasing order / decreasing order ] 


/* ----------------sort_arr.h ----------------- */

void sortarray(int n, int *p)
{
	int i, j, k;
    	for (i = 0; i < n; i++) 
	{
		for (j = i + 1; j < n; j++) 
		{
  			if (*(p + j) < *(p + i)) 
			{
                		k = *(p + i);
                		*(p + i) = *(p + j);
                		*(p + j) = k;
            		}
        	}
    	}
}


/* -------------------main.c ------------------- */
#include<stdio.h>
#include"sort_arr.h"

int main()
{
int size;
printf("Enter size of an array: ");
scanf("%d",&size);

int i,arr[size];

printf("Enter an array :\n");
for(i=0;i<size;i++)
	scanf("%d",&arr[i]);

sortarray(size,arr);

printf("After sorting an array is :\n");
for(i=0;i<size;i++)
	printf("%d ",arr[i]);
printf("\n");
return 0;
}

/*
output:
Enter size of an array: 5
Enter an array :
93
24
65
34
2
After sorting an array is :
2 24 34 65 93 
Enter size of an array: 10
Enter an array :
-6
0
-45
62
4
-23
-100
56
10
7
After sorting an array is :
-100 -45 -23 -6 0 4 7 10 56 62 
*/

#include<stdio.h>
#define SIZE 100

int main()
{
	int a[SIZE],i,j,n,max,min,temp;
	printf("Enter a range of array: ");
	scanf("%d",&n);
	printf("Enter the elements in an array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
		else if(min>a[i])
			min=a[i];
	}
	printf("Maximum number = %d\nMinimum number = %d\n",max,min);
	return 0;
}

#include<stdio.h>
int main()
{
	int i,j,k=-1;
	for(i=1;i<6;i++)
	{
		for(j=0;j<i;j++)
		{
			k=k+2;
			printf("%d ",k);
		}
		printf("\n");
	}
	return 0;
}


/*
1 
3 5 
7 9 11 
13 15 17 19 
21 23 25 27 29 
*/

#include<stdio.h>
int main()
{
	int i,j,k=-2;
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
0 
2 4 
6 8 10 
12 14 16 18 
20 22 24 26 28 
*/

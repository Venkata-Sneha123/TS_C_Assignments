#include<stdio.h>
int main()
{
	int k=96;
	for(int i=1;i<6;i++)
	{
		for(int j=0;j<i;j++)
		{
			k=k+1;
			printf("%c ",k);
		}
		printf("\n");
	}
	return 0;
}


/*
a 
b c 
d e f 
g h i j 
k l m n o 
*/

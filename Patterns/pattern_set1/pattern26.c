#include<stdio.h>
int main()
{
int i,j;
	for(i=1;i<6;i++)
	{
		for(j=0;j<i;j++)
		{
			(i%2!=0)?printf("%c",i+96):printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}


/*
a
22
ccc
4444
eeeee
*/

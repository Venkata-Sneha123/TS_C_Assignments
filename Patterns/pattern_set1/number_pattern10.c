#include<stdio.h>

int main()
{
int rows=5,i,j;
int a=1;
for(i=1;i<=rows;i++)
{
	for(j=1;j<=i;j++)
	{
		if(i % 2 != 0)
		{
			printf("%d ",a);
		}
		else
		{
			printf("* ");
		}
	}
	if(i%2 != 0)
	{
		a++;
	}
	printf("\n");
}
return 0;
}



/*
1 
* * 
2 2 2 
* * * * 
3 3 3 3 3 
*/

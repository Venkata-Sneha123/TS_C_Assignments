#include<stdio.h>
int main()
{
  int i,j;
	for(i=1;i<6;i++)
	{
		for(j=0;j<i;j++)
		{
			(i%2==0)?printf("A"):printf("a");
		}
		printf("\n");
	}
	return 0;
}

/*
output:
a
AA
aaa
AAAA
aaaaa

*/

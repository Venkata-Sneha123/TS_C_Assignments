#include<stdio.h>
int main()
{
  int k;
  for(int i=1;i<6;i++)
   {
     k=i;
     for(int j=0;j<i;j++)
	{
	(j%2!=0)?printf("-%d ",k):printf("%d ",k);
	}
    printf("\n");
   }
return 0;
}


/*
1 
2 -2 
3 -3 3 
4 -4 4 -4 
5 -5 5 -5 5 
*/

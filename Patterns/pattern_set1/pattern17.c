#include<stdio.h>
int main()
{
  int k;
 for(int i=1;i<6;i++)
 {
   k=101-i;
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
e 
d e 
c d e 
b c d e 
a b c d e 
*/

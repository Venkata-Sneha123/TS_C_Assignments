#include<stdio.h>
int main()
{
int k;
for(int i=1;i<6;i++)
  {
    k=i+97;
      for(int j=0;j<i;j++)
	{
	  k=k-1;
	  printf("%c ",k);
	}
   printf("\n");
  }
return 0;
}

/*
a 
b a 
c b a 
d c b a 
e d c b a 
*/

#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
printf(" %c",96+j);
printf("\n");
}
return 0;
}



/*
a
 a b
 a b c
 a b c d
 a b c d e
 
 */

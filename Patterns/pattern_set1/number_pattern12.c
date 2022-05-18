#include<stdio.h>
int main()
{
int i,j;

for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
printf(" %c",96+i);
printf("\n");
}
return 0;
}



/*
 a
 b b
 c c c
 d d d d
 e e e e e
 
 */

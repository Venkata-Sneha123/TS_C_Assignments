#include<stdio.h>
int main()
{
        int i,j;
        for(i=5;i>=1;i--)
        {
                for(j=5;j>=i;j--)

                        printf("%c ",96+i);
                printf("\n");
        }
}


/*
e 
d d 
c c c 
b b b b 
a a a a a 
*/

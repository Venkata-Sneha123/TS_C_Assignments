/*
The pattern is :
* * * * * 
  * * * * * 
    * * * * * 
      * * * * * 
        * * * * * 
*/

#include<stdio.h>
int main()
{
    int i,j,k,l,n=5;
    for(i=0;i<n;i++)
    {
        for(k=0;k<i;k++)
        {
            printf(" ");
        }
        for(j=0;j<n-i;j++)
        {
            printf("*");
        }
        for(l=0;l<i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

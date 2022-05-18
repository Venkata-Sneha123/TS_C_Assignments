/*
The pattern is :
    *
    **
    ***
    ****
    *****
*****
 ****
  ***
   **
    *

#include <stdio.h>

int main()
{
    int i,j,n=5,k;
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)//*****
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("*");
        }
        printf("\n");
        for(k=0;k<i;k++)
        {
            printf(" ");
        }
    }

    return 0;
}

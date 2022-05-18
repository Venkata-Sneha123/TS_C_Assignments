#include<stdio.h>
int main()
{
        int i,j,n;
        for(i=1;i<=5;i++)
        {
                for(j=1;j<=i;j++)
                {
                        n++;
                printf("%d ",n%2);
                }
                printf("\n");
        }
return 0;
}


/*
1 
0 1 
0 1 0 
1 0 1 0 
1 0 1 0 1 
*/

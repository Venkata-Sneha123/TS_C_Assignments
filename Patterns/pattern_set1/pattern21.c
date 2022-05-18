#include<stdio.h>
int main()
{
        int i,j,n;
        for(i=1;i<=5;i++)
        {
                for(j=1;j<=i;j++)
                {
                        n++;
                printf("%d ",i%2);
                }
                printf("\n");
        }
return 0;
}


/*
1 
0 0 
1 1 1 
0 0 0 0 
1 1 1 1 1 
*/

#include<stdio.h>
int main()
{
        int i,j,no;
        for(i=1;i<=5;i++)
        {
                for(j=1;j<=i;j++)
                {
                        no++;
                printf("%d ",no*no);
                }
                printf("\n");
        }
return 0;
}


/*
1 
4 9 
16 25 36 
49 64 81 100 
121 144 169 196 225 
*/

/*
Enter number of rows:5
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 

*/

#include <stdio.h>

int main()
{
int i,j,rows;
printf("Enter number of rows:");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
	for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
}
return 0;
}

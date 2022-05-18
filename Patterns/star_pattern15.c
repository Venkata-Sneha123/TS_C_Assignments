/*   
The pattern is:
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
 */

#include<stdio.h>
int main()
{
    
    int i,j,l,k,n=5;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("*");
        }
        for(l=0;l<i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(k=0;k<n-i;k++)
        {
            printf("*");
        }
        for(l=0;l<n-i-1;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

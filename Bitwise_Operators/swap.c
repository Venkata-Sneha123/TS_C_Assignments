#include<stdio.h>
#include"swap.h"

int main()
{
int a,b;
printf("Enter a and b value:");
scanf("%d %d",&a,&b);
swap_bit(&a,&b);
printf("In main function a=%d b=%d\n",a,b);
return 0;
}

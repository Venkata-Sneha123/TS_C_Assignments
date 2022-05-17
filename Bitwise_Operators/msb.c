/* 
Write a C program to check Most Significant Bit (MSB) of a number is set or not.
*/


/* --------------msb.h -------------- */

#define BITS 4

void msb_bit(int num)
{
int msb;
msb = 1 << (BITS - 1);
if(num & msb)
	printf("MSB of %d is 1\n", num);
else
        printf("MSB of %d is 0\n", num);
}


/* ---------------main.c ----------------- */
#include <stdio.h>
#include"msb.h"

int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
msb_bit(n);
return 0;
}

/*
output:
Enter a number: 5
MSB of 5 is 0
km@KernelMasters:~/Assignments/c_language/bitwise_operators$ ./a.out 
Enter a number: 8
MSB of 8 is 1
km@KernelMasters:~/Assignments/c_language/bitwise_operators$ ./a.out 
Enter a number: 9
MSB of 9 is 1
*/

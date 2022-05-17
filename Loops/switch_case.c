/*
2. Switch case 
     take 2 double integers and an i/p from user :
	 if "a" , add the integers and print "sum is .." ,
	 if "s" , subtract the integers and print "diff is .." ,
	 default case : print "defaut case- noaction"
*/

#include<stdio.h>

int main()
{
	double x,y,add,sub;
	char ch;
	printf("Enter two numbers: ");
	scanf("%lf %lf",&x,&y);
	printf("a.for addition\ns.for substraction\n");
	printf("Enter above choice: ");
	scanf("\n%c",&ch);
	switch(ch)
	{
		case 'a':
			add=x+y;
			printf("Addition of two numbers: %lf\n",add);
			break;
		case 's':
     			sub=x-y;
			printf("Substraction of two numbers: %lf\n",sub);
			break;
		default:
			printf("Please enter valid input.\n");
			break;
	}
	return 0;
}
/*
output:
Enter two numbers: 12.34
45.67
a.for addition
s.for substraction
Enter above choice: a
Addition of two numbers: 58.010000
Enter two numbers: 1.111
2.222
a.for addition
s.for substraction
Enter above choice: 3
Please enter valid input.
Enter two numbers: 1.11
2.22
a.for addition
s.for substraction
Enter above choice: s
Substraction of two numbers: -1.110000
*/

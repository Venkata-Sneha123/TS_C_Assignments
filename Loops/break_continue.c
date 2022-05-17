/*Break/Continue:
3. wap to calculate the sum of numbers (10 numbers max)
  a) If the user enters a negative number, the loop terminates
 ex   a: user enters 
  1 - add to sum , 20, add to sum , 0 - terminate the loop and sum  should be printed */

#include<stdio.h>
#define SIZE 10

int main()
{
int i,num,sum=0;
for(i=1;i<=SIZE;i++)
{
	printf("Enter a number - %d:",i);
	scanf("%d",&num);
	if(num <= 0)
		break;
	else
	{
		sum=sum+num;
	}
}
printf("sum = %d\n",sum);
return 0;
}

/*
output:
Enter a number - 1:1
Enter a number - 2:2
Enter a number - 3:0
sum = 3
Enter a number - 1:3
Enter a number - 2:5
Enter a number - 3:-4
sum = 8
*/
  
 /*  b) If the user enters a negative number, it's not added to the result
  ex b : user enters  1 - add to sum , 20 , add to sum , -1 - dont add to sum - go to next iteration - print sum */

#include<stdio.h>
#define SIZE 10

int main()
{
int i,num,sum=0;
for(i=1;i<=SIZE;i++)
{
	printf("Enter a number - %d:",i);
	scanf("%d",&num);
	if(num < 0)
		continue;
	else
	{
		sum=sum+num;
	}
}
printf("sum = %d\n",sum);
return 0;
}

/*
output:
Enter a number - 1:1
Enter a number - 2:2
Enter a number - 3:-4
Enter a number - 4:5
Enter a number - 5:-6
Enter a number - 6:4
Enter a number - 7:6
Enter a number - 8:7
Enter a number - 9:-33
Enter a number - 10:1
sum = 26
/*

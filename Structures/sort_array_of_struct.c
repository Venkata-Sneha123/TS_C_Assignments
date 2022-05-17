/* 
2.wap to declare an array of struct with a char data type and 
initialize the character with "h" ,"e" ,"l","l","o" and 
sort the array in alphabetical order - use malloc / calloc for struct variable 
*/

/* ---------------------- main.h ----------------------------- */
#include"sort_struct.h"
int main()
{
	ch_arr s1[SIZE];
	printf("Enter %d characters :\n",SIZE);
	for(int i = 0;i < SIZE;i++)
	{
		scanf(" %c", &s1[i].ch);
	}
	printf("Before sorting: ");
	print_char(s1);
	sort(s1);
	printf("After sorting: ");
	sort(s1);
	print_char(s1);
}

/*--------------------- sort_struct.h --------------------- */

#include<stdio.h>
#define SIZE 5
typedef struct char_array
{
	char ch;
}ch_arr;

void sort(ch_arr *s1)
{
	for(int i = 0;i < SIZE;i++)
	{
		for(int j = 0;j < SIZE-i-1;j++)
		{
			if(s1[j].ch > s1[j+1].ch)
			{
				int temp = s1[j].ch;
				s1[j].ch = s1[j+1].ch;
				s1[j+1].ch = temp;
			}
		}
	}
}	


void print_char(ch_arr *s1)
{
	for(int i = 0;i < SIZE;i++)
	{
		printf("%c ", s1[i].ch);
	}
	printf("\n");
}

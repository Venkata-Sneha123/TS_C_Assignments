/*
3.wap to declare an array of struct containing student data - name , branch , cgpa 
       - write student_count(..) fn to take input on no.of students 
   - write input_data(..) fn to input details of student data 
  		     - write print(..) fn to print details of all students 
*/

/* --------- main.c ------------------ */

#include"student_data.h"

int main()
{
	student *head=NULL,*temp=NULL;
	int n;
	while(1)
	{
		printf("1.Create Student Data\n2.Count No of students\n3.Print the Student data\n4.Quit\n");
		printf("Enter above Choice: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1: Input_Data(&head,&temp);
				break;
			case 2: Student_Count(&head);
			        break;
			case 3: Print_Data(&head);
			        break;
			case 4: printf("Executed Successfully\n");
				exit(0);
			default: printf("Enter valid choice\n");
		}
	}	
	return 0;
}

/* -------------- student_data.h -------------------- */

#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

typedef struct stu
{
	char name[SIZE];
	char branch[SIZE];
	float cgpa;
	struct stu *link;	
}student;

void Input_Data(student **,student **);
void Student_Count(student **);
void Print_Data(student **);

void Input_Data(student **head,student **temp)
{
	student *new_node=(student *)malloc(sizeof(student));
	if(new_node==NULL)
	{
		printf("Memory is not Allocated\n");
	}
	else
	{
		printf("Enter the name, Branch and CGPA:\n");
		scanf("%s%s%f",new_node->name,new_node->branch,&new_node->cgpa);
		new_node->link=NULL;
		if((*head)==NULL)
		{
			(*head)=(*temp)=new_node;
		}
		else
		{
			(*temp)->link=new_node;
			(*temp)=new_node;
		}
	}
}

void Student_Count(student **head)
{
	if((*head)==NULL)
	{
		printf("Student data is empty\n");
	}
	else
	{
		student *temp=(*head);
		int count=0;
		while(temp!=NULL)
		{
			temp=temp->link;
			count++;
		}
		printf("No of Students in a list: %d\n",count);
	}
}

void Print_Data(student **head)
{
	if((*head)==NULL)
	{
		printf("Student data is empty\n");
	}
	else
	{
		student *temp=(*head);
		while(temp!=NULL)
		{
			printf("Student Name: %s\tBranch:%s\tCGPA:%f\n",temp->name,temp->branch,temp->cgpa);
			temp=temp->link;
		}
	}
}

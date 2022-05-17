#include<stdio.h>
#define S 5
int front=-1;
int rear=-1;
int q[S];
void enque(int );
void deque();
void display();
int main()
{
enque(1);
enque(2);
enque(3);
display();
deque();
display();
return 0;
}

void enque(int ele)
{
if(rear == S-1)
{
	printf("queue is full\n");
	return;
}
else
{
	if(front==-1)
		front=0;
	rear++;
	q[rear]=ele;
}
}

void deque()
{
if(front == -1)
{
	printf("queue is empty\n");
	return;
}
else
{
	printf("deleted ele:%d\n",q[front]);
	front++;
}
}
void display()
{
if(rear==-1)
{
	printf("queue is empty\n");
}
else
{
	int i=front;
	for(;i<=rear;i++)
		printf("%d\n",q[i]);
}
}

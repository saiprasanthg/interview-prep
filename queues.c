#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100
typedef int item;
item q[MAXSIZE];
int front,rear;
int queueempty();
void Enqueue(item x);
item Dequeue();
void Enqueue(item x)
{
	if(rear==MAXSIZE)  // checks  whether the queue is full or not //
	{
	printf("the queue is full");
	exit(1);
	}
rear++;
q[rear]=x;
}

item Dequeue() // for deleting the elements in the queue
{
	item x;
	if(front ==rear){
	printf("queue is empty");	
	}
front++; // increment the front as we delete from that index//
x=q[front]; // assign that value to x //
return x;	
}
int queueempty()
{
	if(front==rear) return 1; // checks whether the queue is empty or not//
		else
			return 0;
}
int main()
{
	int i;
	front=0;
	rear=0;
	printf("\nelements are added to the queue in the following order\n");
for(i=1;i<=10;i++)
{printf("%d ",i);
Enqueue(i);
}
printf("\nelements are deleted from the queue in the following order\n");
while(!queueempty())
printf("%d ",Dequeue());
return 0;
}

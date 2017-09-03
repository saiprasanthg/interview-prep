#include<stdio.h>
#include<stdlib.h>
struct node{ // here struct is used for different data types in linked list//
	int data;
	struct node *next;
};
void insertfront(int x);// function declaration
void print();
struct node* head;
void insertfront(int v)
{
struct node* temp=(struct node*)malloc(sizeof(struct node)); // node creation using malloc //
temp->data=v;
temp->next=head;
head=temp;
}

void print()
{
	struct node* temp=head;
		printf("list");
	while(temp!=NULL) // for traversal in the linked list //
	{
		printf("%d",temp->data);
		temp=temp->next;
    }
	printf("\n");
}
int main()
{
	printf("no of numbers");
	int n,i,v;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter the numbers:");
	scanf("%d",&v);
	insertfront(v);
	print();
	}
	
}
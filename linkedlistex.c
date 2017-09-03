#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void insertfront(int x);
void print();
struct node* head;
void insertfront(int v)
{
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=v;
temp->next=head;
head=temp;
}

void print()
{
	struct node* temp=head;
		printf("list");
	while(temp!=NULL)
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
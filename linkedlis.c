#include<stdio.h>
#include<stdlib.h>

 struct Node{
	int data;
	struct Node* next;
};

void insert(int x);
void print();
 struct Node* head;
void insert(int x)
{
   struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}


void print()
{
	struct Node* temp=head;
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
	head=NULL;
	printf(" enter the values\n");
	int n;
	scanf("%d",&n);
	int i,x;
	for(i=0;i<n;i++) {
	printf("enter the number \n");
	scanf("%d",&x);

	insert(x);
	print();
	}
return 0;
}

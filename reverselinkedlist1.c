#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};


void reverseList(struct node** head_ref) //it reverses the list//
{
struct node* prev=NULL; // which stores the address of previous node//
struct node* current=*head_ref; 
struct node* next; 	
while(current!=NULL)
{
	next=current->next; // the current nodes next points to the next //
	current->next=prev; //the previous value points to current->next//
	prev=current;		
	current=next;
}
	*head_ref=prev;
}
void printList(struct node *head) // to print all the nodes//
{
	struct node *temp=head;
    while (temp != NULL)	// traverse the linked list upto null//
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
}
void insertNode(struct node** head_ref,int new_data) // for insertion of node//
{
	struct node* temp1=(struct node*)malloc(sizeof(struct node)); // allocate a node//
	temp1->data=new_data;	// put in the data//
	temp1->next=(*head_ref);
	(*head_ref)=temp1; //move the head points to the temp//
}


int main()
{
	struct node* head=NULL;
	insertNode(&head,4);
	insertNode(&head,3);
	insertNode(&head,1);
	insertNode(&head,9);
	insertNode(&head,7);
	insertNode(&head,8);
	insertNode(&head,5);
	printf("given linked list\n\t");
	printList(head);
	reverseList(&head);
	printf("reversed list\n\t" );
	printList(head);

return 0;
}

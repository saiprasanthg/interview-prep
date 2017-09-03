#include <stdio.h>
#include <stdlib.h>

struct node{  // linked list node //
	int data;
	struct node* next;
};


void insertNode(struct node** head_ref,int new_data)
{
	struct node* temp1=(struct node*)malloc(sizeof(struct node));
	temp1->data=new_data;
	temp1->next=(*head_ref);
	(*head_ref)=temp1;
}

/* Given a reference (pointer to pointer) to the head of a list
   and a key, deletes the first occurrence of key in linked list */
void deleteNode(struct node **head_ref,int key)
{

struct node* temp= *head_ref, *prev;

if(temp != NULL && temp->data == key)
{ // if head itself holds the key to be deleted
(*head_ref)=temp->next;
free(temp); // free the head
return;
}
	// to keep the track of the next address //
while(temp !=NULL && temp->data !=key)
{
	prev=temp;
	temp=temp->next;
}

 // If key was not present in linked list
    if (temp == NULL) return;
 
    // Unlink the node from linked list
    prev->next = temp->next;
 
    free(temp);  // Free memory

}
void printList(struct node *node) // to print all the nodes//
{
    while (node != NULL)	// traverse the linked list upto null//
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}


int main()
{
	struct node* head=NULL;

	insertNode(&head,3);
	insertNode(&head,2);
	insertNode(&head,5);
	insertNode(&head,4);
	
	printList(head);
	puts("created linked list");
	deleteNode(&head,3);
	puts("linked list after deletion\n");
	printList(head);
	return 0;
}
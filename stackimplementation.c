#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100
typedef int item;
item s[MAXSIZE];
int top;	// stack top //
int stackEmpty(); // to check whether stack is empty or not//
void addStack1(item x);		// add elements to stack //
item deleteStack();	// pop elements from stack //
item stackTop();		// returns stacktop //

int main()
{
int i;
top=0;

printf("\nelements are pushed on to the stack in the following order\n");
for(i=1;i<=10;i++)
{printf("%d ",i);
addStack1(i);
}
printf("\nelements are popped from stack in the following order\n");
while(!stackEmpty())
{
printf("%d ",deleteStack());
}
stackTop();

return 0;
}

void addStack1(item x){
	if(top==MAXSIZE)
		{
		printf("stack full");
		exit(1);
		}
	top++;
	s[top]=x;
}

item deleteStack()
{ item x;
if(top==0){printf("stack empty");
			exit(1);
}
x=s[top]; //
top--;
return x;

}
item stackTop()
{item x;
if(top==0){printf("stack empty");
		 exit(1);
		}
x=s[top];
return x;
}

int stackEmpty()
{
if(top==0)return 1;
	else
	return 0;
}

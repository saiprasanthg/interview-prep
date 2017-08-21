#include<stdio.h>
const int MAX=3;

int main()
{
	int var[]={10,100,150};
	int i,*ptr;

	ptr=var;  //store the adress of varibale in pointer//
	for(int i=0;i<MAX;i++)
	{
	     printf("Address of var[%d] = %x\n", i, ptr );
      printf("Value of var[%d] = %d\n", i, *ptr );

      /* move to the next location */
      ptr++;
   }
	
   return 0;
}




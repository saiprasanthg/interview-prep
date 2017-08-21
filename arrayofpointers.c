#include <stdio.h>
 
const int MAX = 3;
 
int main () {

   int  var[] = {10, 100, 200};
   int i;
 
   for (i = 0; i < MAX; i++) // it runs 3 times 
   {
      printf("Value of var[%d] = %d\n", i, var[i] ); // so it would print the 3 values//
   }
   
   return 0;
}
#include <stdio.h>
int main( ) {

   char str[100];
   int i;

   printf( "Enter a value :");
   scanf("%s %d", str, &i);

   printf( "\n You entered: %s %d ", str, i); // as the value is stored in the str and i during the scanf so it returns the saved value

   return 0;
}
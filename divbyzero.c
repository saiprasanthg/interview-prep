#include <stdio.h>
#include <stdlib.h>

main() {

   int dividend = 20;
   int divisor = 0;
   int quotient;
 
   if( divisor == 0){ //if divisor is 0 it exits//
      fprintf(stderr, "Division by zero! Exiting...\n");
      exit(-1);
   }
   
   quotient = dividend / divisor; // if not it returns the quotient

   fprintf(stderr, "Value of quotient : %d\n", quotient );

   exit(0);
}